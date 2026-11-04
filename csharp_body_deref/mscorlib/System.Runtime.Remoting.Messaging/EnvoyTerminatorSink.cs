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
[Token(Token = "0x20003D7")]
internal class EnvoyTerminatorSink : IMessageSink
{
	[Token(Token = "0x4000F7B")]
	[FieldOffset(Offset = "0x0")]
	public static System.Runtime.Remoting.Messaging.EnvoyTerminatorSink Instance;

	[Token(Token = "0x6001EC8")]
	[Address(RVA = "0x19FAAE0", Offset = "0x19F90E0", VA = "0x1819FAAE0", Slot = "4")]
	public IMessage SyncProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001EC9")]
	[Address(RVA = "0x19FAA60", Offset = "0x19F9060", VA = "0x1819FAA60", Slot = "5")]
	public IMessageCtrl AsyncProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}

	[Token(Token = "0x6001ECA")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public EnvoyTerminatorSink()
	{
	}
}
