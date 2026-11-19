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

[Token(Token = "0x2000373")]
internal class CrossContextChannel : IMessageSink
{
	[Token(Token = "0x2000374")]
	private class ContextRestoreSink : IMessageSink
	{
		[Token(Token = "0x4000E70")]
		[FieldOffset(Offset = "0x10")]
		private IMessageSink _next;

		[Token(Token = "0x4000E71")]
		[FieldOffset(Offset = "0x18")]
		private Context _context;

		[Token(Token = "0x4000E72")]
		[FieldOffset(Offset = "0x20")]
		private IMessage _call;

		[Token(Token = "0x6001DAF")]
		[Address(RVA = "0x53851F0", Offset = "0x53841F0", VA = "0x53851F0")]
		public ContextRestoreSink(IMessageSink next, Context context, IMessage call)
		{
		}

		[Token(Token = "0x6001DB0")]
		[Address(RVA = "0x5385260", Offset = "0x5384260", VA = "0x5385260", Slot = "4")]
		public IMessage SyncProcessMessage(IMessage msg)
		{
			return null;
		}

		[Token(Token = "0x6001DB1")]
		[Address(RVA = "0x5385520", Offset = "0x5384520", VA = "0x5385520", Slot = "5")]
		public IMessageCtrl AsyncProcessMessage(IMessage msg, IMessageSink replySink)
		{
			return null;
		}
	}

	[Token(Token = "0x6001DAC")]
	[Address(RVA = "0x53849A0", Offset = "0x53839A0", VA = "0x53849A0", Slot = "4")]
	public IMessage SyncProcessMessage(IMessage msg)
	{
		return null;
	}

	[Token(Token = "0x6001DAD")]
	[Address(RVA = "0x5384DB0", Offset = "0x5383DB0", VA = "0x5384DB0", Slot = "5")]
	public IMessageCtrl AsyncProcessMessage(IMessage msg, IMessageSink replySink)
	{
		return null;
	}

	[Token(Token = "0x6001DAE")]
	[Address(RVA = "0x5385250", Offset = "0x5384250", VA = "0x5385250")]
	public CrossContextChannel()
	{
	}
}
