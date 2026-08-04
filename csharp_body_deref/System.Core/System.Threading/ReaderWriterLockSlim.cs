// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.ReaderWriterLockSlim
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x2000290")]
public class ReaderWriterLockSlim : IDisposable
{
	[Token(Token = "0x2000291")]
	private struct TimeoutTracker
	{
		[Token(Token = "0x40004DB")]
		[FieldOffset(Offset = "0x0")]
		private int m_total;

		[Token(Token = "0x40004DC")]
		[FieldOffset(Offset = "0x4")]
		private int m_start;

		[Token(Token = "0x1700029B")]
		public int RemainingMilliseconds
		{
			[Token(Token = "0x6000D51")]
			[Address(RVA = "0x45188A0", Offset = "0x45188A0", VA = "0x45188A0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700029C")]
		public bool IsExpired
		{
			[Token(Token = "0x6000D52")]
			[Address(RVA = "0x4517710", Offset = "0x4517710", VA = "0x4517710")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000D50")]
		[Address(RVA = "0x45172B0", Offset = "0x45172B0", VA = "0x45172B0")]
		public TimeoutTracker(int millisecondsTimeout)
		{
		}
	}

	[Token(Token = "0x40004C8")]
	[FieldOffset(Offset = "0x10")]
	private bool fIsReentrant;

	[Token(Token = "0x40004C9")]
	[FieldOffset(Offset = "0x14")]
	private int myLock;

	[Token(Token = "0x40004CA")]
	[FieldOffset(Offset = "0x18")]
	private uint numWriteWaiters;

	[Token(Token = "0x40004CB")]
	[FieldOffset(Offset = "0x1C")]
	private uint numReadWaiters;

	[Token(Token = "0x40004CC")]
	[FieldOffset(Offset = "0x20")]
	private uint numWriteUpgradeWaiters;

	[Token(Token = "0x40004CD")]
	[FieldOffset(Offset = "0x24")]
	private uint numUpgradeWaiters;

	[Token(Token = "0x40004CE")]
	[FieldOffset(Offset = "0x28")]
	private bool fNoWaiters;

	[Token(Token = "0x40004CF")]
	[FieldOffset(Offset = "0x2C")]
	private int upgradeLockOwnerId;

	[Token(Token = "0x40004D0")]
	[FieldOffset(Offset = "0x30")]
	private int writeLockOwnerId;

	[Token(Token = "0x40004D1")]
	[FieldOffset(Offset = "0x38")]
	private EventWaitHandle writeEvent;

	[Token(Token = "0x40004D2")]
	[FieldOffset(Offset = "0x40")]
	private EventWaitHandle readEvent;

	[Token(Token = "0x40004D3")]
	[FieldOffset(Offset = "0x48")]
	private EventWaitHandle upgradeEvent;

	[Token(Token = "0x40004D4")]
	[FieldOffset(Offset = "0x50")]
	private EventWaitHandle waitUpgradeEvent;

	[Token(Token = "0x40004D5")]
	[FieldOffset(Offset = "0x0")]
	private static long s_nextLockID;

	[Token(Token = "0x40004D6")]
	[FieldOffset(Offset = "0x58")]
	private long lockID;

	[Token(Token = "0x40004D7")]
	[ThreadStatic]
	private static ReaderWriterCount t_rwc;

	[Token(Token = "0x40004D8")]
	[FieldOffset(Offset = "0x60")]
	private bool fUpgradeThreadHoldingRead;

	[Token(Token = "0x40004D9")]
	[FieldOffset(Offset = "0x64")]
	private uint owners;

	[Token(Token = "0x40004DA")]
	[FieldOffset(Offset = "0x68")]
	private bool fDisposed;

	[Token(Token = "0x17000292")]
	public bool IsReadLockHeld
	{
		[Token(Token = "0x6000D47")]
		[Address(RVA = "0x4518D70", Offset = "0x4518D70", VA = "0x4518D70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000293")]
	public bool IsUpgradeableReadLockHeld
	{
		[Token(Token = "0x6000D48")]
		[Address(RVA = "0x4518DE0", Offset = "0x4518DE0", VA = "0x4518DE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000294")]
	public bool IsWriteLockHeld
	{
		[Token(Token = "0x6000D49")]
		[Address(RVA = "0x4518DF0", Offset = "0x4518DF0", VA = "0x4518DF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000295")]
	public int RecursiveReadCount
	{
		[Token(Token = "0x6000D4A")]
		[Address(RVA = "0x4518E00", Offset = "0x4518E00", VA = "0x4518E00")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000296")]
	public int RecursiveUpgradeCount
	{
		[Token(Token = "0x6000D4B")]
		[Address(RVA = "0x4518E70", Offset = "0x4518E70", VA = "0x4518E70")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000297")]
	public int RecursiveWriteCount
	{
		[Token(Token = "0x6000D4C")]
		[Address(RVA = "0x4518F00", Offset = "0x4518F00", VA = "0x4518F00")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000298")]
	public int WaitingReadCount
	{
		[Token(Token = "0x6000D4D")]
		[Address(RVA = "0x4518F90", Offset = "0x4518F90", VA = "0x4518F90")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000299")]
	public int WaitingUpgradeCount
	{
		[Token(Token = "0x6000D4E")]
		[Address(RVA = "0x4518FA0", Offset = "0x4518FA0", VA = "0x4518FA0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700029A")]
	public int WaitingWriteCount
	{
		[Token(Token = "0x6000D4F")]
		[Address(RVA = "0x4518FB0", Offset = "0x4518FB0", VA = "0x4518FB0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000D1F")]
	[Address(RVA = "0x4516FE0", Offset = "0x4516FE0", VA = "0x4516FE0")]
	private void InitializeThreadCounts()
	{
	}

	[Token(Token = "0x6000D20")]
	[Address(RVA = "0x4516FF0", Offset = "0x4516FF0", VA = "0x4516FF0")]
	public ReaderWriterLockSlim()
	{
	}

	[Token(Token = "0x6000D21")]
	[Address(RVA = "0x4517050", Offset = "0x4517050", VA = "0x4517050")]
	public ReaderWriterLockSlim(LockRecursionPolicy recursionPolicy)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D22")]
	[Address(RVA = "0x45170C0", Offset = "0x45170C0", VA = "0x45170C0")]
	private static bool IsRWEntryEmpty(ReaderWriterCount rwc)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D23")]
	[Address(RVA = "0x45170F0", Offset = "0x45170F0", VA = "0x45170F0")]
	private bool IsRwHashEntryChanged(ReaderWriterCount lrwc)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D24")]
	[Address(RVA = "0x4517110", Offset = "0x4517110", VA = "0x4517110")]
	private ReaderWriterCount GetThreadRWCount(bool dontAllocate)
	{
		return null;
	}

	[Token(Token = "0x6000D25")]
	[Address(RVA = "0x4517270", Offset = "0x4517270", VA = "0x4517270")]
	public void EnterReadLock()
	{
	}

	[Token(Token = "0x6000D26")]
	[Address(RVA = "0x4517280", Offset = "0x4517280", VA = "0x4517280")]
	public bool TryEnterReadLock(int millisecondsTimeout)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D27")]
	[Address(RVA = "0x4517320", Offset = "0x4517320", VA = "0x4517320")]
	private bool TryEnterReadLock(TimeoutTracker timeout)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D28")]
	[Address(RVA = "0x4517330", Offset = "0x4517330", VA = "0x4517330")]
	private bool TryEnterReadLockCore(TimeoutTracker timeout)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D29")]
	[Address(RVA = "0x4517A20", Offset = "0x4517A20", VA = "0x4517A20")]
	public void EnterWriteLock()
	{
	}

	[Token(Token = "0x6000D2A")]
	[Address(RVA = "0x4517A30", Offset = "0x4517A30", VA = "0x4517A30")]
	public bool TryEnterWriteLock(int millisecondsTimeout)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D2B")]
	[Address(RVA = "0x4517A60", Offset = "0x4517A60", VA = "0x4517A60")]
	private bool TryEnterWriteLock(TimeoutTracker timeout)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D2C")]
	[Address(RVA = "0x4517A70", Offset = "0x4517A70", VA = "0x4517A70")]
	private bool TryEnterWriteLockCore(TimeoutTracker timeout)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D2D")]
	[Address(RVA = "0x4517F10", Offset = "0x4517F10", VA = "0x4517F10")]
	public void EnterUpgradeableReadLock()
	{
	}

	[Token(Token = "0x6000D2E")]
	[Address(RVA = "0x4517F20", Offset = "0x4517F20", VA = "0x4517F20")]
	public bool TryEnterUpgradeableReadLock(int millisecondsTimeout)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D2F")]
	[Address(RVA = "0x4517F50", Offset = "0x4517F50", VA = "0x4517F50")]
	private bool TryEnterUpgradeableReadLock(TimeoutTracker timeout)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D30")]
	[Address(RVA = "0x4517F60", Offset = "0x4517F60", VA = "0x4517F60")]
	private bool TryEnterUpgradeableReadLockCore(TimeoutTracker timeout)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D31")]
	[Address(RVA = "0x45183E0", Offset = "0x45183E0", VA = "0x45183E0")]
	public void ExitReadLock()
	{
	}

	[Token(Token = "0x6000D32")]
	[Address(RVA = "0x4518560", Offset = "0x4518560", VA = "0x4518560")]
	public void ExitWriteLock()
	{
	}

	[Token(Token = "0x6000D33")]
	[Address(RVA = "0x45186D0", Offset = "0x45186D0", VA = "0x45186D0")]
	public void ExitUpgradeableReadLock()
	{
	}

	[Token(Token = "0x6000D34")]
	[Address(RVA = "0x45177D0", Offset = "0x45177D0", VA = "0x45177D0")]
	private void LazyCreateEvent(ref EventWaitHandle waitEvent, bool makeAutoResetEvent)
	{
	}

	[Token(Token = "0x6000D35")]
	[Address(RVA = "0x45178D0", Offset = "0x45178D0", VA = "0x45178D0")]
	private bool WaitOnEvent(EventWaitHandle waitEvent, ref uint numWaiters, TimeoutTracker timeout, bool isWriteWaiter)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D36")]
	[Address(RVA = "0x4518530", Offset = "0x4518530", VA = "0x4518530")]
	private void ExitAndWakeUpAppropriateWaiters()
	{
	}

	[Token(Token = "0x6000D37")]
	[Address(RVA = "0x45188F0", Offset = "0x45188F0", VA = "0x45188F0")]
	private void ExitAndWakeUpAppropriateWaitersPreferringWriters()
	{
	}

	[Token(Token = "0x6000D38")]
	[Address(RVA = "0x4518970", Offset = "0x4518970", VA = "0x4518970")]
	private void ExitAndWakeUpAppropriateReadWaiters()
	{
	}

	[Token(Token = "0x6000D39")]
	[Address(RVA = "0x4517EE0", Offset = "0x4517EE0", VA = "0x4517EE0")]
	private bool IsWriterAcquired()
	{
		return default(bool);
	}

	[Token(Token = "0x6000D3A")]
	[Address(RVA = "0x4517EF0", Offset = "0x4517EF0", VA = "0x4517EF0")]
	private void SetWriterAcquired()
	{
	}

	[Token(Token = "0x6000D3B")]
	[Address(RVA = "0x45186C0", Offset = "0x45186C0", VA = "0x45186C0")]
	private void ClearWriterAcquired()
	{
	}

	[Token(Token = "0x6000D3C")]
	[Address(RVA = "0x4518880", Offset = "0x4518880", VA = "0x4518880")]
	private void SetWritersWaiting()
	{
	}

	[Token(Token = "0x6000D3D")]
	[Address(RVA = "0x4518A10", Offset = "0x4518A10", VA = "0x4518A10")]
	private void ClearWritersWaiting()
	{
	}

	[Token(Token = "0x6000D3E")]
	[Address(RVA = "0x4518890", Offset = "0x4518890", VA = "0x4518890")]
	private void SetUpgraderWaiting()
	{
	}

	[Token(Token = "0x6000D3F")]
	[Address(RVA = "0x4518A20", Offset = "0x4518A20", VA = "0x4518A20")]
	private void ClearUpgraderWaiting()
	{
	}

	[Token(Token = "0x6000D40")]
	[Address(RVA = "0x4517F00", Offset = "0x4517F00", VA = "0x4517F00")]
	private uint GetNumReaders()
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D41")]
	[Address(RVA = "0x4518A30", Offset = "0x4518A30", VA = "0x4518A30")]
	private void EnterMyLock()
	{
	}

	[Token(Token = "0x6000D42")]
	[Address(RVA = "0x4518A60", Offset = "0x4518A60", VA = "0x4518A60")]
	private void EnterMyLockSpin()
	{
	}

	[Token(Token = "0x6000D43")]
	[Address(RVA = "0x45176F0", Offset = "0x45176F0", VA = "0x45176F0")]
	private void ExitMyLock()
	{
	}

	[Token(Token = "0x6000D44")]
	[Address(RVA = "0x4517740", Offset = "0x4517740", VA = "0x4517740")]
	private static void SpinWait(int SpinCount)
	{
	}

	[Token(Token = "0x6000D45")]
	[Address(RVA = "0x4518B80", Offset = "0x4518B80", VA = "0x4518B80", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000D46")]
	[Address(RVA = "0x4518B90", Offset = "0x4518B90", VA = "0x4518B90")]
	private void Dispose(bool disposing)
	{
	}
}
