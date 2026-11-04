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

[Token(Token = "0x200037D")]
internal class ClientActivatedIdentity : System.Runtime.Remoting.ServerIdentity
{
	[Token(Token = "0x4000EBF")]
	[FieldOffset(Offset = "0x70")]
	private MarshalByRefObject _targetThis;

	[Token(Token = "0x6001D23")]
	[Address(RVA = "0x19D60D0", Offset = "0x19D46D0", VA = "0x1819D60D0")]
	public ClientActivatedIdentity(string objectUri, Type objectType)
	{
	}

	[Token(Token = "0x6001D24")]
	[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
	public MarshalByRefObject GetServerObject()
	{
		return null;
	}

	[Token(Token = "0x6001D25")]
	[Address(RVA = "0xB48780", Offset = "0xB46D80", VA = "0x180B48780")]
	public void SetClientProxy(MarshalByRefObject obj)
	{
	}

	[Token(Token = "0x6001D26")]
	[Address(RVA = "0x19D5FD0", Offset = "0x19D45D0", VA = "0x1819D5FD0", Slot = "5")]
	public override void OnLifetimeExpired()
	{
	}

	[Token(Token = "0x6001D27")]
	[Address(RVA = "0x19D6030", Offset = "0x19D4630", VA = "0x1819D6030", Slot = "6")]
	public override IMessage SyncObjectProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001D28")]
	[Address(RVA = "0x19D5F10", Offset = "0x19D4510", VA = "0x1819D5F10", Slot = "7")]
	public override IMessageCtrl AsyncObjectProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}
}
