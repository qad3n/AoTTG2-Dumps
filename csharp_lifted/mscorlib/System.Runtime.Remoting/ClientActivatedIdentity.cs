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

[Token(Token = "0x2000356")]
internal class ClientActivatedIdentity : System.Runtime.Remoting.ServerIdentity
{
	[Token(Token = "0x4000E1F")]
	[FieldOffset(Offset = "0x70")]
	private MarshalByRefObject _targetThis;

	[Token(Token = "0x6001CF9")]
	[Address(RVA = "0x5376D50", Offset = "0x5375D50", VA = "0x5376D50")]
	public ClientActivatedIdentity(string objectUri, Type objectType)
	{
	}

	[Token(Token = "0x6001CFA")]
	[Address(RVA = "0x5377DB0", Offset = "0x5376DB0", VA = "0x5377DB0")]
	public MarshalByRefObject GetServerObject()
	{
		return null;
	}

	[Token(Token = "0x6001CFB")]
	[Address(RVA = "0x5377DC0", Offset = "0x5376DC0", VA = "0x5377DC0")]
	public void SetClientProxy(MarshalByRefObject obj)
	{
	}

	[Token(Token = "0x6001CFC")]
	[Address(RVA = "0x5377DD0", Offset = "0x5376DD0", VA = "0x5377DD0", Slot = "5")]
	public override void OnLifetimeExpired()
	{
	}

	[Token(Token = "0x6001CFD")]
	[Address(RVA = "0x5377E30", Offset = "0x5376E30", VA = "0x5377E30", Slot = "6")]
	public override IMessage SyncObjectProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001CFE")]
	[Address(RVA = "0x5377F20", Offset = "0x5376F20", VA = "0x5377F20", Slot = "7")]
	public override IMessageCtrl AsyncObjectProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}
}
