using System.Runtime.Remoting.Messaging;
using Il2CppDummyDll;

namespace System.Runtime.Remoting;

[Token(Token = "0x200034E")]
internal class ClientActivatedIdentity : System.Runtime.Remoting.ServerIdentity
{
	[Token(Token = "0x4000EB2")]
	[FieldOffset(Offset = "0x70")]
	private MarshalByRefObject _targetThis;

	[Token(Token = "0x6001CB4")]
	[Address(RVA = "0x4E887E0", Offset = "0x4E887E0", VA = "0x4E887E0")]
	public ClientActivatedIdentity(string objectUri, Type objectType)
	{
	}

	[Token(Token = "0x6001CB5")]
	[Address(RVA = "0x4E898F0", Offset = "0x4E898F0", VA = "0x4E898F0")]
	public MarshalByRefObject GetServerObject()
	{
		return null;
	}

	[Token(Token = "0x6001CB6")]
	[Address(RVA = "0x4E89900", Offset = "0x4E89900", VA = "0x4E89900")]
	public void SetClientProxy(MarshalByRefObject obj)
	{
	}

	[Token(Token = "0x6001CB7")]
	[Address(RVA = "0x4E89910", Offset = "0x4E89910", VA = "0x4E89910", Slot = "5")]
	public override void OnLifetimeExpired()
	{
	}

	[Token(Token = "0x6001CB8")]
	[Address(RVA = "0x4E89970", Offset = "0x4E89970", VA = "0x4E89970", Slot = "6")]
	public override IMessage SyncObjectProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001CB9")]
	[Address(RVA = "0x4E89A60", Offset = "0x4E89A60", VA = "0x4E89A60", Slot = "7")]
	public override IMessageCtrl AsyncObjectProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}
}
