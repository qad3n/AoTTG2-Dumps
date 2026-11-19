// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.HttpWebResponse
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Net;

[Serializable]
[Token(Token = "0x20002E9")]
public class HttpWebResponse : WebResponse, ISerializable, IDisposable
{
	[Token(Token = "0x4000B86")]
	[FieldOffset(Offset = "0x20")]
	private Uri uri;

	[Token(Token = "0x4000B87")]
	[FieldOffset(Offset = "0x28")]
	private WebHeaderCollection webHeaders;

	[Token(Token = "0x4000B88")]
	[FieldOffset(Offset = "0x30")]
	private CookieCollection cookieCollection;

	[Token(Token = "0x4000B89")]
	[FieldOffset(Offset = "0x38")]
	private string method;

	[Token(Token = "0x4000B8A")]
	[FieldOffset(Offset = "0x40")]
	private Version version;

	[Token(Token = "0x4000B8B")]
	[FieldOffset(Offset = "0x48")]
	private HttpStatusCode statusCode;

	[Token(Token = "0x4000B8C")]
	[FieldOffset(Offset = "0x50")]
	private string statusDescription;

	[Token(Token = "0x4000B8D")]
	[FieldOffset(Offset = "0x58")]
	private long contentLength;

	[Token(Token = "0x4000B8E")]
	[FieldOffset(Offset = "0x60")]
	private string contentType;

	[Token(Token = "0x4000B8F")]
	[FieldOffset(Offset = "0x68")]
	private CookieContainer cookie_container;

	[Token(Token = "0x4000B90")]
	[FieldOffset(Offset = "0x70")]
	private bool disposed;

	[Token(Token = "0x4000B91")]
	[FieldOffset(Offset = "0x78")]
	private Stream stream;

	[Token(Token = "0x1700047F")]
	public override WebHeaderCollection Headers
	{
		[Token(Token = "0x6001428")]
		[Address(RVA = "0x618C1A0", Offset = "0x618B1A0", VA = "0x618C1A0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000480")]
	public override Uri ResponseUri
	{
		[Token(Token = "0x6001429")]
		[Address(RVA = "0x618C1B0", Offset = "0x618B1B0", VA = "0x618C1B0", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000481")]
	public virtual HttpStatusCode StatusCode
	{
		[Token(Token = "0x600142A")]
		[Address(RVA = "0x618C240", Offset = "0x618B240", VA = "0x618C240", Slot = "15")]
		get
		{
			return default(HttpStatusCode);
		}
	}

	[Token(Token = "0x17000482")]
	public virtual string StatusDescription
	{
		[Token(Token = "0x600142B")]
		[Address(RVA = "0x618C250", Offset = "0x618B250", VA = "0x618C250", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001424")]
	[Address(RVA = "0x618BAF0", Offset = "0x618AAF0", VA = "0x618BAF0")]
	public HttpWebResponse()
	{
	}

	[Token(Token = "0x6001425")]
	[Address(RVA = "0x618BB00", Offset = "0x618AB00", VA = "0x618BB00")]
	internal HttpWebResponse(Uri uri, string method, HttpStatusCode status, WebHeaderCollection headers)
	{
	}

	[Token(Token = "0x6001426")]
	[Address(RVA = "0x618B260", Offset = "0x618A260", VA = "0x618B260")]
	internal HttpWebResponse(Uri uri, string method, WebResponseStream stream, CookieContainer container)
	{
	}

	[Token(Token = "0x6001427")]
	[Address(RVA = "0x618BE00", Offset = "0x618AE00", VA = "0x618BE00")]
	[Obsolete("Serialization is obsoleted for this type", false)]
	protected HttpWebResponse(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x600142C")]
	[Address(RVA = "0x618C260", Offset = "0x618B260", VA = "0x618C260", Slot = "12")]
	public override Stream GetResponseStream()
	{
		return null;
	}

	[Token(Token = "0x600142D")]
	[Address(RVA = "0x618C2F0", Offset = "0x618B2F0", VA = "0x618C2F0", Slot = "6")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x600142E")]
	[Address(RVA = "0x618C310", Offset = "0x618B310", VA = "0x618C310", Slot = "8")]
	protected override void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x600142F")]
	[Address(RVA = "0x618C490", Offset = "0x618B490", VA = "0x618C490", Slot = "9")]
	public override void Close()
	{
	}

	[Token(Token = "0x6001430")]
	[Address(RVA = "0x618C4C0", Offset = "0x618B4C0", VA = "0x618C4C0", Slot = "7")]
	private void System_002EIDisposable_002EDispose()
	{
	}

	[Token(Token = "0x6001431")]
	[Address(RVA = "0x618C4E0", Offset = "0x618B4E0", VA = "0x618C4E0", Slot = "10")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6001432")]
	[Address(RVA = "0x618C1C0", Offset = "0x618B1C0", VA = "0x618C1C0")]
	private void CheckDisposed()
	{
	}

	[Token(Token = "0x6001433")]
	[Address(RVA = "0x618BBE0", Offset = "0x618ABE0", VA = "0x618BBE0")]
	private void FillCookies()
	{
	}
}
