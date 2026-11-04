// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.SpinLock
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.ConstrainedExecution;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x200021C")]
[ComVisible(false)]
[DebuggerTypeProxy(typeof(SystemThreading_SpinLockDebugView))]
[DebuggerDisplay("IsHeld = {IsHeld}")]
public struct SpinLock
{
	[Token(Token = "0x200021D")]
	internal class SystemThreading_SpinLockDebugView
	{
	}

	[Token(Token = "0x40009EE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private int m_owner;

	[Token(Token = "0x40009EF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static int MAXIMUM_WAITERS;

	[Token(Token = "0x170001B1")]
	public bool IsHeldByCurrentThread
	{
		[Token(Token = "0x6001271")]
		[Address(RVA = "0x1BA5740", Offset = "0x1BA3D40", VA = "0x181BA5740")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001B2")]
	public bool IsThreadOwnerTrackingEnabled
	{
		[Token(Token = "0x6001272")]
		[Address(RVA = "0x1BA5820", Offset = "0x1BA3E20", VA = "0x181BA5820")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001268")]
	[Address(RVA = "0x1BA5700", Offset = "0x1BA3D00", VA = "0x181BA5700")]
	public SpinLock(bool enableThreadOwnerTracking)
	{
	}

	[Token(Token = "0x6001269")]
	[Address(RVA = "0x1BA5300", Offset = "0x1BA3900", VA = "0x181BA5300")]
	public void Enter(ref bool lockTaken)
	{
	}

	[Token(Token = "0x600126A")]
	[Address(RVA = "0x1BA5610", Offset = "0x1BA3C10", VA = "0x181BA5610")]
	public void TryEnter(int millisecondsTimeout, ref bool lockTaken)
	{
	}

	[Token(Token = "0x600126B")]
	[Address(RVA = "0x1BA4D90", Offset = "0x1BA3390", VA = "0x181BA4D90")]
	private void ContinueTryEnter(int millisecondsTimeout, ref bool lockTaken)
	{
	}

	[Token(Token = "0x600126C")]
	[Address(RVA = "0x1BA5220", Offset = "0x1BA3820", VA = "0x181BA5220")]
	private void DecrementWaiters()
	{
	}

	[Token(Token = "0x600126D")]
	[Address(RVA = "0x1BA4B60", Offset = "0x1BA3160", VA = "0x181BA4B60")]
	private void ContinueTryEnterWithThreadTracking(int millisecondsTimeout, uint startTime, ref bool lockTaken)
	{
	}

	[Token(Token = "0x600126E")]
	[Address(RVA = "0x1BA5580", Offset = "0x1BA3B80", VA = "0x181BA5580")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public void Exit()
	{
	}

	[Token(Token = "0x600126F")]
	[Address(RVA = "0x1BA54F0", Offset = "0x1BA3AF0", VA = "0x181BA54F0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public void Exit(bool useMemoryBarrier)
	{
	}

	[Token(Token = "0x6001270")]
	[Address(RVA = "0x1BA53B0", Offset = "0x1BA39B0", VA = "0x181BA53B0")]
	private void ExitSlowPath(bool useMemoryBarrier)
	{
	}
}
