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

[Token(Token = "0x200036B")]
internal class CrossContextChannel : IMessageSink
{
	[Token(Token = "0x200036C")]
	private class ContextRestoreSink : IMessageSink
	{
		[Token(Token = "0x4000F03")]
		[FieldOffset(Offset = "0x10")]
		private IMessageSink _next;

		[Token(Token = "0x4000F04")]
		[FieldOffset(Offset = "0x18")]
		private Context _context;

		[Token(Token = "0x4000F05")]
		[FieldOffset(Offset = "0x20")]
		private IMessage _call;

		[Token(Token = "0x6001D6A")]
		[Address(RVA = "0x3B7CFE0", Offset = "0x3B7CFE0", VA = "0x3B7CFE0")]
		public ContextRestoreSink(IMessageSink next, Context context, IMessage call)
		{
		}

		[Token(Token = "0x6001D6B")]
		[Address(RVA = "0x3B7D050", Offset = "0x3B7D050", VA = "0x3B7D050", Slot = "4")]
		public IMessage SyncProcessMessage(IMessage msg)
		{
			return null;
		}

		[Token(Token = "0x6001D6C")]
		[Address(RVA = "0x3B7D380", Offset = "0x3B7D380", VA = "0x3B7D380", Slot = "5")]
		public IMessageCtrl AsyncProcessMessage(IMessage msg, IMessageSink replySink)
		{
			return null;
		}
	}

	[Token(Token = "0x6001D67")]
	[Address(RVA = "0x3B7C650", Offset = "0x3B7C650", VA = "0x3B7C650", Slot = "4")]
	public IMessage SyncProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001D68")]
	[Address(RVA = "0x3B7CAB0", Offset = "0x3B7CAB0", VA = "0x3B7CAB0", Slot = "5")]
	public IMessageCtrl AsyncProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}

	[Token(Token = "0x6001D69")]
	[Address(RVA = "0x3B7D040", Offset = "0x3B7D040", VA = "0x3B7D040")]
	public CrossContextChannel()
	{
	}
}
