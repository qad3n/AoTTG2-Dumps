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
		[Address(RVA = "0x4E974C0", Offset = "0x4E974C0", VA = "0x4E974C0")]
		public ContextRestoreSink(IMessageSink next, Context context, IMessage call)
		{
		}

		[Token(Token = "0x6001D6B")]
		[Address(RVA = "0x4E97530", Offset = "0x4E97530", VA = "0x4E97530", Slot = "4")]
		public IMessage SyncProcessMessage(IMessage msg)
		{
			return null;
		}

		[Token(Token = "0x6001D6C")]
		[Address(RVA = "0x4E97860", Offset = "0x4E97860", VA = "0x4E97860", Slot = "5")]
		public IMessageCtrl AsyncProcessMessage(IMessage msg, IMessageSink replySink)
		{
			return null;
		}
	}

	[Token(Token = "0x6001D67")]
	[Address(RVA = "0x4E96B30", Offset = "0x4E96B30", VA = "0x4E96B30", Slot = "4")]
	public IMessage SyncProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001D68")]
	[Address(RVA = "0x4E96F90", Offset = "0x4E96F90", VA = "0x4E96F90", Slot = "5")]
	public IMessageCtrl AsyncProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}

	[Token(Token = "0x6001D69")]
	[Address(RVA = "0x4E97520", Offset = "0x4E97520", VA = "0x4E97520")]
	public CrossContextChannel()
	{
	}
}
