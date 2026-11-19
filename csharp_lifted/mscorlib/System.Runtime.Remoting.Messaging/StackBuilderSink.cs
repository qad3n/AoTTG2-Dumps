// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Messaging.StackBuilderSink
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Remoting.Proxies;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Token(Token = "0x20003CB")]
internal class StackBuilderSink : IMessageSink
{
	[Token(Token = "0x4000F27")]
	[FieldOffset(Offset = "0x10")]
	private MarshalByRefObject _target;

	[Token(Token = "0x4000F28")]
	[FieldOffset(Offset = "0x18")]
	private RealProxy _rp;

	[Token(Token = "0x6001F59")]
	[Address(RVA = "0x5383580", Offset = "0x5382580", VA = "0x5383580")]
	public StackBuilderSink(MarshalByRefObject obj, bool forceInternalExecute)
	{
	}

	[Token(Token = "0x6001F5A")]
	[Address(RVA = "0x539AAE0", Offset = "0x5399AE0", VA = "0x539AAE0", Slot = "4")]
	public IMessage SyncProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001F5B")]
	[Address(RVA = "0x539AF80", Offset = "0x5399F80", VA = "0x539AF80", Slot = "5")]
	public IMessageCtrl AsyncProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}

	[Token(Token = "0x6001F5C")]
	[Address(RVA = "0x539B0B0", Offset = "0x539A0B0", VA = "0x539B0B0")]
	private void ExecuteAsyncMessage(object ob)
	{
	}

	[Token(Token = "0x6001F5D")]
	[Address(RVA = "0x539ABA0", Offset = "0x5399BA0", VA = "0x539ABA0")]
	private void CheckParameters(IMessage msg)
	{
	}
}
