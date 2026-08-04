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

[Token(Token = "0x20003C3")]
internal class StackBuilderSink : IMessageSink
{
	[Token(Token = "0x4000FC1")]
	[FieldOffset(Offset = "0x10")]
	private MarshalByRefObject _target;

	[Token(Token = "0x4000FC2")]
	[FieldOffset(Offset = "0x18")]
	private RealProxy _rp;

	[Token(Token = "0x6001F14")]
	[Address(RVA = "0x3B7B0A0", Offset = "0x3B7B0A0", VA = "0x3B7B0A0")]
	public StackBuilderSink(MarshalByRefObject obj, bool forceInternalExecute)
	{
	}

	[Token(Token = "0x6001F15")]
	[Address(RVA = "0x3B930E0", Offset = "0x3B930E0", VA = "0x3B930E0", Slot = "4")]
	public IMessage SyncProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001F16")]
	[Address(RVA = "0x3B935B0", Offset = "0x3B935B0", VA = "0x3B935B0", Slot = "5")]
	public IMessageCtrl AsyncProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}

	[Token(Token = "0x6001F17")]
	[Address(RVA = "0x3B936E0", Offset = "0x3B936E0", VA = "0x3B936E0")]
	private void ExecuteAsyncMessage(object ob)
	{
	}

	[Token(Token = "0x6001F18")]
	[Address(RVA = "0x3B931A0", Offset = "0x3B931A0", VA = "0x3B931A0")]
	private void CheckParameters(IMessage msg)
	{
	}
}
