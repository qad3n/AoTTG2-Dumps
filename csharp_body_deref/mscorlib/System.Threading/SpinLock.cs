using System.Diagnostics;
using System.Runtime.ConstrainedExecution;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x20001F1")]
[DebuggerTypeProxy(typeof(SystemThreading_SpinLockDebugView))]
[DebuggerDisplay("IsHeld = {IsHeld}")]
[ComVisible(false)]
public struct SpinLock
{
	[Token(Token = "0x20001F2")]
	internal class SystemThreading_SpinLockDebugView
	{
	}

	[Token(Token = "0x400099C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private int m_owner;

	[Token(Token = "0x400099D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static int MAXIMUM_WAITERS;

	[Token(Token = "0x170001AF")]
	public bool IsHeldByCurrentThread
	{
		[Token(Token = "0x6001215")]
		[Address(RVA = "0x504BDF0", Offset = "0x504BDF0", VA = "0x504BDF0")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001B0")]
	public bool IsThreadOwnerTrackingEnabled
	{
		[Token(Token = "0x6001216")]
		[Address(RVA = "0x504B6B0", Offset = "0x504B6B0", VA = "0x504B6B0")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600120D")]
	[Address(RVA = "0x504ADA0", Offset = "0x504ADA0", VA = "0x504ADA0")]
	public SpinLock(bool enableThreadOwnerTracking)
	{
	}

	[Token(Token = "0x600120E")]
	[Address(RVA = "0x504ADD0", Offset = "0x504ADD0", VA = "0x504ADD0")]
	public void Enter(ref bool lockTaken)
	{
	}

	[Token(Token = "0x600120F")]
	[Address(RVA = "0x504B550", Offset = "0x504B550", VA = "0x504B550")]
	public void TryEnter(int millisecondsTimeout, ref bool lockTaken)
	{
	}

	[Token(Token = "0x6001210")]
	[Address(RVA = "0x504AF10", Offset = "0x504AF10", VA = "0x504AF10")]
	private void ContinueTryEnter(int millisecondsTimeout, ref bool lockTaken)
	{
	}

	[Token(Token = "0x6001211")]
	[Address(RVA = "0x504BA50", Offset = "0x504BA50", VA = "0x504BA50")]
	private void DecrementWaiters()
	{
	}

	[Token(Token = "0x6001212")]
	[Address(RVA = "0x504B6C0", Offset = "0x504B6C0", VA = "0x504B6C0")]
	private void ContinueTryEnterWithThreadTracking(int millisecondsTimeout, uint startTime, ref bool lockTaken)
	{
	}

	[Token(Token = "0x6001213")]
	[Address(RVA = "0x504BC70", Offset = "0x504BC70", VA = "0x504BC70")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public void Exit(bool useMemoryBarrier)
	{
	}

	[Token(Token = "0x6001214")]
	[Address(RVA = "0x504BCF0", Offset = "0x504BCF0", VA = "0x504BCF0")]
	private void ExitSlowPath(bool useMemoryBarrier)
	{
	}
}
