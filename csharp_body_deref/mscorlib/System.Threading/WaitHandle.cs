// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.WaitHandle
// Update status: CHANGED in this game update
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
[Token(Token = "0x2000245")]
[ComVisible(true)]
public abstract class WaitHandle : MarshalByRefObject, IDisposable
{
	[Token(Token = "0x4000A57")]
	public const int WaitTimeout = 258;

	[Token(Token = "0x4000A58")]
	private const int MAX_WAITHANDLES = 64;

	[Token(Token = "0x4000A59")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private IntPtr waitHandle;

	[Token(Token = "0x4000A5A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal SafeWaitHandle safeWaitHandle;

	[Token(Token = "0x4000A5B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	internal bool hasThreadAffinity;

	[Token(Token = "0x4000A5C")]
	private const int WAIT_OBJECT_0 = 0;

	[Token(Token = "0x4000A5D")]
	private const int WAIT_ABANDONED = 128;

	[Token(Token = "0x4000A5E")]
	private const int WAIT_FAILED = 2147483647;

	[Token(Token = "0x4000A5F")]
	private const int ERROR_TOO_MANY_POSTS = 298;

	[Token(Token = "0x4000A60")]
	private const int ERROR_NOT_OWNED_BY_CALLER = 299;

	[Token(Token = "0x4000A61")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	protected static readonly IntPtr InvalidHandle;

	[Token(Token = "0x4000A62")]
	internal const int MaxWaitHandles = 64;

	[Token(Token = "0x170001D3")]
	[Obsolete("Use the SafeWaitHandle property instead.")]
	public virtual IntPtr Handle
	{
		[Token(Token = "0x600137D")]
		[Address(RVA = "0x1BC68F0", Offset = "0x1BC4EF0", VA = "0x181BC68F0", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x170001D4")]
	public SafeWaitHandle SafeWaitHandle
	{
		[Token(Token = "0x600137E")]
		[Address(RVA = "0x1BC6820", Offset = "0x1BC4E20", VA = "0x181BC6820")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600137B")]
	[Address(RVA = "0x1BC67A0", Offset = "0x1BC4DA0", VA = "0x181BC67A0")]
	protected WaitHandle()
	{
	}

	[Token(Token = "0x600137C")]
	[Address(RVA = "0x1BC5750", Offset = "0x1BC3D50", VA = "0x181BC5750")]
	private void Init()
	{
	}

	[Token(Token = "0x600137F")]
	[Address(RVA = "0x1BC58D0", Offset = "0x1BC3ED0", VA = "0x181BC58D0")]
	internal void SetHandleInternal(SafeWaitHandle handle)
	{
	}

	[Token(Token = "0x6001380")]
	[Address(RVA = "0x1BC6450", Offset = "0x1BC4A50", VA = "0x181BC6450", Slot = "8")]
	public virtual bool WaitOne(int millisecondsTimeout, bool exitContext)
	{
		return default(bool);
	}

	[Token(Token = "0x6001381")]
	[Address(RVA = "0x1BC6430", Offset = "0x1BC4A30", VA = "0x181BC6430", Slot = "9")]
	public virtual bool WaitOne()
	{
		return default(bool);
	}

	[Token(Token = "0x6001382")]
	[Address(RVA = "0x1BC6410", Offset = "0x1BC4A10", VA = "0x181BC6410", Slot = "10")]
	public virtual bool WaitOne(int millisecondsTimeout)
	{
		return default(bool);
	}

	[Token(Token = "0x6001383")]
	[Address(RVA = "0x1BC6600", Offset = "0x1BC4C00", VA = "0x181BC6600")]
	private bool WaitOne(long timeout, bool exitContext)
	{
		return default(bool);
	}

	[Token(Token = "0x6001384")]
	[Address(RVA = "0x1BC57D0", Offset = "0x1BC3DD0", VA = "0x181BC57D0")]
	internal static bool InternalWaitOne(SafeHandle waitableSafeHandle, long millisecondsTimeout, bool hasThreadAffinity, bool exitContext)
	{
		return default(bool);
	}

	[Token(Token = "0x6001385")]
	[Address(RVA = "0x1BC5AE0", Offset = "0x1BC40E0", VA = "0x181BC5AE0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	public static int WaitAny(WaitHandle[] waitHandles, int millisecondsTimeout, bool exitContext)
	{
		return default(int);
	}

	[Token(Token = "0x6001386")]
	[Address(RVA = "0x1BC59C0", Offset = "0x1BC3FC0", VA = "0x181BC59C0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	public static int WaitAny(WaitHandle[] waitHandles, TimeSpan timeout, bool exitContext)
	{
		return default(int);
	}

	[Token(Token = "0x6001387")]
	[Address(RVA = "0x1BC5980", Offset = "0x1BC3F80", VA = "0x181BC5980")]
	private static void ThrowAbandonedMutexException()
	{
	}

	[Token(Token = "0x6001388")]
	[Address(RVA = "0x1BC5920", Offset = "0x1BC3F20", VA = "0x181BC5920")]
	private static void ThrowAbandonedMutexException(int location, WaitHandle handle)
	{
	}

	[Token(Token = "0x6001389")]
	[Address(RVA = "0x1BC5640", Offset = "0x1BC3C40", VA = "0x181BC5640", Slot = "11")]
	public virtual void Close()
	{
	}

	[Token(Token = "0x600138A")]
	[Address(RVA = "0x1BC5700", Offset = "0x1BC3D00", VA = "0x181BC5700", Slot = "12")]
	protected virtual void Dispose(bool explicitDisposing)
	{
	}

	[Token(Token = "0x600138B")]
	[Address(RVA = "0x1BC56A0", Offset = "0x1BC3CA0", VA = "0x181BC56A0", Slot = "6")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600138C")]
	[Address(RVA = "0x1BC6220", Offset = "0x1BC4820", VA = "0x181BC6220")]
	private static int WaitOneNative(SafeHandle waitableSafeHandle, uint millisecondsTimeout, bool hasThreadAffinity, bool exitContext)
	{
		return default(int);
	}

	[Token(Token = "0x600138D")]
	[Address(RVA = "0x1BC5EA0", Offset = "0x1BC44A0", VA = "0x181BC5EA0")]
	private static int WaitMultiple(WaitHandle[] waitHandles, int millisecondsTimeout, bool exitContext, bool WaitAll)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600138E")]
	[Address(RVA = "0x1BC6740", Offset = "0x1BC4D40", VA = "0x181BC6740")]
	internal unsafe static extern int Wait_internal(IntPtr* handles, int numHandles, bool waitAll, int ms);
}
