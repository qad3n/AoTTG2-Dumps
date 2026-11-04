// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Remoting.Contexts.CrossContextChannel
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Remoting.Messaging;
using Il2CppDummyDll;

namespace System.Runtime.Remoting.Contexts;

[Token(Token = "0x200039A")]
internal class CrossContextChannel : IMessageSink
{
	[Token(Token = "0x200039B")]
	private class ContextRestoreSink : IMessageSink
	{
		[Token(Token = "0x4000F10")]
		[FieldOffset(Offset = "0x10")]
		private IMessageSink _next;

		[Token(Token = "0x4000F11")]
		[FieldOffset(Offset = "0x18")]
		private Context _context;

		[Token(Token = "0x4000F12")]
		[FieldOffset(Offset = "0x20")]
		private IMessage _call;

		[Token(Token = "0x6001DD9")]
		[Address(RVA = "0xE56DE0", Offset = "0xE553E0", VA = "0x180E56DE0")]
		public ContextRestoreSink(IMessageSink next, Context context, IMessage call)
		{
		}

		[Token(Token = "0x6001DDA")]
		[Address(RVA = "0x19F5DB0", Offset = "0x19F43B0", VA = "0x1819F5DB0", Slot = "4")]
		public IMessage SyncProcessMessage(IMessage msg)
		{
			return null;
		}

		[Token(Token = "0x6001DDB")]
		[Address(RVA = "0x19F5D70", Offset = "0x19F4370", VA = "0x1819F5D70", Slot = "5")]
		public IMessageCtrl AsyncProcessMessage(IMessage msg, IMessageSink replySink)
		{
			return null;
		}
	}

	[Token(Token = "0x6001DD6")]
	[Address(RVA = "0x19F9900", Offset = "0x19F7F00", VA = "0x1819F9900", Slot = "4")]
	public IMessage SyncProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001DD7")]
	[Address(RVA = "0x19F94F0", Offset = "0x19F7AF0", VA = "0x1819F94F0", Slot = "5")]
	public IMessageCtrl AsyncProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}

	[Token(Token = "0x6001DD8")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public CrossContextChannel()
	{
	}
}
