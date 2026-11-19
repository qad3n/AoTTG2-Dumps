// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.SpinLock
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.ConstrainedExecution;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x20001F4")]
[DebuggerTypeProxy(typeof(SystemThreading_SpinLockDebugView))]
[ComVisible(false)]
[DebuggerDisplay("IsHeld = {IsHeld}")]
public struct SpinLock
{
	[Token(Token = "0x20001F5")]
	internal class SystemThreading_SpinLockDebugView
	{
	}

	[Token(Token = "0x400094C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private int m_owner;

	[Token(Token = "0x400094D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static int MAXIMUM_WAITERS;

	[Token(Token = "0x170001B0")]
	public bool IsHeldByCurrentThread
	{
		[Token(Token = "0x6001248")]
		[Address(RVA = "0x5534660", Offset = "0x5533660", VA = "0x5534660")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001B1")]
	public bool IsThreadOwnerTrackingEnabled
	{
		[Token(Token = "0x6001249")]
		[Address(RVA = "0x5533F70", Offset = "0x5532F70", VA = "0x5533F70")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600123F")]
	[Address(RVA = "0x5533720", Offset = "0x5532720", VA = "0x5533720")]
	public SpinLock(bool enableThreadOwnerTracking)
	{
	}

	[Token(Token = "0x6001240")]
	[Address(RVA = "0x5533750", Offset = "0x5532750", VA = "0x5533750")]
	public void Enter(ref bool lockTaken)
	{
	}

	[Token(Token = "0x6001241")]
	[Address(RVA = "0x5533E10", Offset = "0x5532E10", VA = "0x5533E10")]
	public void TryEnter(int millisecondsTimeout, ref bool lockTaken)
	{
	}

	[Token(Token = "0x6001242")]
	[Address(RVA = "0x5533890", Offset = "0x5532890", VA = "0x5533890")]
	private void ContinueTryEnter(int millisecondsTimeout, ref bool lockTaken)
	{
	}

	[Token(Token = "0x6001243")]
	[Address(RVA = "0x5534240", Offset = "0x5533240", VA = "0x5534240")]
	private void DecrementWaiters()
	{
	}

	[Token(Token = "0x6001244")]
	[Address(RVA = "0x5533F80", Offset = "0x5532F80", VA = "0x5533F80")]
	private void ContinueTryEnterWithThreadTracking(int millisecondsTimeout, uint startTime, ref bool lockTaken)
	{
	}

	[Token(Token = "0x6001245")]
	[Address(RVA = "0x5534460", Offset = "0x5533460", VA = "0x5534460")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public void Exit()
	{
	}

	[Token(Token = "0x6001246")]
	[Address(RVA = "0x55345E0", Offset = "0x55335E0", VA = "0x55345E0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public void Exit(bool useMemoryBarrier)
	{
	}

	[Token(Token = "0x6001247")]
	[Address(RVA = "0x55344E0", Offset = "0x55334E0", VA = "0x55344E0")]
	private void ExitSlowPath(bool useMemoryBarrier)
	{
	}
}
