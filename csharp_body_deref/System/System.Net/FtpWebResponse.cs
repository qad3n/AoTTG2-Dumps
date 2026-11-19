// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.FtpWebResponse
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x200027C")]
public class FtpWebResponse : WebResponse, IDisposable
{
	[Token(Token = "0x200027D")]
	internal sealed class EmptyStream : MemoryStream
	{
		[Token(Token = "0x6001195")]
		[Address(RVA = "0x62A4BA0", Offset = "0x62A3BA0", VA = "0x62A4BA0")]
		internal EmptyStream()
		{
		}
	}

	[Token(Token = "0x4000967")]
	[FieldOffset(Offset = "0x20")]
	internal Stream _responseStream;

	[Token(Token = "0x4000968")]
	[FieldOffset(Offset = "0x28")]
	private long _contentLength;

	[Token(Token = "0x4000969")]
	[FieldOffset(Offset = "0x30")]
	private Uri _responseUri;

	[Token(Token = "0x400096A")]
	[FieldOffset(Offset = "0x38")]
	private FtpStatusCode _statusCode;

	[Token(Token = "0x400096B")]
	[FieldOffset(Offset = "0x40")]
	private string _statusLine;

	[Token(Token = "0x400096C")]
	[FieldOffset(Offset = "0x48")]
	private WebHeaderCollection _ftpRequestHeaders;

	[Token(Token = "0x400096D")]
	[FieldOffset(Offset = "0x50")]
	private DateTime _lastModified;

	[Token(Token = "0x400096E")]
	[FieldOffset(Offset = "0x58")]
	private string _bannerMessage;

	[Token(Token = "0x400096F")]
	[FieldOffset(Offset = "0x60")]
	private string _welcomeMessage;

	[Token(Token = "0x4000970")]
	[FieldOffset(Offset = "0x68")]
	private string _exitMessage;

	[Token(Token = "0x170003C1")]
	public override WebHeaderCollection Headers
	{
		[Token(Token = "0x6001192")]
		[Address(RVA = "0x62A4E50", Offset = "0x62A3E50", VA = "0x62A4E50", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003C2")]
	public override Uri ResponseUri
	{
		[Token(Token = "0x6001193")]
		[Address(RVA = "0x62A5000", Offset = "0x62A4000", VA = "0x62A5000", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003C3")]
	public FtpStatusCode StatusCode
	{
		[Token(Token = "0x6001194")]
		[Address(RVA = "0x62A5010", Offset = "0x62A4010", VA = "0x62A5010")]
		get
		{
			return default(FtpStatusCode);
		}
	}

	[Token(Token = "0x600118D")]
	[Address(RVA = "0x62A4980", Offset = "0x62A3980", VA = "0x62A4980")]
	internal FtpWebResponse(Stream responseStream, long contentLength, Uri responseUri, FtpStatusCode statusCode, string statusLine, DateTime lastModified, string bannerMessage, string welcomeMessage, string exitMessage)
	{
	}

	[Token(Token = "0x600118E")]
	[Address(RVA = "0x62A4AF0", Offset = "0x62A3AF0", VA = "0x62A4AF0")]
	internal void UpdateStatus(FtpStatusCode statusCode, string statusLine, string exitMessage)
	{
	}

	[Token(Token = "0x600118F")]
	[Address(RVA = "0x62A4B30", Offset = "0x62A3B30", VA = "0x62A4B30", Slot = "12")]
	public override Stream GetResponseStream()
	{
		return null;
	}

	[Token(Token = "0x6001190")]
	[Address(RVA = "0x62A4C70", Offset = "0x62A3C70", VA = "0x62A4C70")]
	internal void SetResponseStream(Stream stream)
	{
	}

	[Token(Token = "0x6001191")]
	[Address(RVA = "0x62A4D10", Offset = "0x62A3D10", VA = "0x62A4D10", Slot = "9")]
	public override void Close()
	{
	}
}
