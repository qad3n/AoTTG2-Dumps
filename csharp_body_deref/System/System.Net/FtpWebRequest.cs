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

[Token(Token = "0x20002B6")]
public sealed class FtpWebRequest : WebRequest
{
	[Token(Token = "0x20002B7")]
	private enum RequestStage
	{
		[Token(Token = "0x4000A2A")]
		CheckForError,
		[Token(Token = "0x4000A2B")]
		RequestStarted,
		[Token(Token = "0x4000A2C")]
		WriteReady,
		[Token(Token = "0x4000A2D")]
		ReadReady,
		[Token(Token = "0x4000A2E")]
		ReleaseConnection
	}

	[StructLayout(LayoutKind.Auto)]
	[Token(Token = "0x20002B8")]
	[CompilerGenerated]
	private struct _003CCreateConnectionAsync_003Ed__86 : IAsyncStateMachine
	{
		[Token(Token = "0x4000A2F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x4000A30")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncVoidMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x4000A31")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public FtpWebRequest _003C_003E4__this;

		[Token(Token = "0x4000A32")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private TcpClient _003Cclient_003E5__2;

		[Token(Token = "0x4000A33")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6001344")]
		[Address(RVA = "0x27D4770", Offset = "0x27D2D70", VA = "0x1827D4770", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6001345")]
		[Address(RVA = "0x187DE20", Offset = "0x187C420", VA = "0x18187DE20", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x4000A07")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private object _syncObject;

	[Token(Token = "0x4000A08")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private ICredentials _authInfo;

	[Token(Token = "0x4000A09")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly Uri _uri;

	[Token(Token = "0x4000A0A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private FtpMethodInfo _methodInfo;

	[Token(Token = "0x4000A0B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private string _renameTo;

	[Token(Token = "0x4000A0C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private bool _getRequestStreamStarted;

	[Token(Token = "0x4000A0D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x61")]
	private bool _getResponseStarted;

	[Token(Token = "0x4000A0E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private DateTime _startTime;

	[Token(Token = "0x4000A0F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private int _timeout;

	[Token(Token = "0x4000A10")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x74")]
	private int _remainingTimeout;

	[Token(Token = "0x4000A11")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private long _contentLength;

	[Token(Token = "0x4000A12")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private long _contentOffset;

	[Token(Token = "0x4000A13")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private X509CertificateCollection _clientCertificates;

	[Token(Token = "0x4000A14")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private bool _passive;

	[Token(Token = "0x4000A15")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x91")]
	private bool _binary;

	[Token(Token = "0x4000A16")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x92")]
	private bool _async;

	[Token(Token = "0x4000A17")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x93")]
	private bool _aborted;

	[Token(Token = "0x4000A18")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x94")]
	private bool _timedOut;

	[Token(Token = "0x4000A19")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private Exception _exception;

	[Token(Token = "0x4000A1A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private TimerThread.Queue _timerQueue;

	[Token(Token = "0x4000A1B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private TimerThread.Callback _timerCallback;

	[Token(Token = "0x4000A1C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private bool _enableSsl;

	[Token(Token = "0x4000A1D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private FtpControlStream _connection;

	[Token(Token = "0x4000A1E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Stream _stream;

	[Token(Token = "0x4000A1F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private RequestStage _requestStage;

	[Token(Token = "0x4000A20")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xCC")]
	private bool _onceFailed;

	[Token(Token = "0x4000A21")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private WebHeaderCollection _ftpRequestHeaders;

	[Token(Token = "0x4000A22")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private FtpWebResponse _ftpWebResponse;

	[Token(Token = "0x4000A23")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private int _readWriteTimeout;

	[Token(Token = "0x4000A24")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private ContextAwareResult _writeAsyncResult;

	[Token(Token = "0x4000A25")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private LazyAsyncResult _readAsyncResult;

	[Token(Token = "0x4000A26")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private LazyAsyncResult _requestCompleteAsyncResult;

	[Token(Token = "0x4000A27")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly NetworkCredential s_defaultFtpNetworkCredential;

	[Token(Token = "0x4000A28")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly TimerThread.Queue s_DefaultTimerQueue;

	[Token(Token = "0x170003DB")]
	internal FtpMethodInfo MethodInfo
	{
		[Token(Token = "0x6001317")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003DC")]
	public override string Method
	{
		[Token(Token = "0x6001318")]
		[Address(RVA = "0x28FDE00", Offset = "0x28FC400", VA = "0x1828FDE00", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001319")]
		[Address(RVA = "0x28FE0C0", Offset = "0x28FC6C0", VA = "0x1828FE0C0", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x170003DD")]
	public string RenameTo
	{
		[Token(Token = "0x600131A")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003DE")]
	public override ICredentials Credentials
	{
		[Token(Token = "0x600131B")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0", Slot = "14")]
		get
		{
			return null;
		}
		[Token(Token = "0x600131C")]
		[Address(RVA = "0x28FDF40", Offset = "0x28FC540", VA = "0x1828FDF40", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x170003DF")]
	public override Uri RequestUri
	{
		[Token(Token = "0x600131D")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003E0")]
	public override int Timeout
	{
		[Token(Token = "0x600131E")]
		[Address(RVA = "0x58A560", Offset = "0x588B60", VA = "0x18058A560", Slot = "19")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003E1")]
	internal int RemainingTimeout
	{
		[Token(Token = "0x600131F")]
		[Address(RVA = "0x187BA40", Offset = "0x187A040", VA = "0x18187BA40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003E2")]
	public int ReadWriteTimeout
	{
		[Token(Token = "0x6001320")]
		[Address(RVA = "0x1D1FA80", Offset = "0x1D1E080", VA = "0x181D1FA80")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170003E3")]
	public long ContentOffset
	{
		[Token(Token = "0x6001321")]
		[Address(RVA = "0x58A5D0", Offset = "0x588BD0", VA = "0x18058A5D0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170003E4")]
	public override long ContentLength
	{
		[Token(Token = "0x6001322")]
		[Address(RVA = "0xCDB5A0", Offset = "0xCD9BA0", VA = "0x180CDB5A0", Slot = "13")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170003E5")]
	public override IWebProxy Proxy
	{
		[Token(Token = "0x6001323")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "17")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001324")]
		[Address(RVA = "0x28FE260", Offset = "0x28FC860", VA = "0x1828FE260", Slot = "18")]
		set
		{
		}
	}

	[Token(Token = "0x170003E6")]
	internal bool Aborted
	{
		[Token(Token = "0x6001325")]
		[Address(RVA = "0x24C5400", Offset = "0x24C3A00", VA = "0x1824C5400")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003E7")]
	private TimerThread.Queue TimerQueue
	{
		[Token(Token = "0x6001330")]
		[Address(RVA = "0x28FDE20", Offset = "0x28FC420", VA = "0x1828FDE20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003E8")]
	public override RequestCachePolicy CachePolicy
	{
		[Token(Token = "0x6001339")]
		[Address(RVA = "0x28FDED0", Offset = "0x28FC4D0", VA = "0x1828FDED0", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x170003E9")]
	public bool UseBinary
	{
		[Token(Token = "0x600133A")]
		[Address(RVA = "0x24C53F0", Offset = "0x24C39F0", VA = "0x1824C53F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003EA")]
	public bool UsePassive
	{
		[Token(Token = "0x600133B")]
		[Address(RVA = "0xB5B960", Offset = "0xB59F60", VA = "0x180B5B960")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003EB")]
	public X509CertificateCollection ClientCertificates
	{
		[Token(Token = "0x600133C")]
		[Address(RVA = "0x28FDC50", Offset = "0x28FC250", VA = "0x1828FDC50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003EC")]
	public bool EnableSsl
	{
		[Token(Token = "0x600133D")]
		[Address(RVA = "0x560590", Offset = "0x55EB90", VA = "0x180560590")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003ED")]
	public override WebHeaderCollection Headers
	{
		[Token(Token = "0x600133E")]
		[Address(RVA = "0x28FDD60", Offset = "0x28FC360", VA = "0x1828FDD60", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003EE")]
	public override bool UseDefaultCredentials
	{
		[Token(Token = "0x600133F")]
		[Address(RVA = "0x28FDEA0", Offset = "0x28FC4A0", VA = "0x1828FDEA0", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003EF")]
	private bool InUse
	{
		[Token(Token = "0x6001340")]
		[Address(RVA = "0x28FDDE0", Offset = "0x28FC3E0", VA = "0x1828FDDE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001326")]
	[Address(RVA = "0x28FD7F0", Offset = "0x28FBDF0", VA = "0x1828FD7F0")]
	internal FtpWebRequest(Uri uri)
	{
	}

	[Token(Token = "0x6001327")]
	[Address(RVA = "0x28FB990", Offset = "0x28F9F90", VA = "0x1828FB990", Slot = "20")]
	public override WebResponse GetResponse()
	{
		return null;
	}

	[Token(Token = "0x6001328")]
	[Address(RVA = "0x28FA130", Offset = "0x28F8730", VA = "0x1828FA130", Slot = "21")]
	public override IAsyncResult BeginGetResponse(AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x6001329")]
	[Address(RVA = "0x28FAAF0", Offset = "0x28F90F0", VA = "0x1828FAAF0", Slot = "22")]
	public override WebResponse EndGetResponse(IAsyncResult asyncResult)
	{
		return null;
	}

	[Token(Token = "0x600132A")]
	[Address(RVA = "0x28FC5B0", Offset = "0x28FABB0", VA = "0x1828FC5B0")]
	private void SubmitRequest(bool isAsync)
	{
	}

	[Token(Token = "0x600132B")]
	[Address(RVA = "0x28FD600", Offset = "0x28FBC00", VA = "0x1828FD600")]
	private Exception TranslateConnectException(Exception e)
	{
		return null;
	}

	[Token(Token = "0x600132C")]
	[Address(RVA = "0x28FA7B0", Offset = "0x28F8DB0", VA = "0x1828FA7B0")]
	[AsyncStateMachine(typeof(_003CCreateConnectionAsync_003Ed__86))]
	private void CreateConnectionAsync()
	{
	}

	[Token(Token = "0x600132D")]
	[Address(RVA = "0x28FA870", Offset = "0x28F8E70", VA = "0x1828FA870")]
	private FtpControlStream CreateConnection()
	{
		return null;
	}

	[Token(Token = "0x600132E")]
	[Address(RVA = "0x28FCF90", Offset = "0x28FB590", VA = "0x1828FCF90")]
	private Stream TimedSubmitRequestHelper(bool isAsync)
	{
		return null;
	}

	[Token(Token = "0x600132F")]
	[Address(RVA = "0x28FD460", Offset = "0x28FBA60", VA = "0x1828FD460")]
	private void TimerCallback(TimerThread.Timer timer, int timeNoticed, object context)
	{
	}

	[Token(Token = "0x6001331")]
	[Address(RVA = "0x28F9E70", Offset = "0x28F8470", VA = "0x1828F9E70")]
	private bool AttemptedRecovery(Exception e)
	{
		return default(bool);
	}

	[Token(Token = "0x6001332")]
	[Address(RVA = "0x28FC180", Offset = "0x28FA780", VA = "0x1828FC180")]
	private void SetException(Exception exception)
	{
	}

	[Token(Token = "0x6001333")]
	[Address(RVA = "0x28FA790", Offset = "0x28F8D90", VA = "0x1828FA790")]
	private void CheckError()
	{
	}

	[Token(Token = "0x6001334")]
	[Address(RVA = "0x28FC160", Offset = "0x28FA760", VA = "0x1828FC160")]
	internal void RequestCallback(object obj)
	{
	}

	[Token(Token = "0x6001335")]
	[Address(RVA = "0x28FCB20", Offset = "0x28FB120", VA = "0x1828FCB20")]
	private void SyncRequestCallback(object obj)
	{
	}

	[Token(Token = "0x6001336")]
	[Address(RVA = "0x28F9290", Offset = "0x28F7890", VA = "0x1828F9290")]
	private void AsyncRequestCallback(object obj)
	{
	}

	[Token(Token = "0x6001337")]
	[Address(RVA = "0x28FB480", Offset = "0x28F9A80", VA = "0x1828FB480")]
	private RequestStage FinishRequestStage(RequestStage stage)
	{
		return default(RequestStage);
	}

	[Token(Token = "0x6001338")]
	[Address(RVA = "0x28F8EA0", Offset = "0x28F74A0", VA = "0x1828F8EA0", Slot = "24")]
	public override void Abort()
	{
	}

	[Token(Token = "0x6001341")]
	[Address(RVA = "0x28FAE10", Offset = "0x28F9410", VA = "0x1828FAE10")]
	private void EnsureFtpWebResponse(Exception exception)
	{
	}

	[Token(Token = "0x6001342")]
	[Address(RVA = "0x28FAA50", Offset = "0x28F9050", VA = "0x1828FAA50")]
	internal void DataStreamClosed(CloseExState closeState)
	{
	}
}
