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

[Token(Token = "0x2000207")]
internal class OSSpecificSynchronizationContext : SynchronizationContext
{
	[Token(Token = "0x2000208")]
	private delegate void InvocationEntryDelegate(IntPtr arg);

	[Token(Token = "0x2000209")]
	private class InvocationContext
	{
		[Token(Token = "0x400097F")]
		[FieldOffset(Offset = "0x10")]
		private SendOrPostCallback m_Delegate;

		[Token(Token = "0x4000980")]
		[FieldOffset(Offset = "0x18")]
		private object m_State;

		[Token(Token = "0x60012C8")]
		[Address(RVA = "0x55382F0", Offset = "0x55372F0", VA = "0x55382F0")]
		public InvocationContext(SendOrPostCallback d, object state)
		{
		}

		[Token(Token = "0x60012C9")]
		[Address(RVA = "0x5538340", Offset = "0x5537340", VA = "0x5538340")]
		public void Invoke()
		{
		}
	}

	[Token(Token = "0x400097D")]
	[FieldOffset(Offset = "0x18")]
	private object m_OSSynchronizationContext;

	[Token(Token = "0x400097E")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ConditionalWeakTable<object, System.Threading.OSSpecificSynchronizationContext> s_ContextCache;

	[Token(Token = "0x60012BD")]
	[Address(RVA = "0x5537FB0", Offset = "0x5536FB0", VA = "0x5537FB0")]
	private OSSpecificSynchronizationContext(object osContext)
	{
	}

	[Token(Token = "0x60012BE")]
	[Address(RVA = "0x5537BE0", Offset = "0x5536BE0", VA = "0x5537BE0")]
	public static System.Threading.OSSpecificSynchronizationContext Get()
	{
		return null;
	}

	[Token(Token = "0x60012BF")]
	[Address(RVA = "0x5537FF0", Offset = "0x5536FF0", VA = "0x5537FF0", Slot = "9")]
	public override SynchronizationContext CreateCopy()
	{
		return null;
	}

	[Token(Token = "0x60012C0")]
	[Address(RVA = "0x5538050", Offset = "0x5537050", VA = "0x5538050", Slot = "4")]
	public override void Send(SendOrPostCallback d, object state)
	{
	}

	[Token(Token = "0x60012C1")]
	[Address(RVA = "0x5538090", Offset = "0x5537090", VA = "0x5538090", Slot = "5")]
	public override void Post(SendOrPostCallback d, object state)
	{
	}

	[Token(Token = "0x60012C2")]
	[Address(RVA = "0x5537DF0", Offset = "0x5536DF0", VA = "0x5537DF0")]
	[Mono.Interop.MonoPInvokeCallback(typeof(InvocationEntryDelegate))]
	private static void InvocationEntry(IntPtr arg)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012C3")]
	[Address(RVA = "0x5537FE0", Offset = "0x5536FE0", VA = "0x5537FE0")]
	private static extern object GetOSContext();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60012C4")]
	[Address(RVA = "0x5538330", Offset = "0x5537330", VA = "0x5538330")]
	private static extern void PostInternal(object osSynchronizationContext, IntPtr callback, IntPtr arg);
}
