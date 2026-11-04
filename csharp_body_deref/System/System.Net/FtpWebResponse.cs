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

[Token(Token = "0x20002BB")]
public class FtpWebResponse : WebResponse, IDisposable
{
	[Token(Token = "0x20002BC")]
	internal sealed class EmptyStream : MemoryStream
	{
		[Token(Token = "0x6001353")]
		[Address(RVA = "0x27C92D0", Offset = "0x27C78D0", VA = "0x1827C92D0")]
		internal EmptyStream()
		{
		}
	}

	[Token(Token = "0x4000A36")]
	[FieldOffset(Offset = "0x20")]
	internal Stream _responseStream;

	[Token(Token = "0x4000A37")]
	[FieldOffset(Offset = "0x28")]
	private long _contentLength;

	[Token(Token = "0x4000A38")]
	[FieldOffset(Offset = "0x30")]
	private Uri _responseUri;

	[Token(Token = "0x4000A39")]
	[FieldOffset(Offset = "0x38")]
	private FtpStatusCode _statusCode;

	[Token(Token = "0x4000A3A")]
	[FieldOffset(Offset = "0x40")]
	private string _statusLine;

	[Token(Token = "0x4000A3B")]
	[FieldOffset(Offset = "0x48")]
	private WebHeaderCollection _ftpRequestHeaders;

	[Token(Token = "0x4000A3C")]
	[FieldOffset(Offset = "0x50")]
	private DateTime _lastModified;

	[Token(Token = "0x4000A3D")]
	[FieldOffset(Offset = "0x58")]
	private string _bannerMessage;

	[Token(Token = "0x4000A3E")]
	[FieldOffset(Offset = "0x60")]
	private string _welcomeMessage;

	[Token(Token = "0x4000A3F")]
	[FieldOffset(Offset = "0x68")]
	private string _exitMessage;

	[Token(Token = "0x170003F0")]
	public override WebHeaderCollection Headers
	{
		[Token(Token = "0x6001350")]
		[Address(RVA = "0x27CC650", Offset = "0x27CAC50", VA = "0x1827CC650", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F1")]
	public override Uri ResponseUri
	{
		[Token(Token = "0x6001351")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F2")]
	public FtpStatusCode StatusCode
	{
		[Token(Token = "0x6001352")]
		[Address(RVA = "0x172E4A0", Offset = "0x172CAA0", VA = "0x18172E4A0")]
		get
		{
			return default(FtpStatusCode);
		}
	}

	[Token(Token = "0x600134B")]
	[Address(RVA = "0x27CC4F0", Offset = "0x27CAAF0", VA = "0x1827CC4F0")]
	internal FtpWebResponse(Stream responseStream, long contentLength, Uri responseUri, FtpStatusCode statusCode, string statusLine, DateTime lastModified, string bannerMessage, string welcomeMessage, string exitMessage)
	{
	}

	[Token(Token = "0x600134C")]
	[Address(RVA = "0x27CC4B0", Offset = "0x27CAAB0", VA = "0x1827CC4B0")]
	internal void UpdateStatus(FtpStatusCode statusCode, string statusLine, string exitMessage)
	{
	}

	[Token(Token = "0x600134D")]
	[Address(RVA = "0x27CC300", Offset = "0x27CA900", VA = "0x1827CC300", Slot = "12")]
	public override Stream GetResponseStream()
	{
		return null;
	}

	[Token(Token = "0x600134E")]
	[Address(RVA = "0x27CC410", Offset = "0x27CAA10", VA = "0x1827CC410")]
	internal void SetResponseStream(Stream stream)
	{
	}

	[Token(Token = "0x600134F")]
	[Address(RVA = "0x27CC210", Offset = "0x27CA810", VA = "0x1827CC210", Slot = "9")]
	public override void Close()
	{
	}
}
