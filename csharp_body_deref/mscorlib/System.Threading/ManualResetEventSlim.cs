// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.ManualResetEventSlim
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x2000206")]
[DebuggerDisplay("Set = {IsSet}")]
public class ManualResetEventSlim : IDisposable
{
	[Token(Token = "0x40009A5")]
	[FieldOffset(Offset = "0x10")]
	private object m_lock;

	[Token(Token = "0x40009A6")]
	[FieldOffset(Offset = "0x18")]
	private ManualResetEvent m_eventObj;

	[Token(Token = "0x40009A7")]
	[FieldOffset(Offset = "0x20")]
	private int m_combinedState;

	[Token(Token = "0x40009A8")]
	[FieldOffset(Offset = "0x0")]
	private static Action<object> s_cancellationTokenCallback;

	[Token(Token = "0x1700019E")]
	public WaitHandle WaitHandle
	{
		[Token(Token = "0x60011ED")]
		[Address(RVA = "0x1BA2BE0", Offset = "0x1BA11E0", VA = "0x181BA2BE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700019F")]
	public bool IsSet
	{
		[Token(Token = "0x60011EE")]
		[Address(RVA = "0x1BA2B20", Offset = "0x1BA1120", VA = "0x181BA2B20")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60011EF")]
		[Address(RVA = "0x1BA2CD0", Offset = "0x1BA12D0", VA = "0x181BA2CD0")]
		private set
		{
		}
	}

	[Token(Token = "0x170001A0")]
	public int SpinCount
	{
		[Token(Token = "0x60011F0")]
		[Address(RVA = "0x1BA2B80", Offset = "0x1BA1180", VA = "0x181BA2B80")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60011F1")]
		[Address(RVA = "0x1BA2D00", Offset = "0x1BA1300", VA = "0x181BA2D00")]
		private set
		{
		}
	}

	[Token(Token = "0x170001A1")]
	private int Waiters
	{
		[Token(Token = "0x60011F2")]
		[Address(RVA = "0x1BA2C80", Offset = "0x1BA1280", VA = "0x181BA2C80")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60011F3")]
		[Address(RVA = "0x1BA2D40", Offset = "0x1BA1340", VA = "0x181BA2D40")]
		set
		{
		}
	}

	[Token(Token = "0x60011F4")]
	[Address(RVA = "0x1BA2900", Offset = "0x1BA0F00", VA = "0x181BA2900")]
	public ManualResetEventSlim(bool initialState)
	{
	}

	[Token(Token = "0x60011F5")]
	[Address(RVA = "0x1BA2A00", Offset = "0x1BA1000", VA = "0x181BA2A00")]
	public ManualResetEventSlim(bool initialState, int spinCount)
	{
	}

	[Token(Token = "0x60011F6")]
	[Address(RVA = "0x1BA1940", Offset = "0x1B9FF40", VA = "0x181BA1940")]
	private void Initialize(bool initialState, int spinCount)
	{
	}

	[Token(Token = "0x60011F7")]
	[Address(RVA = "0x1BA18A0", Offset = "0x1B9FEA0", VA = "0x181BA18A0")]
	private void EnsureLockObjectCreated()
	{
	}

	[Token(Token = "0x60011F8")]
	[Address(RVA = "0x1BA1A00", Offset = "0x1BA0000", VA = "0x181BA1A00")]
	private bool LazyInitializeEvent()
	{
		return default(bool);
	}

	[Token(Token = "0x60011F9")]
	[Address(RVA = "0x1BA1CD0", Offset = "0x1BA02D0", VA = "0x181BA1CD0")]
	public void Set()
	{
	}

	[Token(Token = "0x60011FA")]
	[Address(RVA = "0x1BA1CE0", Offset = "0x1BA02E0", VA = "0x181BA1CE0")]
	private void Set(bool duringCancellation)
	{
	}

	[Token(Token = "0x60011FB")]
	[Address(RVA = "0x1BA2070", Offset = "0x1BA0670", VA = "0x181BA2070")]
	public bool Wait(int millisecondsTimeout, CancellationToken cancellationToken)
	{
		return default(bool);
	}

	[Token(Token = "0x60011FC")]
	[Address(RVA = "0x1BA1730", Offset = "0x1B9FD30", VA = "0x181BA1730", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60011FD")]
	[Address(RVA = "0x1BA1790", Offset = "0x1B9FD90", VA = "0x181BA1790", Slot = "5")]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60011FE")]
	[Address(RVA = "0x1BA1F00", Offset = "0x1BA0500", VA = "0x181BA1F00")]
	private void ThrowIfDisposed()
	{
	}

	[Token(Token = "0x60011FF")]
	[Address(RVA = "0x1BA1610", Offset = "0x1B9FC10", VA = "0x181BA1610")]
	private static void CancellationTokenCallback(object obj)
	{
	}

	[Token(Token = "0x6001200")]
	[Address(RVA = "0x1BA1F70", Offset = "0x1BA0570", VA = "0x181BA1F70")]
	private void UpdateStateAtomically(int newBits, int updateBitsMask)
	{
	}

	[Token(Token = "0x6001201")]
	[Address(RVA = "0x1BA1920", Offset = "0x1B9FF20", VA = "0x181BA1920")]
	private static int ExtractStatePortionAndShiftRight(int state, int mask, int rightBitShiftCount)
	{
		return default(int);
	}

	[Token(Token = "0x6001202")]
	[Address(RVA = "0x1BA1930", Offset = "0x1B9FF30", VA = "0x181BA1930")]
	private static int ExtractStatePortion(int state, int mask)
	{
		return default(int);
	}
}
