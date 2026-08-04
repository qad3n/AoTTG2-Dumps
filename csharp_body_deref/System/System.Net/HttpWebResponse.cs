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
[Token(Token = "0x20001A0")]
public class HttpWebResponse : WebResponse, ISerializable, IDisposable
{
	[Token(Token = "0x400083F")]
	[FieldOffset(Offset = "0x20")]
	private Uri uri;

	[Token(Token = "0x4000840")]
	[FieldOffset(Offset = "0x28")]
	private WebHeaderCollection webHeaders;

	[Token(Token = "0x4000841")]
	[FieldOffset(Offset = "0x30")]
	private CookieCollection cookieCollection;

	[Token(Token = "0x4000842")]
	[FieldOffset(Offset = "0x38")]
	private string method;

	[Token(Token = "0x4000843")]
	[FieldOffset(Offset = "0x40")]
	private Version version;

	[Token(Token = "0x4000844")]
	[FieldOffset(Offset = "0x48")]
	private HttpStatusCode statusCode;

	[Token(Token = "0x4000845")]
	[FieldOffset(Offset = "0x50")]
	private string statusDescription;

	[Token(Token = "0x4000846")]
	[FieldOffset(Offset = "0x58")]
	private long contentLength;

	[Token(Token = "0x4000847")]
	[FieldOffset(Offset = "0x60")]
	private string contentType;

	[Token(Token = "0x4000848")]
	[FieldOffset(Offset = "0x68")]
	private CookieContainer cookie_container;

	[Token(Token = "0x4000849")]
	[FieldOffset(Offset = "0x70")]
	private bool disposed;

	[Token(Token = "0x400084A")]
	[FieldOffset(Offset = "0x78")]
	private Stream stream;

	[Token(Token = "0x17000258")]
	public override WebHeaderCollection Headers
	{
		[Token(Token = "0x6000A25")]
		[Address(RVA = "0x4989D80", Offset = "0x4989D80", VA = "0x4989D80", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000259")]
	public override Uri ResponseUri
	{
		[Token(Token = "0x6000A26")]
		[Address(RVA = "0x4989D90", Offset = "0x4989D90", VA = "0x4989D90", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700025A")]
	public virtual HttpStatusCode StatusCode
	{
		[Token(Token = "0x6000A27")]
		[Address(RVA = "0x4989E20", Offset = "0x4989E20", VA = "0x4989E20", Slot = "15")]
		get
		{
			return default(HttpStatusCode);
		}
	}

	[Token(Token = "0x1700025B")]
	public virtual string StatusDescription
	{
		[Token(Token = "0x6000A28")]
		[Address(RVA = "0x4989E30", Offset = "0x4989E30", VA = "0x4989E30", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A21")]
	[Address(RVA = "0x4989680", Offset = "0x4989680", VA = "0x4989680")]
	public HttpWebResponse()
	{
	}

	[Token(Token = "0x6000A22")]
	[Address(RVA = "0x4989690", Offset = "0x4989690", VA = "0x4989690")]
	internal HttpWebResponse(Uri uri, string method, HttpStatusCode status, WebHeaderCollection headers)
	{
	}

	[Token(Token = "0x6000A23")]
	[Address(RVA = "0x4988DB0", Offset = "0x4988DB0", VA = "0x4988DB0")]
	internal HttpWebResponse(Uri uri, string method, WebResponseStream stream, CookieContainer container)
	{
	}

	[Token(Token = "0x6000A24")]
	[Address(RVA = "0x49899E0", Offset = "0x49899E0", VA = "0x49899E0")]
	[Obsolete("Serialization is obsoleted for this type", false)]
	protected HttpWebResponse(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x6000A29")]
	[Address(RVA = "0x4989E40", Offset = "0x4989E40", VA = "0x4989E40", Slot = "12")]
	public override Stream GetResponseStream()
	{
		return null;
	}

	[Token(Token = "0x6000A2A")]
	[Address(RVA = "0x4989ED0", Offset = "0x4989ED0", VA = "0x4989ED0", Slot = "6")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x6000A2B")]
	[Address(RVA = "0x4989EF0", Offset = "0x4989EF0", VA = "0x4989EF0", Slot = "8")]
	protected override void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x6000A2C")]
	[Address(RVA = "0x498A070", Offset = "0x498A070", VA = "0x498A070", Slot = "9")]
	public override void Close()
	{
	}

	[Token(Token = "0x6000A2D")]
	[Address(RVA = "0x498A0A0", Offset = "0x498A0A0", VA = "0x498A0A0", Slot = "7")]
	private void System_002EIDisposable_002EDispose()
	{
	}

	[Token(Token = "0x6000A2E")]
	[Address(RVA = "0x498A0C0", Offset = "0x498A0C0", VA = "0x498A0C0", Slot = "10")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000A2F")]
	[Address(RVA = "0x4989DA0", Offset = "0x4989DA0", VA = "0x4989DA0")]
	private void CheckDisposed()
	{
	}

	[Token(Token = "0x6000A30")]
	[Address(RVA = "0x4989770", Offset = "0x4989770", VA = "0x4989770")]
	private void FillCookies()
	{
	}
}
