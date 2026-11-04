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

[Token(Token = "0x20003F2")]
internal class StackBuilderSink : IMessageSink
{
	[Token(Token = "0x4000FC7")]
	[FieldOffset(Offset = "0x10")]
	private MarshalByRefObject _target;

	[Token(Token = "0x4000FC8")]
	[FieldOffset(Offset = "0x18")]
	private RealProxy _rp;

	[Token(Token = "0x6001F83")]
	[Address(RVA = "0x1A09760", Offset = "0x1A07D60", VA = "0x181A09760")]
	public StackBuilderSink(MarshalByRefObject obj, bool forceInternalExecute)
	{
	}

	[Token(Token = "0x6001F84")]
	[Address(RVA = "0x1A09650", Offset = "0x1A07C50", VA = "0x181A09650", Slot = "4")]
	public IMessage SyncProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001F85")]
	[Address(RVA = "0x1A08FD0", Offset = "0x1A075D0", VA = "0x181A08FD0", Slot = "5")]
	public IMessageCtrl AsyncProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}

	[Token(Token = "0x6001F86")]
	[Address(RVA = "0x1A09470", Offset = "0x1A07A70", VA = "0x181A09470")]
	private void ExecuteAsyncMessage(object ob)
	{
	}

	[Token(Token = "0x6001F87")]
	[Address(RVA = "0x1A09110", Offset = "0x1A07710", VA = "0x181A09110")]
	private void CheckParameters(IMessage msg)
	{
	}
}
