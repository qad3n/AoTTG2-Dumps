// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.LockQueue
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x2000247")]
internal class LockQueue
{
	[Token(Token = "0x4000A63")]
	[FieldOffset(Offset = "0x10")]
	private ReaderWriterLock rwlock;

	[Token(Token = "0x4000A64")]
	[FieldOffset(Offset = "0x18")]
	private int lockCount;

	[Token(Token = "0x170001D5")]
	public bool IsEmpty
	{
		[Token(Token = "0x60013AA")]
		[Address(RVA = "0x1BB0390", Offset = "0x1BAE990", VA = "0x181BB0390")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60013A8")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	public LockQueue(ReaderWriterLock rwlock)
	{
	}

	[Token(Token = "0x60013A9")]
	[Address(RVA = "0x1BB00E0", Offset = "0x1BAE6E0", VA = "0x181BB00E0")]
	public bool Wait(int timeout)
	{
		return default(bool);
	}

	[Token(Token = "0x60013AB")]
	[Address(RVA = "0x1BAFF50", Offset = "0x1BAE550", VA = "0x181BAFF50")]
	public void Pulse()
	{
	}
}
