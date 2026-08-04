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
		[Address(RVA = "0x3D354F0", Offset = "0x3D354F0", VA = "0x3D354F0")]
		public InvocationContext(SendOrPostCallback d, object state)
		{
		}

		[Token(Token = "0x6001281")]
		[Address(RVA = "0x3D35540", Offset = "0x3D35540", VA = "0x3D35540")]
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
	[Address(RVA = "0x3D351B0", Offset = "0x3D351B0", VA = "0x3D351B0")]
	private OSSpecificSynchronizationContext(object osContext)
	{
	}

	[Token(Token = "0x6001276")]
	[Address(RVA = "0x3D34DD0", Offset = "0x3D34DD0", VA = "0x3D34DD0")]
	public static System.Threading.OSSpecificSynchronizationContext Get()
	{
		return null;
	}

	[Token(Token = "0x6001277")]
	[Address(RVA = "0x3D351F0", Offset = "0x3D351F0", VA = "0x3D351F0", Slot = "9")]
	public override SynchronizationContext CreateCopy()
	{
		return null;
	}

	[Token(Token = "0x6001278")]
	[Address(RVA = "0x3D35250", Offset = "0x3D35250", VA = "0x3D35250", Slot = "4")]
	public override void Send(SendOrPostCallback d, object state)
	{
	}

	[Token(Token = "0x6001279")]
	[Address(RVA = "0x3D35290", Offset = "0x3D35290", VA = "0x3D35290", Slot = "5")]
	public override void Post(SendOrPostCallback d, object state)
	{
	}

	[Token(Token = "0x600127A")]
	[Address(RVA = "0x3D34FE0", Offset = "0x3D34FE0", VA = "0x3D34FE0")]
	[Mono.Interop.MonoPInvokeCallback(typeof(InvocationEntryDelegate))]
	private static void InvocationEntry(IntPtr arg)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600127B")]
	[Address(RVA = "0x3D351E0", Offset = "0x3D351E0", VA = "0x3D351E0")]
	private static extern object GetOSContext();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600127C")]
	[Address(RVA = "0x3D35530", Offset = "0x3D35530", VA = "0x3D35530")]
	private static extern void PostInternal(object osSynchronizationContext, IntPtr callback, IntPtr arg);
}
