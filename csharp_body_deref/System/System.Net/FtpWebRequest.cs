// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.FtpWebRequest
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.IO;
using System.Net.Cache;
using System.Net.Sockets;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Security.Cryptography.X509Certificates;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000277")]
public sealed class FtpWebRequest : WebRequest
{
	[Token(Token = "0x2000278")]
	private enum RequestStage
	{
		[Token(Token = "0x400095B")]
		CheckForError,
		[Token(Token = "0x400095C")]
		RequestStarted,
		[Token(Token = "0x400095D")]
		WriteReady,
		[Token(Token = "0x400095E")]
		ReadReady,
		[Token(Token = "0x400095F")]
		ReleaseConnection
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x2000279")]
	[CompilerGenerated]
	private struct _003CCreateConnectionAsync_003Ed__86 : IAsyncStateMachine
	{
		[Token(Token = "0x4000960")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000961")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncVoidMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000962")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public FtpWebRequest _003C_003E4__this;

		[Token(Token = "0x4000963")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private TcpClient _003Cclient_003E5__2;

		[Token(Token = "0x4000964")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6001186")]
		[Address(RVA = "0x62A44F0", Offset = "0x62A34F0", VA = "0x62A44F0", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001187")]
		[Address(RVA = "0x62A4850", Offset = "0x62A3850", VA = "0x62A4850", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000938")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private object _syncObject;

	[Token(Token = "0x4000939")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private ICredentials _authInfo;

	[Token(Token = "0x400093A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly Uri _uri;

	[Token(Token = "0x400093B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private FtpMethodInfo _methodInfo;

	[Token(Token = "0x400093C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private string _renameTo;

	[Token(Token = "0x400093D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private bool _getRequestStreamStarted;

	[Token(Token = "0x400093E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x61")]
	private bool _getResponseStarted;

	[Token(Token = "0x400093F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private DateTime _startTime;

	[Token(Token = "0x4000940")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private int _timeout;

	[Token(Token = "0x4000941")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x74")]
	private int _remainingTimeout;

	[Token(Token = "0x4000942")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private long _contentLength;

	[Token(Token = "0x4000943")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private long _contentOffset;

	[Token(Token = "0x4000944")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private X509CertificateCollection _clientCertificates;

	[Token(Token = "0x4000945")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private bool _passive;

	[Token(Token = "0x4000946")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x91")]
	private bool _binary;

	[Token(Token = "0x4000947")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x92")]
	private bool _async;

	[Token(Token = "0x4000948")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x93")]
	private bool _aborted;

	[Token(Token = "0x4000949")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x94")]
	private bool _timedOut;

	[Token(Token = "0x400094A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private Exception _exception;

	[Token(Token = "0x400094B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private TimerThread.Queue _timerQueue;

	[Token(Token = "0x400094C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private TimerThread.Callback _timerCallback;

	[Token(Token = "0x400094D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private bool _enableSsl;

	[Token(Token = "0x400094E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private FtpControlStream _connection;

	[Token(Token = "0x400094F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Stream _stream;

	[Token(Token = "0x4000950")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private RequestStage _requestStage;

	[Token(Token = "0x4000951")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xCC")]
	private bool _onceFailed;

	[Token(Token = "0x4000952")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private WebHeaderCollection _ftpRequestHeaders;

	[Token(Token = "0x4000953")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private FtpWebResponse _ftpWebResponse;

	[Token(Token = "0x4000954")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private int _readWriteTimeout;

	[Token(Token = "0x4000955")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private ContextAwareResult _writeAsyncResult;

	[Token(Token = "0x4000956")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private LazyAsyncResult _readAsyncResult;

	[Token(Token = "0x4000957")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private LazyAsyncResult _requestCompleteAsyncResult;

	[Token(Token = "0x4000958")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly NetworkCredential s_defaultFtpNetworkCredential;

	[Token(Token = "0x4000959")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly TimerThread.Queue s_DefaultTimerQueue;

	[Token(Token = "0x170003AC")]
	internal FtpMethodInfo MethodInfo
	{
		[Token(Token = "0x6001159")]
		[Address(RVA = "0x629E900", Offset = "0x629D900", VA = "0x629E900")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003AD")]
	public override string Method
	{
		[Token(Token = "0x600115A")]
		[Address(RVA = "0x629E910", Offset = "0x629D910", VA = "0x629E910", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x600115B")]
		[Address(RVA = "0x629E930", Offset = "0x629D930", VA = "0x629E930", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x170003AE")]
	public string RenameTo
	{
		[Token(Token = "0x600115C")]
		[Address(RVA = "0x629EAF0", Offset = "0x629DAF0", VA = "0x629EAF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003AF")]
	public override ICredentials Credentials
	{
		[Token(Token = "0x600115D")]
		[Address(RVA = "0x629EB00", Offset = "0x629DB00", VA = "0x629EB00", Slot = "14")]
		get
		{
			return null;
		}
		[Token(Token = "0x600115E")]
		[Address(RVA = "0x629EB10", Offset = "0x629DB10", VA = "0x629EB10", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x170003B0")]
	public override Uri RequestUri
	{
		[Token(Token = "0x600115F")]
		[Address(RVA = "0x629EC70", Offset = "0x629DC70", VA = "0x629EC70", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003B1")]
	public override int Timeout
	{
		[Token(Token = "0x6001160")]
		[Address(RVA = "0x629EC80", Offset = "0x629DC80", VA = "0x629EC80", Slot = "19")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003B2")]
	internal int RemainingTimeout
	{
		[Token(Token = "0x6001161")]
		[Address(RVA = "0x629EC90", Offset = "0x629DC90", VA = "0x629EC90")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003B3")]
	public int ReadWriteTimeout
	{
		[Token(Token = "0x6001162")]
		[Address(RVA = "0x629ECA0", Offset = "0x629DCA0", VA = "0x629ECA0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003B4")]
	public long ContentOffset
	{
		[Token(Token = "0x6001163")]
		[Address(RVA = "0x629ECB0", Offset = "0x629DCB0", VA = "0x629ECB0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170003B5")]
	public override long ContentLength
	{
		[Token(Token = "0x6001164")]
		[Address(RVA = "0x629ECC0", Offset = "0x629DCC0", VA = "0x629ECC0", Slot = "13")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170003B6")]
	public override IWebProxy Proxy
	{
		[Token(Token = "0x6001165")]
		[Address(RVA = "0x629ECD0", Offset = "0x629DCD0", VA = "0x629ECD0", Slot = "17")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001166")]
		[Address(RVA = "0x629ECE0", Offset = "0x629DCE0", VA = "0x629ECE0", Slot = "18")]
		set
		{
		}
	}

	[Token(Token = "0x170003B7")]
	internal bool Aborted
	{
		[Token(Token = "0x6001167")]
		[Address(RVA = "0x629ED40", Offset = "0x629DD40", VA = "0x629ED40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003B8")]
	private TimerThread.Queue TimerQueue
	{
		[Token(Token = "0x6001172")]
		[Address(RVA = "0x62A25F0", Offset = "0x62A15F0", VA = "0x62A25F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003B9")]
	public override RequestCachePolicy CachePolicy
	{
		[Token(Token = "0x600117B")]
		[Address(RVA = "0x62A3FA0", Offset = "0x62A2FA0", VA = "0x62A3FA0", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x170003BA")]
	public bool UseBinary
	{
		[Token(Token = "0x600117C")]
		[Address(RVA = "0x62A4000", Offset = "0x62A3000", VA = "0x62A4000")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003BB")]
	public bool UsePassive
	{
		[Token(Token = "0x600117D")]
		[Address(RVA = "0x62A4010", Offset = "0x62A3010", VA = "0x62A4010")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003BC")]
	public X509CertificateCollection ClientCertificates
	{
		[Token(Token = "0x600117E")]
		[Address(RVA = "0x6298560", Offset = "0x6297560", VA = "0x6298560")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003BD")]
	public bool EnableSsl
	{
		[Token(Token = "0x600117F")]
		[Address(RVA = "0x62A4020", Offset = "0x62A3020", VA = "0x62A4020")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003BE")]
	public override WebHeaderCollection Headers
	{
		[Token(Token = "0x6001180")]
		[Address(RVA = "0x62A4030", Offset = "0x62A3030", VA = "0x62A4030", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003BF")]
	public override bool UseDefaultCredentials
	{
		[Token(Token = "0x6001181")]
		[Address(RVA = "0x62A40B0", Offset = "0x62A30B0", VA = "0x62A40B0", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003C0")]
	private bool InUse
	{
		[Token(Token = "0x6001182")]
		[Address(RVA = "0x629EAD0", Offset = "0x629DAD0", VA = "0x629EAD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001168")]
	[Address(RVA = "0x629ED50", Offset = "0x629DD50", VA = "0x629ED50")]
	internal FtpWebRequest(Uri uri)
	{
	}

	[Token(Token = "0x6001169")]
	[Address(RVA = "0x629F1C0", Offset = "0x629E1C0", VA = "0x629F1C0", Slot = "20")]
	public override WebResponse GetResponse()
	{
		return null;
	}

	[Token(Token = "0x600116A")]
	[Address(RVA = "0x62A0F90", Offset = "0x629FF90", VA = "0x62A0F90", Slot = "21")]
	public override IAsyncResult BeginGetResponse(AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x600116B")]
	[Address(RVA = "0x62A16A0", Offset = "0x62A06A0", VA = "0x62A16A0", Slot = "22")]
	public override WebResponse EndGetResponse(IAsyncResult asyncResult)
	{
		return null;
	}

	[Token(Token = "0x600116C")]
	[Address(RVA = "0x629FF60", Offset = "0x629EF60", VA = "0x629FF60")]
	private void SubmitRequest(bool isAsync)
	{
	}

	[Token(Token = "0x600116D")]
	[Address(RVA = "0x62A2510", Offset = "0x62A1510", VA = "0x62A2510")]
	private Exception TranslateConnectException(Exception e)
	{
		return null;
	}

	[Token(Token = "0x600116E")]
	[Address(RVA = "0x62A1AB0", Offset = "0x62A0AB0", VA = "0x62A1AB0")]
	[AsyncStateMachine(typeof(_003CCreateConnectionAsync_003Ed__86))]
	private void CreateConnectionAsync()
	{
	}

	[Token(Token = "0x600116F")]
	[Address(RVA = "0x62A1B60", Offset = "0x62A0B60", VA = "0x62A1B60")]
	private FtpControlStream CreateConnection()
	{
		return null;
	}

	[Token(Token = "0x6001170")]
	[Address(RVA = "0x62A1D30", Offset = "0x62A0D30", VA = "0x62A1D30")]
	private Stream TimedSubmitRequestHelper(bool isAsync)
	{
		return null;
	}

	[Token(Token = "0x6001171")]
	[Address(RVA = "0x62A2680", Offset = "0x62A1680", VA = "0x62A2680")]
	private void TimerCallback(TimerThread.Timer timer, int timeNoticed, object context)
	{
	}

	[Token(Token = "0x6001173")]
	[Address(RVA = "0x62A22C0", Offset = "0x62A12C0", VA = "0x62A22C0")]
	private bool AttemptedRecovery(Exception e)
	{
		return default(bool);
	}

	[Token(Token = "0x6001174")]
	[Address(RVA = "0x62A0B10", Offset = "0x629FB10", VA = "0x62A0B10")]
	private void SetException(Exception exception)
	{
	}

	[Token(Token = "0x6001175")]
	[Address(RVA = "0x629FA40", Offset = "0x629EA40", VA = "0x629FA40")]
	private void CheckError()
	{
	}

	[Token(Token = "0x6001176")]
	[Address(RVA = "0x6295630", Offset = "0x6294630", VA = "0x6295630")]
	internal void RequestCallback(object obj)
	{
	}

	[Token(Token = "0x6001177")]
	[Address(RVA = "0x62A35D0", Offset = "0x62A25D0", VA = "0x62A35D0")]
	private void SyncRequestCallback(object obj)
	{
	}

	[Token(Token = "0x6001178")]
	[Address(RVA = "0x62A2870", Offset = "0x62A1870", VA = "0x62A2870")]
	private void AsyncRequestCallback(object obj)
	{
	}

	[Token(Token = "0x6001179")]
	[Address(RVA = "0x629FA60", Offset = "0x629EA60", VA = "0x629FA60")]
	private RequestStage FinishRequestStage(RequestStage stage)
	{
		return default(RequestStage);
	}

	[Token(Token = "0x600117A")]
	[Address(RVA = "0x62A3AE0", Offset = "0x62A2AE0", VA = "0x62A3AE0", Slot = "24")]
	public override void Abort()
	{
	}

	[Token(Token = "0x6001183")]
	[Address(RVA = "0x62A04C0", Offset = "0x629F4C0", VA = "0x62A04C0")]
	private void EnsureFtpWebResponse(Exception exception)
	{
	}

	[Token(Token = "0x6001184")]
	[Address(RVA = "0x62A40E0", Offset = "0x62A30E0", VA = "0x62A40E0")]
	internal void DataStreamClosed(CloseExState closeState)
	{
	}
}
