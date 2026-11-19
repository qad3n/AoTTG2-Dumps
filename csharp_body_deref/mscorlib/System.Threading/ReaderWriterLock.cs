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

[Token(Token = "0x2000222")]
[ComVisible(true)]
public sealed class ReaderWriterLock : CriticalFinalizerObject
{
	[Token(Token = "0x40009C3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private int seq_num;

	[Token(Token = "0x40009C4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	private int state;

	[Token(Token = "0x40009C5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int readers;

	[Token(Token = "0x40009C6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private int writer_lock_owner;

	[Token(Token = "0x40009C7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private System.Threading.LockQueue writer_queue;

	[Token(Token = "0x40009C8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Hashtable reader_locks;

	[Token(Token = "0x600138A")]
	[Address(RVA = "0x553E7D0", Offset = "0x553D7D0", VA = "0x553E7D0")]
	public ReaderWriterLock()
	{
	}

	[Token(Token = "0x600138B")]
	[Address(RVA = "0x553E8B0", Offset = "0x553D8B0", VA = "0x553E8B0", Slot = "1")]
	~ReaderWriterLock()
	{
	}

	[Token(Token = "0x600138C")]
	[Address(RVA = "0x553E8C0", Offset = "0x553D8C0", VA = "0x553E8C0")]
	public void AcquireWriterLock(int millisecondsTimeout)
	{
	}

	[Token(Token = "0x600138D")]
	[Address(RVA = "0x553E8D0", Offset = "0x553D8D0", VA = "0x553E8D0")]
	private void AcquireWriterLock(int millisecondsTimeout, int initialLockCount)
	{
	}

	[Token(Token = "0x600138E")]
	[Address(RVA = "0x553EA70", Offset = "0x553DA70", VA = "0x553EA70")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public void ReleaseWriterLock()
	{
	}

	[Token(Token = "0x600138F")]
	[Address(RVA = "0x553EBC0", Offset = "0x553DBC0", VA = "0x553EBC0")]
	private void ReleaseWriterLock(int releaseCount)
	{
	}

	[Token(Token = "0x6001390")]
	[Address(RVA = "0x553EA50", Offset = "0x553DA50", VA = "0x553EA50")]
	private bool HasWriterLock()
	{
		return default(bool);
	}
}
