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
			[Token(Token = "0x6000D50")]
			[Address(RVA = "0x24894F0", Offset = "0x2487AF0", VA = "0x1824894F0")]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x1700029C")]
		public bool IsExpired
		{
			[Token(Token = "0x6000D51")]
			[Address(RVA = "0x24894A0", Offset = "0x2487AA0", VA = "0x1824894A0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000D4F")]
		[Address(RVA = "0x2489420", Offset = "0x2487A20", VA = "0x182489420")]
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
		[Token(Token = "0x6000D46")]
		[Address(RVA = "0x2488DD0", Offset = "0x24873D0", VA = "0x182488DD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000293")]
	public bool IsUpgradeableReadLockHeld
	{
		[Token(Token = "0x6000D47")]
		[Address(RVA = "0x2488E00", Offset = "0x2487400", VA = "0x182488E00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000294")]
	public bool IsWriteLockHeld
	{
		[Token(Token = "0x6000D48")]
		[Address(RVA = "0x2488E60", Offset = "0x2487460", VA = "0x182488E60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000295")]
	public int RecursiveReadCount
	{
		[Token(Token = "0x6000D49")]
		[Address(RVA = "0x2488EC0", Offset = "0x24874C0", VA = "0x182488EC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000296")]
	public int RecursiveUpgradeCount
	{
		[Token(Token = "0x6000D4A")]
		[Address(RVA = "0x2488EE0", Offset = "0x24874E0", VA = "0x182488EE0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000297")]
	public int RecursiveWriteCount
	{
		[Token(Token = "0x6000D4B")]
		[Address(RVA = "0x2488F50", Offset = "0x2487550", VA = "0x182488F50")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000298")]
	public int WaitingReadCount
	{
		[Token(Token = "0x6000D4C")]
		[Address(RVA = "0xD23EC0", Offset = "0xD224C0", VA = "0x180D23EC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000299")]
	public int WaitingUpgradeCount
	{
		[Token(Token = "0x6000D4D")]
		[Address(RVA = "0xBDB280", Offset = "0xBD9880", VA = "0x180BDB280")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700029A")]
	public int WaitingWriteCount
	{
		[Token(Token = "0x6000D4E")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000D1E")]
	[Address(RVA = "0x2487B90", Offset = "0x2486190", VA = "0x182487B90")]
	private void InitializeThreadCounts()
	{
	}

	[Token(Token = "0x6000D1F")]
	[Address(RVA = "0x2488D70", Offset = "0x2487370", VA = "0x182488D70")]
	public ReaderWriterLockSlim()
	{
	}

	[Token(Token = "0x6000D20")]
	[Address(RVA = "0x2488D00", Offset = "0x2487300", VA = "0x182488D00")]
	public ReaderWriterLockSlim(LockRecursionPolicy recursionPolicy)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D21")]
	[Address(RVA = "0x2487BA0", Offset = "0x24861A0", VA = "0x182487BA0")]
	private static bool IsRWEntryEmpty(ReaderWriterCount rwc)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D22")]
	[Address(RVA = "0x2487BE0", Offset = "0x24861E0", VA = "0x182487BE0")]
	private bool IsRwHashEntryChanged(ReaderWriterCount lrwc)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D23")]
	[Address(RVA = "0x2487A50", Offset = "0x2486050", VA = "0x182487A50")]
	private ReaderWriterCount GetThreadRWCount(bool dontAllocate)
	{
		return null;
	}

	[Token(Token = "0x6000D24")]
	[Address(RVA = "0x2487190", Offset = "0x2485790", VA = "0x182487190")]
	public void EnterReadLock()
	{
	}

	[Token(Token = "0x6000D25")]
	[Address(RVA = "0x2488140", Offset = "0x2486740", VA = "0x182488140")]
	public bool TryEnterReadLock(int millisecondsTimeout)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D26")]
	[Address(RVA = "0x24881D0", Offset = "0x24867D0", VA = "0x1824881D0")]
	private bool TryEnterReadLock(TimeoutTracker timeout)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D27")]
	[Address(RVA = "0x2487DC0", Offset = "0x24863C0", VA = "0x182487DC0")]
	private bool TryEnterReadLockCore(TimeoutTracker timeout)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D28")]
	[Address(RVA = "0x24871D0", Offset = "0x24857D0", VA = "0x1824871D0")]
	public void EnterWriteLock()
	{
	}

	[Token(Token = "0x6000D29")]
	[Address(RVA = "0x2488B40", Offset = "0x2487140", VA = "0x182488B40")]
	public bool TryEnterWriteLock(int millisecondsTimeout)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D2A")]
	[Address(RVA = "0x2488B30", Offset = "0x2487130", VA = "0x182488B30")]
	private bool TryEnterWriteLock(TimeoutTracker timeout)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D2B")]
	[Address(RVA = "0x24886B0", Offset = "0x2486CB0", VA = "0x1824886B0")]
	private bool TryEnterWriteLockCore(TimeoutTracker timeout)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D2C")]
	[Address(RVA = "0x24871B0", Offset = "0x24857B0", VA = "0x1824871B0")]
	public void EnterUpgradeableReadLock()
	{
	}

	[Token(Token = "0x6000D2D")]
	[Address(RVA = "0x2488620", Offset = "0x2486C20", VA = "0x182488620")]
	public bool TryEnterUpgradeableReadLock(int millisecondsTimeout)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D2E")]
	[Address(RVA = "0x2488610", Offset = "0x2486C10", VA = "0x182488610")]
	private bool TryEnterUpgradeableReadLock(TimeoutTracker timeout)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D2F")]
	[Address(RVA = "0x24881E0", Offset = "0x24867E0", VA = "0x1824881E0")]
	private bool TryEnterUpgradeableReadLockCore(TimeoutTracker timeout)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D30")]
	[Address(RVA = "0x24873E0", Offset = "0x24859E0", VA = "0x1824873E0")]
	public void ExitReadLock()
	{
	}

	[Token(Token = "0x6000D31")]
	[Address(RVA = "0x2487840", Offset = "0x2485E40", VA = "0x182487840")]
	public void ExitWriteLock()
	{
	}

	[Token(Token = "0x6000D32")]
	[Address(RVA = "0x2487580", Offset = "0x2485B80", VA = "0x182487580")]
	public void ExitUpgradeableReadLock()
	{
	}

	[Token(Token = "0x6000D33")]
	[Address(RVA = "0x2487C10", Offset = "0x2486210", VA = "0x182487C10")]
	private void LazyCreateEvent(ref EventWaitHandle waitEvent, bool makeAutoResetEvent)
	{
	}

	[Token(Token = "0x6000D34")]
	[Address(RVA = "0x2488BD0", Offset = "0x24871D0", VA = "0x182488BD0")]
	private bool WaitOnEvent(EventWaitHandle waitEvent, ref uint numWaiters, TimeoutTracker timeout, bool isWriteWaiter)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D35")]
	[Address(RVA = "0x2487320", Offset = "0x2485920", VA = "0x182487320")]
	private void ExitAndWakeUpAppropriateWaiters()
	{
	}

	[Token(Token = "0x6000D36")]
	[Address(RVA = "0x2487290", Offset = "0x2485890", VA = "0x182487290")]
	private void ExitAndWakeUpAppropriateWaitersPreferringWriters()
	{
	}

	[Token(Token = "0x6000D37")]
	[Address(RVA = "0x24871F0", Offset = "0x24857F0", VA = "0x1824871F0")]
	private void ExitAndWakeUpAppropriateReadWaiters()
	{
	}

	[Token(Token = "0x6000D38")]
	[Address(RVA = "0x2487C00", Offset = "0x2486200", VA = "0x182487C00")]
	private bool IsWriterAcquired()
	{
		return default(bool);
	}

	[Token(Token = "0x6000D39")]
	[Address(RVA = "0x2487D20", Offset = "0x2486320", VA = "0x182487D20")]
	private void SetWriterAcquired()
	{
	}

	[Token(Token = "0x6000D3A")]
	[Address(RVA = "0x2486E10", Offset = "0x2485410", VA = "0x182486E10")]
	private void ClearWriterAcquired()
	{
	}

	[Token(Token = "0x6000D3B")]
	[Address(RVA = "0x2487D30", Offset = "0x2486330", VA = "0x182487D30")]
	private void SetWritersWaiting()
	{
	}

	[Token(Token = "0x6000D3C")]
	[Address(RVA = "0x2486E20", Offset = "0x2485420", VA = "0x182486E20")]
	private void ClearWritersWaiting()
	{
	}

	[Token(Token = "0x6000D3D")]
	[Address(RVA = "0x2487D10", Offset = "0x2486310", VA = "0x182487D10")]
	private void SetUpgraderWaiting()
	{
	}

	[Token(Token = "0x6000D3E")]
	[Address(RVA = "0x2486E00", Offset = "0x2485400", VA = "0x182486E00")]
	private void ClearUpgraderWaiting()
	{
	}

	[Token(Token = "0x6000D3F")]
	[Address(RVA = "0x2487A40", Offset = "0x2486040", VA = "0x182487A40")]
	private uint GetNumReaders()
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000D40")]
	[Address(RVA = "0x2487150", Offset = "0x2485750", VA = "0x182487150")]
	private void EnterMyLock()
	{
	}

	[Token(Token = "0x6000D41")]
	[Address(RVA = "0x24870A0", Offset = "0x24856A0", VA = "0x1824870A0")]
	private void EnterMyLockSpin()
	{
	}

	[Token(Token = "0x6000D42")]
	[Address(RVA = "0x24873C0", Offset = "0x24859C0", VA = "0x1824873C0")]
	private void ExitMyLock()
	{
	}

	[Token(Token = "0x6000D43")]
	[Address(RVA = "0x2487D40", Offset = "0x2486340", VA = "0x182487D40")]
	private static void SpinWait(int SpinCount)
	{
	}

	[Token(Token = "0x6000D44")]
	[Address(RVA = "0x2487090", Offset = "0x2485690", VA = "0x182487090", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000D45")]
	[Address(RVA = "0x2486E30", Offset = "0x2485430", VA = "0x182486E30")]
	private void Dispose(bool disposing)
	{
	}
}
