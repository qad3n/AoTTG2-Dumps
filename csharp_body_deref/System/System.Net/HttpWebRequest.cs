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
[Token(Token = "0x2000198")]
public class HttpWebRequest : WebRequest, ISerializable
{
	[Token(Token = "0x2000199")]
	private enum NtlmAuthState
	{
		[Token(Token = "0x400080D")]
		None,
		[Token(Token = "0x400080E")]
		Challenge,
		[Token(Token = "0x400080F")]
		Response
	}

	[Token(Token = "0x200019A")]
	private struct AuthorizationState
	{
		[Token(Token = "0x4000810")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly HttpWebRequest request;

		[Token(Token = "0x4000811")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private readonly bool isProxy;

		[Token(Token = "0x4000812")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x9")]
		private bool isCompleted;

		[Token(Token = "0x4000813")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
		private NtlmAuthState ntlm_auth_state;

		[Token(Token = "0x17000255")]
		public bool IsCompleted
		{
			[Token(Token = "0x6000A0F")]
			[Address(RVA = "0x4986AB0", Offset = "0x4986AB0", VA = "0x4986AB0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x17000256")]
		public NtlmAuthState NtlmAuthState
		{
			[Token(Token = "0x6000A10")]
			[Address(RVA = "0x4986AC0", Offset = "0x4986AC0", VA = "0x4986AC0")]
			get
			{
				return default(NtlmAuthState);
			}
		}

		[Token(Token = "0x17000257")]
		public bool IsNtlmAuthenticated
		{
			[Token(Token = "0x6000A11")]
			[Address(RVA = "0x4986AD0", Offset = "0x4986AD0", VA = "0x4986AD0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000A12")]
		[Address(RVA = "0x4982470", Offset = "0x4982470", VA = "0x4982470")]
		public AuthorizationState(HttpWebRequest request, bool isProxy)
		{
		}

		[Token(Token = "0x6000A13")]
		[Address(RVA = "0x4985D40", Offset = "0x4985D40", VA = "0x4985D40")]
		public bool CheckAuthorization(WebResponse response, HttpStatusCode code)
		{
			return default(bool);
		}

		[Token(Token = "0x6000A14")]
		[Address(RVA = "0x4986900", Offset = "0x4986900", VA = "0x4986900")]
		public void Reset()
		{
		}

		[Token(Token = "0x6000A15")]
		[Address(RVA = "0x4986AF0", Offset = "0x4986AF0", VA = "0x4986AF0", Slot = "3")]
		public override string ToString()
		{
			return null;
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200019C")]
	[CompilerGenerated]
	private struct _003CRunWithTimeoutWorker_003Ed__241<T> : IAsyncStateMachine
	{
		[Token(Token = "0x4000816")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000817")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public AsyncTaskMethodBuilder<T> _003C_003Et__builder;

		[Token(Token = "0x4000818")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Task<T> workerTask;

		[Token(Token = "0x4000819")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int timeout;

		[Token(Token = "0x400081A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public CancellationTokenSource cts;

		[Token(Token = "0x400081B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Action abort;

		[Token(Token = "0x400081C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public Func<bool> aborted;

		[Token(Token = "0x400081D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private ConfiguredTaskAwaitable<bool>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000A19")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000A1A")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200019D")]
	[CompilerGenerated]
	private struct _003CMyGetResponseAsync_003Ed__243 : IAsyncStateMachine
	{
		[Token(Token = "0x400081E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400081F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<HttpWebResponse> _003C_003Et__builder;

		[Token(Token = "0x4000820")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public HttpWebRequest _003C_003E4__this;

		[Token(Token = "0x4000821")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000822")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private WebCompletionSource _003Ccompletion_003E5__2;

		[Token(Token = "0x4000823")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private WebOperation _003Coperation_003E5__3;

		[Token(Token = "0x4000824")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private WebException _003CthrowMe_003E5__4;

		[Token(Token = "0x4000825")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private HttpWebResponse _003Cresponse_003E5__5;

		[Token(Token = "0x4000826")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private WebResponseStream _003Cstream_003E5__6;

		[Token(Token = "0x4000827")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private bool _003Credirect_003E5__7;

		[Token(Token = "0x4000828")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x59")]
		private bool _003CmustReadAll_003E5__8;

		[Token(Token = "0x4000829")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private WebOperation _003Cntlm_003E5__9;

		[Token(Token = "0x400082A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private BufferOffsetSize _003CwriteBuffer_003E5__10;

		[Token(Token = "0x400082B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
		private ConfiguredTaskAwaitable<WebRequestStream>.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x400082C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x400082D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
		private TaskAwaiter<WebResponseStream> _003C_003Eu__3;

		[Token(Token = "0x400082E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
		private ConfiguredTaskAwaitable<(HttpWebResponse response, bool redirect, bool mustReadAll, BufferOffsetSize writeBuffer, WebOperation ntlm)>.ConfiguredTaskAwaiter _003C_003Eu__4;

		[Token(Token = "0x6000A1B")]
		[Address(RVA = "0x4986BC0", Offset = "0x4986BC0", VA = "0x4986BC0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000A1C")]
		[Address(RVA = "0x49882A0", Offset = "0x49882A0", VA = "0x49882A0", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x200019E")]
	[CompilerGenerated]
	private struct _003CGetResponseFromData_003Ed__244 : IAsyncStateMachine
	{
		[Token(Token = "0x400082F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000830")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncTaskMethodBuilder<(HttpWebResponse response, bool redirect, bool mustReadAll, BufferOffsetSize writeBuffer, WebOperation ntlm)> _003C_003Et__builder;

		[Token(Token = "0x4000831")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public HttpWebRequest _003C_003E4__this;

		[Token(Token = "0x4000832")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public WebResponseStream stream;

		[Token(Token = "0x4000833")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public CancellationToken cancellationToken;

		[Token(Token = "0x4000834")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private HttpWebResponse _003Cresponse_003E5__2;

		[Token(Token = "0x4000835")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private WebException _003CthrowMe_003E5__3;

		[Token(Token = "0x4000836")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private bool _003Credirect_003E5__4;

		[Token(Token = "0x4000837")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x49")]
		private bool _003CmustReadAll_003E5__5;

		[Token(Token = "0x4000838")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x4000839")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
		private ConfiguredTaskAwaitable<BufferOffsetSize>.ConfiguredTaskAwaiter _003C_003Eu__2;

		[Token(Token = "0x6000A1D")]
		[Address(RVA = "0x4988310", Offset = "0x4988310", VA = "0x4988310", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000A1E")]
		[Address(RVA = "0x4989110", Offset = "0x4989110", VA = "0x4989110", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x40007D3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private Uri requestUri;

	[Token(Token = "0x40007D4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private Uri actualUri;

	[Token(Token = "0x40007D5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private bool hostChanged;

	[Token(Token = "0x40007D6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x49")]
	private bool allowAutoRedirect;

	[Token(Token = "0x40007D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4A")]
	private bool allowBuffering;

	[Token(Token = "0x40007D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private X509CertificateCollection certificates;

	[Token(Token = "0x40007D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private string connectionGroup;

	[Token(Token = "0x40007DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private bool haveContentLength;

	[Token(Token = "0x40007DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private long contentLength;

	[Token(Token = "0x40007DC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private HttpContinueDelegate continueDelegate;

	[Token(Token = "0x40007DD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private CookieContainer cookieContainer;

	[Token(Token = "0x40007DE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private ICredentials credentials;

	[Token(Token = "0x40007DF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private bool haveResponse;

	[Token(Token = "0x40007E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x89")]
	private bool requestSent;

	[Token(Token = "0x40007E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private WebHeaderCollection webHeaders;

	[Token(Token = "0x40007E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private bool keepAlive;

	[Token(Token = "0x40007E3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x9C")]
	private int maxAutoRedirect;

	[Token(Token = "0x40007E4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private string mediaType;

	[Token(Token = "0x40007E5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private string method;

	[Token(Token = "0x40007E6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private string initialMethod;

	[Token(Token = "0x40007E7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private bool pipelined;

	[Token(Token = "0x40007E8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB9")]
	private bool preAuthenticate;

	[Token(Token = "0x40007E9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xBA")]
	private bool usedPreAuth;

	[Token(Token = "0x40007EA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Version version;

	[Token(Token = "0x40007EB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private bool force_version;

	[Token(Token = "0x40007EC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private Version actualVersion;

	[Token(Token = "0x40007ED")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private IWebProxy proxy;

	[Token(Token = "0x40007EE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private bool sendChunked;

	[Token(Token = "0x40007EF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private ServicePoint servicePoint;

	[Token(Token = "0x40007F0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private int timeout;

	[Token(Token = "0x40007F1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF4")]
	private int continueTimeout;

	[Token(Token = "0x40007F2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private WebRequestStream writeStream;

	[Token(Token = "0x40007F3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private HttpWebResponse webResponse;

	[Token(Token = "0x40007F4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private WebCompletionSource responseTask;

	[Token(Token = "0x40007F5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	private WebOperation currentOperation;

	[Token(Token = "0x40007F6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	private int aborted;

	[Token(Token = "0x40007F7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x11C")]
	private bool gotRequestStream;

	[Token(Token = "0x40007F8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	private int redirects;

	[Token(Token = "0x40007F9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x124")]
	private bool expectContinue;

	[Token(Token = "0x40007FA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x125")]
	private bool getResponseCalled;

	[Token(Token = "0x40007FB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	private object locker;

	[Token(Token = "0x40007FC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	private bool finished_reading;

	[Token(Token = "0x40007FD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x134")]
	private DecompressionMethods auto_decomp;

	[Token(Token = "0x40007FE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static int defaultMaxResponseHeadersLength;

	[Token(Token = "0x40007FF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	private static int defaultMaximumErrorResponseLength;

	[Token(Token = "0x4000800")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static RequestCachePolicy defaultCachePolicy;

	[Token(Token = "0x4000801")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	private int readWriteTimeout;

	[Token(Token = "0x4000802")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
	private MobileTlsProvider tlsProvider;

	[Token(Token = "0x4000803")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
	private MonoTlsSettings tlsSettings;

	[Token(Token = "0x4000804")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	private ServerCertValidationCallback certValidationCallback;

	[Token(Token = "0x4000805")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	private bool hostHasPort;

	[Token(Token = "0x4000806")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	private Uri hostUri;

	[Token(Token = "0x4000807")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	private AuthorizationState auth_state;

	[Token(Token = "0x4000808")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x178")]
	private AuthorizationState proxy_auth_state;

	[NonSerialized]
	[Token(Token = "0x4000809")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x188")]
	internal Func<Stream, Task> ResendContentFactory;

	[Token(Token = "0x400080B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x191")]
	private bool unsafe_auth_blah;

	[Token(Token = "0x17000233")]
	public Uri Address
	{
		[Token(Token = "0x60009C9")]
		[Address(RVA = "0x49824A0", Offset = "0x49824A0", VA = "0x49824A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000234")]
	public virtual bool AllowWriteStreamBuffering
	{
		[Token(Token = "0x60009CA")]
		[Address(RVA = "0x49824B0", Offset = "0x49824B0", VA = "0x49824B0", Slot = "25")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000235")]
	public DecompressionMethods AutomaticDecompression
	{
		[Token(Token = "0x60009CB")]
		[Address(RVA = "0x49824C0", Offset = "0x49824C0", VA = "0x49824C0")]
		get
		{
			return default(DecompressionMethods);
		}
	}

	[Token(Token = "0x17000236")]
	internal bool InternalAllowBuffering
	{
		[Token(Token = "0x60009CC")]
		[Address(RVA = "0x49824D0", Offset = "0x49824D0", VA = "0x49824D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000237")]
	private bool MethodWithBuffer
	{
		[Token(Token = "0x60009CD")]
		[Address(RVA = "0x49824E0", Offset = "0x49824E0", VA = "0x49824E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000238")]
	internal MobileTlsProvider TlsProvider
	{
		[Token(Token = "0x60009CE")]
		[Address(RVA = "0x49825C0", Offset = "0x49825C0", VA = "0x49825C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000239")]
	internal MonoTlsSettings TlsSettings
	{
		[Token(Token = "0x60009CF")]
		[Address(RVA = "0x49825D0", Offset = "0x49825D0", VA = "0x49825D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700023A")]
	public X509CertificateCollection ClientCertificates
	{
		[Token(Token = "0x60009D0")]
		[Address(RVA = "0x49825E0", Offset = "0x49825E0", VA = "0x49825E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700023B")]
	public override long ContentLength
	{
		[Token(Token = "0x60009D1")]
		[Address(RVA = "0x4982660", Offset = "0x4982660", VA = "0x4982660", Slot = "13")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x1700023C")]
	internal long InternalContentLength
	{
		[Token(Token = "0x60009D2")]
		[Address(RVA = "0x4982670", Offset = "0x4982670", VA = "0x4982670")]
		set
		{
		}
	}

	[Token(Token = "0x1700023D")]
	internal bool ThrowOnError
	{
		[Token(Token = "0x60009D3")]
		[Address(RVA = "0x4982680", Offset = "0x4982680", VA = "0x4982680")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009D4")]
		[Address(RVA = "0x4982690", Offset = "0x4982690", VA = "0x4982690")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700023E")]
	public override ICredentials Credentials
	{
		[Token(Token = "0x60009D5")]
		[Address(RVA = "0x49826A0", Offset = "0x49826A0", VA = "0x49826A0", Slot = "14")]
		get
		{
			return null;
		}
		[Token(Token = "0x60009D6")]
		[Address(RVA = "0x49826B0", Offset = "0x49826B0", VA = "0x49826B0", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x1700023F")]
	[System.MonoTODO]
	public static int DefaultMaximumErrorResponseLength
	{
		[Token(Token = "0x60009D7")]
		[Address(RVA = "0x49826C0", Offset = "0x49826C0", VA = "0x49826C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000240")]
	public override WebHeaderCollection Headers
	{
		[Token(Token = "0x60009D8")]
		[Address(RVA = "0x4982730", Offset = "0x4982730", VA = "0x4982730", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000241")]
	public string Host
	{
		[Token(Token = "0x60009D9")]
		[Address(RVA = "0x4982740", Offset = "0x4982740", VA = "0x4982740")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000242")]
	public bool KeepAlive
	{
		[Token(Token = "0x60009DA")]
		[Address(RVA = "0x4982860", Offset = "0x4982860", VA = "0x4982860")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000243")]
	public int ReadWriteTimeout
	{
		[Token(Token = "0x60009DB")]
		[Address(RVA = "0x4982870", Offset = "0x4982870", VA = "0x4982870")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000244")]
	public override string Method
	{
		[Token(Token = "0x60009DC")]
		[Address(RVA = "0x4982880", Offset = "0x4982880", VA = "0x4982880", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x60009DD")]
		[Address(RVA = "0x4982890", Offset = "0x4982890", VA = "0x4982890", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x17000245")]
	public Version ProtocolVersion
	{
		[Token(Token = "0x60009DE")]
		[Address(RVA = "0x4982AD0", Offset = "0x4982AD0", VA = "0x4982AD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000246")]
	public override IWebProxy Proxy
	{
		[Token(Token = "0x60009DF")]
		[Address(RVA = "0x4982AE0", Offset = "0x4982AE0", VA = "0x4982AE0", Slot = "17")]
		get
		{
			return null;
		}
		[Token(Token = "0x60009E0")]
		[Address(RVA = "0x4982AF0", Offset = "0x4982AF0", VA = "0x4982AF0", Slot = "18")]
		set
		{
		}
	}

	[Token(Token = "0x17000247")]
	public override Uri RequestUri
	{
		[Token(Token = "0x60009E1")]
		[Address(RVA = "0x4982D30", Offset = "0x4982D30", VA = "0x4982D30", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000248")]
	public bool SendChunked
	{
		[Token(Token = "0x60009E2")]
		[Address(RVA = "0x4982D40", Offset = "0x4982D40", VA = "0x4982D40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000249")]
	public ServicePoint ServicePoint
	{
		[Token(Token = "0x60009E3")]
		[Address(RVA = "0x4982D50", Offset = "0x4982D50", VA = "0x4982D50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700024A")]
	internal ServicePoint ServicePointNoLock
	{
		[Token(Token = "0x60009E4")]
		[Address(RVA = "0x4982D60", Offset = "0x4982D60", VA = "0x4982D60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700024B")]
	public override int Timeout
	{
		[Token(Token = "0x60009E5")]
		[Address(RVA = "0x4982D70", Offset = "0x4982D70", VA = "0x4982D70", Slot = "19")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700024C")]
	public string TransferEncoding
	{
		[Token(Token = "0x60009E6")]
		[Address(RVA = "0x4982D80", Offset = "0x4982D80", VA = "0x4982D80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700024D")]
	public override bool UseDefaultCredentials
	{
		[Token(Token = "0x60009E7")]
		[Address(RVA = "0x4982DD0", Offset = "0x4982DD0", VA = "0x4982DD0", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700024E")]
	public bool UnsafeAuthenticatedConnectionSharing
	{
		[Token(Token = "0x60009E8")]
		[Address(RVA = "0x4982E50", Offset = "0x4982E50", VA = "0x4982E50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700024F")]
	internal bool ExpectContinue
	{
		[Token(Token = "0x60009E9")]
		[Address(RVA = "0x4982E60", Offset = "0x4982E60", VA = "0x4982E60")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60009EA")]
		[Address(RVA = "0x4982E70", Offset = "0x4982E70", VA = "0x4982E70")]
		set
		{
		}
	}

	[Token(Token = "0x17000250")]
	internal Uri AuthUri
	{
		[Token(Token = "0x60009EB")]
		[Address(RVA = "0x4982E80", Offset = "0x4982E80", VA = "0x4982E80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000251")]
	internal bool ProxyQuery
	{
		[Token(Token = "0x60009EC")]
		[Address(RVA = "0x4982E90", Offset = "0x4982E90", VA = "0x4982E90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000252")]
	internal ServerCertValidationCallback ServerCertValidationCallback
	{
		[Token(Token = "0x60009ED")]
		[Address(RVA = "0x4982EC0", Offset = "0x4982EC0", VA = "0x4982EC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000253")]
	internal bool FinishedReading
	{
		[Token(Token = "0x60009FC")]
		[Address(RVA = "0x49843D0", Offset = "0x49843D0", VA = "0x49843D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000254")]
	internal bool Aborted
	{
		[Token(Token = "0x60009FD")]
		[Address(RVA = "0x4983DD0", Offset = "0x4983DD0", VA = "0x4983DD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60009C5")]
	[Address(RVA = "0x4982160", Offset = "0x4982160", VA = "0x4982160")]
	static HttpWebRequest()
	{
	}

	[Token(Token = "0x60009C6")]
	[Address(RVA = "0x4981E80", Offset = "0x4981E80", VA = "0x4981E80")]
	public HttpWebRequest(Uri uri)
	{
	}

	[Token(Token = "0x60009C7")]
	[Address(RVA = "0x49822D0", Offset = "0x49822D0", VA = "0x49822D0")]
	[Obsolete("Serialization is obsoleted for this type.  http://go.microsoft.com/fwlink/?linkid=14202")]
	protected HttpWebRequest(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x60009C8")]
	[Address(RVA = "0x49821F0", Offset = "0x49821F0", VA = "0x49821F0")]
	private void ResetAuthorization()
	{
	}

	[Token(Token = "0x60009EE")]
	[Address(RVA = "0x4982BE0", Offset = "0x4982BE0", VA = "0x4982BE0")]
	internal ServicePoint GetServicePoint()
	{
		return null;
	}

	[Token(Token = "0x60009EF")]
	[Address(RVA = "0x4983610", Offset = "0x4983610", VA = "0x4983610")]
	private WebOperation SendRequest(bool redirecting, BufferOffsetSize writeBuffer, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60009F0")]
	internal static Task<T> RunWithTimeout<T>(Func<CancellationToken, Task<T>> func, int timeout, Action abort, Func<bool> aborted, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60009F1")]
	[AsyncStateMachine(typeof(_003CRunWithTimeoutWorker_003Ed__241<>))]
	private static Task<T> RunWithTimeoutWorker<T>(Task<T> workerTask, int timeout, Action abort, Func<bool> aborted, CancellationTokenSource cts)
	{
		return null;
	}

	[Token(Token = "0x60009F2")]
	private Task<T> RunWithTimeout<T>(Func<CancellationToken, Task<T>> func)
	{
		return null;
	}

	[Token(Token = "0x60009F3")]
	[Address(RVA = "0x4983A10", Offset = "0x4983A10", VA = "0x4983A10")]
	[AsyncStateMachine(typeof(_003CMyGetResponseAsync_003Ed__243))]
	private Task<HttpWebResponse> MyGetResponseAsync(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60009F4")]
	[Address(RVA = "0x4983B60", Offset = "0x4983B60", VA = "0x4983B60")]
	[AsyncStateMachine(typeof(_003CGetResponseFromData_003Ed__244))]
	private Task<(HttpWebResponse, bool, bool, BufferOffsetSize, WebOperation)> GetResponseFromData(WebResponseStream stream, CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x60009F5")]
	[Address(RVA = "0x4983CB0", Offset = "0x4983CB0", VA = "0x4983CB0")]
	internal static Exception FlattenException(Exception e)
	{
		return null;
	}

	[Token(Token = "0x60009F6")]
	[Address(RVA = "0x4983D60", Offset = "0x4983D60", VA = "0x4983D60")]
	private WebException GetWebException(Exception e)
	{
		return null;
	}

	[Token(Token = "0x60009F7")]
	[Address(RVA = "0x4983DF0", Offset = "0x4983DF0", VA = "0x4983DF0")]
	private static WebException GetWebException(Exception e, bool aborted)
	{
		return null;
	}

	[Token(Token = "0x60009F8")]
	[Address(RVA = "0x4983F80", Offset = "0x4983F80", VA = "0x4983F80")]
	internal static WebException CreateRequestAbortedException()
	{
		return null;
	}

	[Token(Token = "0x60009F9")]
	[Address(RVA = "0x4984020", Offset = "0x4984020", VA = "0x4984020", Slot = "21")]
	public override IAsyncResult BeginGetResponse(AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x60009FA")]
	[Address(RVA = "0x49841C0", Offset = "0x49841C0", VA = "0x49841C0", Slot = "22")]
	public override WebResponse EndGetResponse(IAsyncResult asyncResult)
	{
		return null;
	}

	[Token(Token = "0x60009FB")]
	[Address(RVA = "0x49842D0", Offset = "0x49842D0", VA = "0x49842D0", Slot = "20")]
	public override WebResponse GetResponse()
	{
		return null;
	}

	[Token(Token = "0x60009FE")]
	[Address(RVA = "0x49843E0", Offset = "0x49843E0", VA = "0x49843E0", Slot = "24")]
	public override void Abort()
	{
	}

	[Token(Token = "0x60009FF")]
	[Address(RVA = "0x4984500", Offset = "0x4984500", VA = "0x4984500", Slot = "6")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x6000A00")]
	[Address(RVA = "0x4984540", Offset = "0x4984540", VA = "0x4984540", Slot = "7")]
	protected override void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x6000A01")]
	[Address(RVA = "0x4982B80", Offset = "0x4982B80", VA = "0x4982B80")]
	private void CheckRequestStarted()
	{
	}

	[Token(Token = "0x6000A02")]
	[Address(RVA = "0x4984580", Offset = "0x4984580", VA = "0x4984580")]
	internal void DoContinueDelegate(int statusCode, WebHeaderCollection headers)
	{
	}

	[Token(Token = "0x6000A03")]
	[Address(RVA = "0x49845A0", Offset = "0x49845A0", VA = "0x49845A0")]
	private void RewriteRedirectToGet()
	{
	}

	[Token(Token = "0x6000A04")]
	[Address(RVA = "0x4984620", Offset = "0x4984620", VA = "0x4984620")]
	private bool Redirect(HttpStatusCode code, WebResponse response)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A05")]
	[Address(RVA = "0x4984BB0", Offset = "0x4984BB0", VA = "0x4984BB0")]
	private string GetHeaders()
	{
		return null;
	}

	[Token(Token = "0x6000A06")]
	[Address(RVA = "0x4985410", Offset = "0x4985410", VA = "0x4985410")]
	private void DoPreAuthenticate()
	{
	}

	[Token(Token = "0x6000A07")]
	[Address(RVA = "0x4985670", Offset = "0x4985670", VA = "0x4985670")]
	internal byte[] GetRequestHeaders()
	{
		return null;
	}

	[Token(Token = "0x6000A08")]
	[Address(RVA = "0x4985A40", Offset = "0x4985A40", VA = "0x4985A40")]
	private (WebOperation, bool) HandleNtlmAuth(WebResponseStream stream, HttpWebResponse response, BufferOffsetSize writeBuffer, CancellationToken cancellationToken)
	{
		return default((WebOperation, bool));
	}

	[Token(Token = "0x6000A09")]
	[Address(RVA = "0x4985D20", Offset = "0x4985D20", VA = "0x4985D20")]
	private bool CheckAuthorization(WebResponse response, HttpStatusCode code)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A0A")]
	[Address(RVA = "0x4986090", Offset = "0x4986090", VA = "0x4986090")]
	private (Task<BufferOffsetSize>, WebException) GetRewriteHandler(HttpWebResponse response, bool redirect)
	{
		return default((Task<BufferOffsetSize>, WebException));
	}

	[Token(Token = "0x6000A0B")]
	[Address(RVA = "0x4986280", Offset = "0x4986280", VA = "0x4986280")]
	private (bool, bool, Task<BufferOffsetSize>, WebException) CheckFinalStatus(HttpWebResponse response)
	{
		return default((bool, bool, Task<BufferOffsetSize>, WebException));
	}

	[Token(Token = "0x6000A0E")]
	[Address(RVA = "0x4986A80", Offset = "0x4986A80", VA = "0x4986A80")]
	[Obsolete("This API supports the .NET Framework infrastructure and is not intended to be used directly from your code.", true)]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public HttpWebRequest()
	{
	}
}
