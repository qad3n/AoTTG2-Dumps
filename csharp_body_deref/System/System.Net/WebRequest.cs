// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.WebRequest
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4964BA0", Offset = "0x4964BA0", VA = "0x4964BA0", Slot = "4")]
		public WebRequest Create(Uri uri)
		{
			return null;
		}

		[Token(Token = "0x6000857")]
		[Address(RVA = "0x4964AA0", Offset = "0x4964AA0", VA = "0x4964AA0")]
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
		[Address(RVA = "0x4963480", Offset = "0x4963480", VA = "0x4963480")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C8")]
	internal static ArrayList PrefixList
	{
		[Token(Token = "0x6000838")]
		[Address(RVA = "0x4963830", Offset = "0x4963830", VA = "0x4963830")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C9")]
	public virtual RequestCachePolicy CachePolicy
	{
		[Token(Token = "0x600083E")]
		[Address(RVA = "0x4963E20", Offset = "0x4963E20", VA = "0x4963E20", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x170001CA")]
	public virtual string Method
	{
		[Token(Token = "0x6000840")]
		[Address(RVA = "0x4963EF0", Offset = "0x4963EF0", VA = "0x4963EF0", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000841")]
		[Address(RVA = "0x4963F20", Offset = "0x4963F20", VA = "0x4963F20", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x170001CB")]
	public virtual Uri RequestUri
	{
		[Token(Token = "0x6000842")]
		[Address(RVA = "0x4963F50", Offset = "0x4963F50", VA = "0x4963F50", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CC")]
	public virtual WebHeaderCollection Headers
	{
		[Token(Token = "0x6000843")]
		[Address(RVA = "0x4963F80", Offset = "0x4963F80", VA = "0x4963F80", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001CD")]
	public virtual long ContentLength
	{
		[Token(Token = "0x6000844")]
		[Address(RVA = "0x4963FB0", Offset = "0x4963FB0", VA = "0x4963FB0", Slot = "13")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170001CE")]
	public virtual ICredentials Credentials
	{
		[Token(Token = "0x6000845")]
		[Address(RVA = "0x4963FE0", Offset = "0x4963FE0", VA = "0x4963FE0", Slot = "14")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000846")]
		[Address(RVA = "0x4964010", Offset = "0x4964010", VA = "0x4964010", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x170001CF")]
	public virtual bool UseDefaultCredentials
	{
		[Token(Token = "0x6000847")]
		[Address(RVA = "0x4964040", Offset = "0x4964040", VA = "0x4964040", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001D0")]
	public virtual IWebProxy Proxy
	{
		[Token(Token = "0x6000848")]
		[Address(RVA = "0x4964070", Offset = "0x4964070", VA = "0x4964070", Slot = "17")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000849")]
		[Address(RVA = "0x49640A0", Offset = "0x49640A0", VA = "0x49640A0", Slot = "18")]
		set
		{
		}
	}

	[Token(Token = "0x170001D1")]
	public virtual int Timeout
	{
		[Token(Token = "0x600084A")]
		[Address(RVA = "0x49640D0", Offset = "0x49640D0", VA = "0x49640D0", Slot = "19")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001D2")]
	internal RequestCacheProtocol CacheProtocol
	{
		[Token(Token = "0x6000851")]
		[Address(RVA = "0x4964550", Offset = "0x4964550", VA = "0x4964550")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000852")]
		[Address(RVA = "0x4964560", Offset = "0x4964560", VA = "0x4964560")]
		set
		{
		}
	}

	[Token(Token = "0x170001D3")]
	internal static IWebProxy InternalDefaultWebProxy
	{
		[Token(Token = "0x6000853")]
		[Address(RVA = "0x4964570", Offset = "0x4964570", VA = "0x4964570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000835")]
	[Address(RVA = "0x4963580", Offset = "0x4963580", VA = "0x4963580")]
	private static WebRequest Create(Uri requestUri, bool useUriBase)
	{
		return null;
	}

	[Token(Token = "0x6000836")]
	[Address(RVA = "0x4963A10", Offset = "0x4963A10", VA = "0x4963A10")]
	public static WebRequest Create(string requestUriString)
	{
		return null;
	}

	[Token(Token = "0x6000837")]
	[Address(RVA = "0x4963AE0", Offset = "0x4963AE0", VA = "0x4963AE0")]
	public static WebRequest Create(Uri requestUri)
	{
		return null;
	}

	[Token(Token = "0x6000839")]
	[Address(RVA = "0x4963BB0", Offset = "0x4963BB0", VA = "0x4963BB0")]
	private static ArrayList PopulatePrefixList()
	{
		return null;
	}

	[Token(Token = "0x600083A")]
	[Address(RVA = "0x4963DC0", Offset = "0x4963DC0", VA = "0x4963DC0")]
	protected WebRequest()
	{
	}

	[Token(Token = "0x600083B")]
	[Address(RVA = "0x4963DE0", Offset = "0x4963DE0", VA = "0x4963DE0")]
	protected WebRequest(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x600083C")]
	[Address(RVA = "0x4963DF0", Offset = "0x4963DF0", VA = "0x4963DF0", Slot = "6")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x600083D")]
	[Address(RVA = "0x4963E10", Offset = "0x4963E10", VA = "0x4963E10", Slot = "7")]
	protected virtual void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x600083F")]
	[Address(RVA = "0x4963E30", Offset = "0x4963E30", VA = "0x4963E30")]
	private void InternalSetCachePolicy(RequestCachePolicy policy)
	{
	}

	[Token(Token = "0x600084B")]
	[Address(RVA = "0x4964100", Offset = "0x4964100", VA = "0x4964100", Slot = "20")]
	public virtual WebResponse GetResponse()
	{
		return null;
	}

	[Token(Token = "0x600084C")]
	[Address(RVA = "0x4964130", Offset = "0x4964130", VA = "0x4964130", Slot = "21")]
	public virtual IAsyncResult BeginGetResponse(AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x600084D")]
	[Address(RVA = "0x4964160", Offset = "0x4964160", VA = "0x4964160", Slot = "22")]
	public virtual WebResponse EndGetResponse(IAsyncResult asyncResult)
	{
		return null;
	}

	[Token(Token = "0x600084E")]
	[Address(RVA = "0x4964190", Offset = "0x4964190", VA = "0x4964190", Slot = "23")]
	public virtual Task<WebResponse> GetResponseAsync()
	{
		return null;
	}

	[Token(Token = "0x600084F")]
	[Address(RVA = "0x49644C0", Offset = "0x49644C0", VA = "0x49644C0")]
	private WindowsIdentity SafeCaptureIdenity()
	{
		return null;
	}

	[Token(Token = "0x6000850")]
	[Address(RVA = "0x4964520", Offset = "0x4964520", VA = "0x4964520", Slot = "24")]
	public virtual void Abort()
	{
	}
}
