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

[Token(Token = "0x20002C4")]
internal sealed class FileWebStream : FileStream, ICloseEx
{
	[Token(Token = "0x4000AD7")]
	[FieldOffset(Offset = "0x70")]
	private FileWebRequest m_request;

	[Token(Token = "0x600133A")]
	[Address(RVA = "0x62BDA40", Offset = "0x62BCA40", VA = "0x62BDA40")]
	public FileWebStream(FileWebRequest request, string path, FileMode mode, FileAccess access, FileShare sharing)
	{
	}

	[Token(Token = "0x600133B")]
	[Address(RVA = "0x62BE840", Offset = "0x62BD840", VA = "0x62BE840")]
	public FileWebStream(FileWebRequest request, string path, FileMode mode, FileAccess access, FileShare sharing, int length, bool async)
	{
	}

	[Token(Token = "0x600133C")]
	[Address(RVA = "0x62BE900", Offset = "0x62BD900", VA = "0x62BE900", Slot = "20")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600133D")]
	[Address(RVA = "0x62BE9A0", Offset = "0x62BD9A0", VA = "0x62BE9A0", Slot = "41")]
	private void System_002ENet_002EICloseEx_002ECloseEx(CloseExState closeState)
	{
	}

	[Token(Token = "0x600133E")]
	[Address(RVA = "0x62BE9E0", Offset = "0x62BD9E0", VA = "0x62BE9E0", Slot = "33")]
	public override int Read(byte[] buffer, int offset, int size)
	{
		return default(int);
	}

	[Token(Token = "0x600133F")]
	[Address(RVA = "0x62BEB70", Offset = "0x62BDB70", VA = "0x62BEB70", Slot = "36")]
	public override void Write(byte[] buffer, int offset, int size)
	{
	}

	[Token(Token = "0x6001340")]
	[Address(RVA = "0x62BEC80", Offset = "0x62BDC80", VA = "0x62BEC80", Slot = "23")]
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int size, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6001341")]
	[Address(RVA = "0x62BED90", Offset = "0x62BDD90", VA = "0x62BED90", Slot = "24")]
	public override int EndRead(IAsyncResult ar)
	{
		return default(int);
	}

	[Token(Token = "0x6001342")]
	[Address(RVA = "0x62BEE30", Offset = "0x62BDE30", VA = "0x62BEE30", Slot = "27")]
	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int size, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6001343")]
	[Address(RVA = "0x62BEF40", Offset = "0x62BDF40", VA = "0x62BEF40", Slot = "28")]
	public override void EndWrite(IAsyncResult ar)
	{
	}

	[Token(Token = "0x6001344")]
	[Address(RVA = "0x62BEAF0", Offset = "0x62BDAF0", VA = "0x62BEAF0")]
	private void CheckError()
	{
	}
}
