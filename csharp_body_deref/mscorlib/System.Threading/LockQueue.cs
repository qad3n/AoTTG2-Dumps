// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.LockQueue
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x200021F")]
internal class LockQueue
{
	[Token(Token = "0x40009C1")]
	[FieldOffset(Offset = "0x10")]
	private ReaderWriterLock rwlock;

	[Token(Token = "0x40009C2")]
	[FieldOffset(Offset = "0x18")]
	private int lockCount;

	[Token(Token = "0x170001D4")]
	public bool IsEmpty
	{
		[Token(Token = "0x6001381")]
		[Address(RVA = "0x553E420", Offset = "0x553D420", VA = "0x553E420")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600137F")]
	[Address(RVA = "0x553E240", Offset = "0x553D240", VA = "0x553E240")]
	public LockQueue(ReaderWriterLock rwlock)
	{
	}

	[Token(Token = "0x6001380")]
	[Address(RVA = "0x553E270", Offset = "0x553D270", VA = "0x553E270")]
	public bool Wait(int timeout)
	{
		return default(bool);
	}

	[Token(Token = "0x6001382")]
	[Address(RVA = "0x553E4D0", Offset = "0x553D4D0", VA = "0x553E4D0")]
	public void Pulse()
	{
	}
}
