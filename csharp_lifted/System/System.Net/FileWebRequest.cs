// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.FileWebRequest
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using System.Runtime.Serialization;
using System.Threading;
using Il2CppDummyDll;

namespace System.Net;

[Serializable]
[Token(Token = "0x20002C2")]
public class FileWebRequest : WebRequest, ISerializable
{
	[Token(Token = "0x4000AC2")]
	[FieldOffset(Offset = "0x0")]
	private static WaitCallback s_GetRequestStreamCallback;

	[Token(Token = "0x4000AC3")]
	[FieldOffset(Offset = "0x8")]
	private static WaitCallback s_GetResponseCallback;

	[Token(Token = "0x4000AC4")]
	[FieldOffset(Offset = "0x38")]
	private string m_connectionGroupName;

	[Token(Token = "0x4000AC5")]
	[FieldOffset(Offset = "0x40")]
	private long m_contentLength;

	[Token(Token = "0x4000AC6")]
	[FieldOffset(Offset = "0x48")]
	private ICredentials m_credentials;

	[Token(Token = "0x4000AC7")]
	[FieldOffset(Offset = "0x50")]
	private FileAccess m_fileAccess;

	[Token(Token = "0x4000AC8")]
	[FieldOffset(Offset = "0x58")]
	private WebHeaderCollection m_headers;

	[Token(Token = "0x4000AC9")]
	[FieldOffset(Offset = "0x60")]
	private string m_method;

	[Token(Token = "0x4000ACA")]
	[FieldOffset(Offset = "0x68")]
	private IWebProxy m_proxy;

	[Token(Token = "0x4000ACB")]
	[FieldOffset(Offset = "0x70")]
	private ManualResetEvent m_readerEvent;

	[Token(Token = "0x4000ACC")]
	[FieldOffset(Offset = "0x78")]
	private bool m_readPending;

	[Token(Token = "0x4000ACD")]
	[FieldOffset(Offset = "0x80")]
	private WebResponse m_response;

	[Token(Token = "0x4000ACE")]
	[FieldOffset(Offset = "0x88")]
	private Stream m_stream;

	[Token(Token = "0x4000ACF")]
	[FieldOffset(Offset = "0x90")]
	private bool m_syncHint;

	[Token(Token = "0x4000AD0")]
	[FieldOffset(Offset = "0x94")]
	private int m_timeout;

	[Token(Token = "0x4000AD1")]
	[FieldOffset(Offset = "0x98")]
	private Uri m_uri;

	[Token(Token = "0x4000AD2")]
	[FieldOffset(Offset = "0xA0")]
	private bool m_writePending;

	[Token(Token = "0x4000AD3")]
	[FieldOffset(Offset = "0xA1")]
	private bool m_writing;

	[Token(Token = "0x4000AD4")]
	[FieldOffset(Offset = "0xA8")]
	private LazyAsyncResult m_WriteAResult;

	[Token(Token = "0x4000AD5")]
	[FieldOffset(Offset = "0xB0")]
	private LazyAsyncResult m_ReadAResult;

	[Token(Token = "0x4000AD6")]
	[FieldOffset(Offset = "0xB8")]
	private int m_Aborted;

	[Token(Token = "0x17000437")]
	internal bool Aborted
	{
		[Token(Token = "0x6001324")]
		[Address(RVA = "0x62BCD10", Offset = "0x62BBD10", VA = "0x62BCD10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000438")]
	public override long ContentLength
	{
		[Token(Token = "0x6001325")]
		[Address(RVA = "0x62BCD20", Offset = "0x62BBD20", VA = "0x62BCD20", Slot = "13")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000439")]
	public override ICredentials Credentials
	{
		[Token(Token = "0x6001326")]
		[Address(RVA = "0x62BCD30", Offset = "0x62BBD30", VA = "0x62BCD30", Slot = "14")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001327")]
		[Address(RVA = "0x62BCD40", Offset = "0x62BBD40", VA = "0x62BCD40", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x1700043A")]
	public override WebHeaderCollection Headers
	{
		[Token(Token = "0x6001328")]
		[Address(RVA = "0x62BCD50", Offset = "0x62BBD50", VA = "0x62BCD50", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700043B")]
	public override string Method
	{
		[Token(Token = "0x6001329")]
		[Address(RVA = "0x62BCD60", Offset = "0x62BBD60", VA = "0x62BCD60", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x600132A")]
		[Address(RVA = "0x62BCD70", Offset = "0x62BBD70", VA = "0x62BCD70", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x1700043C")]
	public override IWebProxy Proxy
	{
		[Token(Token = "0x600132B")]
		[Address(RVA = "0x62BCE60", Offset = "0x62BBE60", VA = "0x62BCE60", Slot = "17")]
		get
		{
			return null;
		}
		[Token(Token = "0x600132C")]
		[Address(RVA = "0x62BCE70", Offset = "0x62BBE70", VA = "0x62BCE70", Slot = "18")]
		set
		{
		}
	}

	[Token(Token = "0x1700043D")]
	public override int Timeout
	{
		[Token(Token = "0x600132D")]
		[Address(RVA = "0x62BCE80", Offset = "0x62BBE80", VA = "0x62BCE80", Slot = "19")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700043E")]
	public override Uri RequestUri
	{
		[Token(Token = "0x600132E")]
		[Address(RVA = "0x62BCE90", Offset = "0x62BBE90", VA = "0x62BCE90", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700043F")]
	public override bool UseDefaultCredentials
	{
		[Token(Token = "0x6001335")]
		[Address(RVA = "0x62BE2F0", Offset = "0x62BD2F0", VA = "0x62BE2F0", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001320")]
	[Address(RVA = "0x62BC4C0", Offset = "0x62BB4C0", VA = "0x62BC4C0")]
	internal FileWebRequest(Uri uri)
	{
	}

	[Token(Token = "0x6001321")]
	[Address(RVA = "0x62BC6B0", Offset = "0x62BB6B0", VA = "0x62BC6B0")]
	[Obsolete("Serialization is obsoleted for this type. http://go.microsoft.com/fwlink/?linkid=14202")]
	protected FileWebRequest(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x6001322")]
	[Address(RVA = "0x62BCAB0", Offset = "0x62BBAB0", VA = "0x62BCAB0", Slot = "6")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x6001323")]
	[Address(RVA = "0x62BCAD0", Offset = "0x62BBAD0", VA = "0x62BCAD0", Slot = "7")]
	protected override void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x600132F")]
	[Address(RVA = "0x62BCEA0", Offset = "0x62BBEA0", VA = "0x62BCEA0", Slot = "21")]
	public override IAsyncResult BeginGetResponse(AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6001330")]
	[Address(RVA = "0x62BD180", Offset = "0x62BC180", VA = "0x62BD180", Slot = "22")]
	public override WebResponse EndGetResponse(IAsyncResult asyncResult)
	{
		return null;
	}

	[Token(Token = "0x6001331")]
	[Address(RVA = "0x62BD430", Offset = "0x62BC430", VA = "0x62BD430", Slot = "20")]
	public override WebResponse GetResponse()
	{
		return null;
	}

	[Token(Token = "0x6001332")]
	[Address(RVA = "0x62BD7B0", Offset = "0x62BC7B0", VA = "0x62BD7B0")]
	private static void GetRequestStreamCallback(object state)
	{
	}

	[Token(Token = "0x6001333")]
	[Address(RVA = "0x62BDAD0", Offset = "0x62BCAD0", VA = "0x62BDAD0")]
	private static void GetResponseCallback(object state)
	{
	}

	[Token(Token = "0x6001334")]
	[Address(RVA = "0x62BE220", Offset = "0x62BD220", VA = "0x62BE220")]
	internal void UnblockReader()
	{
	}

	[Token(Token = "0x6001336")]
	[Address(RVA = "0x62BE310", Offset = "0x62BD310", VA = "0x62BE310", Slot = "24")]
	public override void Abort()
	{
	}
}
