// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.FileWebStream
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x200017B")]
internal sealed class FileWebStream : FileStream, ICloseEx
{
	[Token(Token = "0x4000790")]
	[FieldOffset(Offset = "0x70")]
	private FileWebRequest m_request;

	[Token(Token = "0x6000938")]
	[Address(RVA = "0x4977C10", Offset = "0x4977C10", VA = "0x4977C10")]
	public FileWebStream(FileWebRequest request, string path, FileMode mode, FileAccess access, FileShare sharing)
	{
	}

	[Token(Token = "0x6000939")]
	[Address(RVA = "0x4978B40", Offset = "0x4978B40", VA = "0x4978B40")]
	public FileWebStream(FileWebRequest request, string path, FileMode mode, FileAccess access, FileShare sharing, int length, bool async)
	{
	}

	[Token(Token = "0x600093A")]
	[Address(RVA = "0x4978C00", Offset = "0x4978C00", VA = "0x4978C00", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600093B")]
	[Address(RVA = "0x4978CB0", Offset = "0x4978CB0", VA = "0x4978CB0", Slot = "40")]
	private void System_002ENet_002EICloseEx_002ECloseEx(CloseExState closeState)
	{
	}

	[Token(Token = "0x600093C")]
	[Address(RVA = "0x4978CF0", Offset = "0x4978CF0", VA = "0x4978CF0", Slot = "32")]
	public override int Read(byte[] buffer, int offset, int size)
	{
		return default(int);
	}

	[Token(Token = "0x600093D")]
	[Address(RVA = "0x4978E30", Offset = "0x4978E30", VA = "0x4978E30", Slot = "35")]
	public override void Write(byte[] buffer, int offset, int size)
	{
	}

	[Token(Token = "0x600093E")]
	[Address(RVA = "0x4978EF0", Offset = "0x4978EF0", VA = "0x4978EF0", Slot = "22")]
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int size, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x600093F")]
	[Address(RVA = "0x4978FC0", Offset = "0x4978FC0", VA = "0x4978FC0", Slot = "23")]
	public override int EndRead(IAsyncResult ar)
	{
		return default(int);
	}

	[Token(Token = "0x6000940")]
	[Address(RVA = "0x4979060", Offset = "0x4979060", VA = "0x4979060", Slot = "26")]
	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int size, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6000941")]
	[Address(RVA = "0x4979130", Offset = "0x4979130", VA = "0x4979130", Slot = "27")]
	public override void EndWrite(IAsyncResult ar)
	{
	}

	[Token(Token = "0x6000942")]
	[Address(RVA = "0x4978DB0", Offset = "0x4978DB0", VA = "0x4978DB0")]
	private void CheckError()
	{
	}
}
