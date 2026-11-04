// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.SynchronizationContext
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.ConstrainedExecution;
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x200022E")]
public class SynchronizationContext
{
	[Token(Token = "0x4000A1E")]
	[FieldOffset(Offset = "0x10")]
	private System.Threading.SynchronizationContextProperties _props;

	[Token(Token = "0x170001C1")]
	public static SynchronizationContext Current
	{
		[Token(Token = "0x60012E1")]
		[Address(RVA = "0x1BB4930", Offset = "0x1BB2F30", VA = "0x181BB4930")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C2")]
	internal static SynchronizationContext CurrentNoFlow
	{
		[Token(Token = "0x60012E2")]
		[Address(RVA = "0x1BB48A0", Offset = "0x1BB2EA0", VA = "0x181BB48A0")]
		[System.Runtime.CompilerServices.FriendAccessAllowed]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C3")]
	internal static SynchronizationContext CurrentExplicit
	{
		[Token(Token = "0x60012E5")]
		[Address(RVA = "0x1BB4890", Offset = "0x1BB2E90", VA = "0x181BB4890")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60012D8")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public SynchronizationContext()
	{
	}

	[Token(Token = "0x60012D9")]
	[Address(RVA = "0x1BB4570", Offset = "0x1BB2B70", VA = "0x181BB4570")]
	public bool IsWaitNotificationRequired()
	{
		return default(bool);
	}

	[Token(Token = "0x60012DA")]
	[Address(RVA = "0x12BC920", Offset = "0x12BAF20", VA = "0x1812BC920", Slot = "4")]
	public virtual void Send(SendOrPostCallback d, object state)
	{
	}

	[Token(Token = "0x60012DB")]
	[Address(RVA = "0x1BB4580", Offset = "0x1BB2B80", VA = "0x181BB4580", Slot = "5")]
	public virtual void Post(SendOrPostCallback d, object state)
	{
	}

	[Token(Token = "0x60012DC")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "6")]
	public virtual void OperationStarted()
	{
	}

	[Token(Token = "0x60012DD")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
	public virtual void OperationCompleted()
	{
	}

	[Token(Token = "0x60012DE")]
	[Address(RVA = "0x1BB47B0", Offset = "0x1BB2DB0", VA = "0x181BB47B0", Slot = "8")]
	[CLSCompliant(false)]
	[PrePrepareMethod]
	public virtual int Wait(IntPtr[] waitHandles, bool waitAll, int millisecondsTimeout)
	{
		return default(int);
	}

	[Token(Token = "0x60012DF")]
	[Address(RVA = "0x1BB4710", Offset = "0x1BB2D10", VA = "0x181BB4710")]
	[CLSCompliant(false)]
	[PrePrepareMethod]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	protected static int WaitHelper(IntPtr[] waitHandles, bool waitAll, int millisecondsTimeout)
	{
		return default(int);
	}

	[Token(Token = "0x60012E0")]
	[Address(RVA = "0x1BB4600", Offset = "0x1BB2C00", VA = "0x181BB4600")]
	public static void SetSynchronizationContext(SynchronizationContext syncContext)
	{
	}

	[Token(Token = "0x60012E3")]
	[Address(RVA = "0x1BB43B0", Offset = "0x1BB29B0", VA = "0x181BB43B0")]
	private static SynchronizationContext GetThreadLocalContext()
	{
		return null;
	}

	[Token(Token = "0x60012E4")]
	[Address(RVA = "0x1BB4360", Offset = "0x1BB2960", VA = "0x181BB4360", Slot = "9")]
	public virtual SynchronizationContext CreateCopy()
	{
		return null;
	}
}
