// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.OSSpecificSynchronizationContext
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Mono.Interop;

namespace System.Threading;

[Token(Token = "0x200022F")]
internal class OSSpecificSynchronizationContext : SynchronizationContext
{
	[Token(Token = "0x2000230")]
	private delegate void InvocationEntryDelegate(IntPtr arg);

	[Token(Token = "0x2000231")]
	private class InvocationContext
	{
		[Token(Token = "0x4000A21")]
		[FieldOffset(Offset = "0x10")]
		private SendOrPostCallback m_Delegate;

		[Token(Token = "0x4000A22")]
		[FieldOffset(Offset = "0x18")]
		private object m_State;

		[Token(Token = "0x60012F1")]
		[Address(RVA = "0xC8DAD0", Offset = "0xC8C0D0", VA = "0x180C8DAD0")]
		public InvocationContext(SendOrPostCallback d, object state)
		{
		}

		[Token(Token = "0x60012F2")]
		[Address(RVA = "0x1BAFF20", Offset = "0x1BAE520", VA = "0x181BAFF20")]
		public void Invoke()
		{
		}
	}

	[Token(Token = "0x4000A1F")]
	[FieldOffset(Offset = "0x18")]
	private object m_OSSynchronizationContext;

	[Token(Token = "0x4000A20")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ConditionalWeakTable<object, System.Threading.OSSpecificSynchronizationContext> s_ContextCache;

	[Token(Token = "0x60012E6")]
	[Address(RVA = "0x19FFAE0", Offset = "0x19FE0E0", VA = "0x1819FFAE0")]
	private OSSpecificSynchronizationContext(object osContext)
	{
	}

	[Token(Token = "0x60012E7")]
	[Address(RVA = "0x1BB0E80", Offset = "0x1BAF480", VA = "0x181BB0E80")]
	public static System.Threading.OSSpecificSynchronizationContext Get()
	{
		return null;
	}

	[Token(Token = "0x60012E8")]
	[Address(RVA = "0x1BB0E00", Offset = "0x1BAF400", VA = "0x181BB0E00", Slot = "9")]
	public override SynchronizationContext CreateCopy()
	{
		return null;
	}

	[Token(Token = "0x60012E9")]
	[Address(RVA = "0x1BB1320", Offset = "0x1BAF920", VA = "0x181BB1320", Slot = "4")]
	public override void Send(SendOrPostCallback d, object state)
	{
	}

	[Token(Token = "0x60012EA")]
	[Address(RVA = "0x1BB1170", Offset = "0x1BAF770", VA = "0x181BB1170", Slot = "5")]
	public override void Post(SendOrPostCallback d, object state)
	{
	}

	[Token(Token = "0x60012EB")]
	[Address(RVA = "0x1BB1010", Offset = "0x1BAF610", VA = "0x181BB1010")]
	[Mono.Interop.MonoPInvokeCallback(typeof(InvocationEntryDelegate))]
	private static void InvocationEntry(IntPtr arg)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012EC")]
	[Address(RVA = "0x1BB0E70", Offset = "0x1BAF470", VA = "0x181BB0E70")]
	private static extern object GetOSContext();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012ED")]
	[Address(RVA = "0x1BB1160", Offset = "0x1BAF760", VA = "0x181BB1160")]
	private static extern void PostInternal(object osSynchronizationContext, IntPtr callback, IntPtr arg);
}
