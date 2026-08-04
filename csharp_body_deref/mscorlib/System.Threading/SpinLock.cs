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
		[Address(RVA = "0x3D31910", Offset = "0x3D31910", VA = "0x3D31910")]
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
		[Address(RVA = "0x3D311D0", Offset = "0x3D311D0", VA = "0x3D311D0")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600120D")]
	[Address(RVA = "0x3D308C0", Offset = "0x3D308C0", VA = "0x3D308C0")]
	public SpinLock(bool enableThreadOwnerTracking)
	{
	}

	[Token(Token = "0x600120E")]
	[Address(RVA = "0x3D308F0", Offset = "0x3D308F0", VA = "0x3D308F0")]
	public void Enter(ref bool lockTaken)
	{
	}

	[Token(Token = "0x600120F")]
	[Address(RVA = "0x3D31070", Offset = "0x3D31070", VA = "0x3D31070")]
	public void TryEnter(int millisecondsTimeout, ref bool lockTaken)
	{
	}

	[Token(Token = "0x6001210")]
	[Address(RVA = "0x3D30A30", Offset = "0x3D30A30", VA = "0x3D30A30")]
	private void ContinueTryEnter(int millisecondsTimeout, ref bool lockTaken)
	{
	}

	[Token(Token = "0x6001211")]
	[Address(RVA = "0x3D31570", Offset = "0x3D31570", VA = "0x3D31570")]
	private void DecrementWaiters()
	{
	}

	[Token(Token = "0x6001212")]
	[Address(RVA = "0x3D311E0", Offset = "0x3D311E0", VA = "0x3D311E0")]
	private void ContinueTryEnterWithThreadTracking(int millisecondsTimeout, uint startTime, ref bool lockTaken)
	{
	}

	[Token(Token = "0x6001213")]
	[Address(RVA = "0x3D31790", Offset = "0x3D31790", VA = "0x3D31790")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public void Exit(bool useMemoryBarrier)
	{
	}

	[Token(Token = "0x6001214")]
	[Address(RVA = "0x3D31810", Offset = "0x3D31810", VA = "0x3D31810")]
	private void ExitSlowPath(bool useMemoryBarrier)
	{
	}
}
