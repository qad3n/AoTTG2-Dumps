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

[Token(Token = "0x200067A")]
internal class FileStreamAsyncResult : IAsyncResult
{
	[Token(Token = "0x4001A2A")]
	[FieldOffset(Offset = "0x10")]
	private object state;

	[Token(Token = "0x4001A2B")]
	[FieldOffset(Offset = "0x18")]
	private bool completed;

	[Token(Token = "0x4001A2C")]
	[FieldOffset(Offset = "0x20")]
	private ManualResetEvent wh;

	[Token(Token = "0x4001A2D")]
	[FieldOffset(Offset = "0x28")]
	private AsyncCallback cb;

	[Token(Token = "0x4001A2E")]
	[FieldOffset(Offset = "0x30")]
	private bool completedSynch;

	[Token(Token = "0x4001A2F")]
	[FieldOffset(Offset = "0x34")]
	public int Count;

	[Token(Token = "0x4001A30")]
	[FieldOffset(Offset = "0x38")]
	public int OriginalCount;

	[Token(Token = "0x4001A31")]
	[FieldOffset(Offset = "0x3C")]
	public int BytesRead;

	[Token(Token = "0x4001A32")]
	[FieldOffset(Offset = "0x40")]
	private AsyncCallback realcb;

	[Token(Token = "0x1700083A")]
	public object AsyncState
	{
		[Token(Token = "0x6003326")]
		[Address(RVA = "0x548AA70", Offset = "0x5489A70", VA = "0x548AA70", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700083B")]
	public bool CompletedSynchronously
	{
		[Token(Token = "0x6003327")]
		[Address(RVA = "0x548AA80", Offset = "0x5489A80", VA = "0x548AA80", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700083C")]
	public WaitHandle AsyncWaitHandle
	{
		[Token(Token = "0x6003328")]
		[Address(RVA = "0x548AA90", Offset = "0x5489A90", VA = "0x548AA90", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700083D")]
	public bool IsCompleted
	{
		[Token(Token = "0x6003329")]
		[Address(RVA = "0x548AAA0", Offset = "0x5489AA0", VA = "0x548AAA0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003324")]
	[Address(RVA = "0x54899A0", Offset = "0x54889A0", VA = "0x54899A0")]
	public FileStreamAsyncResult(AsyncCallback cb, object state)
	{
	}

	[Token(Token = "0x6003325")]
	[Address(RVA = "0x548A9F0", Offset = "0x54899F0", VA = "0x548A9F0")]
	private static void CBWrapper(IAsyncResult ares)
	{
	}
}
