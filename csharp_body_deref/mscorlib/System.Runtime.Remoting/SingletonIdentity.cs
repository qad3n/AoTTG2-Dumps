using System.Runtime.Remoting.Contexts;
using System.Runtime.Remoting.Messaging;
using Il2CppDummyDll;

namespace System.Runtime.Remoting;

[Token(Token = "0x200034F")]
internal class SingletonIdentity : System.Runtime.Remoting.ServerIdentity
{
	[Token(Token = "0x6001CBA")]
	[Address(RVA = "0x4E88900", Offset = "0x4E88900", VA = "0x4E88900")]
	public SingletonIdentity(string objectUri, Context context, Type objectType)
	{
	}

	[Token(Token = "0x6001CBB")]
	[Address(RVA = "0x4E89B70", Offset = "0x4E89B70", VA = "0x4E89B70")]
	public MarshalByRefObject GetServerObject()
	{
		return null;
	}

	[Token(Token = "0x6001CBC")]
	[Address(RVA = "0x4E89D60", Offset = "0x4E89D60", VA = "0x4E89D60", Slot = "6")]
	public override IMessage SyncObjectProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001CBD")]
	[Address(RVA = "0x4E89E50", Offset = "0x4E89E50", VA = "0x4E89E50", Slot = "7")]
	public override IMessageCtrl AsyncObjectProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}
}
