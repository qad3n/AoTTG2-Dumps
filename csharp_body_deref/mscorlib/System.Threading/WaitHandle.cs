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
		[Address(RVA = "0x5054A50", Offset = "0x5054A50", VA = "0x5054A50", Slot = "7")]
		set
		{
		}
	}

	[Token(Token = "0x170001D0")]
	public SafeWaitHandle SafeWaitHandle
	{
		[Token(Token = "0x600130D")]
		[Address(RVA = "0x5054B70", Offset = "0x5054B70", VA = "0x5054B70")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
		get
		{
			return null;
		}
		[Token(Token = "0x600130E")]
		[Address(RVA = "0x5054C30", Offset = "0x5054C30", VA = "0x5054C30")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		set
		{
		}
	}

	[Token(Token = "0x600130A")]
	[Address(RVA = "0x5054960", Offset = "0x5054960", VA = "0x5054960")]
	protected WaitHandle()
	{
	}

	[Token(Token = "0x600130B")]
	[Address(RVA = "0x50549E0", Offset = "0x50549E0", VA = "0x50549E0")]
	private void Init()
	{
	}

	[Token(Token = "0x600130F")]
	[Address(RVA = "0x5054CE0", Offset = "0x5054CE0", VA = "0x5054CE0")]
	internal void SetHandleInternal(SafeWaitHandle handle)
	{
	}

	[Token(Token = "0x6001310")]
	[Address(RVA = "0x5054D20", Offset = "0x5054D20", VA = "0x5054D20", Slot = "8")]
	public virtual bool WaitOne(int millisecondsTimeout, bool exitContext)
	{
		return default(bool);
	}

	[Token(Token = "0x6001311")]
	[Address(RVA = "0x5054E70", Offset = "0x5054E70", VA = "0x5054E70", Slot = "9")]
	public virtual bool WaitOne()
	{
		return default(bool);
	}

	[Token(Token = "0x6001312")]
	[Address(RVA = "0x5054E90", Offset = "0x5054E90", VA = "0x5054E90", Slot = "10")]
	public virtual bool WaitOne(int millisecondsTimeout)
	{
		return default(bool);
	}

	[Token(Token = "0x6001313")]
	[Address(RVA = "0x5054E00", Offset = "0x5054E00", VA = "0x5054E00")]
	private bool WaitOne(long timeout, bool exitContext)
	{
		return default(bool);
	}

	[Token(Token = "0x6001314")]
	[Address(RVA = "0x5054EB0", Offset = "0x5054EB0", VA = "0x5054EB0")]
	internal static bool InternalWaitOne(SafeHandle waitableSafeHandle, long millisecondsTimeout, bool hasThreadAffinity, bool exitContext)
	{
		return default(bool);
	}

	[Token(Token = "0x6001315")]
	[Address(RVA = "0x50551E0", Offset = "0x50551E0", VA = "0x50551E0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	public static int WaitAny(WaitHandle[] waitHandles, int millisecondsTimeout, bool exitContext)
	{
		return default(int);
	}

	[Token(Token = "0x6001316")]
	[Address(RVA = "0x5055960", Offset = "0x5055960", VA = "0x5055960")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	public static int WaitAny(WaitHandle[] waitHandles, TimeSpan timeout, bool exitContext)
	{
		return default(int);
	}

	[Token(Token = "0x6001317")]
	[Address(RVA = "0x50551A0", Offset = "0x50551A0", VA = "0x50551A0")]
	private static void ThrowAbandonedMutexException()
	{
	}

	[Token(Token = "0x6001318")]
	[Address(RVA = "0x5055910", Offset = "0x5055910", VA = "0x5055910")]
	private static void ThrowAbandonedMutexException(int location, WaitHandle handle)
	{
	}

	[Token(Token = "0x6001319")]
	[Address(RVA = "0x5055A70", Offset = "0x5055A70", VA = "0x5055A70", Slot = "11")]
	public virtual void Close()
	{
	}

	[Token(Token = "0x600131A")]
	[Address(RVA = "0x5055AE0", Offset = "0x5055AE0", VA = "0x5055AE0", Slot = "12")]
	protected virtual void Dispose(bool explicitDisposing)
	{
	}

	[Token(Token = "0x600131B")]
	[Address(RVA = "0x5055B30", Offset = "0x5055B30", VA = "0x5055B30", Slot = "6")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600131C")]
	[Address(RVA = "0x5054F90", Offset = "0x5054F90", VA = "0x5054F90")]
	private static int WaitOneNative(SafeHandle waitableSafeHandle, uint millisecondsTimeout, bool hasThreadAffinity, bool exitContext)
	{
		return default(int);
	}

	[Token(Token = "0x600131D")]
	[Address(RVA = "0x50554F0", Offset = "0x50554F0", VA = "0x50554F0")]
	private static int WaitMultiple(WaitHandle[] waitHandles, int millisecondsTimeout, bool exitContext, bool WaitAll)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600131E")]
	[Address(RVA = "0x5055BA0", Offset = "0x5055BA0", VA = "0x5055BA0")]
	internal unsafe static extern int Wait_internal(IntPtr* handles, int numHandles, bool waitAll, int ms);
}
