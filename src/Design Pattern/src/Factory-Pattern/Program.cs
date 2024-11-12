// See https://aka.ms/new-console-template for more information
using factory_pattern;

Console.WriteLine("Factory Pattern!");

var client = new Client();
client.ClientCall();

namespace factory_pattern
{
    public abstract class Logistic
    {
        public abstract ITransport SelectLogistic();
    }

    public class TruckLogistic : Logistic
    {
        public override ITransport SelectLogistic()
        {
            Console.WriteLine("Truck Logistic");
            return new Truck();
        }
    }

    public class ShipsLogistic : Logistic
    {
        public override ITransport SelectLogistic()
        {
            return new Ships();
        }
    }

    public interface ITransport
    {
        void Deliver();
    }

    //delivery through Truck
    public class Truck : ITransport
    {
        public void Deliver()
        {
            Console.WriteLine("Deliver through Truck");
        }
    }

    //delivery through ships
    public class Ships : ITransport
    {
        public void Deliver()
        {
            Console.WriteLine("Deliver through Ships");
        }
    }

    public class Client
    {
        public void ClientCall()
        {
            Console.WriteLine("Client call Started");
            ITransport transport = LogisticSelection(new ShipsLogistic());
            transport.Deliver();
        }

        public ITransport LogisticSelection(Logistic logistic)
        {
            return logistic.SelectLogistic();
        }
    }
}
