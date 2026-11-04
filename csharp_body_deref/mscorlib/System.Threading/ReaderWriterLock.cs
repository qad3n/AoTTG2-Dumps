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

[Token(Token = "0x200024A")]
[ComVisible(true)]
public sealed class ReaderWriterLock : CriticalFinalizerObject
{
	[Token(Token = "0x4000A65")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private int seq_num;

	[Token(Token = "0x4000A66")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	private int state;

	[Token(Token = "0x4000A67")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int readers;

	[Token(Token = "0x4000A68")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private int writer_lock_owner;

	[Token(Token = "0x4000A69")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private System.Threading.LockQueue writer_queue;

	[Token(Token = "0x4000A6A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Hashtable reader_locks;

	[Token(Token = "0x60013B3")]
	[Address(RVA = "0x1BB1F30", Offset = "0x1BB0530", VA = "0x181BB1F30")]
	public ReaderWriterLock()
	{
	}

	[Token(Token = "0x60013B4")]
	[Address(RVA = "0x1BB1C20", Offset = "0x1BB0220", VA = "0x181BB1C20", Slot = "1")]
	~ReaderWriterLock()
	{
	}

	[Token(Token = "0x60013B5")]
	[Address(RVA = "0x1BB1C10", Offset = "0x1BB0210", VA = "0x181BB1C10")]
	public void AcquireWriterLock(int millisecondsTimeout)
	{
	}

	[Token(Token = "0x60013B6")]
	[Address(RVA = "0x1BB1A30", Offset = "0x1BB0030", VA = "0x181BB1A30")]
	private void AcquireWriterLock(int millisecondsTimeout, int initialLockCount)
	{
	}

	[Token(Token = "0x60013B7")]
	[Address(RVA = "0x1BB1C90", Offset = "0x1BB0290", VA = "0x181BB1C90")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public void ReleaseWriterLock()
	{
	}

	[Token(Token = "0x60013B8")]
	[Address(RVA = "0x1BB1E80", Offset = "0x1BB0480", VA = "0x181BB1E80")]
	private void ReleaseWriterLock(int releaseCount)
	{
	}

	[Token(Token = "0x60013B9")]
	[Address(RVA = "0x1BB1C60", Offset = "0x1BB0260", VA = "0x181BB1C60")]
	private bool HasWriterLock()
	{
		return default(bool);
	}
}
