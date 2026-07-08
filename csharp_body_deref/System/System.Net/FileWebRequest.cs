using System.IO;
using System.Runtime.Serialization;
using System.Threading;
using Il2CppDummyDll;

namespace System.Net;

[Serializable]
[Token(Token = "0x2000179")]
public class FileWebRequest : WebRequest, ISerializable
{
	[Token(Token = "0x400077B")]
	[FieldOffset(Offset = "0x0")]
	private static WaitCallback s_GetRequestStreamCallback;

	[Token(Token = "0x400077C")]
	[FieldOffset(Offset = "0x8")]
	private static WaitCallback s_GetResponseCallback;

	[Token(Token = "0x400077D")]
	[FieldOffset(Offset = "0x38")]
	private string m_connectionGroupName;

	[Token(Token = "0x400077E")]
	[FieldOffset(Offset = "0x40")]
	private long m_contentLength;

	[Token(Token = "0x400077F")]
	[FieldOffset(Offset = "0x48")]
	private ICredentials m_credentials;

	[Token(Token = "0x4000780")]
	[FieldOffset(Offset = "0x50")]
	private FileAccess m_fileAccess;

	[Token(Token = "0x4000781")]
	[FieldOffset(Offset = "0x58")]
	private WebHeaderCollection m_headers;

	[Token(Token = "0x4000782")]
	[FieldOffset(Offset = "0x60")]
	private string m_method;

	[Token(Token = "0x4000783")]
	[FieldOffset(Offset = "0x68")]
	private IWebProxy m_proxy;

	[Token(Token = "0x4000784")]
	[FieldOffset(Offset = "0x70")]
	private ManualResetEvent m_readerEvent;

	[Token(Token = "0x4000785")]
	[FieldOffset(Offset = "0x78")]
	private bool m_readPending;

	[Token(Token = "0x4000786")]
	[FieldOffset(Offset = "0x80")]
	private WebResponse m_response;

	[Token(Token = "0x4000787")]
	[FieldOffset(Offset = "0x88")]
	private Stream m_stream;

	[Token(Token = "0x4000788")]
	[FieldOffset(Offset = "0x90")]
	private bool m_syncHint;

	[Token(Token = "0x4000789")]
	[FieldOffset(Offset = "0x94")]
	private int m_timeout;

	[Token(Token = "0x400078A")]
	[FieldOffset(Offset = "0x98")]
	private Uri m_uri;

	[Token(Token = "0x400078B")]
	[FieldOffset(Offset = "0xA0")]
	private bool m_writePending;

	[Token(Token = "0x400078C")]
	[FieldOffset(Offset = "0xA1")]
	private bool m_writing;

	[Token(Token = "0x400078D")]
	[FieldOffset(Offset = "0xA8")]
	private LazyAsyncResult m_WriteAResult;

	[Token(Token = "0x400078E")]
	[FieldOffset(Offset = "0xB0")]
	private LazyAsyncResult m_ReadAResult;

	[Token(Token = "0x400078F")]
	[FieldOffset(Offset = "0xB8")]
	private int m_Aborted;

	[Token(Token = "0x17000211")]
	internal bool Aborted
	{
		[Token(Token = "0x6000922")]
		[Address(RVA = "0x4651C30", Offset = "0x4651C30", VA = "0x4651C30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000212")]
	public override long ContentLength
	{
		[Token(Token = "0x6000923")]
		[Address(RVA = "0x4651C40", Offset = "0x4651C40", VA = "0x4651C40", Slot = "13")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000213")]
	public override ICredentials Credentials
	{
		[Token(Token = "0x6000924")]
		[Address(RVA = "0x4651C50", Offset = "0x4651C50", VA = "0x4651C50", Slot = "14")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000925")]
		[Address(RVA = "0x4651C60", Offset = "0x4651C60", VA = "0x4651C60", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x17000214")]
	public override WebHeaderCollection Headers
	{
		[Token(Token = "0x6000926")]
		[Address(RVA = "0x4651C70", Offset = "0x4651C70", VA = "0x4651C70", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000215")]
	public override string Method
	{
		[Token(Token = "0x6000927")]
		[Address(RVA = "0x4651C80", Offset = "0x4651C80", VA = "0x4651C80", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000928")]
		[Address(RVA = "0x4651C90", Offset = "0x4651C90", VA = "0x4651C90", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x17000216")]
	public override IWebProxy Proxy
	{
		[Token(Token = "0x6000929")]
		[Address(RVA = "0x4651D60", Offset = "0x4651D60", VA = "0x4651D60", Slot = "17")]
		get
		{
			return null;
		}
		[Token(Token = "0x600092A")]
		[Address(RVA = "0x4651D70", Offset = "0x4651D70", VA = "0x4651D70", Slot = "18")]
		set
		{
		}
	}

	[Token(Token = "0x17000217")]
	public override int Timeout
	{
		[Token(Token = "0x600092B")]
		[Address(RVA = "0x4651D80", Offset = "0x4651D80", VA = "0x4651D80", Slot = "19")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000218")]
	public override Uri RequestUri
	{
		[Token(Token = "0x600092C")]
		[Address(RVA = "0x4651D90", Offset = "0x4651D90", VA = "0x4651D90", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000219")]
	public override bool UseDefaultCredentials
	{
		[Token(Token = "0x6000933")]
		[Address(RVA = "0x4653460", Offset = "0x4653460", VA = "0x4653460", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600091E")]
	[Address(RVA = "0x46513E0", Offset = "0x46513E0", VA = "0x46513E0")]
	internal FileWebRequest(Uri uri)
	{
	}

	[Token(Token = "0x600091F")]
	[Address(RVA = "0x46515D0", Offset = "0x46515D0", VA = "0x46515D0")]
	[Obsolete("Serialization is obsoleted for this type. http://go.microsoft.com/fwlink/?linkid=14202")]
	protected FileWebRequest(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x6000920")]
	[Address(RVA = "0x46519D0", Offset = "0x46519D0", VA = "0x46519D0", Slot = "6")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x6000921")]
	[Address(RVA = "0x46519F0", Offset = "0x46519F0", VA = "0x46519F0", Slot = "7")]
	protected override void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x600092D")]
	[Address(RVA = "0x4651DA0", Offset = "0x4651DA0", VA = "0x4651DA0", Slot = "21")]
	public override IAsyncResult BeginGetResponse(AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x600092E")]
	[Address(RVA = "0x4652090", Offset = "0x4652090", VA = "0x4652090", Slot = "22")]
	public override WebResponse EndGetResponse(IAsyncResult asyncResult)
	{
		return null;
	}

	[Token(Token = "0x600092F")]
	[Address(RVA = "0x46523A0", Offset = "0x46523A0", VA = "0x46523A0", Slot = "20")]
	public override WebResponse GetResponse()
	{
		return null;
	}

	[Token(Token = "0x6000930")]
	[Address(RVA = "0x4652860", Offset = "0x4652860", VA = "0x4652860")]
	private static void GetRequestStreamCallback(object state)
	{
	}

	[Token(Token = "0x6000931")]
	[Address(RVA = "0x4652BA0", Offset = "0x4652BA0", VA = "0x4652BA0")]
	private static void GetResponseCallback(object state)
	{
	}

	[Token(Token = "0x6000932")]
	[Address(RVA = "0x4653380", Offset = "0x4653380", VA = "0x4653380")]
	internal void UnblockReader()
	{
	}

	[Token(Token = "0x6000934")]
	[Address(RVA = "0x4653490", Offset = "0x4653490", VA = "0x4653490", Slot = "24")]
	public override void Abort()
	{
	}
}
