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

[Token(Token = "0x2000303")]
internal sealed class FileWebStream : FileStream, ICloseEx
{
	[Token(Token = "0x4000BA6")]
	[FieldOffset(Offset = "0x70")]
	private FileWebRequest m_request;

	[Token(Token = "0x60014F8")]
	[Address(RVA = "0x27CC080", Offset = "0x27CA680", VA = "0x1827CC080")]
	public FileWebStream(FileWebRequest request, string path, FileMode mode, FileAccess access, FileShare sharing)
	{
	}

	[Token(Token = "0x60014F9")]
	[Address(RVA = "0x27CC110", Offset = "0x27CA710", VA = "0x1827CC110")]
	public FileWebStream(FileWebRequest request, string path, FileMode mode, FileAccess access, FileShare sharing, int length, bool async)
	{
	}

	[Token(Token = "0x60014FA")]
	[Address(RVA = "0x27CBE20", Offset = "0x27CA420", VA = "0x1827CBE20", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60014FB")]
	[Address(RVA = "0x27CBFB0", Offset = "0x27CA5B0", VA = "0x1827CBFB0", Slot = "40")]
	private void System_002ENet_002EICloseEx_002ECloseEx(CloseExState closeState)
	{
	}

	[Token(Token = "0x60014FC")]
	[Address(RVA = "0x27CBF30", Offset = "0x27CA530", VA = "0x1827CBF30", Slot = "32")]
	public override int Read(byte[] buffer, int offset, int size)
	{
		return default(int);
	}

	[Token(Token = "0x60014FD")]
	[Address(RVA = "0x27CC000", Offset = "0x27CA600", VA = "0x1827CC000", Slot = "35")]
	public override void Write(byte[] buffer, int offset, int size)
	{
	}

	[Token(Token = "0x60014FE")]
	[Address(RVA = "0x27CBC60", Offset = "0x27CA260", VA = "0x1827CBC60", Slot = "22")]
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int size, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x60014FF")]
	[Address(RVA = "0x27CBEB0", Offset = "0x27CA4B0", VA = "0x1827CBEB0", Slot = "23")]
	public override int EndRead(IAsyncResult ar)
	{
		return default(int);
	}

	[Token(Token = "0x6001500")]
	[Address(RVA = "0x27CBCF0", Offset = "0x27CA2F0", VA = "0x1827CBCF0", Slot = "26")]
	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int size, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6001501")]
	[Address(RVA = "0x27CBEF0", Offset = "0x27CA4F0", VA = "0x1827CBEF0", Slot = "27")]
	public override void EndWrite(IAsyncResult ar)
	{
	}

	[Token(Token = "0x6001502")]
	[Address(RVA = "0x27CBD80", Offset = "0x27CA380", VA = "0x1827CBD80")]
	private void CheckError()
	{
	}
}
