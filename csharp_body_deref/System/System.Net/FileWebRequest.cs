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
[Token(Token = "0x2000301")]
public class FileWebRequest : WebRequest, ISerializable
{
	[Token(Token = "0x4000B91")]
	[FieldOffset(Offset = "0x0")]
	private static WaitCallback s_GetRequestStreamCallback;

	[Token(Token = "0x4000B92")]
	[FieldOffset(Offset = "0x8")]
	private static WaitCallback s_GetResponseCallback;

	[Token(Token = "0x4000B93")]
	[FieldOffset(Offset = "0x38")]
	private string m_connectionGroupName;

	[Token(Token = "0x4000B94")]
	[FieldOffset(Offset = "0x40")]
	private long m_contentLength;

	[Token(Token = "0x4000B95")]
	[FieldOffset(Offset = "0x48")]
	private ICredentials m_credentials;

	[Token(Token = "0x4000B96")]
	[FieldOffset(Offset = "0x50")]
	private FileAccess m_fileAccess;

	[Token(Token = "0x4000B97")]
	[FieldOffset(Offset = "0x58")]
	private WebHeaderCollection m_headers;

	[Token(Token = "0x4000B98")]
	[FieldOffset(Offset = "0x60")]
	private string m_method;

	[Token(Token = "0x4000B99")]
	[FieldOffset(Offset = "0x68")]
	private IWebProxy m_proxy;

	[Token(Token = "0x4000B9A")]
	[FieldOffset(Offset = "0x70")]
	private ManualResetEvent m_readerEvent;

	[Token(Token = "0x4000B9B")]
	[FieldOffset(Offset = "0x78")]
	private bool m_readPending;

	[Token(Token = "0x4000B9C")]
	[FieldOffset(Offset = "0x80")]
	private WebResponse m_response;

	[Token(Token = "0x4000B9D")]
	[FieldOffset(Offset = "0x88")]
	private Stream m_stream;

	[Token(Token = "0x4000B9E")]
	[FieldOffset(Offset = "0x90")]
	private bool m_syncHint;

	[Token(Token = "0x4000B9F")]
	[FieldOffset(Offset = "0x94")]
	private int m_timeout;

	[Token(Token = "0x4000BA0")]
	[FieldOffset(Offset = "0x98")]
	private Uri m_uri;

	[Token(Token = "0x4000BA1")]
	[FieldOffset(Offset = "0xA0")]
	private bool m_writePending;

	[Token(Token = "0x4000BA2")]
	[FieldOffset(Offset = "0xA1")]
	private bool m_writing;

	[Token(Token = "0x4000BA3")]
	[FieldOffset(Offset = "0xA8")]
	private LazyAsyncResult m_WriteAResult;

	[Token(Token = "0x4000BA4")]
	[FieldOffset(Offset = "0xB0")]
	private LazyAsyncResult m_ReadAResult;

	[Token(Token = "0x4000BA5")]
	[FieldOffset(Offset = "0xB8")]
	private int m_Aborted;

	[Token(Token = "0x17000466")]
	internal bool Aborted
	{
		[Token(Token = "0x60014E2")]
		[Address(RVA = "0x27CB170", Offset = "0x27C9770", VA = "0x1827CB170")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000467")]
	public override long ContentLength
	{
		[Token(Token = "0x60014E3")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0", Slot = "13")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000468")]
	public override ICredentials Credentials
	{
		[Token(Token = "0x60014E4")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50", Slot = "14")]
		get
		{
			return null;
		}
		[Token(Token = "0x60014E5")]
		[Address(RVA = "0xF1DB10", Offset = "0xF1C110", VA = "0x180F1DB10", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x17000469")]
	public override WebHeaderCollection Headers
	{
		[Token(Token = "0x60014E6")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700046A")]
	public override string Method
	{
		[Token(Token = "0x60014E7")]
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x60014E8")]
		[Address(RVA = "0x27CB1B0", Offset = "0x27C97B0", VA = "0x1827CB1B0", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x1700046B")]
	public override IWebProxy Proxy
	{
		[Token(Token = "0x60014E9")]
		[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0", Slot = "17")]
		get
		{
			return null;
		}
		[Token(Token = "0x60014EA")]
		[Address(RVA = "0xB48790", Offset = "0xB46D90", VA = "0x180B48790", Slot = "18")]
		set
		{
		}
	}

	[Token(Token = "0x1700046C")]
	public override int Timeout
	{
		[Token(Token = "0x60014EB")]
		[Address(RVA = "0xB5B910", Offset = "0xB59F10", VA = "0x180B5B910", Slot = "19")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700046D")]
	public override Uri RequestUri
	{
		[Token(Token = "0x60014EC")]
		[Address(RVA = "0x58A580", Offset = "0x588B80", VA = "0x18058A580", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700046E")]
	public override bool UseDefaultCredentials
	{
		[Token(Token = "0x60014F3")]
		[Address(RVA = "0x27CB180", Offset = "0x27C9780", VA = "0x1827CB180", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60014DE")]
	[Address(RVA = "0x27CAB70", Offset = "0x27C9170", VA = "0x1827CAB70")]
	internal FileWebRequest(Uri uri)
	{
	}

	[Token(Token = "0x60014DF")]
	[Address(RVA = "0x27CAD70", Offset = "0x27C9370", VA = "0x1827CAD70")]
	[Obsolete("Serialization is obsoleted for this type. http://go.microsoft.com/fwlink/?linkid=14202")]
	protected FileWebRequest(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x60014E0")]
	[Address(RVA = "0x27CA9B0", Offset = "0x27C8FB0", VA = "0x1827CA9B0", Slot = "6")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x60014E1")]
	[Address(RVA = "0x27C9FD0", Offset = "0x27C85D0", VA = "0x1827C9FD0", Slot = "7")]
	protected override void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x60014ED")]
	[Address(RVA = "0x27C9AF0", Offset = "0x27C80F0", VA = "0x1827C9AF0", Slot = "21")]
	public override IAsyncResult BeginGetResponse(AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x60014EE")]
	[Address(RVA = "0x27C9DB0", Offset = "0x27C83B0", VA = "0x1827C9DB0", Slot = "22")]
	public override WebResponse EndGetResponse(IAsyncResult asyncResult)
	{
		return null;
	}

	[Token(Token = "0x60014EF")]
	[Address(RVA = "0x27CA750", Offset = "0x27C8D50", VA = "0x1827CA750", Slot = "20")]
	public override WebResponse GetResponse()
	{
		return null;
	}

	[Token(Token = "0x60014F0")]
	[Address(RVA = "0x27CA1F0", Offset = "0x27C87F0", VA = "0x1827CA1F0")]
	private static void GetRequestStreamCallback(object state)
	{
	}

	[Token(Token = "0x60014F1")]
	[Address(RVA = "0x27CA430", Offset = "0x27C8A30", VA = "0x1827CA430")]
	private static void GetResponseCallback(object state)
	{
	}

	[Token(Token = "0x60014F2")]
	[Address(RVA = "0x27CA9E0", Offset = "0x27C8FE0", VA = "0x1827CA9E0")]
	internal void UnblockReader()
	{
	}

	[Token(Token = "0x60014F4")]
	[Address(RVA = "0x27C9880", Offset = "0x27C7E80", VA = "0x1827C9880", Slot = "24")]
	public override void Abort()
	{
	}
}
