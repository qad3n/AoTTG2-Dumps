using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Mono.Interop;

namespace System.Threading;

[Token(Token = "0x20001FE")]
internal class OSSpecificSynchronizationContext : SynchronizationContext
{
	[Token(Token = "0x20001FF")]
	private delegate void InvocationEntryDelegate(IntPtr arg);

	[Token(Token = "0x2000200")]
	private class InvocationContext
	{
		[Token(Token = "0x40009C3")]
		[FieldOffset(Offset = "0x10")]
		private SendOrPostCallback m_Delegate;

		[Token(Token = "0x40009C4")]
		[FieldOffset(Offset = "0x18")]
		private object m_State;

		[Token(Token = "0x6001280")]
		[Address(RVA = "0x504F9D0", Offset = "0x504F9D0", VA = "0x504F9D0")]
		public InvocationContext(SendOrPostCallback d, object state)
		{
		}

		[Token(Token = "0x6001281")]
		[Address(RVA = "0x504FA20", Offset = "0x504FA20", VA = "0x504FA20")]
		public void Invoke()
		{
		}
	}

	[Token(Token = "0x40009C1")]
	[FieldOffset(Offset = "0x18")]
	private object m_OSSynchronizationContext;

	[Token(Token = "0x40009C2")]
	[FieldOffset(Offset = "0x0")]
	private static readonly ConditionalWeakTable<object, System.Threading.OSSpecificSynchronizationContext> s_ContextCache;

	[Token(Token = "0x6001275")]
	[Address(RVA = "0x504F690", Offset = "0x504F690", VA = "0x504F690")]
	private OSSpecificSynchronizationContext(object osContext)
	{
	}

	[Token(Token = "0x6001276")]
	[Address(RVA = "0x504F2B0", Offset = "0x504F2B0", VA = "0x504F2B0")]
	public static System.Threading.OSSpecificSynchronizationContext Get()
	{
		return null;
	}

	[Token(Token = "0x6001277")]
	[Address(RVA = "0x504F6D0", Offset = "0x504F6D0", VA = "0x504F6D0", Slot = "9")]
	public override SynchronizationContext CreateCopy()
	{
		return null;
	}

	[Token(Token = "0x6001278")]
	[Address(RVA = "0x504F730", Offset = "0x504F730", VA = "0x504F730", Slot = "4")]
	public override void Send(SendOrPostCallback d, object state)
	{
	}

	[Token(Token = "0x6001279")]
	[Address(RVA = "0x504F770", Offset = "0x504F770", VA = "0x504F770", Slot = "5")]
	public override void Post(SendOrPostCallback d, object state)
	{
	}

	[Token(Token = "0x600127A")]
	[Address(RVA = "0x504F4C0", Offset = "0x504F4C0", VA = "0x504F4C0")]
	[Mono.Interop.MonoPInvokeCallback(typeof(InvocationEntryDelegate))]
	private static void InvocationEntry(IntPtr arg)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600127B")]
	[Address(RVA = "0x504F6C0", Offset = "0x504F6C0", VA = "0x504F6C0")]
	private static extern object GetOSContext();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600127C")]
	[Address(RVA = "0x504FA10", Offset = "0x504FA10", VA = "0x504FA10")]
	private static extern void PostInternal(object osSynchronizationContext, IntPtr callback, IntPtr arg);
}
