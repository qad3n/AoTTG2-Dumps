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

[Token(Token = "0x2000133")]
public class FtpWebResponse : WebResponse, IDisposable
{
	[Token(Token = "0x2000134")]
	internal sealed class EmptyStream : MemoryStream
	{
		[Token(Token = "0x6000794")]
		[Address(RVA = "0x495D310", Offset = "0x495D310", VA = "0x495D310")]
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
		[Address(RVA = "0x495D5F0", Offset = "0x495D5F0", VA = "0x495D5F0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700019C")]
	public override Uri ResponseUri
	{
		[Token(Token = "0x6000792")]
		[Address(RVA = "0x495D710", Offset = "0x495D710", VA = "0x495D710", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700019D")]
	public FtpStatusCode StatusCode
	{
		[Token(Token = "0x6000793")]
		[Address(RVA = "0x495D720", Offset = "0x495D720", VA = "0x495D720")]
		get
		{
			return default(FtpStatusCode);
		}
	}

	[Token(Token = "0x600078C")]
	[Address(RVA = "0x495C870", Offset = "0x495C870", VA = "0x495C870")]
	internal FtpWebResponse(Stream responseStream, long contentLength, Uri responseUri, FtpStatusCode statusCode, string statusLine, DateTime lastModified, string bannerMessage, string welcomeMessage, string exitMessage)
	{
	}

	[Token(Token = "0x600078D")]
	[Address(RVA = "0x495AC50", Offset = "0x495AC50", VA = "0x495AC50")]
	internal void UpdateStatus(FtpStatusCode statusCode, string statusLine, string exitMessage)
	{
	}

	[Token(Token = "0x600078E")]
	[Address(RVA = "0x495D2A0", Offset = "0x495D2A0", VA = "0x495D2A0", Slot = "12")]
	public override Stream GetResponseStream()
	{
		return null;
	}

	[Token(Token = "0x600078F")]
	[Address(RVA = "0x495C7D0", Offset = "0x495C7D0", VA = "0x495C7D0")]
	internal void SetResponseStream(Stream stream)
	{
	}

	[Token(Token = "0x6000790")]
	[Address(RVA = "0x495D3E0", Offset = "0x495D3E0", VA = "0x495D3E0", Slot = "9")]
	public override void Close()
	{
	}
}
