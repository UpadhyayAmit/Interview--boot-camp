https://learn.microsoft.com/en-us/azure-data-studio/tutorial-sql-editor
https://marketplace.visualstudio.com/items?itemName=ms-mssql.sql-database-projects-vscode
https://learn.microsoft.com/en-us/azure-data-studio/extensions/sql-database-project-extension
https://code.visualstudio.com/docs/languages/tsql
https://learn.microsoft.com/en-us/sql/tools/visual-studio-code/sql-server-develop-use-vscode?view=sql-server-ver16
https://learn.microsoft.com/en-us/azure-data-studio/extensions/sql-database-project-extension-getting-started
https://learn.microsoft.com/en-us/sql/samples/adventureworks-install-configure?view=sql-server-ver16&tabs=ssms



nstall Azure Data Studio
To install Azure Data Studio onto your Mac:

Visit the Azure Data Studio download page, and click the .zip file for macOS
Once the .zip file has finished downloading, double click it to expand its contents
Drag the .app file to the Applications folder (the file will probably be called Azure Data Studio.app)
Connect to SQL Server
Now that Azure Data Studio is installed, you can use it to connect to SQL Server.

Launch Azure Data Studio. It is located in your Applications folder.
Enter the login credentials and other information for the SQL Server instance that you’d like to connect to:
It should look similar to this:

Image

It should look similar to this:

Server Name: localhost, [port number]
Example: localhost, 1433
Authentication Type: SQL Login
User name: [your SQL Server username] or sa
Password: [your SQL Server password] or reallyStrongPwd123
Database Name:
Server Group:
If you use a port other than the default 1433, click Advanced and enter it in the Port field.

Alternatively, you can append it to your server name with a comma in between. For example, if you used port 1400, type in localhost,1400.

You can now go ahead and create databases, run scripts, and perform other SQL Server management tasks.

Click New Query
Image

Type SELECT @@VERSION, then Click Run Query.
Image

You should be able to see: Microsoft SQL Server in the Results.

Importing a sample database to your SQL Server using Azure Data Studio
Download the sample database file AdventureWorks
To get the OLTP downloads of AdventureWorks, go to this link and choose any sample database. In my example, I choose AdventureWorks2017.bak. We will upload this to the S3 Bucket.

Copying the file to your docker
Type the following command in the terminal following this syntax:

docker cp <location_of_file> <container_id>:/var/opt/mssql/data
It should look like this:

Image

If you forgot your container id, use the docker ps command.

Image

Importing the sample database in Docker
Go to Azure Data Studio, and click the localhost, 1443, then choose Restore.

Image

Then choose Backup file as the selection for Restore from. Next, click the blue button on the right of Backup file path.

Image

Look for the sample database file. It should be located in

/var/opt/mssql/data/AdventureWorks2017.bak
Image

Choose Restore.

Image

Check your localhost, 1443. It should generated a Database named AdventureWorks2017 and have contents such as Tables and Views. If not, right-click on localhost, 1443 and choose Refresh. You can also restart your Azure Data Studio application.

Image

Testing the sample database
Choose AdventureWorks2017 from the dropdown menu.
Write a SQL query:
SELECT * FROM HumanResources.Department;
Click Run to run the query.
Image

You should have an output like this:

Image