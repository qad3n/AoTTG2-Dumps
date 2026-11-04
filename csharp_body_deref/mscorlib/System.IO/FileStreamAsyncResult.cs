// ==================== AoTTG2 cross-reference ====================
// Type: System.IO.FileStreamAsyncResult
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x20006A0")]
internal class FileStreamAsyncResult : IAsyncResult
{
	[Token(Token = "0x4001AC4")]
	[FieldOffset(Offset = "0x10")]
	private object state;

	[Token(Token = "0x4001AC5")]
	[FieldOffset(Offset = "0x18")]
	private bool completed;

	[Token(Token = "0x4001AC6")]
	[FieldOffset(Offset = "0x20")]
	private ManualResetEvent wh;

	[Token(Token = "0x4001AC7")]
	[FieldOffset(Offset = "0x28")]
	private AsyncCallback cb;

	[Token(Token = "0x4001AC8")]
	[FieldOffset(Offset = "0x30")]
	private bool completedSynch;

	[Token(Token = "0x4001AC9")]
	[FieldOffset(Offset = "0x34")]
	public int Count;

	[Token(Token = "0x4001ACA")]
	[FieldOffset(Offset = "0x38")]
	public int OriginalCount;

	[Token(Token = "0x4001ACB")]
	[FieldOffset(Offset = "0x3C")]
	public int BytesRead;

	[Token(Token = "0x4001ACC")]
	[FieldOffset(Offset = "0x40")]
	private AsyncCallback realcb;

	[Token(Token = "0x1700083A")]
	public object AsyncState
	{
		[Token(Token = "0x6003358")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700083B")]
	public bool CompletedSynchronously
	{
		[Token(Token = "0x6003359")]
		[Address(RVA = "0xACDD00", Offset = "0xACC300", VA = "0x180ACDD00", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700083C")]
	public WaitHandle AsyncWaitHandle
	{
		[Token(Token = "0x600335A")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700083D")]
	public bool IsCompleted
	{
		[Token(Token = "0x600335B")]
		[Address(RVA = "0x111AD30", Offset = "0x1119330", VA = "0x18111AD30", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003356")]
	[Address(RVA = "0x1AE8980", Offset = "0x1AE6F80", VA = "0x181AE8980")]
	public FileStreamAsyncResult(AsyncCallback cb, object state)
	{
	}

	[Token(Token = "0x6003357")]
	[Address(RVA = "0x1AE88F0", Offset = "0x1AE6EF0", VA = "0x181AE88F0")]
	private static void CBWrapper(IAsyncResult ares)
	{
	}
}
