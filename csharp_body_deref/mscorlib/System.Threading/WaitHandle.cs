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
[Token(Token = "0x2000214")]
[ComVisible(true)]
public abstract class WaitHandle : MarshalByRefObject, IDisposable
{
	[Token(Token = "0x40009F9")]
	public const int WaitTimeout = 258;

	[Token(Token = "0x40009FA")]
	private const int MAX_WAITHANDLES = 64;

	[Token(Token = "0x40009FB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private IntPtr waitHandle;

	[Token(Token = "0x40009FC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal SafeWaitHandle safeWaitHandle;

	[Token(Token = "0x40009FD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	internal bool hasThreadAffinity;

	[Token(Token = "0x40009FE")]
	private const int WAIT_OBJECT_0 = 0;

	[Token(Token = "0x40009FF")]
	private const int WAIT_ABANDONED = 128;

	[Token(Token = "0x4000A00")]
	private const int WAIT_FAILED = int.MaxValue;

	[Token(Token = "0x4000A01")]
	private const int ERROR_TOO_MANY_POSTS = 298;

	[Token(Token = "0x4000A02")]
	private const int ERROR_NOT_OWNED_BY_CALLER = 299;

	[Token(Token = "0x4000A03")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	protected static readonly IntPtr InvalidHandle;

	[Token(Token = "0x4000A04")]
	internal const int MaxWaitHandles = 64;

	[Token(Token = "0x170001CF")]
	[Obsolete("Use the SafeWaitHandle property instead.")]
	public virtual IntPtr Handle
	{
		[Token(Token = "0x600130C")]
		[Address(RVA = "0x3D3A570", Offset = "0x3D3A570", VA = "0x3D3A570", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x170001D0")]
	public SafeWaitHandle SafeWaitHandle
	{
		[Token(Token = "0x600130D")]
		[Address(RVA = "0x3D3A690", Offset = "0x3D3A690", VA = "0x3D3A690")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
		get
		{
			return null;
		}
		[Token(Token = "0x600130E")]
		[Address(RVA = "0x3D3A750", Offset = "0x3D3A750", VA = "0x3D3A750")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		set
		{
		}
	}

	[Token(Token = "0x600130A")]
	[Address(RVA = "0x3D3A480", Offset = "0x3D3A480", VA = "0x3D3A480")]
	protected WaitHandle()
	{
	}

	[Token(Token = "0x600130B")]
	[Address(RVA = "0x3D3A500", Offset = "0x3D3A500", VA = "0x3D3A500")]
	private void Init()
	{
	}

	[Token(Token = "0x600130F")]
	[Address(RVA = "0x3D3A800", Offset = "0x3D3A800", VA = "0x3D3A800")]
	internal void SetHandleInternal(SafeWaitHandle handle)
	{
	}

	[Token(Token = "0x6001310")]
	[Address(RVA = "0x3D3A840", Offset = "0x3D3A840", VA = "0x3D3A840", Slot = "8")]
	public virtual bool WaitOne(int millisecondsTimeout, bool exitContext)
	{
		return default(bool);
	}

	[Token(Token = "0x6001311")]
	[Address(RVA = "0x3D3A990", Offset = "0x3D3A990", VA = "0x3D3A990", Slot = "9")]
	public virtual bool WaitOne()
	{
		return default(bool);
	}

	[Token(Token = "0x6001312")]
	[Address(RVA = "0x3D3A9B0", Offset = "0x3D3A9B0", VA = "0x3D3A9B0", Slot = "10")]
	public virtual bool WaitOne(int millisecondsTimeout)
	{
		return default(bool);
	}

	[Token(Token = "0x6001313")]
	[Address(RVA = "0x3D3A920", Offset = "0x3D3A920", VA = "0x3D3A920")]
	private bool WaitOne(long timeout, bool exitContext)
	{
		return default(bool);
	}

	[Token(Token = "0x6001314")]
	[Address(RVA = "0x3D3A9D0", Offset = "0x3D3A9D0", VA = "0x3D3A9D0")]
	internal static bool InternalWaitOne(SafeHandle waitableSafeHandle, long millisecondsTimeout, bool hasThreadAffinity, bool exitContext)
	{
		return default(bool);
	}

	[Token(Token = "0x6001315")]
	[Address(RVA = "0x3D3AD00", Offset = "0x3D3AD00", VA = "0x3D3AD00")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	public static int WaitAny(WaitHandle[] waitHandles, int millisecondsTimeout, bool exitContext)
	{
		return default(int);
	}

	[Token(Token = "0x6001316")]
	[Address(RVA = "0x3D3B480", Offset = "0x3D3B480", VA = "0x3D3B480")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	public static int WaitAny(WaitHandle[] waitHandles, TimeSpan timeout, bool exitContext)
	{
		return default(int);
	}

	[Token(Token = "0x6001317")]
	[Address(RVA = "0x3D3ACC0", Offset = "0x3D3ACC0", VA = "0x3D3ACC0")]
	private static void ThrowAbandonedMutexException()
	{
	}

	[Token(Token = "0x6001318")]
	[Address(RVA = "0x3D3B430", Offset = "0x3D3B430", VA = "0x3D3B430")]
	private static void ThrowAbandonedMutexException(int location, WaitHandle handle)
	{
	}

	[Token(Token = "0x6001319")]
	[Address(RVA = "0x3D3B590", Offset = "0x3D3B590", VA = "0x3D3B590", Slot = "11")]
	public virtual void Close()
	{
	}

	[Token(Token = "0x600131A")]
	[Address(RVA = "0x3D3B600", Offset = "0x3D3B600", VA = "0x3D3B600", Slot = "12")]
	protected virtual void Dispose(bool explicitDisposing)
	{
	}

	[Token(Token = "0x600131B")]
	[Address(RVA = "0x3D3B650", Offset = "0x3D3B650", VA = "0x3D3B650", Slot = "6")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600131C")]
	[Address(RVA = "0x3D3AAB0", Offset = "0x3D3AAB0", VA = "0x3D3AAB0")]
	private static int WaitOneNative(SafeHandle waitableSafeHandle, uint millisecondsTimeout, bool hasThreadAffinity, bool exitContext)
	{
		return default(int);
	}

	[Token(Token = "0x600131D")]
	[Address(RVA = "0x3D3B010", Offset = "0x3D3B010", VA = "0x3D3B010")]
	private static int WaitMultiple(WaitHandle[] waitHandles, int millisecondsTimeout, bool exitContext, bool WaitAll)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600131E")]
	[Address(RVA = "0x3D3B6C0", Offset = "0x3D3B6C0", VA = "0x3D3B6C0")]
	internal unsafe static extern int Wait_internal(IntPtr* handles, int numHandles, bool waitAll, int ms);
}
