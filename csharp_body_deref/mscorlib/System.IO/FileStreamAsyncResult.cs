using System.Threading;
using Il2CppDummyDll;

namespace System.IO;

[Token(Token = "0x2000578")]
internal class FileStreamAsyncResult : IAsyncResult
{
	[Token(Token = "0x40016E9")]
	[FieldOffset(Offset = "0x10")]
	private object state;

	[Token(Token = "0x40016EA")]
	[FieldOffset(Offset = "0x18")]
	private bool completed;

	[Token(Token = "0x40016EB")]
	[FieldOffset(Offset = "0x20")]
	private ManualResetEvent wh;

	[Token(Token = "0x40016EC")]
	[FieldOffset(Offset = "0x28")]
	private AsyncCallback cb;

	[Token(Token = "0x40016ED")]
	[FieldOffset(Offset = "0x30")]
	private bool completedSynch;

	[Token(Token = "0x40016EE")]
	[FieldOffset(Offset = "0x34")]
	public int Count;

	[Token(Token = "0x40016EF")]
	[FieldOffset(Offset = "0x38")]
	public int OriginalCount;

	[Token(Token = "0x40016F0")]
	[FieldOffset(Offset = "0x3C")]
	public int BytesRead;

	[Token(Token = "0x40016F1")]
	[FieldOffset(Offset = "0x40")]
	private AsyncCallback realcb;

	[Token(Token = "0x17000624")]
	public object AsyncState
	{
		[Token(Token = "0x6002A93")]
		[Address(RVA = "0x4F4C5E0", Offset = "0x4F4C5E0", VA = "0x4F4C5E0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000625")]
	public bool CompletedSynchronously
	{
		[Token(Token = "0x6002A94")]
		[Address(RVA = "0x4F4C5F0", Offset = "0x4F4C5F0", VA = "0x4F4C5F0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000626")]
	public WaitHandle AsyncWaitHandle
	{
		[Token(Token = "0x6002A95")]
		[Address(RVA = "0x4F4C600", Offset = "0x4F4C600", VA = "0x4F4C600", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000627")]
	public bool IsCompleted
	{
		[Token(Token = "0x6002A96")]
		[Address(RVA = "0x4F4C610", Offset = "0x4F4C610", VA = "0x4F4C610", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002A91")]
	[Address(RVA = "0x4F4B510", Offset = "0x4F4B510", VA = "0x4F4B510")]
	public FileStreamAsyncResult(AsyncCallback cb, object state)
	{
	}

	[Token(Token = "0x6002A92")]
	[Address(RVA = "0x4F4C560", Offset = "0x4F4C560", VA = "0x4F4C560")]
	private static void CBWrapper(IAsyncResult ares)
	{
	}
}
