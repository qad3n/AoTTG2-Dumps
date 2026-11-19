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

[Token(Token = "0x2000291")]
public class ReaderWriterLockSlim : IDisposable
{
	[Token(Token = "0x2000292")]
	private struct TimeoutTracker
	{
		[Token(Token = "0x40004E4")]
		[FieldOffset(Offset = "0x0")]
		private int m_total;

		[Token(Token = "0x40004E5")]
		[FieldOffset(Offset = "0x4")]
		private int m_start;

		[Token(Token = "0x1700029D")]
		public int RemainingMilliseconds
		{
			[Token(Token = "0x6000D5B")]
			[Address(RVA = "0x5E2D1A0", Offset = "0x5E2C1A0", VA = "0x5E2D1A0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700029E")]
		public bool IsExpired
		{
			[Token(Token = "0x6000D5C")]
			[Address(RVA = "0x5E2C0B0", Offset = "0x5E2B0B0", VA = "0x5E2C0B0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000D5A")]
		[Address(RVA = "0x5E2BC80", Offset = "0x5E2AC80", VA = "0x5E2BC80")]
		public TimeoutTracker(int millisecondsTimeout)
		{
		}
	}

	[Token(Token = "0x40004D1")]
	[FieldOffset(Offset = "0x10")]
	private bool fIsReentrant;

	[Token(Token = "0x40004D2")]
	[FieldOffset(Offset = "0x14")]
	private int myLock;

	[Token(Token = "0x40004D3")]
	[FieldOffset(Offset = "0x18")]
	private uint numWriteWaiters;

	[Token(Token = "0x40004D4")]
	[FieldOffset(Offset = "0x1C")]
	private uint numReadWaiters;

	[Token(Token = "0x40004D5")]
	[FieldOffset(Offset = "0x20")]
	private uint numWriteUpgradeWaiters;

	[Token(Token = "0x40004D6")]
	[FieldOffset(Offset = "0x24")]
	private uint numUpgradeWaiters;

	[Token(Token = "0x40004D7")]
	[FieldOffset(Offset = "0x28")]
	private bool fNoWaiters;

	[Token(Token = "0x40004D8")]
	[FieldOffset(Offset = "0x2C")]
	private int upgradeLockOwnerId;

	[Token(Token = "0x40004D9")]
	[FieldOffset(Offset = "0x30")]
	private int writeLockOwnerId;

	[Token(Token = "0x40004DA")]
	[FieldOffset(Offset = "0x38")]
	private EventWaitHandle writeEvent;

	[Token(Token = "0x40004DB")]
	[FieldOffset(Offset = "0x40")]
	private EventWaitHandle readEvent;

	[Token(Token = "0x40004DC")]
	[FieldOffset(Offset = "0x48")]
	private EventWaitHandle upgradeEvent;

	[Token(Token = "0x40004DD")]
	[FieldOffset(Offset = "0x50")]
	private EventWaitHandle waitUpgradeEvent;

	[Token(Token = "0x40004DE")]
	[FieldOffset(Offset = "0x0")]
	private static long s_nextLockID;

	[Token(Token = "0x40004DF")]
	[FieldOffset(Offset = "0x58")]
	private long lockID;

	[Token(Token = "0x40004E0")]
	[ThreadStatic]
	private static ReaderWriterCount t_rwc;

	[Token(Token = "0x40004E1")]
	[FieldOffset(Offset = "0x60")]
	private bool fUpgradeThreadHoldingRead;

	[Token(Token = "0x40004E2")]
	[FieldOffset(Offset = "0x64")]
	private uint owners;

	[Token(Token = "0x40004E3")]
	[FieldOffset(Offset = "0x68")]
	private bool fDisposed;

	[Token(Token = "0x17000294")]
	public bool IsReadLockHeld
	{
		[Token(Token = "0x6000D51")]
		[Address(RVA = "0x5E2D650", Offset = "0x5E2C650", VA = "0x5E2D650")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000295")]
	public bool IsUpgradeableReadLockHeld
	{
		[Token(Token = "0x6000D52")]
		[Address(RVA = "0x5E2D6C0", Offset = "0x5E2C6C0", VA = "0x5E2D6C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000296")]
	public bool IsWriteLockHeld
	{
		[Token(Token = "0x6000D53")]
		[Address(RVA = "0x5E2D6D0", Offset = "0x5E2C6D0", VA = "0x5E2D6D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000297")]
	public int RecursiveReadCount
	{
		[Token(Token = "0x6000D54")]
		[Address(RVA = "0x5E2D6E0", Offset = "0x5E2C6E0", VA = "0x5E2D6E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000298")]
	public int RecursiveUpgradeCount
	{
		[Token(Token = "0x6000D55")]
		[Address(RVA = "0x5E2D750", Offset = "0x5E2C750", VA = "0x5E2D750")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000299")]
	public int RecursiveWriteCount
	{
		[Token(Token = "0x6000D56")]
		[Address(RVA = "0x5E2D7E0", Offset = "0x5E2C7E0", VA = "0x5E2D7E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700029A")]
	public int WaitingReadCount
	{
		[Token(Token = "0x6000D57")]
		[Address(RVA = "0x5E2D870", Offset = "0x5E2C870", VA = "0x5E2D870")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700029B")]
	public int WaitingUpgradeCount
	{
		[Token(Token = "0x6000D58")]
		[Address(RVA = "0x5E2D880", Offset = "0x5E2C880", VA = "0x5E2D880")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700029C")]
	public int WaitingWriteCount
	{
		[Token(Token = "0x6000D59")]
		[Address(RVA = "0x5E2D890", Offset = "0x5E2C890", VA = "0x5E2D890")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000D29")]
	[Address(RVA = "0x5E2B9D0", Offset = "0x5E2A9D0", VA = "0x5E2B9D0")]
	private void InitializeThreadCounts()
	{
	}

	[Token(Token = "0x6000D2A")]
	[Address(RVA = "0x5E2B9E0", Offset = "0x5E2A9E0", VA = "0x5E2B9E0")]
	public ReaderWriterLockSlim()
	{
	}

	[Token(Token = "0x6000D2B")]
	[Address(RVA = "0x5E2BA40", Offset = "0x5E2AA40", VA = "0x5E2BA40")]
	public ReaderWriterLockSlim(LockRecursionPolicy recursionPolicy)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D2C")]
	[Address(RVA = "0x5E2BAB0", Offset = "0x5E2AAB0", VA = "0x5E2BAB0")]
	private static bool IsRWEntryEmpty(ReaderWriterCount rwc)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D2D")]
	[Address(RVA = "0x5E2BAE0", Offset = "0x5E2AAE0", VA = "0x5E2BAE0")]
	private bool IsRwHashEntryChanged(ReaderWriterCount lrwc)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D2E")]
	[Address(RVA = "0x5E2BB00", Offset = "0x5E2AB00", VA = "0x5E2BB00")]
	private ReaderWriterCount GetThreadRWCount(bool dontAllocate)
	{
		return null;
	}

	[Token(Token = "0x6000D2F")]
	[Address(RVA = "0x5E2BC40", Offset = "0x5E2AC40", VA = "0x5E2BC40")]
	public void EnterReadLock()
	{
	}

	[Token(Token = "0x6000D30")]
	[Address(RVA = "0x5E2BC50", Offset = "0x5E2AC50", VA = "0x5E2BC50")]
	public bool TryEnterReadLock(int millisecondsTimeout)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D31")]
	[Address(RVA = "0x5E2BCF0", Offset = "0x5E2ACF0", VA = "0x5E2BCF0")]
	private bool TryEnterReadLock(TimeoutTracker timeout)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D32")]
	[Address(RVA = "0x5E2BD00", Offset = "0x5E2AD00", VA = "0x5E2BD00")]
	private bool TryEnterReadLockCore(TimeoutTracker timeout)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D33")]
	[Address(RVA = "0x5E2C3B0", Offset = "0x5E2B3B0", VA = "0x5E2C3B0")]
	public void EnterWriteLock()
	{
	}

	[Token(Token = "0x6000D34")]
	[Address(RVA = "0x5E2C3C0", Offset = "0x5E2B3C0", VA = "0x5E2C3C0")]
	public bool TryEnterWriteLock(int millisecondsTimeout)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D35")]
	[Address(RVA = "0x5E2C3F0", Offset = "0x5E2B3F0", VA = "0x5E2C3F0")]
	private bool TryEnterWriteLock(TimeoutTracker timeout)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D36")]
	[Address(RVA = "0x5E2C400", Offset = "0x5E2B400", VA = "0x5E2C400")]
	private bool TryEnterWriteLockCore(TimeoutTracker timeout)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D37")]
	[Address(RVA = "0x5E2C8F0", Offset = "0x5E2B8F0", VA = "0x5E2C8F0")]
	public void EnterUpgradeableReadLock()
	{
	}

	[Token(Token = "0x6000D38")]
	[Address(RVA = "0x5E2C900", Offset = "0x5E2B900", VA = "0x5E2C900")]
	public bool TryEnterUpgradeableReadLock(int millisecondsTimeout)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D39")]
	[Address(RVA = "0x5E2C930", Offset = "0x5E2B930", VA = "0x5E2C930")]
	private bool TryEnterUpgradeableReadLock(TimeoutTracker timeout)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D3A")]
	[Address(RVA = "0x5E2C940", Offset = "0x5E2B940", VA = "0x5E2C940")]
	private bool TryEnterUpgradeableReadLockCore(TimeoutTracker timeout)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D3B")]
	[Address(RVA = "0x5E2CCE0", Offset = "0x5E2BCE0", VA = "0x5E2CCE0")]
	public void ExitReadLock()
	{
	}

	[Token(Token = "0x6000D3C")]
	[Address(RVA = "0x5E2CE60", Offset = "0x5E2BE60", VA = "0x5E2CE60")]
	public void ExitWriteLock()
	{
	}

	[Token(Token = "0x6000D3D")]
	[Address(RVA = "0x5E2CFD0", Offset = "0x5E2BFD0", VA = "0x5E2CFD0")]
	public void ExitUpgradeableReadLock()
	{
	}

	[Token(Token = "0x6000D3E")]
	[Address(RVA = "0x5E2C170", Offset = "0x5E2B170", VA = "0x5E2C170")]
	private void LazyCreateEvent(ref EventWaitHandle waitEvent, bool makeAutoResetEvent)
	{
	}

	[Token(Token = "0x6000D3F")]
	[Address(RVA = "0x5E2C270", Offset = "0x5E2B270", VA = "0x5E2C270")]
	private bool WaitOnEvent(EventWaitHandle waitEvent, ref uint numWaiters, TimeoutTracker timeout, bool isWriteWaiter)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D40")]
	[Address(RVA = "0x5E2CE30", Offset = "0x5E2BE30", VA = "0x5E2CE30")]
	private void ExitAndWakeUpAppropriateWaiters()
	{
	}

	[Token(Token = "0x6000D41")]
	[Address(RVA = "0x5E2D1E0", Offset = "0x5E2C1E0", VA = "0x5E2D1E0")]
	private void ExitAndWakeUpAppropriateWaitersPreferringWriters()
	{
	}

	[Token(Token = "0x6000D42")]
	[Address(RVA = "0x5E2D260", Offset = "0x5E2C260", VA = "0x5E2D260")]
	private void ExitAndWakeUpAppropriateReadWaiters()
	{
	}

	[Token(Token = "0x6000D43")]
	[Address(RVA = "0x5E2C8C0", Offset = "0x5E2B8C0", VA = "0x5E2C8C0")]
	private bool IsWriterAcquired()
	{
		return default(bool);
	}

	[Token(Token = "0x6000D44")]
	[Address(RVA = "0x5E2C8D0", Offset = "0x5E2B8D0", VA = "0x5E2C8D0")]
	private void SetWriterAcquired()
	{
	}

	[Token(Token = "0x6000D45")]
	[Address(RVA = "0x5E2CFC0", Offset = "0x5E2BFC0", VA = "0x5E2CFC0")]
	private void ClearWriterAcquired()
	{
	}

	[Token(Token = "0x6000D46")]
	[Address(RVA = "0x5E2D180", Offset = "0x5E2C180", VA = "0x5E2D180")]
	private void SetWritersWaiting()
	{
	}

	[Token(Token = "0x6000D47")]
	[Address(RVA = "0x5E2D300", Offset = "0x5E2C300", VA = "0x5E2D300")]
	private void ClearWritersWaiting()
	{
	}

	[Token(Token = "0x6000D48")]
	[Address(RVA = "0x5E2D190", Offset = "0x5E2C190", VA = "0x5E2D190")]
	private void SetUpgraderWaiting()
	{
	}

	[Token(Token = "0x6000D49")]
	[Address(RVA = "0x5E2D310", Offset = "0x5E2C310", VA = "0x5E2D310")]
	private void ClearUpgraderWaiting()
	{
	}

	[Token(Token = "0x6000D4A")]
	[Address(RVA = "0x5E2C8E0", Offset = "0x5E2B8E0", VA = "0x5E2C8E0")]
	private uint GetNumReaders()
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D4B")]
	[Address(RVA = "0x5E2D320", Offset = "0x5E2C320", VA = "0x5E2D320")]
	private void EnterMyLock()
	{
	}

	[Token(Token = "0x6000D4C")]
	[Address(RVA = "0x5E2D350", Offset = "0x5E2C350", VA = "0x5E2D350")]
	private void EnterMyLockSpin()
	{
	}

	[Token(Token = "0x6000D4D")]
	[Address(RVA = "0x5E2C090", Offset = "0x5E2B090", VA = "0x5E2C090")]
	private void ExitMyLock()
	{
	}

	[Token(Token = "0x6000D4E")]
	[Address(RVA = "0x5E2C0E0", Offset = "0x5E2B0E0", VA = "0x5E2C0E0")]
	private static void SpinWait(int SpinCount)
	{
	}

	[Token(Token = "0x6000D4F")]
	[Address(RVA = "0x5E2D460", Offset = "0x5E2C460", VA = "0x5E2D460", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000D50")]
	[Address(RVA = "0x5E2D470", Offset = "0x5E2C470", VA = "0x5E2D470")]
	private void Dispose(bool disposing)
	{
	}
}
