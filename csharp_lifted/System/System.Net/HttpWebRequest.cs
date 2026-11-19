// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.HttpWebRequest
// Update status: unchanged since the previous dump
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
[Token(Token = "0x20002E1")]
public class HttpWebRequest : WebRequest, ISerializable
{
	[Token(Token = "0x20002E2")]
	private enum NtlmAuthState
	{
		[Token(Token = "0x4000B54")]
		None,
		[Token(Token = "0x4000B55")]
		Challenge,
		[Token(Token = "0x4000B56")]
		Response
	}

	[Token(Token = "0x20002E3")]
	private struct AuthorizationState
	{
		[Token(Token = "0x4000B57")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly HttpWebRequest request;

		[Token(Token = "0x4000B58")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private readonly bool isProxy;

		[Token(Token = "0x4000B59")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x9")]
		private bool isCompleted;

		[Token(Token = "0x4000B5A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
		private NtlmAuthState ntlm_auth_state;

		[Token(Token = "0x1700047C")]
		public bool IsCompleted
		{
			[Token(Token = "0x6001412")]
			[Address(RVA = "0x61890E0", Offset = "0x61880E0", VA = "0x61890E0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700047D")]
		public NtlmAuthState NtlmAuthState
		{
			[Token(Token = "0x6001413")]
			[Address(RVA = "0x61890F0", Offset = "0x61880F0", VA = "0x61890F0")]
			get
			{
				return default(NtlmAuthState);
			}
		}

		[Token(Token = "0x1700047E")]
		public bool IsNtlmAuthenticated
		{
			[Token(Token = "0x6001414")]
			[Address(RVA = "0x6189100", Offset = "0x6188100", VA = "0x6189100")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001415")]
		[Address(RVA = "0x6184BC0", Offset = "0x6183BC0", VA = "0x6184BC0")]
		public AuthorizationState(HttpWebRequest request, bool isProxy)
		{
		}

		[Token(Token = "0x6001416")]
		[Address(RVA = "0x61883B0", Offset = "0x61873B0", VA = "0x61883B0")]
		public bool CheckAuthorization(WebResponse response, HttpStatusCode code)
		{
			return default(bool);
		}

		[Token(Token = "0x6001417")]
		[Address(RVA = "0x6188F30", Offset = "0x6187F30", VA = "0x6188F30")]
		public void Reset()
		{
		}

		[Token(Token = "0x6001418")]
		[Address(RVA = "0x6189120", Offset = "0x6188120", VA = "0x6189120", Slot = "3")]
		public override string ToString()
		{
			return null;
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x20002E5")]
	[CompilerGenerated]
	private struct _003CRunWithTimeoutWorker_003Ed__241<T> : IAsyncStateMachine
	{
		[Token(Token = "0x4000B5D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000B5E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncTaskMethodBuilder<T> _003C_003Et__builder;

		[Token(Token = "0x4000B5F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Task<T> workerTask;

		[Token(Token = "0x4000B60")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int timeout;

		[Token(Token = "0x4000B61")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public CancellationTokenSource cts;

		[Token(Token = "0x4000B62")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Action abort;

		[Token(Token = "0x4000B63")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Func<bool> aborted;

		[Token(Token = "0x4000B64")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private ConfiguredTaskAwaitable<bool>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x600141C")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600141D")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x20002E6")]
	[CompilerGenerated]
	private struct _003CMyGetResponseAsync_003Ed__243 : IAsyncStateMachine
	{
		[Token(Token = "0x4000B65")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000B66")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<HttpWebResponse> _003C_003Et__builder;

		[Token(Token = "0x4000B67")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public HttpWebRequest _003C_003E4__this;

		[Token(Token = "0x4000B68")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000B69")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private WebCompletionSource _003Ccompletion_003E5__2;

		[Token(Token = "0x4000B6A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private WebOperation _003Coperation_003E5__3;

		[Token(Token = "0x4000B6B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private WebException _003CthrowMe_003E5__4;

		[Token(Token = "0x4000B6C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private HttpWebResponse _003Cresponse_003E5__5;

		[Token(Token = "0x4000B6D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private WebResponseStream _003Cstream_003E5__6;

		[Token(Token = "0x4000B6E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private bool _003Credirect_003E5__7;

		[Token(Token = "0x4000B6F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x59")]
		private bool _003CmustReadAll_003E5__8;

		[Token(Token = "0x4000B70")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private WebOperation _003Cntlm_003E5__9;

		[Token(Token = "0x4000B71")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private BufferOffsetSize _003CwriteBuffer_003E5__10;

		[Token(Token = "0x4000B72")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		private ConfiguredTaskAwaitable<WebRequestStream>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000B73")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x4000B74")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
		private TaskAwaiter<WebResponseStream> _003C_003Eu__3;

		[Token(Token = "0x4000B75")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
		private ConfiguredTaskAwaitable<(HttpWebResponse response, bool redirect, bool mustReadAll, BufferOffsetSize writeBuffer, WebOperation ntlm)>.ConfiguredTaskAwaiter _003C_003Eu__4;

		[Token(Token = "0x600141E")]
		[Address(RVA = "0x61891F0", Offset = "0x61881F0", VA = "0x61891F0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x600141F")]
		[Address(RVA = "0x618A830", Offset = "0x6189830", VA = "0x618A830", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x20002E7")]
	[CompilerGenerated]
	private struct _003CGetResponseFromData_003Ed__244 : IAsyncStateMachine
	{
		[Token(Token = "0x4000B76")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000B77")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<(HttpWebResponse response, bool redirect, bool mustReadAll, BufferOffsetSize writeBuffer, WebOperation ntlm)> _003C_003Et__builder;

		[Token(Token = "0x4000B78")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public HttpWebRequest _003C_003E4__this;

		[Token(Token = "0x4000B79")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public WebResponseStream stream;

		[Token(Token = "0x4000B7A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000B7B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private HttpWebResponse _003Cresponse_003E5__2;

		[Token(Token = "0x4000B7C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private WebException _003CthrowMe_003E5__3;

		[Token(Token = "0x4000B7D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private bool _003Credirect_003E5__4;

		[Token(Token = "0x4000B7E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x49")]
		private bool _003CmustReadAll_003E5__5;

		[Token(Token = "0x4000B7F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000B80")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private ConfiguredTaskAwaitable<BufferOffsetSize>.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6001420")]
		[Address(RVA = "0x618A8A0", Offset = "0x61898A0", VA = "0x618A8A0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001421")]
		[Address(RVA = "0x618B5A0", Offset = "0x618A5A0", VA = "0x618B5A0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000B1A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Uri requestUri;

	[Token(Token = "0x4000B1B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private Uri actualUri;

	[Token(Token = "0x4000B1C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private bool hostChanged;

	[Token(Token = "0x4000B1D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x49")]
	private bool allowAutoRedirect;

	[Token(Token = "0x4000B1E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4A")]
	private bool allowBuffering;

	[Token(Token = "0x4000B1F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private X509CertificateCollection certificates;

	[Token(Token = "0x4000B20")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private string connectionGroup;

	[Token(Token = "0x4000B21")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private bool haveContentLength;

	[Token(Token = "0x4000B22")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private long contentLength;

	[Token(Token = "0x4000B23")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private HttpContinueDelegate continueDelegate;

	[Token(Token = "0x4000B24")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private CookieContainer cookieContainer;

	[Token(Token = "0x4000B25")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private ICredentials credentials;

	[Token(Token = "0x4000B26")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private bool haveResponse;

	[Token(Token = "0x4000B27")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x89")]
	private bool requestSent;

	[Token(Token = "0x4000B28")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private WebHeaderCollection webHeaders;

	[Token(Token = "0x4000B29")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private bool keepAlive;

	[Token(Token = "0x4000B2A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x9C")]
	private int maxAutoRedirect;

	[Token(Token = "0x4000B2B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private string mediaType;

	[Token(Token = "0x4000B2C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private string method;

	[Token(Token = "0x4000B2D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private string initialMethod;

	[Token(Token = "0x4000B2E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private bool pipelined;

	[Token(Token = "0x4000B2F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB9")]
	private bool preAuthenticate;

	[Token(Token = "0x4000B30")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xBA")]
	private bool usedPreAuth;

	[Token(Token = "0x4000B31")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Version version;

	[Token(Token = "0x4000B32")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private bool force_version;

	[Token(Token = "0x4000B33")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private Version actualVersion;

	[Token(Token = "0x4000B34")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private IWebProxy proxy;

	[Token(Token = "0x4000B35")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private bool sendChunked;

	[Token(Token = "0x4000B36")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private ServicePoint servicePoint;

	[Token(Token = "0x4000B37")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private int timeout;

	[Token(Token = "0x4000B38")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF4")]
	private int continueTimeout;

	[Token(Token = "0x4000B39")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private WebRequestStream writeStream;

	[Token(Token = "0x4000B3A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private HttpWebResponse webResponse;

	[Token(Token = "0x4000B3B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private WebCompletionSource responseTask;

	[Token(Token = "0x4000B3C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private WebOperation currentOperation;

	[Token(Token = "0x4000B3D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private int aborted;

	[Token(Token = "0x4000B3E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x11C")]
	private bool gotRequestStream;

	[Token(Token = "0x4000B3F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private int redirects;

	[Token(Token = "0x4000B40")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x124")]
	private bool expectContinue;

	[Token(Token = "0x4000B41")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x125")]
	private bool getResponseCalled;

	[Token(Token = "0x4000B42")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	private object locker;

	[Token(Token = "0x4000B43")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	private bool finished_reading;

	[Token(Token = "0x4000B44")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x134")]
	private DecompressionMethods auto_decomp;

	[Token(Token = "0x4000B45")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static int defaultMaxResponseHeadersLength;

	[Token(Token = "0x4000B46")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	private static int defaultMaximumErrorResponseLength;

	[Token(Token = "0x4000B47")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static RequestCachePolicy defaultCachePolicy;

	[Token(Token = "0x4000B48")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	private int readWriteTimeout;

	[Token(Token = "0x4000B49")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
	private MobileTlsProvider tlsProvider;

	[Token(Token = "0x4000B4A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
	private MonoTlsSettings tlsSettings;

	[Token(Token = "0x4000B4B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	private ServerCertValidationCallback certValidationCallback;

	[Token(Token = "0x4000B4C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	private bool hostHasPort;

	[Token(Token = "0x4000B4D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	private Uri hostUri;

	[Token(Token = "0x4000B4E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	private AuthorizationState auth_state;

	[Token(Token = "0x4000B4F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x178")]
	private AuthorizationState proxy_auth_state;

	[NonSerialized]
	[Token(Token = "0x4000B50")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x188")]
	internal Func<Stream, Task> ResendContentFactory;

	[Token(Token = "0x4000B52")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x191")]
	private bool unsafe_auth_blah;

	[Token(Token = "0x17000459")]
	public Uri Address
	{
		[Token(Token = "0x60013CB")]
		[Address(RVA = "0x6184BF0", Offset = "0x6183BF0", VA = "0x6184BF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700045A")]
	public virtual bool AllowWriteStreamBuffering
	{
		[Token(Token = "0x60013CC")]
		[Address(RVA = "0x6184C00", Offset = "0x6183C00", VA = "0x6184C00", Slot = "25")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700045B")]
	public DecompressionMethods AutomaticDecompression
	{
		[Token(Token = "0x60013CD")]
		[Address(RVA = "0x6184C10", Offset = "0x6183C10", VA = "0x6184C10")]
		get
		{
			return default(DecompressionMethods);
		}
	}

	[Token(Token = "0x1700045C")]
	internal bool InternalAllowBuffering
	{
		[Token(Token = "0x60013CE")]
		[Address(RVA = "0x6184C20", Offset = "0x6183C20", VA = "0x6184C20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700045D")]
	private bool MethodWithBuffer
	{
		[Token(Token = "0x60013CF")]
		[Address(RVA = "0x6184C30", Offset = "0x6183C30", VA = "0x6184C30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700045E")]
	internal MobileTlsProvider TlsProvider
	{
		[Token(Token = "0x60013D0")]
		[Address(RVA = "0x6184D10", Offset = "0x6183D10", VA = "0x6184D10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700045F")]
	internal MonoTlsSettings TlsSettings
	{
		[Token(Token = "0x60013D1")]
		[Address(RVA = "0x6184D20", Offset = "0x6183D20", VA = "0x6184D20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000460")]
	public X509CertificateCollection ClientCertificates
	{
		[Token(Token = "0x60013D2")]
		[Address(RVA = "0x6184D30", Offset = "0x6183D30", VA = "0x6184D30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000461")]
	public override long ContentLength
	{
		[Token(Token = "0x60013D3")]
		[Address(RVA = "0x6184DB0", Offset = "0x6183DB0", VA = "0x6184DB0", Slot = "13")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000462")]
	internal long InternalContentLength
	{
		[Token(Token = "0x60013D4")]
		[Address(RVA = "0x6184DC0", Offset = "0x6183DC0", VA = "0x6184DC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000463")]
	internal bool ThrowOnError
	{
		[Token(Token = "0x60013D5")]
		[Address(RVA = "0x6184DD0", Offset = "0x6183DD0", VA = "0x6184DD0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60013D6")]
		[Address(RVA = "0x6184DE0", Offset = "0x6183DE0", VA = "0x6184DE0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000464")]
	public override ICredentials Credentials
	{
		[Token(Token = "0x60013D7")]
		[Address(RVA = "0x6184DF0", Offset = "0x6183DF0", VA = "0x6184DF0", Slot = "14")]
		get
		{
			return null;
		}
		[Token(Token = "0x60013D8")]
		[Address(RVA = "0x6184E00", Offset = "0x6183E00", VA = "0x6184E00", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x17000465")]
	[System.MonoTODO]
	public static int DefaultMaximumErrorResponseLength
	{
		[Token(Token = "0x60013D9")]
		[Address(RVA = "0x6184E10", Offset = "0x6183E10", VA = "0x6184E10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000466")]
	public override WebHeaderCollection Headers
	{
		[Token(Token = "0x60013DA")]
		[Address(RVA = "0x6184E80", Offset = "0x6183E80", VA = "0x6184E80", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000467")]
	public string Host
	{
		[Token(Token = "0x60013DB")]
		[Address(RVA = "0x6184E90", Offset = "0x6183E90", VA = "0x6184E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000468")]
	public bool KeepAlive
	{
		[Token(Token = "0x60013DC")]
		[Address(RVA = "0x6184FD0", Offset = "0x6183FD0", VA = "0x6184FD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000469")]
	public int ReadWriteTimeout
	{
		[Token(Token = "0x60013DD")]
		[Address(RVA = "0x6184FE0", Offset = "0x6183FE0", VA = "0x6184FE0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700046A")]
	public override string Method
	{
		[Token(Token = "0x60013DE")]
		[Address(RVA = "0x6184FF0", Offset = "0x6183FF0", VA = "0x6184FF0", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x60013DF")]
		[Address(RVA = "0x6185000", Offset = "0x6184000", VA = "0x6185000", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x1700046B")]
	public Version ProtocolVersion
	{
		[Token(Token = "0x60013E0")]
		[Address(RVA = "0x6185240", Offset = "0x6184240", VA = "0x6185240")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700046C")]
	public override IWebProxy Proxy
	{
		[Token(Token = "0x60013E1")]
		[Address(RVA = "0x6185250", Offset = "0x6184250", VA = "0x6185250", Slot = "17")]
		get
		{
			return null;
		}
		[Token(Token = "0x60013E2")]
		[Address(RVA = "0x6185260", Offset = "0x6184260", VA = "0x6185260", Slot = "18")]
		set
		{
		}
	}

	[Token(Token = "0x1700046D")]
	public override Uri RequestUri
	{
		[Token(Token = "0x60013E3")]
		[Address(RVA = "0x6185480", Offset = "0x6184480", VA = "0x6185480", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700046E")]
	public bool SendChunked
	{
		[Token(Token = "0x60013E4")]
		[Address(RVA = "0x6185490", Offset = "0x6184490", VA = "0x6185490")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700046F")]
	public ServicePoint ServicePoint
	{
		[Token(Token = "0x60013E5")]
		[Address(RVA = "0x61854A0", Offset = "0x61844A0", VA = "0x61854A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000470")]
	internal ServicePoint ServicePointNoLock
	{
		[Token(Token = "0x60013E6")]
		[Address(RVA = "0x61854B0", Offset = "0x61844B0", VA = "0x61854B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000471")]
	public override int Timeout
	{
		[Token(Token = "0x60013E7")]
		[Address(RVA = "0x61854C0", Offset = "0x61844C0", VA = "0x61854C0", Slot = "19")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000472")]
	public string TransferEncoding
	{
		[Token(Token = "0x60013E8")]
		[Address(RVA = "0x61854D0", Offset = "0x61844D0", VA = "0x61854D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000473")]
	public override bool UseDefaultCredentials
	{
		[Token(Token = "0x60013E9")]
		[Address(RVA = "0x6185520", Offset = "0x6184520", VA = "0x6185520", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000474")]
	public bool UnsafeAuthenticatedConnectionSharing
	{
		[Token(Token = "0x60013EA")]
		[Address(RVA = "0x61855A0", Offset = "0x61845A0", VA = "0x61855A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000475")]
	internal bool ExpectContinue
	{
		[Token(Token = "0x60013EB")]
		[Address(RVA = "0x61855B0", Offset = "0x61845B0", VA = "0x61855B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60013EC")]
		[Address(RVA = "0x61855C0", Offset = "0x61845C0", VA = "0x61855C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000476")]
	internal Uri AuthUri
	{
		[Token(Token = "0x60013ED")]
		[Address(RVA = "0x61855D0", Offset = "0x61845D0", VA = "0x61855D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000477")]
	internal bool ProxyQuery
	{
		[Token(Token = "0x60013EE")]
		[Address(RVA = "0x61855E0", Offset = "0x61845E0", VA = "0x61855E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000478")]
	internal ServerCertValidationCallback ServerCertValidationCallback
	{
		[Token(Token = "0x60013EF")]
		[Address(RVA = "0x6185610", Offset = "0x6184610", VA = "0x6185610")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000479")]
	public RemoteCertificateValidationCallback ServerCertificateValidationCallback
	{
		[Token(Token = "0x60013F0")]
		[Address(RVA = "0x6185620", Offset = "0x6184620", VA = "0x6185620")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700047A")]
	internal bool FinishedReading
	{
		[Token(Token = "0x60013FF")]
		[Address(RVA = "0x6186AA0", Offset = "0x6185AA0", VA = "0x6186AA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700047B")]
	internal bool Aborted
	{
		[Token(Token = "0x6001400")]
		[Address(RVA = "0x6186470", Offset = "0x6185470", VA = "0x6186470")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60013C7")]
	[Address(RVA = "0x61848B0", Offset = "0x61838B0", VA = "0x61848B0")]
	static HttpWebRequest()
	{
	}

	[Token(Token = "0x60013C8")]
	[Address(RVA = "0x61845D0", Offset = "0x61835D0", VA = "0x61845D0")]
	public HttpWebRequest(Uri uri)
	{
	}

	[Token(Token = "0x60013C9")]
	[Address(RVA = "0x6184A20", Offset = "0x6183A20", VA = "0x6184A20")]
	[Obsolete("Serialization is obsoleted for this type.  http://go.microsoft.com/fwlink/?linkid=14202")]
	protected HttpWebRequest(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x60013CA")]
	[Address(RVA = "0x6184940", Offset = "0x6183940", VA = "0x6184940")]
	private void ResetAuthorization()
	{
	}

	[Token(Token = "0x60013F1")]
	[Address(RVA = "0x6185350", Offset = "0x6184350", VA = "0x6185350")]
	internal ServicePoint GetServicePoint()
	{
		return null;
	}

	[Token(Token = "0x60013F2")]
	[Address(RVA = "0x6185D00", Offset = "0x6184D00", VA = "0x6185D00")]
	private WebOperation SendRequest(bool redirecting, BufferOffsetSize writeBuffer, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60013F3")]
	internal static Task<T> RunWithTimeout<T>(Func<CancellationToken, Task<T>> func, int timeout, Action abort, Func<bool> aborted, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60013F4")]
	[AsyncStateMachine(typeof(_003CRunWithTimeoutWorker_003Ed__241<>))]
	private static Task<T> RunWithTimeoutWorker<T>(Task<T> workerTask, int timeout, Action abort, Func<bool> aborted, CancellationTokenSource cts)
	{
		return null;
	}

	[Token(Token = "0x60013F5")]
	private Task<T> RunWithTimeout<T>(Func<CancellationToken, Task<T>> func)
	{
		return null;
	}

	[Token(Token = "0x60013F6")]
	[Address(RVA = "0x61860B0", Offset = "0x61850B0", VA = "0x61860B0")]
	[AsyncStateMachine(typeof(_003CMyGetResponseAsync_003Ed__243))]
	private Task<HttpWebResponse> MyGetResponseAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60013F7")]
	[Address(RVA = "0x6186200", Offset = "0x6185200", VA = "0x6186200")]
	[AsyncStateMachine(typeof(_003CGetResponseFromData_003Ed__244))]
	private Task<(HttpWebResponse, bool, bool, BufferOffsetSize, WebOperation)> GetResponseFromData(WebResponseStream stream, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60013F8")]
	[Address(RVA = "0x6186350", Offset = "0x6185350", VA = "0x6186350")]
	internal static Exception FlattenException(Exception e)
	{
		return null;
	}

	[Token(Token = "0x60013F9")]
	[Address(RVA = "0x6186400", Offset = "0x6185400", VA = "0x6186400")]
	private WebException GetWebException(Exception e)
	{
		return null;
	}

	[Token(Token = "0x60013FA")]
	[Address(RVA = "0x6186490", Offset = "0x6185490", VA = "0x6186490")]
	private static WebException GetWebException(Exception e, bool aborted)
	{
		return null;
	}

	[Token(Token = "0x60013FB")]
	[Address(RVA = "0x6186650", Offset = "0x6185650", VA = "0x6186650")]
	internal static WebException CreateRequestAbortedException()
	{
		return null;
	}

	[Token(Token = "0x60013FC")]
	[Address(RVA = "0x61866F0", Offset = "0x61856F0", VA = "0x61866F0", Slot = "21")]
	public override IAsyncResult BeginGetResponse(AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x60013FD")]
	[Address(RVA = "0x6186890", Offset = "0x6185890", VA = "0x6186890", Slot = "22")]
	public override WebResponse EndGetResponse(IAsyncResult asyncResult)
	{
		return null;
	}

	[Token(Token = "0x60013FE")]
	[Address(RVA = "0x61869A0", Offset = "0x61859A0", VA = "0x61869A0", Slot = "20")]
	public override WebResponse GetResponse()
	{
		return null;
	}

	[Token(Token = "0x6001401")]
	[Address(RVA = "0x6186AB0", Offset = "0x6185AB0", VA = "0x6186AB0", Slot = "24")]
	public override void Abort()
	{
	}

	[Token(Token = "0x6001402")]
	[Address(RVA = "0x6186BD0", Offset = "0x6185BD0", VA = "0x6186BD0", Slot = "6")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x6001403")]
	[Address(RVA = "0x6186C10", Offset = "0x6185C10", VA = "0x6186C10", Slot = "7")]
	protected override void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x6001404")]
	[Address(RVA = "0x61852F0", Offset = "0x61842F0", VA = "0x61852F0")]
	private void CheckRequestStarted()
	{
	}

	[Token(Token = "0x6001405")]
	[Address(RVA = "0x6186C50", Offset = "0x6185C50", VA = "0x6186C50")]
	internal void DoContinueDelegate(int statusCode, WebHeaderCollection headers)
	{
	}

	[Token(Token = "0x6001406")]
	[Address(RVA = "0x6186C70", Offset = "0x6185C70", VA = "0x6186C70")]
	private void RewriteRedirectToGet()
	{
	}

	[Token(Token = "0x6001407")]
	[Address(RVA = "0x6186CF0", Offset = "0x6185CF0", VA = "0x6186CF0")]
	private bool Redirect(HttpStatusCode code, WebResponse response)
	{
		return default(bool);
	}

	[Token(Token = "0x6001408")]
	[Address(RVA = "0x6187270", Offset = "0x6186270", VA = "0x6187270")]
	private string GetHeaders()
	{
		return null;
	}

	[Token(Token = "0x6001409")]
	[Address(RVA = "0x6187A70", Offset = "0x6186A70", VA = "0x6187A70")]
	private void DoPreAuthenticate()
	{
	}

	[Token(Token = "0x600140A")]
	[Address(RVA = "0x6187CD0", Offset = "0x6186CD0", VA = "0x6187CD0")]
	internal byte[] GetRequestHeaders()
	{
		return null;
	}

	[Token(Token = "0x600140B")]
	[Address(RVA = "0x61880A0", Offset = "0x61870A0", VA = "0x61880A0")]
	private (WebOperation, bool) HandleNtlmAuth(WebResponseStream stream, HttpWebResponse response, BufferOffsetSize writeBuffer, CancellationToken cancellationToken)
	{
		return default((WebOperation, bool));
	}

	[Token(Token = "0x600140C")]
	[Address(RVA = "0x6188380", Offset = "0x6187380", VA = "0x6188380")]
	private bool CheckAuthorization(WebResponse response, HttpStatusCode code)
	{
		return default(bool);
	}

	[Token(Token = "0x600140D")]
	[Address(RVA = "0x6188700", Offset = "0x6187700", VA = "0x6188700")]
	private (Task<BufferOffsetSize>, WebException) GetRewriteHandler(HttpWebResponse response, bool redirect)
	{
		return default((Task<BufferOffsetSize>, WebException));
	}

	[Token(Token = "0x600140E")]
	[Address(RVA = "0x61888F0", Offset = "0x61878F0", VA = "0x61888F0")]
	private (bool, bool, Task<BufferOffsetSize>, WebException) CheckFinalStatus(HttpWebResponse response)
	{
		return default((bool, bool, Task<BufferOffsetSize>, WebException));
	}

	[Token(Token = "0x6001411")]
	[Address(RVA = "0x61890B0", Offset = "0x61880B0", VA = "0x61890B0")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Obsolete("This API supports the .NET Framework infrastructure and is not intended to be used directly from your code.", true)]
	public HttpWebRequest()
	{
	}
}
