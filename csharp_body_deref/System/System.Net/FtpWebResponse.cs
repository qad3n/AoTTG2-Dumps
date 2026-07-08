using System.IO;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000133")]
public class FtpWebResponse : WebResponse, IDisposable
{
	[Token(Token = "0x2000134")]
	internal sealed class EmptyStream : MemoryStream
	{
		[Token(Token = "0x6000794")]
		[Address(RVA = "0x4638210", Offset = "0x4638210", VA = "0x4638210")]
		internal EmptyStream()
		{
		}
	}

	[Token(Token = "0x4000620")]
	[FieldOffset(Offset = "0x20")]
	internal Stream _responseStream;

	[Token(Token = "0x4000621")]
	[FieldOffset(Offset = "0x28")]
	private long _contentLength;

	[Token(Token = "0x4000622")]
	[FieldOffset(Offset = "0x30")]
	private Uri _responseUri;

	[Token(Token = "0x4000623")]
	[FieldOffset(Offset = "0x38")]
	private FtpStatusCode _statusCode;

	[Token(Token = "0x4000624")]
	[FieldOffset(Offset = "0x40")]
	private string _statusLine;

	[Token(Token = "0x4000625")]
	[FieldOffset(Offset = "0x48")]
	private WebHeaderCollection _ftpRequestHeaders;

	[Token(Token = "0x4000626")]
	[FieldOffset(Offset = "0x50")]
	private DateTime _lastModified;

	[Token(Token = "0x4000627")]
	[FieldOffset(Offset = "0x58")]
	private string _bannerMessage;

	[Token(Token = "0x4000628")]
	[FieldOffset(Offset = "0x60")]
	private string _welcomeMessage;

	[Token(Token = "0x4000629")]
	[FieldOffset(Offset = "0x68")]
	private string _exitMessage;

	[Token(Token = "0x1700019B")]
	public override WebHeaderCollection Headers
	{
		[Token(Token = "0x6000791")]
		[Address(RVA = "0x46384F0", Offset = "0x46384F0", VA = "0x46384F0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700019C")]
	public override Uri ResponseUri
	{
		[Token(Token = "0x6000792")]
		[Address(RVA = "0x4638610", Offset = "0x4638610", VA = "0x4638610", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700019D")]
	public FtpStatusCode StatusCode
	{
		[Token(Token = "0x6000793")]
		[Address(RVA = "0x4638620", Offset = "0x4638620", VA = "0x4638620")]
		get
		{
			return default(FtpStatusCode);
		}
	}

	[Token(Token = "0x600078C")]
	[Address(RVA = "0x4637770", Offset = "0x4637770", VA = "0x4637770")]
	internal FtpWebResponse(Stream responseStream, long contentLength, Uri responseUri, FtpStatusCode statusCode, string statusLine, DateTime lastModified, string bannerMessage, string welcomeMessage, string exitMessage)
	{
	}

	[Token(Token = "0x600078D")]
	[Address(RVA = "0x4635B50", Offset = "0x4635B50", VA = "0x4635B50")]
	internal void UpdateStatus(FtpStatusCode statusCode, string statusLine, string exitMessage)
	{
	}

	[Token(Token = "0x600078E")]
	[Address(RVA = "0x46381A0", Offset = "0x46381A0", VA = "0x46381A0", Slot = "12")]
	public override Stream GetResponseStream()
	{
		return null;
	}

	[Token(Token = "0x600078F")]
	[Address(RVA = "0x46376D0", Offset = "0x46376D0", VA = "0x46376D0")]
	internal void SetResponseStream(Stream stream)
	{
	}

	[Token(Token = "0x6000790")]
	[Address(RVA = "0x46382E0", Offset = "0x46382E0", VA = "0x46382E0", Slot = "9")]
	public override void Close()
	{
	}
}
