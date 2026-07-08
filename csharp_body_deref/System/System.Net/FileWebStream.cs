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
	[Address(RVA = "0x4652B10", Offset = "0x4652B10", VA = "0x4652B10")]
	public FileWebStream(FileWebRequest request, string path, FileMode mode, FileAccess access, FileShare sharing)
	{
	}

	[Token(Token = "0x6000939")]
	[Address(RVA = "0x4653A40", Offset = "0x4653A40", VA = "0x4653A40")]
	public FileWebStream(FileWebRequest request, string path, FileMode mode, FileAccess access, FileShare sharing, int length, bool async)
	{
	}

	[Token(Token = "0x600093A")]
	[Address(RVA = "0x4653B00", Offset = "0x4653B00", VA = "0x4653B00", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600093B")]
	[Address(RVA = "0x4653BB0", Offset = "0x4653BB0", VA = "0x4653BB0", Slot = "40")]
	private void System_002ENet_002EICloseEx_002ECloseEx(CloseExState closeState)
	{
	}

	[Token(Token = "0x600093C")]
	[Address(RVA = "0x4653BF0", Offset = "0x4653BF0", VA = "0x4653BF0", Slot = "32")]
	public override int Read(byte[] buffer, int offset, int size)
	{
		return default(int);
	}

	[Token(Token = "0x600093D")]
	[Address(RVA = "0x4653D30", Offset = "0x4653D30", VA = "0x4653D30", Slot = "35")]
	public override void Write(byte[] buffer, int offset, int size)
	{
	}

	[Token(Token = "0x600093E")]
	[Address(RVA = "0x4653DF0", Offset = "0x4653DF0", VA = "0x4653DF0", Slot = "22")]
	public override IAsyncResult BeginRead(byte[] buffer, int offset, int size, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x600093F")]
	[Address(RVA = "0x4653EC0", Offset = "0x4653EC0", VA = "0x4653EC0", Slot = "23")]
	public override int EndRead(IAsyncResult ar)
	{
		return default(int);
	}

	[Token(Token = "0x6000940")]
	[Address(RVA = "0x4653F60", Offset = "0x4653F60", VA = "0x4653F60", Slot = "26")]
	public override IAsyncResult BeginWrite(byte[] buffer, int offset, int size, AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6000941")]
	[Address(RVA = "0x4654030", Offset = "0x4654030", VA = "0x4654030", Slot = "27")]
	public override void EndWrite(IAsyncResult ar)
	{
	}

	[Token(Token = "0x6000942")]
	[Address(RVA = "0x4653CB0", Offset = "0x4653CB0", VA = "0x4653CB0")]
	private void CheckError()
	{
	}
}
