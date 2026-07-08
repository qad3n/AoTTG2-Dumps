using System.Collections;
using System.Runtime.ConstrainedExecution;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x2000219")]
[ComVisible(true)]
public sealed class ReaderWriterLock : CriticalFinalizerObject
{
	[Token(Token = "0x4000A07")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private int seq_num;

	[Token(Token = "0x4000A08")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	private int state;

	[Token(Token = "0x4000A09")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int readers;

	[Token(Token = "0x4000A0A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private int writer_lock_owner;

	[Token(Token = "0x4000A0B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private System.Threading.LockQueue writer_queue;

	[Token(Token = "0x4000A0C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Hashtable reader_locks;

	[Token(Token = "0x6001342")]
	[Address(RVA = "0x5056320", Offset = "0x5056320", VA = "0x5056320")]
	public ReaderWriterLock()
	{
	}

	[Token(Token = "0x6001343")]
	[Address(RVA = "0x5056400", Offset = "0x5056400", VA = "0x5056400", Slot = "1")]
	~ReaderWriterLock()
	{
	}

	[Token(Token = "0x6001344")]
	[Address(RVA = "0x5056410", Offset = "0x5056410", VA = "0x5056410")]
	public void AcquireWriterLock(int millisecondsTimeout)
	{
	}

	[Token(Token = "0x6001345")]
	[Address(RVA = "0x5056420", Offset = "0x5056420", VA = "0x5056420")]
	private void AcquireWriterLock(int millisecondsTimeout, int initialLockCount)
	{
	}

	[Token(Token = "0x6001346")]
	[Address(RVA = "0x5056600", Offset = "0x5056600", VA = "0x5056600")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public void ReleaseWriterLock()
	{
	}

	[Token(Token = "0x6001347")]
	[Address(RVA = "0x5056770", Offset = "0x5056770", VA = "0x5056770")]
	private void ReleaseWriterLock(int releaseCount)
	{
	}

	[Token(Token = "0x6001348")]
	[Address(RVA = "0x50565E0", Offset = "0x50565E0", VA = "0x50565E0")]
	private bool HasWriterLock()
	{
		return default(bool);
	}
}
