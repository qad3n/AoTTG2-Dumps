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
[Token(Token = "0x200029D")]
public abstract class WebRequest : MarshalByRefObject, ISerializable
{
	[Token(Token = "0x200029E")]
	internal class DesignerWebRequestCreate : IWebRequestCreate
	{
		[Token(Token = "0x6001258")]
		[Address(RVA = "0x62AC590", Offset = "0x62AB590", VA = "0x62AC590", Slot = "4")]
		public WebRequest Create(Uri uri)
		{
			return null;
		}

		[Token(Token = "0x6001259")]
		[Address(RVA = "0x62AC490", Offset = "0x62AB490", VA = "0x62AC490")]
		public DesignerWebRequestCreate()
		{
		}
	}

	[Token(Token = "0x4000A25")]
	[FieldOffset(Offset = "0x0")]
	private static ArrayList s_PrefixList;

	[Token(Token = "0x4000A26")]
	[FieldOffset(Offset = "0x8")]
	private static object s_InternalSyncObject;

	[Token(Token = "0x4000A27")]
	[FieldOffset(Offset = "0x10")]
	private static TimerThread.Queue s_DefaultTimerQueue;

	[Token(Token = "0x4000A28")]
	[FieldOffset(Offset = "0x18")]
	private AuthenticationLevel m_AuthenticationLevel;

	[Token(Token = "0x4000A29")]
	[FieldOffset(Offset = "0x1C")]
	private TokenImpersonationLevel m_ImpersonationLevel;

	[Token(Token = "0x4000A2A")]
	[FieldOffset(Offset = "0x20")]
	private RequestCachePolicy m_CachePolicy;

	[Token(Token = "0x4000A2B")]
	[FieldOffset(Offset = "0x28")]
	private RequestCacheProtocol m_CacheProtocol;

	[Token(Token = "0x4000A2C")]
	[FieldOffset(Offset = "0x30")]
	private RequestCacheBinding m_CacheBinding;

	[Token(Token = "0x4000A2D")]
	[FieldOffset(Offset = "0x18")]
	private static DesignerWebRequestCreate webRequestCreate;

	[Token(Token = "0x4000A2E")]
	[FieldOffset(Offset = "0x20")]
	private static IWebProxy s_DefaultWebProxy;

	[Token(Token = "0x4000A2F")]
	[FieldOffset(Offset = "0x28")]
	private static bool s_DefaultWebProxyInitialized;

	[Token(Token = "0x170003ED")]
	private static object InternalSyncObject
	{
		[Token(Token = "0x6001236")]
		[Address(RVA = "0x62AAF90", Offset = "0x62A9F90", VA = "0x62AAF90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003EE")]
	internal static ArrayList PrefixList
	{
		[Token(Token = "0x600123A")]
		[Address(RVA = "0x62AB350", Offset = "0x62AA350", VA = "0x62AB350")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003EF")]
	public virtual RequestCachePolicy CachePolicy
	{
		[Token(Token = "0x6001240")]
		[Address(RVA = "0x62AB980", Offset = "0x62AA980", VA = "0x62AB980", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x170003F0")]
	public virtual string Method
	{
		[Token(Token = "0x6001242")]
		[Address(RVA = "0x62ABA50", Offset = "0x62AAA50", VA = "0x62ABA50", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001243")]
		[Address(RVA = "0x62ABA70", Offset = "0x62AAA70", VA = "0x62ABA70", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x170003F1")]
	public virtual Uri RequestUri
	{
		[Token(Token = "0x6001244")]
		[Address(RVA = "0x62ABA90", Offset = "0x62AAA90", VA = "0x62ABA90", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F2")]
	public virtual WebHeaderCollection Headers
	{
		[Token(Token = "0x6001245")]
		[Address(RVA = "0x62ABAB0", Offset = "0x62AAAB0", VA = "0x62ABAB0", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003F3")]
	public virtual long ContentLength
	{
		[Token(Token = "0x6001246")]
		[Address(RVA = "0x62ABAD0", Offset = "0x62AAAD0", VA = "0x62ABAD0", Slot = "13")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170003F4")]
	public virtual ICredentials Credentials
	{
		[Token(Token = "0x6001247")]
		[Address(RVA = "0x62ABAF0", Offset = "0x62AAAF0", VA = "0x62ABAF0", Slot = "14")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001248")]
		[Address(RVA = "0x62ABB10", Offset = "0x62AAB10", VA = "0x62ABB10", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x170003F5")]
	public virtual bool UseDefaultCredentials
	{
		[Token(Token = "0x6001249")]
		[Address(RVA = "0x62ABB30", Offset = "0x62AAB30", VA = "0x62ABB30", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003F6")]
	public virtual IWebProxy Proxy
	{
		[Token(Token = "0x600124A")]
		[Address(RVA = "0x62ABB50", Offset = "0x62AAB50", VA = "0x62ABB50", Slot = "17")]
		get
		{
			return null;
		}
		[Token(Token = "0x600124B")]
		[Address(RVA = "0x62ABB70", Offset = "0x62AAB70", VA = "0x62ABB70", Slot = "18")]
		set
		{
		}
	}

	[Token(Token = "0x170003F7")]
	public virtual int Timeout
	{
		[Token(Token = "0x600124C")]
		[Address(RVA = "0x62ABB90", Offset = "0x62AAB90", VA = "0x62ABB90", Slot = "19")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003F8")]
	internal RequestCacheProtocol CacheProtocol
	{
		[Token(Token = "0x6001253")]
		[Address(RVA = "0x62ABFC0", Offset = "0x62AAFC0", VA = "0x62ABFC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001254")]
		[Address(RVA = "0x62ABFD0", Offset = "0x62AAFD0", VA = "0x62ABFD0")]
		set
		{
		}
	}

	[Token(Token = "0x170003F9")]
	internal static IWebProxy InternalDefaultWebProxy
	{
		[Token(Token = "0x6001255")]
		[Address(RVA = "0x62ABFE0", Offset = "0x62AAFE0", VA = "0x62ABFE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001237")]
	[Address(RVA = "0x62AB090", Offset = "0x62AA090", VA = "0x62AB090")]
	private static WebRequest Create(Uri requestUri, bool useUriBase)
	{
		return null;
	}

	[Token(Token = "0x6001238")]
	[Address(RVA = "0x62AB500", Offset = "0x62AA500", VA = "0x62AB500")]
	public static WebRequest Create(string requestUriString)
	{
		return null;
	}

	[Token(Token = "0x6001239")]
	[Address(RVA = "0x62AB5D0", Offset = "0x62AA5D0", VA = "0x62AB5D0")]
	public static WebRequest Create(Uri requestUri)
	{
		return null;
	}

	[Token(Token = "0x600123B")]
	[Address(RVA = "0x62AB6A0", Offset = "0x62AA6A0", VA = "0x62AB6A0")]
	private static ArrayList PopulatePrefixList()
	{
		return null;
	}

	[Token(Token = "0x600123C")]
	[Address(RVA = "0x62AB920", Offset = "0x62AA920", VA = "0x62AB920")]
	protected WebRequest()
	{
	}

	[Token(Token = "0x600123D")]
	[Address(RVA = "0x62AB940", Offset = "0x62AA940", VA = "0x62AB940")]
	protected WebRequest(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x600123E")]
	[Address(RVA = "0x62AB950", Offset = "0x62AA950", VA = "0x62AB950", Slot = "6")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x600123F")]
	[Address(RVA = "0x62AB970", Offset = "0x62AA970", VA = "0x62AB970", Slot = "7")]
	protected virtual void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x6001241")]
	[Address(RVA = "0x62AB990", Offset = "0x62AA990", VA = "0x62AB990")]
	private void InternalSetCachePolicy(RequestCachePolicy policy)
	{
	}

	[Token(Token = "0x600124D")]
	[Address(RVA = "0x62ABBB0", Offset = "0x62AABB0", VA = "0x62ABBB0", Slot = "20")]
	public virtual WebResponse GetResponse()
	{
		return null;
	}

	[Token(Token = "0x600124E")]
	[Address(RVA = "0x62ABBD0", Offset = "0x62AABD0", VA = "0x62ABBD0", Slot = "21")]
	public virtual IAsyncResult BeginGetResponse(AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x600124F")]
	[Address(RVA = "0x62ABBF0", Offset = "0x62AABF0", VA = "0x62ABBF0", Slot = "22")]
	public virtual WebResponse EndGetResponse(IAsyncResult asyncResult)
	{
		return null;
	}

	[Token(Token = "0x6001250")]
	[Address(RVA = "0x62ABC10", Offset = "0x62AAC10", VA = "0x62ABC10", Slot = "23")]
	public virtual Task<WebResponse> GetResponseAsync()
	{
		return null;
	}

	[Token(Token = "0x6001251")]
	[Address(RVA = "0x62ABF40", Offset = "0x62AAF40", VA = "0x62ABF40")]
	private WindowsIdentity SafeCaptureIdenity()
	{
		return null;
	}

	[Token(Token = "0x6001252")]
	[Address(RVA = "0x62ABFA0", Offset = "0x62AAFA0", VA = "0x62ABFA0", Slot = "24")]
	public virtual void Abort()
	{
	}
}
