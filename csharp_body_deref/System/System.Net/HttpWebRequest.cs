// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.HttpWebRequest
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.ComponentModel;
using System.Diagnostics;
using System.IO;
using System.Net.Cache;
using System.Net.Security;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using System.Security.Cryptography.X509Certificates;
using System.Threading;
using System.Threading.Tasks;
using Il2CppDummyDll;
using Mono.Net.Security;
using Mono.Security.Interface;

namespace System.Net;

[Serializable]
[Token(Token = "0x2000320")]
public class HttpWebRequest : WebRequest, ISerializable
{
	[Token(Token = "0x2000321")]
	private enum NtlmAuthState
	{
		[Token(Token = "0x4000C23")]
		None,
		[Token(Token = "0x4000C24")]
		Challenge,
		[Token(Token = "0x4000C25")]
		Response
	}

	[Token(Token = "0x2000322")]
	private struct AuthorizationState
	{
		[Token(Token = "0x4000C26")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly HttpWebRequest request;

		[Token(Token = "0x4000C27")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private readonly bool isProxy;

		[Token(Token = "0x4000C28")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x9")]
		private bool isCompleted;

		[Token(Token = "0x4000C29")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
		private NtlmAuthState ntlm_auth_state;

		[Token(Token = "0x170004AB")]
		public bool IsCompleted
		{
			[Token(Token = "0x60015D0")]
			[Address(RVA = "0x1A931B0", Offset = "0x1A917B0", VA = "0x181A931B0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x170004AC")]
		public NtlmAuthState NtlmAuthState
		{
			[Token(Token = "0x60015D1")]
			[Address(RVA = "0x57AEF0", Offset = "0x5794F0", VA = "0x18057AEF0")]
			get
			{
				return default(NtlmAuthState);
			}
		}

		[Token(Token = "0x170004AD")]
		public bool IsNtlmAuthenticated
		{
			[Token(Token = "0x60015D2")]
			[Address(RVA = "0x27DC670", Offset = "0x27DAC70", VA = "0x1827DC670")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60015D3")]
		[Address(RVA = "0x27DC630", Offset = "0x27DAC30", VA = "0x1827DC630")]
		public AuthorizationState(HttpWebRequest request, bool isProxy)
		{
		}

		[Token(Token = "0x60015D4")]
		[Address(RVA = "0x27DC130", Offset = "0x27DA730", VA = "0x1827DC130")]
		public bool CheckAuthorization(WebResponse response, HttpStatusCode code)
		{
			return default(bool);
		}

		[Token(Token = "0x60015D5")]
		[Address(RVA = "0x27DC4E0", Offset = "0x27DAAE0", VA = "0x1827DC4E0")]
		public void Reset()
		{
		}

		[Token(Token = "0x60015D6")]
		[Address(RVA = "0x27DC560", Offset = "0x27DAB60", VA = "0x1827DC560", Slot = "3")]
		public override string ToString()
		{
			return null;
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x2000324")]
	[CompilerGenerated]
	private struct _003CRunWithTimeoutWorker_003Ed__241<T> : IAsyncStateMachine
	{
		[Token(Token = "0x4000C2C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000C2D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncTaskMethodBuilder<T> _003C_003Et__builder;

		[Token(Token = "0x4000C2E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Task<T> workerTask;

		[Token(Token = "0x4000C2F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int timeout;

		[Token(Token = "0x4000C30")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public CancellationTokenSource cts;

		[Token(Token = "0x4000C31")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Action abort;

		[Token(Token = "0x4000C32")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Func<bool> aborted;

		[Token(Token = "0x4000C33")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private ConfiguredTaskAwaitable<bool>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x60015DA")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60015DB")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x2000325")]
	[CompilerGenerated]
	private struct _003CMyGetResponseAsync_003Ed__243 : IAsyncStateMachine
	{
		[Token(Token = "0x4000C34")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000C35")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<HttpWebResponse> _003C_003Et__builder;

		[Token(Token = "0x4000C36")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public HttpWebRequest _003C_003E4__this;

		[Token(Token = "0x4000C37")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000C38")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private WebCompletionSource _003Ccompletion_003E5__2;

		[Token(Token = "0x4000C39")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private WebOperation _003Coperation_003E5__3;

		[Token(Token = "0x4000C3A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private WebException _003CthrowMe_003E5__4;

		[Token(Token = "0x4000C3B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private HttpWebResponse _003Cresponse_003E5__5;

		[Token(Token = "0x4000C3C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private WebResponseStream _003Cstream_003E5__6;

		[Token(Token = "0x4000C3D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private bool _003Credirect_003E5__7;

		[Token(Token = "0x4000C3E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x59")]
		private bool _003CmustReadAll_003E5__8;

		[Token(Token = "0x4000C3F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private WebOperation _003Cntlm_003E5__9;

		[Token(Token = "0x4000C40")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private BufferOffsetSize _003CwriteBuffer_003E5__10;

		[Token(Token = "0x4000C41")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		private ConfiguredTaskAwaitable<WebRequestStream>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000C42")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x4000C43")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
		private TaskAwaiter<WebResponseStream> _003C_003Eu__3;

		[Token(Token = "0x4000C44")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
		private ConfiguredTaskAwaitable<(HttpWebResponse response, bool redirect, bool mustReadAll, BufferOffsetSize writeBuffer, WebOperation ntlm)>.ConfiguredTaskAwaiter _003C_003Eu__4;

		[Token(Token = "0x60015DC")]
		[Address(RVA = "0x27ED790", Offset = "0x27EBD90", VA = "0x1827ED790", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60015DD")]
		[Address(RVA = "0x27EE950", Offset = "0x27ECF50", VA = "0x1827EE950", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x2000326")]
	[CompilerGenerated]
	private struct _003CGetResponseFromData_003Ed__244 : IAsyncStateMachine
	{
		[Token(Token = "0x4000C45")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000C46")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<(HttpWebResponse response, bool redirect, bool mustReadAll, BufferOffsetSize writeBuffer, WebOperation ntlm)> _003C_003Et__builder;

		[Token(Token = "0x4000C47")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public HttpWebRequest _003C_003E4__this;

		[Token(Token = "0x4000C48")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public WebResponseStream stream;

		[Token(Token = "0x4000C49")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000C4A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private HttpWebResponse _003Cresponse_003E5__2;

		[Token(Token = "0x4000C4B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private WebException _003CthrowMe_003E5__3;

		[Token(Token = "0x4000C4C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private bool _003Credirect_003E5__4;

		[Token(Token = "0x4000C4D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x49")]
		private bool _003CmustReadAll_003E5__5;

		[Token(Token = "0x4000C4E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000C4F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private ConfiguredTaskAwaitable<BufferOffsetSize>.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x60015DE")]
		[Address(RVA = "0x27EC720", Offset = "0x27EAD20", VA = "0x1827EC720", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x60015DF")]
		[Address(RVA = "0x27ECFB0", Offset = "0x27EB5B0", VA = "0x1827ECFB0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000BE9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Uri requestUri;

	[Token(Token = "0x4000BEA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private Uri actualUri;

	[Token(Token = "0x4000BEB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private bool hostChanged;

	[Token(Token = "0x4000BEC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x49")]
	private bool allowAutoRedirect;

	[Token(Token = "0x4000BED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4A")]
	private bool allowBuffering;

	[Token(Token = "0x4000BEE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private X509CertificateCollection certificates;

	[Token(Token = "0x4000BEF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private string connectionGroup;

	[Token(Token = "0x4000BF0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private bool haveContentLength;

	[Token(Token = "0x4000BF1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private long contentLength;

	[Token(Token = "0x4000BF2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private HttpContinueDelegate continueDelegate;

	[Token(Token = "0x4000BF3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private CookieContainer cookieContainer;

	[Token(Token = "0x4000BF4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private ICredentials credentials;

	[Token(Token = "0x4000BF5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private bool haveResponse;

	[Token(Token = "0x4000BF6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x89")]
	private bool requestSent;

	[Token(Token = "0x4000BF7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private WebHeaderCollection webHeaders;

	[Token(Token = "0x4000BF8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private bool keepAlive;

	[Token(Token = "0x4000BF9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x9C")]
	private int maxAutoRedirect;

	[Token(Token = "0x4000BFA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private string mediaType;

	[Token(Token = "0x4000BFB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private string method;

	[Token(Token = "0x4000BFC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private string initialMethod;

	[Token(Token = "0x4000BFD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private bool pipelined;

	[Token(Token = "0x4000BFE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB9")]
	private bool preAuthenticate;

	[Token(Token = "0x4000BFF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xBA")]
	private bool usedPreAuth;

	[Token(Token = "0x4000C00")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Version version;

	[Token(Token = "0x4000C01")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private bool force_version;

	[Token(Token = "0x4000C02")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private Version actualVersion;

	[Token(Token = "0x4000C03")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private IWebProxy proxy;

	[Token(Token = "0x4000C04")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private bool sendChunked;

	[Token(Token = "0x4000C05")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private ServicePoint servicePoint;

	[Token(Token = "0x4000C06")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private int timeout;

	[Token(Token = "0x4000C07")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF4")]
	private int continueTimeout;

	[Token(Token = "0x4000C08")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private WebRequestStream writeStream;

	[Token(Token = "0x4000C09")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private HttpWebResponse webResponse;

	[Token(Token = "0x4000C0A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private WebCompletionSource responseTask;

	[Token(Token = "0x4000C0B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private WebOperation currentOperation;

	[Token(Token = "0x4000C0C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private int aborted;

	[Token(Token = "0x4000C0D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x11C")]
	private bool gotRequestStream;

	[Token(Token = "0x4000C0E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private int redirects;

	[Token(Token = "0x4000C0F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x124")]
	private bool expectContinue;

	[Token(Token = "0x4000C10")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x125")]
	private bool getResponseCalled;

	[Token(Token = "0x4000C11")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	private object locker;

	[Token(Token = "0x4000C12")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	private bool finished_reading;

	[Token(Token = "0x4000C13")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x134")]
	private DecompressionMethods auto_decomp;

	[Token(Token = "0x4000C14")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static int defaultMaxResponseHeadersLength;

	[Token(Token = "0x4000C15")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	private static int defaultMaximumErrorResponseLength;

	[Token(Token = "0x4000C16")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static RequestCachePolicy defaultCachePolicy;

	[Token(Token = "0x4000C17")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	private int readWriteTimeout;

	[Token(Token = "0x4000C18")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
	private MobileTlsProvider tlsProvider;

	[Token(Token = "0x4000C19")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
	private MonoTlsSettings tlsSettings;

	[Token(Token = "0x4000C1A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	private ServerCertValidationCallback certValidationCallback;

	[Token(Token = "0x4000C1B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	private bool hostHasPort;

	[Token(Token = "0x4000C1C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	private Uri hostUri;

	[Token(Token = "0x4000C1D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	private AuthorizationState auth_state;

	[Token(Token = "0x4000C1E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x178")]
	private AuthorizationState proxy_auth_state;

	[NonSerialized]
	[Token(Token = "0x4000C1F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x188")]
	internal Func<Stream, Task> ResendContentFactory;

	[Token(Token = "0x4000C21")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x191")]
	private bool unsafe_auth_blah;

	[Token(Token = "0x17000488")]
	public Uri Address
	{
		[Token(Token = "0x6001589")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000489")]
	public virtual bool AllowWriteStreamBuffering
	{
		[Token(Token = "0x600158A")]
		[Address(RVA = "0x26EDC70", Offset = "0x26EC270", VA = "0x1826EDC70", Slot = "25")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700048A")]
	public DecompressionMethods AutomaticDecompression
	{
		[Token(Token = "0x600158B")]
		[Address(RVA = "0x27E5560", Offset = "0x27E3B60", VA = "0x1827E5560")]
		get
		{
			return default(DecompressionMethods);
		}
	}

	[Token(Token = "0x1700048B")]
	internal bool InternalAllowBuffering
	{
		[Token(Token = "0x600158C")]
		[Address(RVA = "0x27E5760", Offset = "0x27E3D60", VA = "0x1827E5760")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700048C")]
	private bool MethodWithBuffer
	{
		[Token(Token = "0x600158D")]
		[Address(RVA = "0x27E5770", Offset = "0x27E3D70", VA = "0x1827E5770")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700048D")]
	internal MobileTlsProvider TlsProvider
	{
		[Token(Token = "0x600158E")]
		[Address(RVA = "0x1D1FA50", Offset = "0x1D1E050", VA = "0x181D1FA50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700048E")]
	internal MonoTlsSettings TlsSettings
	{
		[Token(Token = "0x600158F")]
		[Address(RVA = "0xA29A50", Offset = "0xA28050", VA = "0x180A29A50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700048F")]
	public X509CertificateCollection ClientCertificates
	{
		[Token(Token = "0x6001590")]
		[Address(RVA = "0x27E5570", Offset = "0x27E3B70", VA = "0x1827E5570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000490")]
	public override long ContentLength
	{
		[Token(Token = "0x6001591")]
		[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0", Slot = "13")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000491")]
	internal long InternalContentLength
	{
		[Token(Token = "0x6001592")]
		[Address(RVA = "0x12BF3F0", Offset = "0x12BD9F0", VA = "0x1812BF3F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000492")]
	internal bool ThrowOnError
	{
		[Token(Token = "0x6001593")]
		[Address(RVA = "0x27E58D0", Offset = "0x27E3ED0", VA = "0x1827E58D0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001594")]
		[Address(RVA = "0x27E5D40", Offset = "0x27E4340", VA = "0x1827E5D40")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000493")]
	public override ICredentials Credentials
	{
		[Token(Token = "0x6001595")]
		[Address(RVA = "0x58A5D0", Offset = "0x588BD0", VA = "0x18058A5D0", Slot = "14")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001596")]
		[Address(RVA = "0x58A960", Offset = "0x588F60", VA = "0x18058A960", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x17000494")]
	[System.MonoTODO]
	public static int DefaultMaximumErrorResponseLength
	{
		[Token(Token = "0x6001597")]
		[Address(RVA = "0x27E55E0", Offset = "0x27E3BE0", VA = "0x1827E55E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000495")]
	public override WebHeaderCollection Headers
	{
		[Token(Token = "0x6001598")]
		[Address(RVA = "0xA4D3D0", Offset = "0xA4B9D0", VA = "0x180A4D3D0", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000496")]
	public string Host
	{
		[Token(Token = "0x6001599")]
		[Address(RVA = "0x27E5640", Offset = "0x27E3C40", VA = "0x1827E5640")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000497")]
	public bool KeepAlive
	{
		[Token(Token = "0x600159A")]
		[Address(RVA = "0xA4D590", Offset = "0xA4BB90", VA = "0x180A4D590")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000498")]
	public int ReadWriteTimeout
	{
		[Token(Token = "0x600159B")]
		[Address(RVA = "0x27E5880", Offset = "0x27E3E80", VA = "0x1827E5880")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000499")]
	public override string Method
	{
		[Token(Token = "0x600159C")]
		[Address(RVA = "0x58A890", Offset = "0x588E90", VA = "0x18058A890", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x600159D")]
		[Address(RVA = "0x27E59F0", Offset = "0x27E3FF0", VA = "0x1827E59F0", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x1700049A")]
	public Version ProtocolVersion
	{
		[Token(Token = "0x600159E")]
		[Address(RVA = "0xC8FF80", Offset = "0xC8E580", VA = "0x180C8FF80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700049B")]
	public override IWebProxy Proxy
	{
		[Token(Token = "0x600159F")]
		[Address(RVA = "0x187BC60", Offset = "0x187A260", VA = "0x18187BC60", Slot = "17")]
		get
		{
			return null;
		}
		[Token(Token = "0x60015A0")]
		[Address(RVA = "0x27E5CA0", Offset = "0x27E42A0", VA = "0x1827E5CA0", Slot = "18")]
		set
		{
		}
	}

	[Token(Token = "0x1700049C")]
	public override Uri RequestUri
	{
		[Token(Token = "0x60015A1")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700049D")]
	public bool SendChunked
	{
		[Token(Token = "0x60015A2")]
		[Address(RVA = "0x222D960", Offset = "0x222BF60", VA = "0x18222D960")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700049E")]
	public ServicePoint ServicePoint
	{
		[Token(Token = "0x60015A3")]
		[Address(RVA = "0x27E58C0", Offset = "0x27E3EC0", VA = "0x1827E58C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700049F")]
	internal ServicePoint ServicePointNoLock
	{
		[Token(Token = "0x60015A4")]
		[Address(RVA = "0x187BC30", Offset = "0x187A230", VA = "0x18187BC30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004A0")]
	public override int Timeout
	{
		[Token(Token = "0x60015A5")]
		[Address(RVA = "0x27E58E0", Offset = "0x27E3EE0", VA = "0x1827E58E0", Slot = "19")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170004A1")]
	public string TransferEncoding
	{
		[Token(Token = "0x60015A6")]
		[Address(RVA = "0x27E58F0", Offset = "0x27E3EF0", VA = "0x1827E58F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004A2")]
	public override bool UseDefaultCredentials
	{
		[Token(Token = "0x60015A7")]
		[Address(RVA = "0x27E5950", Offset = "0x27E3F50", VA = "0x1827E5950", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004A3")]
	public bool UnsafeAuthenticatedConnectionSharing
	{
		[Token(Token = "0x60015A8")]
		[Address(RVA = "0x27E5940", Offset = "0x27E3F40", VA = "0x1827E5940")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004A4")]
	internal bool ExpectContinue
	{
		[Token(Token = "0x60015A9")]
		[Address(RVA = "0x27E5630", Offset = "0x27E3C30", VA = "0x1827E5630")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60015AA")]
		[Address(RVA = "0x27E59D0", Offset = "0x27E3FD0", VA = "0x1827E59D0")]
		set
		{
		}
	}

	[Token(Token = "0x170004A5")]
	internal Uri AuthUri
	{
		[Token(Token = "0x60015AB")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004A6")]
	internal bool ProxyQuery
	{
		[Token(Token = "0x60015AC")]
		[Address(RVA = "0x27E5850", Offset = "0x27E3E50", VA = "0x1827E5850")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004A7")]
	internal ServerCertValidationCallback ServerCertValidationCallback
	{
		[Token(Token = "0x60015AD")]
		[Address(RVA = "0x27E5890", Offset = "0x27E3E90", VA = "0x1827E5890")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004A8")]
	public RemoteCertificateValidationCallback ServerCertificateValidationCallback
	{
		[Token(Token = "0x60015AE")]
		[Address(RVA = "0x27E58A0", Offset = "0x27E3EA0", VA = "0x1827E58A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004A9")]
	internal bool FinishedReading
	{
		[Token(Token = "0x60015BD")]
		[Address(RVA = "0x27E59E0", Offset = "0x27E3FE0", VA = "0x1827E59E0")]
		set
		{
		}
	}

	[Token(Token = "0x170004AA")]
	internal bool Aborted
	{
		[Token(Token = "0x60015BE")]
		[Address(RVA = "0x27E5530", Offset = "0x27E3B30", VA = "0x1827E5530")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001585")]
	[Address(RVA = "0x27E5010", Offset = "0x27E3610", VA = "0x1827E5010")]
	static HttpWebRequest()
	{
	}

	[Token(Token = "0x6001586")]
	[Address(RVA = "0x27E50F0", Offset = "0x27E36F0", VA = "0x1827E50F0")]
	public HttpWebRequest(Uri uri)
	{
	}

	[Token(Token = "0x6001587")]
	[Address(RVA = "0x27E5390", Offset = "0x27E3990", VA = "0x1827E5390")]
	[Obsolete("Serialization is obsoleted for this type.  http://go.microsoft.com/fwlink/?linkid=14202")]
	protected HttpWebRequest(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x6001588")]
	[Address(RVA = "0x27E4B60", Offset = "0x27E3160", VA = "0x1827E4B60")]
	private void ResetAuthorization()
	{
	}

	[Token(Token = "0x60015AF")]
	[Address(RVA = "0x27E3E50", Offset = "0x27E2450", VA = "0x1827E3E50")]
	internal ServicePoint GetServicePoint()
	{
		return null;
	}

	[Token(Token = "0x60015B0")]
	[Address(RVA = "0x27E4C70", Offset = "0x27E3270", VA = "0x1827E4C70")]
	private WebOperation SendRequest(bool redirecting, BufferOffsetSize writeBuffer, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60015B1")]
	internal static Task<T> RunWithTimeout<T>(Func<CancellationToken, Task<T>> func, int timeout, Action abort, Func<bool> aborted, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60015B2")]
	[AsyncStateMachine(typeof(_003CRunWithTimeoutWorker_003Ed__241<>))]
	private static Task<T> RunWithTimeoutWorker<T>(Task<T> workerTask, int timeout, Action abort, Func<bool> aborted, CancellationTokenSource cts)
	{
		return null;
	}

	[Token(Token = "0x60015B3")]
	private Task<T> RunWithTimeout<T>(Func<CancellationToken, Task<T>> func)
	{
		return null;
	}

	[Token(Token = "0x60015B4")]
	[Address(RVA = "0x27E4540", Offset = "0x27E2B40", VA = "0x1827E4540")]
	[AsyncStateMachine(typeof(_003CMyGetResponseAsync_003Ed__243))]
	private Task<HttpWebResponse> MyGetResponseAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60015B5")]
	[Address(RVA = "0x27E3A80", Offset = "0x27E2080", VA = "0x1827E3A80")]
	[AsyncStateMachine(typeof(_003CGetResponseFromData_003Ed__244))]
	private Task<(HttpWebResponse, bool, bool, BufferOffsetSize, WebOperation)> GetResponseFromData(WebResponseStream stream, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60015B6")]
	[Address(RVA = "0x27E2D10", Offset = "0x27E1310", VA = "0x1827E2D10")]
	internal static Exception FlattenException(Exception e)
	{
		return null;
	}

	[Token(Token = "0x60015B7")]
	[Address(RVA = "0x27E4120", Offset = "0x27E2720", VA = "0x1827E4120")]
	private WebException GetWebException(Exception e)
	{
		return null;
	}

	[Token(Token = "0x60015B8")]
	[Address(RVA = "0x27E3F60", Offset = "0x27E2560", VA = "0x1827E3F60")]
	private static WebException GetWebException(Exception e, bool aborted)
	{
		return null;
	}

	[Token(Token = "0x60015B9")]
	[Address(RVA = "0x27E29F0", Offset = "0x27E0FF0", VA = "0x1827E29F0")]
	internal static WebException CreateRequestAbortedException()
	{
		return null;
	}

	[Token(Token = "0x60015BA")]
	[Address(RVA = "0x27E2270", Offset = "0x27E0870", VA = "0x1827E2270", Slot = "21")]
	public override IAsyncResult BeginGetResponse(AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x60015BB")]
	[Address(RVA = "0x27E2C40", Offset = "0x27E1240", VA = "0x1827E2C40", Slot = "22")]
	public override WebResponse EndGetResponse(IAsyncResult asyncResult)
	{
		return null;
	}

	[Token(Token = "0x60015BC")]
	[Address(RVA = "0x27E3BD0", Offset = "0x27E21D0", VA = "0x1827E3BD0", Slot = "20")]
	public override WebResponse GetResponse()
	{
		return null;
	}

	[Token(Token = "0x60015BF")]
	[Address(RVA = "0x27E21A0", Offset = "0x27E07A0", VA = "0x1827E21A0", Slot = "24")]
	public override void Abort()
	{
	}

	[Token(Token = "0x60015C0")]
	[Address(RVA = "0x27E4EC0", Offset = "0x27E34C0", VA = "0x1827E4EC0", Slot = "6")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x60015C1")]
	[Address(RVA = "0x27E3650", Offset = "0x27E1C50", VA = "0x1827E3650", Slot = "7")]
	protected override void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x60015C2")]
	[Address(RVA = "0x27E2980", Offset = "0x27E0F80", VA = "0x1827E2980")]
	private void CheckRequestStarted()
	{
	}

	[Token(Token = "0x60015C3")]
	[Address(RVA = "0x27E2A90", Offset = "0x27E1090", VA = "0x1827E2A90")]
	internal void DoContinueDelegate(int statusCode, WebHeaderCollection headers)
	{
	}

	[Token(Token = "0x60015C4")]
	[Address(RVA = "0x27E4BF0", Offset = "0x27E31F0", VA = "0x1827E4BF0")]
	private void RewriteRedirectToGet()
	{
	}

	[Token(Token = "0x60015C5")]
	[Address(RVA = "0x27E4650", Offset = "0x27E2C50", VA = "0x1827E4650")]
	private bool Redirect(HttpStatusCode code, WebResponse response)
	{
		return default(bool);
	}

	[Token(Token = "0x60015C6")]
	[Address(RVA = "0x27E2DD0", Offset = "0x27E13D0", VA = "0x1827E2DD0")]
	private string GetHeaders()
	{
		return null;
	}

	[Token(Token = "0x60015C7")]
	[Address(RVA = "0x27E2AB0", Offset = "0x27E10B0", VA = "0x1827E2AB0")]
	private void DoPreAuthenticate()
	{
	}

	[Token(Token = "0x60015C8")]
	[Address(RVA = "0x27E3690", Offset = "0x27E1C90", VA = "0x1827E3690")]
	internal byte[] GetRequestHeaders()
	{
		return null;
	}

	[Token(Token = "0x60015C9")]
	[Address(RVA = "0x27E4340", Offset = "0x27E2940", VA = "0x1827E4340")]
	private (WebOperation, bool) HandleNtlmAuth(WebResponseStream stream, HttpWebResponse response, BufferOffsetSize writeBuffer, CancellationToken cancellationToken)
	{
		return default((WebOperation, bool));
	}

	[Token(Token = "0x60015CA")]
	[Address(RVA = "0x27E2440", Offset = "0x27E0A40", VA = "0x1827E2440")]
	private bool CheckAuthorization(WebResponse response, HttpStatusCode code)
	{
		return default(bool);
	}

	[Token(Token = "0x60015CB")]
	[Address(RVA = "0x27E3C70", Offset = "0x27E2270", VA = "0x1827E3C70")]
	private (Task<BufferOffsetSize>, WebException) GetRewriteHandler(HttpWebResponse response, bool redirect)
	{
		return default((Task<BufferOffsetSize>, WebException));
	}

	[Token(Token = "0x60015CC")]
	[Address(RVA = "0x27E2470", Offset = "0x27E0A70", VA = "0x1827E2470")]
	private (bool, bool, Task<BufferOffsetSize>, WebException) CheckFinalStatus(HttpWebResponse response)
	{
		return default((bool, bool, Task<BufferOffsetSize>, WebException));
	}

	[Token(Token = "0x60015CF")]
	[Address(RVA = "0x27E50C0", Offset = "0x27E36C0", VA = "0x1827E50C0")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("This API supports the .NET Framework infrastructure and is not intended to be used directly from your code.", true)]
	public HttpWebRequest()
	{
	}
}
