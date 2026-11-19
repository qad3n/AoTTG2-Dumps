// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.WaitHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.ConstrainedExecution;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Microsoft.Win32.SafeHandles;

namespace System.Threading;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x200021D")]
[ComVisible(true)]
public abstract class WaitHandle : MarshalByRefObject, IDisposable
{
	[Token(Token = "0x40009B5")]
	public const int WaitTimeout = 258;

	[Token(Token = "0x40009B6")]
	private const int MAX_WAITHANDLES = 64;

	[Token(Token = "0x40009B7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private IntPtr waitHandle;

	[Token(Token = "0x40009B8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal SafeWaitHandle safeWaitHandle;

	[Token(Token = "0x40009B9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	internal bool hasThreadAffinity;

	[Token(Token = "0x40009BA")]
	private const int WAIT_OBJECT_0 = 0;

	[Token(Token = "0x40009BB")]
	private const int WAIT_ABANDONED = 128;

	[Token(Token = "0x40009BC")]
	private const int WAIT_FAILED = 2147483647;

	[Token(Token = "0x40009BD")]
	private const int ERROR_TOO_MANY_POSTS = 298;

	[Token(Token = "0x40009BE")]
	private const int ERROR_NOT_OWNED_BY_CALLER = 299;

	[Token(Token = "0x40009BF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	protected static readonly IntPtr InvalidHandle;

	[Token(Token = "0x40009C0")]
	internal const int MaxWaitHandles = 64;

	[Token(Token = "0x170001D2")]
	[Obsolete("Use the SafeWaitHandle property instead.")]
	public virtual IntPtr Handle
	{
		[Token(Token = "0x6001354")]
		[Address(RVA = "0x553CF90", Offset = "0x553BF90", VA = "0x553CF90", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x170001D3")]
	public SafeWaitHandle SafeWaitHandle
	{
		[Token(Token = "0x6001355")]
		[Address(RVA = "0x553D0B0", Offset = "0x553C0B0", VA = "0x553D0B0")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001352")]
	[Address(RVA = "0x553CEA0", Offset = "0x553BEA0", VA = "0x553CEA0")]
	protected WaitHandle()
	{
	}

	[Token(Token = "0x6001353")]
	[Address(RVA = "0x553CF20", Offset = "0x553BF20", VA = "0x553CF20")]
	private void Init()
	{
	}

	[Token(Token = "0x6001356")]
	[Address(RVA = "0x553D170", Offset = "0x553C170", VA = "0x553D170")]
	internal void SetHandleInternal(SafeWaitHandle handle)
	{
	}

	[Token(Token = "0x6001357")]
	[Address(RVA = "0x553D1B0", Offset = "0x553C1B0", VA = "0x553D1B0", Slot = "8")]
	public virtual bool WaitOne(int millisecondsTimeout, bool exitContext)
	{
		return default(bool);
	}

	[Token(Token = "0x6001358")]
	[Address(RVA = "0x553D300", Offset = "0x553C300", VA = "0x553D300", Slot = "9")]
	public virtual bool WaitOne()
	{
		return default(bool);
	}

	[Token(Token = "0x6001359")]
	[Address(RVA = "0x553D320", Offset = "0x553C320", VA = "0x553D320", Slot = "10")]
	public virtual bool WaitOne(int millisecondsTimeout)
	{
		return default(bool);
	}

	[Token(Token = "0x600135A")]
	[Address(RVA = "0x553D290", Offset = "0x553C290", VA = "0x553D290")]
	private bool WaitOne(long timeout, bool exitContext)
	{
		return default(bool);
	}

	[Token(Token = "0x600135B")]
	[Address(RVA = "0x553D340", Offset = "0x553C340", VA = "0x553D340")]
	internal static bool InternalWaitOne(SafeHandle waitableSafeHandle, long millisecondsTimeout, bool hasThreadAffinity, bool exitContext)
	{
		return default(bool);
	}

	[Token(Token = "0x600135C")]
	[Address(RVA = "0x553D670", Offset = "0x553C670", VA = "0x553D670")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	public static int WaitAny(WaitHandle[] waitHandles, int millisecondsTimeout, bool exitContext)
	{
		return default(int);
	}

	[Token(Token = "0x600135D")]
	[Address(RVA = "0x553DE20", Offset = "0x553CE20", VA = "0x553DE20")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	public static int WaitAny(WaitHandle[] waitHandles, TimeSpan timeout, bool exitContext)
	{
		return default(int);
	}

	[Token(Token = "0x600135E")]
	[Address(RVA = "0x553D630", Offset = "0x553C630", VA = "0x553D630")]
	private static void ThrowAbandonedMutexException()
	{
	}

	[Token(Token = "0x600135F")]
	[Address(RVA = "0x553DDD0", Offset = "0x553CDD0", VA = "0x553DDD0")]
	private static void ThrowAbandonedMutexException(int location, WaitHandle handle)
	{
	}

	[Token(Token = "0x6001360")]
	[Address(RVA = "0x553DF30", Offset = "0x553CF30", VA = "0x553DF30", Slot = "11")]
	public virtual void Close()
	{
	}

	[Token(Token = "0x6001361")]
	[Address(RVA = "0x553DFA0", Offset = "0x553CFA0", VA = "0x553DFA0", Slot = "12")]
	protected virtual void Dispose(bool explicitDisposing)
	{
	}

	[Token(Token = "0x6001362")]
	[Address(RVA = "0x553DFF0", Offset = "0x553CFF0", VA = "0x553DFF0", Slot = "6")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6001363")]
	[Address(RVA = "0x553D450", Offset = "0x553C450", VA = "0x553D450")]
	private static int WaitOneNative(SafeHandle waitableSafeHandle, uint millisecondsTimeout, bool hasThreadAffinity, bool exitContext)
	{
		return default(int);
	}

	[Token(Token = "0x6001364")]
	[Address(RVA = "0x553D9E0", Offset = "0x553C9E0", VA = "0x553D9E0")]
	private static int WaitMultiple(WaitHandle[] waitHandles, int millisecondsTimeout, bool exitContext, bool WaitAll)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001365")]
	[Address(RVA = "0x553E060", Offset = "0x553D060", VA = "0x553E060")]
	internal unsafe static extern int Wait_internal(IntPtr* handles, int numHandles, bool waitAll, int ms);
}
