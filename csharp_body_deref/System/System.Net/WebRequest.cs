using System.Collections;
using System.Net.Cache;
using System.Net.Security;
using System.Runtime.Serialization;
using System.Security.Principal;
using System.Threading.Tasks;
using Il2CppDummyDll;

namespace System.Net;

[Serializable]
[Token(Token = "0x2000154")]
public abstract class WebRequest : MarshalByRefObject, ISerializable
{
	[Token(Token = "0x2000155")]
	internal class DesignerWebRequestCreate : IWebRequestCreate
	{
		[Token(Token = "0x6000856")]
		[Address(RVA = "0x463FAA0", Offset = "0x463FAA0", VA = "0x463FAA0", Slot = "4")]
		public WebRequest Create(Uri uri)
		{
			return null;
		}

		[Token(Token = "0x6000857")]
		[Address(RVA = "0x463F9A0", Offset = "0x463F9A0", VA = "0x463F9A0")]
		public DesignerWebRequestCreate()
		{
		}
	}

	[Token(Token = "0x40006DE")]
	[FieldOffset(Offset = "0x0")]
	private static ArrayList s_PrefixList;

	[Token(Token = "0x40006DF")]
	[FieldOffset(Offset = "0x8")]
	private static object s_InternalSyncObject;

	[Token(Token = "0x40006E0")]
	[FieldOffset(Offset = "0x10")]
	private static TimerThread.Queue s_DefaultTimerQueue;

	[Token(Token = "0x40006E1")]
	[FieldOffset(Offset = "0x18")]
	private AuthenticationLevel m_AuthenticationLevel;

	[Token(Token = "0x40006E2")]
	[FieldOffset(Offset = "0x1C")]
	private TokenImpersonationLevel m_ImpersonationLevel;

	[Token(Token = "0x40006E3")]
	[FieldOffset(Offset = "0x20")]
	private RequestCachePolicy m_CachePolicy;

	[Token(Token = "0x40006E4")]
	[FieldOffset(Offset = "0x28")]
	private RequestCacheProtocol m_CacheProtocol;

	[Token(Token = "0x40006E5")]
	[FieldOffset(Offset = "0x30")]
	private RequestCacheBinding m_CacheBinding;

	[Token(Token = "0x40006E6")]
	[FieldOffset(Offset = "0x18")]
	private static DesignerWebRequestCreate webRequestCreate;

	[Token(Token = "0x40006E7")]
	[FieldOffset(Offset = "0x20")]
	private static IWebProxy s_DefaultWebProxy;

	[Token(Token = "0x40006E8")]
	[FieldOffset(Offset = "0x28")]
	private static bool s_DefaultWebProxyInitialized;

	[Token(Token = "0x170001C7")]
	private static object InternalSyncObject
	{
		[Token(Token = "0x6000834")]
		[Address(RVA = "0x463E380", Offset = "0x463E380", VA = "0x463E380")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C8")]
	internal static ArrayList PrefixList
	{
		[Token(Token = "0x6000838")]
		[Address(RVA = "0x463E730", Offset = "0x463E730", VA = "0x463E730")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C9")]
	public virtual RequestCachePolicy CachePolicy
	{
		[Token(Token = "0x600083E")]
		[Address(RVA = "0x463ED20", Offset = "0x463ED20", VA = "0x463ED20", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x170001CA")]
	public virtual string Method
	{
		[Token(Token = "0x6000840")]
		[Address(RVA = "0x463EDF0", Offset = "0x463EDF0", VA = "0x463EDF0", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000841")]
		[Address(RVA = "0x463EE20", Offset = "0x463EE20", VA = "0x463EE20", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x170001CB")]
	public virtual Uri RequestUri
	{
		[Token(Token = "0x6000842")]
		[Address(RVA = "0x463EE50", Offset = "0x463EE50", VA = "0x463EE50", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CC")]
	public virtual WebHeaderCollection Headers
	{
		[Token(Token = "0x6000843")]
		[Address(RVA = "0x463EE80", Offset = "0x463EE80", VA = "0x463EE80", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CD")]
	public virtual long ContentLength
	{
		[Token(Token = "0x6000844")]
		[Address(RVA = "0x463EEB0", Offset = "0x463EEB0", VA = "0x463EEB0", Slot = "13")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170001CE")]
	public virtual ICredentials Credentials
	{
		[Token(Token = "0x6000845")]
		[Address(RVA = "0x463EEE0", Offset = "0x463EEE0", VA = "0x463EEE0", Slot = "14")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000846")]
		[Address(RVA = "0x463EF10", Offset = "0x463EF10", VA = "0x463EF10", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x170001CF")]
	public virtual bool UseDefaultCredentials
	{
		[Token(Token = "0x6000847")]
		[Address(RVA = "0x463EF40", Offset = "0x463EF40", VA = "0x463EF40", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001D0")]
	public virtual IWebProxy Proxy
	{
		[Token(Token = "0x6000848")]
		[Address(RVA = "0x463EF70", Offset = "0x463EF70", VA = "0x463EF70", Slot = "17")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000849")]
		[Address(RVA = "0x463EFA0", Offset = "0x463EFA0", VA = "0x463EFA0", Slot = "18")]
		set
		{
		}
	}

	[Token(Token = "0x170001D1")]
	public virtual int Timeout
	{
		[Token(Token = "0x600084A")]
		[Address(RVA = "0x463EFD0", Offset = "0x463EFD0", VA = "0x463EFD0", Slot = "19")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001D2")]
	internal RequestCacheProtocol CacheProtocol
	{
		[Token(Token = "0x6000851")]
		[Address(RVA = "0x463F450", Offset = "0x463F450", VA = "0x463F450")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000852")]
		[Address(RVA = "0x463F460", Offset = "0x463F460", VA = "0x463F460")]
		set
		{
		}
	}

	[Token(Token = "0x170001D3")]
	internal static IWebProxy InternalDefaultWebProxy
	{
		[Token(Token = "0x6000853")]
		[Address(RVA = "0x463F470", Offset = "0x463F470", VA = "0x463F470")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000835")]
	[Address(RVA = "0x463E480", Offset = "0x463E480", VA = "0x463E480")]
	private static WebRequest Create(Uri requestUri, bool useUriBase)
	{
		return null;
	}

	[Token(Token = "0x6000836")]
	[Address(RVA = "0x463E910", Offset = "0x463E910", VA = "0x463E910")]
	public static WebRequest Create(string requestUriString)
	{
		return null;
	}

	[Token(Token = "0x6000837")]
	[Address(RVA = "0x463E9E0", Offset = "0x463E9E0", VA = "0x463E9E0")]
	public static WebRequest Create(Uri requestUri)
	{
		return null;
	}

	[Token(Token = "0x6000839")]
	[Address(RVA = "0x463EAB0", Offset = "0x463EAB0", VA = "0x463EAB0")]
	private static ArrayList PopulatePrefixList()
	{
		return null;
	}

	[Token(Token = "0x600083A")]
	[Address(RVA = "0x463ECC0", Offset = "0x463ECC0", VA = "0x463ECC0")]
	protected WebRequest()
	{
	}

	[Token(Token = "0x600083B")]
	[Address(RVA = "0x463ECE0", Offset = "0x463ECE0", VA = "0x463ECE0")]
	protected WebRequest(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x600083C")]
	[Address(RVA = "0x463ECF0", Offset = "0x463ECF0", VA = "0x463ECF0", Slot = "6")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x600083D")]
	[Address(RVA = "0x463ED10", Offset = "0x463ED10", VA = "0x463ED10", Slot = "7")]
	protected virtual void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x600083F")]
	[Address(RVA = "0x463ED30", Offset = "0x463ED30", VA = "0x463ED30")]
	private void InternalSetCachePolicy(RequestCachePolicy policy)
	{
	}

	[Token(Token = "0x600084B")]
	[Address(RVA = "0x463F000", Offset = "0x463F000", VA = "0x463F000", Slot = "20")]
	public virtual WebResponse GetResponse()
	{
		return null;
	}

	[Token(Token = "0x600084C")]
	[Address(RVA = "0x463F030", Offset = "0x463F030", VA = "0x463F030", Slot = "21")]
	public virtual IAsyncResult BeginGetResponse(AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x600084D")]
	[Address(RVA = "0x463F060", Offset = "0x463F060", VA = "0x463F060", Slot = "22")]
	public virtual WebResponse EndGetResponse(IAsyncResult asyncResult)
	{
		return null;
	}

	[Token(Token = "0x600084E")]
	[Address(RVA = "0x463F090", Offset = "0x463F090", VA = "0x463F090", Slot = "23")]
	public virtual Task<WebResponse> GetResponseAsync()
	{
		return null;
	}

	[Token(Token = "0x600084F")]
	[Address(RVA = "0x463F3C0", Offset = "0x463F3C0", VA = "0x463F3C0")]
	private WindowsIdentity SafeCaptureIdenity()
	{
		return null;
	}

	[Token(Token = "0x6000850")]
	[Address(RVA = "0x463F420", Offset = "0x463F420", VA = "0x463F420", Slot = "24")]
	public virtual void Abort()
	{
	}
}
