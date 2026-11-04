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
[Token(Token = "0x2000328")]
public class HttpWebResponse : WebResponse, ISerializable, IDisposable
{
	[Token(Token = "0x4000C55")]
	[FieldOffset(Offset = "0x20")]
	private Uri uri;

	[Token(Token = "0x4000C56")]
	[FieldOffset(Offset = "0x28")]
	private WebHeaderCollection webHeaders;

	[Token(Token = "0x4000C57")]
	[FieldOffset(Offset = "0x30")]
	private CookieCollection cookieCollection;

	[Token(Token = "0x4000C58")]
	[FieldOffset(Offset = "0x38")]
	private string method;

	[Token(Token = "0x4000C59")]
	[FieldOffset(Offset = "0x40")]
	private Version version;

	[Token(Token = "0x4000C5A")]
	[FieldOffset(Offset = "0x48")]
	private HttpStatusCode statusCode;

	[Token(Token = "0x4000C5B")]
	[FieldOffset(Offset = "0x50")]
	private string statusDescription;

	[Token(Token = "0x4000C5C")]
	[FieldOffset(Offset = "0x58")]
	private long contentLength;

	[Token(Token = "0x4000C5D")]
	[FieldOffset(Offset = "0x60")]
	private string contentType;

	[Token(Token = "0x4000C5E")]
	[FieldOffset(Offset = "0x68")]
	private CookieContainer cookie_container;

	[Token(Token = "0x4000C5F")]
	[FieldOffset(Offset = "0x70")]
	private bool disposed;

	[Token(Token = "0x4000C60")]
	[FieldOffset(Offset = "0x78")]
	private Stream stream;

	[Token(Token = "0x170004AE")]
	public override WebHeaderCollection Headers
	{
		[Token(Token = "0x60015E6")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004AF")]
	public override Uri ResponseUri
	{
		[Token(Token = "0x60015E7")]
		[Address(RVA = "0x27E6990", Offset = "0x27E4F90", VA = "0x1827E6990", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004B0")]
	public virtual HttpStatusCode StatusCode
	{
		[Token(Token = "0x60015E8")]
		[Address(RVA = "0xB3DFC0", Offset = "0xB3C5C0", VA = "0x180B3DFC0", Slot = "15")]
		get
		{
			return default(HttpStatusCode);
		}
	}

	[Token(Token = "0x170004B1")]
	public virtual string StatusDescription
	{
		[Token(Token = "0x60015E9")]
		[Address(RVA = "0x27E69B0", Offset = "0x27E4FB0", VA = "0x1827E69B0", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60015E2")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public HttpWebResponse()
	{
	}

	[Token(Token = "0x60015E3")]
	[Address(RVA = "0x27E61F0", Offset = "0x27E47F0", VA = "0x1827E61F0")]
	internal HttpWebResponse(Uri uri, string method, HttpStatusCode status, WebHeaderCollection headers)
	{
	}

	[Token(Token = "0x60015E4")]
	[Address(RVA = "0x27E66D0", Offset = "0x27E4CD0", VA = "0x1827E66D0")]
	internal HttpWebResponse(Uri uri, string method, WebResponseStream stream, CookieContainer container)
	{
	}

	[Token(Token = "0x60015E5")]
	[Address(RVA = "0x27E62D0", Offset = "0x27E48D0", VA = "0x1827E62D0")]
	[Obsolete("Serialization is obsoleted for this type", false)]
	protected HttpWebResponse(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x60015EA")]
	[Address(RVA = "0x27E6130", Offset = "0x27E4730", VA = "0x1827E6130", Slot = "12")]
	public override Stream GetResponseStream()
	{
		return null;
	}

	[Token(Token = "0x60015EB")]
	[Address(RVA = "0x27CB5E0", Offset = "0x27C9BE0", VA = "0x1827CB5E0", Slot = "6")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x60015EC")]
	[Address(RVA = "0x27E5FC0", Offset = "0x27E45C0", VA = "0x1827E5FC0", Slot = "8")]
	protected override void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x60015ED")]
	[Address(RVA = "0x27E5DE0", Offset = "0x27E43E0", VA = "0x1827E5DE0", Slot = "9")]
	public override void Close()
	{
	}

	[Token(Token = "0x60015EE")]
	[Address(RVA = "0x27E61D0", Offset = "0x27E47D0", VA = "0x1827E61D0", Slot = "7")]
	private void System_002EIDisposable_002EDispose()
	{
	}

	[Token(Token = "0x60015EF")]
	[Address(RVA = "0x27E5E20", Offset = "0x27E4420", VA = "0x1827E5E20", Slot = "10")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60015F0")]
	[Address(RVA = "0x27E5D50", Offset = "0x27E4350", VA = "0x1827E5D50")]
	private void CheckDisposed()
	{
	}

	[Token(Token = "0x60015F1")]
	[Address(RVA = "0x27E5E30", Offset = "0x27E4430", VA = "0x1827E5E30")]
	private void FillCookies()
	{
	}
}
