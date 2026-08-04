// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.ReaderWriterLock
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x3D3BE40", Offset = "0x3D3BE40", VA = "0x3D3BE40")]
	public ReaderWriterLock()
	{
	}

	[Token(Token = "0x6001343")]
	[Address(RVA = "0x3D3BF20", Offset = "0x3D3BF20", VA = "0x3D3BF20", Slot = "1")]
	~ReaderWriterLock()
	{
	}

	[Token(Token = "0x6001344")]
	[Address(RVA = "0x3D3BF30", Offset = "0x3D3BF30", VA = "0x3D3BF30")]
	public void AcquireWriterLock(int millisecondsTimeout)
	{
	}

	[Token(Token = "0x6001345")]
	[Address(RVA = "0x3D3BF40", Offset = "0x3D3BF40", VA = "0x3D3BF40")]
	private void AcquireWriterLock(int millisecondsTimeout, int initialLockCount)
	{
	}

	[Token(Token = "0x6001346")]
	[Address(RVA = "0x3D3C120", Offset = "0x3D3C120", VA = "0x3D3C120")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public void ReleaseWriterLock()
	{
	}

	[Token(Token = "0x6001347")]
	[Address(RVA = "0x3D3C290", Offset = "0x3D3C290", VA = "0x3D3C290")]
	private void ReleaseWriterLock(int releaseCount)
	{
	}

	[Token(Token = "0x6001348")]
	[Address(RVA = "0x3D3C100", Offset = "0x3D3C100", VA = "0x3D3C100")]
	private bool HasWriterLock()
	{
		return default(bool);
	}
}
