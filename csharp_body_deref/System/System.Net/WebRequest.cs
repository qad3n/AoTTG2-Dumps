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
[Token(Token = "0x20002DC")]
public abstract class WebRequest : MarshalByRefObject, ISerializable
{
	[Token(Token = "0x20002DD")]
	internal class DesignerWebRequestCreate : IWebRequestCreate
	{
		[Token(Token = "0x6001416")]
		[Address(RVA = "0x27C91D0", Offset = "0x27C77D0", VA = "0x1827C91D0", Slot = "4")]
		public WebRequest Create(Uri uri)
		{
			return null;
		}

		[Token(Token = "0x6001417")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public DesignerWebRequestCreate()
		{
		}
	}

	[Token(Token = "0x4000AF4")]
	[FieldOffset(Offset = "0x0")]
	private static ArrayList s_PrefixList;

	[Token(Token = "0x4000AF5")]
	[FieldOffset(Offset = "0x8")]
	private static object s_InternalSyncObject;

	[Token(Token = "0x4000AF6")]
	[FieldOffset(Offset = "0x10")]
	private static TimerThread.Queue s_DefaultTimerQueue;

	[Token(Token = "0x4000AF7")]
	[FieldOffset(Offset = "0x18")]
	private AuthenticationLevel m_AuthenticationLevel;

	[Token(Token = "0x4000AF8")]
	[FieldOffset(Offset = "0x1C")]
	private TokenImpersonationLevel m_ImpersonationLevel;

	[Token(Token = "0x4000AF9")]
	[FieldOffset(Offset = "0x20")]
	private RequestCachePolicy m_CachePolicy;

	[Token(Token = "0x4000AFA")]
	[FieldOffset(Offset = "0x28")]
	private RequestCacheProtocol m_CacheProtocol;

	[Token(Token = "0x4000AFB")]
	[FieldOffset(Offset = "0x30")]
	private RequestCacheBinding m_CacheBinding;

	[Token(Token = "0x4000AFC")]
	[FieldOffset(Offset = "0x18")]
	private static DesignerWebRequestCreate webRequestCreate;

	[Token(Token = "0x4000AFD")]
	[FieldOffset(Offset = "0x20")]
	private static IWebProxy s_DefaultWebProxy;

	[Token(Token = "0x4000AFE")]
	[FieldOffset(Offset = "0x28")]
	private static bool s_DefaultWebProxyInitialized;

	[Token(Token = "0x1700041C")]
	private static object InternalSyncObject
	{
		[Token(Token = "0x60013F4")]
		[Address(RVA = "0x27DAAB0", Offset = "0x27D90B0", VA = "0x1827DAAB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700041D")]
	internal static ArrayList PrefixList
	{
		[Token(Token = "0x60013F8")]
		[Address(RVA = "0x27DABD0", Offset = "0x27D91D0", VA = "0x1827DABD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700041E")]
	public virtual RequestCachePolicy CachePolicy
	{
		[Token(Token = "0x60013FE")]
		[Address(RVA = "0x27DA290", Offset = "0x27D8890", VA = "0x1827DA290", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x1700041F")]
	public virtual string Method
	{
		[Token(Token = "0x6001400")]
		[Address(RVA = "0x27DABA0", Offset = "0x27D91A0", VA = "0x1827DABA0", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001401")]
		[Address(RVA = "0x27DAE70", Offset = "0x27D9470", VA = "0x1827DAE70", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x17000420")]
	public virtual Uri RequestUri
	{
		[Token(Token = "0x6001402")]
		[Address(RVA = "0x27DADB0", Offset = "0x27D93B0", VA = "0x1827DADB0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000421")]
	public virtual WebHeaderCollection Headers
	{
		[Token(Token = "0x6001403")]
		[Address(RVA = "0x27DA890", Offset = "0x27D8E90", VA = "0x1827DA890", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000422")]
	public virtual long ContentLength
	{
		[Token(Token = "0x6001404")]
		[Address(RVA = "0x27DA830", Offset = "0x27D8E30", VA = "0x1827DA830", Slot = "13")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000423")]
	public virtual ICredentials Credentials
	{
		[Token(Token = "0x6001405")]
		[Address(RVA = "0x27DA860", Offset = "0x27D8E60", VA = "0x1827DA860", Slot = "14")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001406")]
		[Address(RVA = "0x27DAE40", Offset = "0x27D9440", VA = "0x1827DAE40", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x17000424")]
	public virtual bool UseDefaultCredentials
	{
		[Token(Token = "0x6001407")]
		[Address(RVA = "0x27DAE10", Offset = "0x27D9410", VA = "0x1827DAE10", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000425")]
	public virtual IWebProxy Proxy
	{
		[Token(Token = "0x6001408")]
		[Address(RVA = "0x27DAD80", Offset = "0x27D9380", VA = "0x1827DAD80", Slot = "17")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001409")]
		[Address(RVA = "0x27DAEA0", Offset = "0x27D94A0", VA = "0x1827DAEA0", Slot = "18")]
		set
		{
		}
	}

	[Token(Token = "0x17000426")]
	public virtual int Timeout
	{
		[Token(Token = "0x600140A")]
		[Address(RVA = "0x27DADE0", Offset = "0x27D93E0", VA = "0x1827DADE0", Slot = "19")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000427")]
	internal RequestCacheProtocol CacheProtocol
	{
		[Token(Token = "0x6001411")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001412")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000428")]
	internal static IWebProxy InternalDefaultWebProxy
	{
		[Token(Token = "0x6001413")]
		[Address(RVA = "0x27DA8C0", Offset = "0x27D8EC0", VA = "0x1827DA8C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60013F5")]
	[Address(RVA = "0x27D9B80", Offset = "0x27D8180", VA = "0x1827D9B80")]
	private static WebRequest Create(Uri requestUri, bool useUriBase)
	{
		return null;
	}

	[Token(Token = "0x60013F6")]
	[Address(RVA = "0x27D9F10", Offset = "0x27D8510", VA = "0x1827D9F10")]
	public static WebRequest Create(string requestUriString)
	{
		return null;
	}

	[Token(Token = "0x60013F7")]
	[Address(RVA = "0x27D9E40", Offset = "0x27D8440", VA = "0x1827D9E40")]
	public static WebRequest Create(Uri requestUri)
	{
		return null;
	}

	[Token(Token = "0x60013F9")]
	[Address(RVA = "0x27DA370", Offset = "0x27D8970", VA = "0x1827DA370")]
	private static ArrayList PopulatePrefixList()
	{
		return null;
	}

	[Token(Token = "0x60013FA")]
	[Address(RVA = "0x27DA800", Offset = "0x27D8E00", VA = "0x1827DA800")]
	protected WebRequest()
	{
	}

	[Token(Token = "0x60013FB")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected WebRequest(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x60013FC")]
	[Address(RVA = "0x27CA9B0", Offset = "0x27C8FB0", VA = "0x1827CA9B0", Slot = "6")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x60013FD")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
	protected virtual void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x60013FF")]
	[Address(RVA = "0x27DA290", Offset = "0x27D8890", VA = "0x1827DA290")]
	private void InternalSetCachePolicy(RequestCachePolicy policy)
	{
	}

	[Token(Token = "0x600140B")]
	[Address(RVA = "0x27DA260", Offset = "0x27D8860", VA = "0x1827DA260", Slot = "20")]
	public virtual WebResponse GetResponse()
	{
		return null;
	}

	[Token(Token = "0x600140C")]
	[Address(RVA = "0x27D9B50", Offset = "0x27D8150", VA = "0x1827D9B50", Slot = "21")]
	public virtual IAsyncResult BeginGetResponse(AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x600140D")]
	[Address(RVA = "0x27D9FE0", Offset = "0x27D85E0", VA = "0x1827D9FE0", Slot = "22")]
	public virtual WebResponse EndGetResponse(IAsyncResult asyncResult)
	{
		return null;
	}

	[Token(Token = "0x600140E")]
	[Address(RVA = "0x27DA010", Offset = "0x27D8610", VA = "0x1827DA010", Slot = "23")]
	public virtual Task<WebResponse> GetResponseAsync()
	{
		return null;
	}

	[Token(Token = "0x600140F")]
	[Address(RVA = "0x27DA5E0", Offset = "0x27D8BE0", VA = "0x1827DA5E0")]
	private WindowsIdentity SafeCaptureIdenity()
	{
		return null;
	}

	[Token(Token = "0x6001410")]
	[Address(RVA = "0x27D9B20", Offset = "0x27D8120", VA = "0x1827D9B20", Slot = "24")]
	public virtual void Abort()
	{
	}
}
