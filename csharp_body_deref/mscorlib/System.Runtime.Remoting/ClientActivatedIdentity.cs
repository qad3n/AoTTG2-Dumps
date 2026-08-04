// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.ClientActivatedIdentity
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3B6E300", Offset = "0x3B6E300", VA = "0x3B6E300")]
	public ClientActivatedIdentity(string objectUri, Type objectType)
	{
	}

	[Token(Token = "0x6001CB5")]
	[Address(RVA = "0x3B6F410", Offset = "0x3B6F410", VA = "0x3B6F410")]
	public MarshalByRefObject GetServerObject()
	{
		return null;
	}

	[Token(Token = "0x6001CB6")]
	[Address(RVA = "0x3B6F420", Offset = "0x3B6F420", VA = "0x3B6F420")]
	public void SetClientProxy(MarshalByRefObject obj)
	{
	}

	[Token(Token = "0x6001CB7")]
	[Address(RVA = "0x3B6F430", Offset = "0x3B6F430", VA = "0x3B6F430", Slot = "5")]
	public override void OnLifetimeExpired()
	{
	}

	[Token(Token = "0x6001CB8")]
	[Address(RVA = "0x3B6F490", Offset = "0x3B6F490", VA = "0x3B6F490", Slot = "6")]
	public override IMessage SyncObjectProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001CB9")]
	[Address(RVA = "0x3B6F580", Offset = "0x3B6F580", VA = "0x3B6F580", Slot = "7")]
	public override IMessageCtrl AsyncObjectProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}
}
