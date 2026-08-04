// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Messaging.EnvoyTerminatorSink
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Messaging;

[Serializable]
[Token(Token = "0x20003A8")]
internal class EnvoyTerminatorSink : IMessageSink
{
	[Token(Token = "0x4000F71")]
	[FieldOffset(Offset = "0x0")]
	public static System.Runtime.Remoting.Messaging.EnvoyTerminatorSink Instance;

	[Token(Token = "0x6001E59")]
	[Address(RVA = "0x3B8CDA0", Offset = "0x3B8CDA0", VA = "0x3B8CDA0", Slot = "4")]
	public IMessage SyncProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001E5A")]
	[Address(RVA = "0x3B8CE60", Offset = "0x3B8CE60", VA = "0x3B8CE60", Slot = "5")]
	public IMessageCtrl AsyncProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}

	[Token(Token = "0x6001E5B")]
	[Address(RVA = "0x3B8CF30", Offset = "0x3B8CF30", VA = "0x3B8CF30")]
	public EnvoyTerminatorSink()
	{
	}
}
