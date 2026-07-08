using System.Diagnostics;
using System.IO;
using System.Net.Cache;
using System.Net.Sockets;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Security.Cryptography.X509Certificates;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x200012E")]
public sealed class FtpWebRequest : WebRequest
{
	[Token(Token = "0x200012F")]
	private enum RequestStage
	{
		[Token(Token = "0x4000614")]
		CheckForError,
		[Token(Token = "0x4000615")]
		RequestStarted,
		[Token(Token = "0x4000616")]
		WriteReady,
		[Token(Token = "0x4000617")]
		ReadReady,
		[Token(Token = "0x4000618")]
		ReleaseConnection
	}

	[StructLayout((LayoutKind)3)]
	[Token(Token = "0x2000130")]
	[CompilerGenerated]
	private struct _003CCreateConnectionAsync_003Ed__86 : IAsyncStateMachine
	{
		[Token(Token = "0x4000619")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public int _003C_003E1__state;

		[Token(Token = "0x400061A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public AsyncVoidMethodBuilder _003C_003Et__builder;

		[Token(Token = "0x400061B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public FtpWebRequest _003C_003E4__this;

		[Token(Token = "0x400061C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private TcpClient _003Cclient_003E5__2;

		[Token(Token = "0x400061D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private ConfiguredTaskAwaitable.ConfiguredTaskAwaiter _003C_003Eu__1;

		[Token(Token = "0x6000785")]
		[Address(RVA = "0x4637C30", Offset = "0x4637C30", VA = "0x4637C30", Slot = "4")]
		private void MoveNext()
		{
		}

		[Token(Token = "0x6000786")]
		[Address(RVA = "0x4638070", Offset = "0x4638070", VA = "0x4638070", Slot = "5")]
		[DebuggerHidden]
		private void SetStateMachine(IAsyncStateMachine stateMachine)
		{
		}
	}

	[Token(Token = "0x40005F1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private object _syncObject;

	[Token(Token = "0x40005F2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private ICredentials _authInfo;

	[Token(Token = "0x40005F3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly Uri _uri;

	[Token(Token = "0x40005F4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private FtpMethodInfo _methodInfo;

	[Token(Token = "0x40005F5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private string _renameTo;

	[Token(Token = "0x40005F6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private bool _getRequestStreamStarted;

	[Token(Token = "0x40005F7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x61")]
	private bool _getResponseStarted;

	[Token(Token = "0x40005F8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private DateTime _startTime;

	[Token(Token = "0x40005F9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private int _timeout;

	[Token(Token = "0x40005FA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x74")]
	private int _remainingTimeout;

	[Token(Token = "0x40005FB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private long _contentLength;

	[Token(Token = "0x40005FC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private long _contentOffset;

	[Token(Token = "0x40005FD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private X509CertificateCollection _clientCertificates;

	[Token(Token = "0x40005FE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private bool _passive;

	[Token(Token = "0x40005FF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x91")]
	private bool _binary;

	[Token(Token = "0x4000600")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x92")]
	private bool _async;

	[Token(Token = "0x4000601")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x93")]
	private bool _aborted;

	[Token(Token = "0x4000602")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x94")]
	private bool _timedOut;

	[Token(Token = "0x4000603")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private Exception _exception;

	[Token(Token = "0x4000604")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private TimerThread.Queue _timerQueue;

	[Token(Token = "0x4000605")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private TimerThread.Callback _timerCallback;

	[Token(Token = "0x4000606")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private bool _enableSsl;

	[Token(Token = "0x4000607")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private FtpControlStream _connection;

	[Token(Token = "0x4000608")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Stream _stream;

	[Token(Token = "0x4000609")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private RequestStage _requestStage;

	[Token(Token = "0x400060A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xCC")]
	private bool _onceFailed;

	[Token(Token = "0x400060B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private WebHeaderCollection _ftpRequestHeaders;

	[Token(Token = "0x400060C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private FtpWebResponse _ftpWebResponse;

	[Token(Token = "0x400060D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private int _readWriteTimeout;

	[Token(Token = "0x400060E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	private ContextAwareResult _writeAsyncResult;

	[Token(Token = "0x400060F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF0")]
	private LazyAsyncResult _readAsyncResult;

	[Token(Token = "0x4000610")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xF8")]
	private LazyAsyncResult _requestCompleteAsyncResult;

	[Token(Token = "0x4000611")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly NetworkCredential s_defaultFtpNetworkCredential;

	[Token(Token = "0x4000612")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly TimerThread.Queue s_DefaultTimerQueue;

	[Token(Token = "0x17000186")]
	internal FtpMethodInfo MethodInfo
	{
		[Token(Token = "0x6000758")]
		[Address(RVA = "0x4631240", Offset = "0x4631240", VA = "0x4631240")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000187")]
	public override string Method
	{
		[Token(Token = "0x6000759")]
		[Address(RVA = "0x4631250", Offset = "0x4631250", VA = "0x4631250", Slot = "9")]
		get
		{
			return null;
		}
		[Token(Token = "0x600075A")]
		[Address(RVA = "0x4631270", Offset = "0x4631270", VA = "0x4631270", Slot = "10")]
		set
		{
		}
	}

	[Token(Token = "0x17000188")]
	public string RenameTo
	{
		[Token(Token = "0x600075B")]
		[Address(RVA = "0x4631430", Offset = "0x4631430", VA = "0x4631430")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000189")]
	public override ICredentials Credentials
	{
		[Token(Token = "0x600075C")]
		[Address(RVA = "0x4631440", Offset = "0x4631440", VA = "0x4631440", Slot = "14")]
		get
		{
			return null;
		}
		[Token(Token = "0x600075D")]
		[Address(RVA = "0x4631450", Offset = "0x4631450", VA = "0x4631450", Slot = "15")]
		set
		{
		}
	}

	[Token(Token = "0x1700018A")]
	public override Uri RequestUri
	{
		[Token(Token = "0x600075E")]
		[Address(RVA = "0x46315B0", Offset = "0x46315B0", VA = "0x46315B0", Slot = "11")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700018B")]
	public override int Timeout
	{
		[Token(Token = "0x600075F")]
		[Address(RVA = "0x46315C0", Offset = "0x46315C0", VA = "0x46315C0", Slot = "19")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700018C")]
	internal int RemainingTimeout
	{
		[Token(Token = "0x6000760")]
		[Address(RVA = "0x46315D0", Offset = "0x46315D0", VA = "0x46315D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700018D")]
	public int ReadWriteTimeout
	{
		[Token(Token = "0x6000761")]
		[Address(RVA = "0x46315E0", Offset = "0x46315E0", VA = "0x46315E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700018E")]
	public long ContentOffset
	{
		[Token(Token = "0x6000762")]
		[Address(RVA = "0x46315F0", Offset = "0x46315F0", VA = "0x46315F0")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x1700018F")]
	public override long ContentLength
	{
		[Token(Token = "0x6000763")]
		[Address(RVA = "0x4631600", Offset = "0x4631600", VA = "0x4631600", Slot = "13")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000190")]
	public override IWebProxy Proxy
	{
		[Token(Token = "0x6000764")]
		[Address(RVA = "0x4631610", Offset = "0x4631610", VA = "0x4631610", Slot = "17")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000765")]
		[Address(RVA = "0x4631620", Offset = "0x4631620", VA = "0x4631620", Slot = "18")]
		set
		{
		}
	}

	[Token(Token = "0x17000191")]
	internal bool Aborted
	{
		[Token(Token = "0x6000766")]
		[Address(RVA = "0x4631680", Offset = "0x4631680", VA = "0x4631680")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000192")]
	private TimerThread.Queue TimerQueue
	{
		[Token(Token = "0x6000771")]
		[Address(RVA = "0x46358B0", Offset = "0x46358B0", VA = "0x46358B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000193")]
	public override RequestCachePolicy CachePolicy
	{
		[Token(Token = "0x600077A")]
		[Address(RVA = "0x4637530", Offset = "0x4637530", VA = "0x4637530", Slot = "8")]
		set
		{
		}
	}

	[Token(Token = "0x17000194")]
	public bool UseBinary
	{
		[Token(Token = "0x600077B")]
		[Address(RVA = "0x4637590", Offset = "0x4637590", VA = "0x4637590")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000195")]
	public bool UsePassive
	{
		[Token(Token = "0x600077C")]
		[Address(RVA = "0x46375A0", Offset = "0x46375A0", VA = "0x46375A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000196")]
	public X509CertificateCollection ClientCertificates
	{
		[Token(Token = "0x600077D")]
		[Address(RVA = "0x462A9C0", Offset = "0x462A9C0", VA = "0x462A9C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000197")]
	public bool EnableSsl
	{
		[Token(Token = "0x600077E")]
		[Address(RVA = "0x46375B0", Offset = "0x46375B0", VA = "0x46375B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000198")]
	public override WebHeaderCollection Headers
	{
		[Token(Token = "0x600077F")]
		[Address(RVA = "0x46375C0", Offset = "0x46375C0", VA = "0x46375C0", Slot = "12")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000199")]
	public override bool UseDefaultCredentials
	{
		[Token(Token = "0x6000780")]
		[Address(RVA = "0x4637640", Offset = "0x4637640", VA = "0x4637640", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700019A")]
	private bool InUse
	{
		[Token(Token = "0x6000781")]
		[Address(RVA = "0x4631420", Offset = "0x4631420", VA = "0x4631420")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000767")]
	[Address(RVA = "0x4631690", Offset = "0x4631690", VA = "0x4631690")]
	internal FtpWebRequest(Uri uri)
	{
	}

	[Token(Token = "0x6000768")]
	[Address(RVA = "0x4631B50", Offset = "0x4631B50", VA = "0x4631B50", Slot = "20")]
	public override WebResponse GetResponse()
	{
		return null;
	}

	[Token(Token = "0x6000769")]
	[Address(RVA = "0x4633EF0", Offset = "0x4633EF0", VA = "0x4633EF0", Slot = "21")]
	public override IAsyncResult BeginGetResponse(AsyncCallback callback, object state)
	{
		return null;
	}

	[Token(Token = "0x600076A")]
	[Address(RVA = "0x46346D0", Offset = "0x46346D0", VA = "0x46346D0", Slot = "22")]
	public override WebResponse EndGetResponse(IAsyncResult asyncResult)
	{
		return null;
	}

	[Token(Token = "0x600076B")]
	[Address(RVA = "0x4632B00", Offset = "0x4632B00", VA = "0x4632B00")]
	private void SubmitRequest(bool isAsync)
	{
	}

	[Token(Token = "0x600076C")]
	[Address(RVA = "0x46357C0", Offset = "0x46357C0", VA = "0x46357C0")]
	private Exception TranslateConnectException(Exception e)
	{
		return null;
	}

	[Token(Token = "0x600076D")]
	[Address(RVA = "0x4634B60", Offset = "0x4634B60", VA = "0x4634B60")]
	[AsyncStateMachine(typeof(_003CCreateConnectionAsync_003Ed__86))]
	private void CreateConnectionAsync()
	{
	}

	[Token(Token = "0x600076E")]
	[Address(RVA = "0x4634C20", Offset = "0x4634C20", VA = "0x4634C20")]
	private FtpControlStream CreateConnection()
	{
		return null;
	}

	[Token(Token = "0x600076F")]
	[Address(RVA = "0x4634E40", Offset = "0x4634E40", VA = "0x4634E40")]
	private Stream TimedSubmitRequestHelper(bool isAsync)
	{
		return null;
	}

	[Token(Token = "0x6000770")]
	[Address(RVA = "0x4635940", Offset = "0x4635940", VA = "0x4635940")]
	private void TimerCallback(TimerThread.Timer timer, int timeNoticed, object context)
	{
	}

	[Token(Token = "0x6000772")]
	[Address(RVA = "0x4635460", Offset = "0x4635460", VA = "0x4635460")]
	private bool AttemptedRecovery(Exception e)
	{
		return default(bool);
	}

	[Token(Token = "0x6000773")]
	[Address(RVA = "0x4633A50", Offset = "0x4633A50", VA = "0x4633A50")]
	private void SetException(Exception exception)
	{
	}

	[Token(Token = "0x6000774")]
	[Address(RVA = "0x4632510", Offset = "0x4632510", VA = "0x4632510")]
	private void CheckError()
	{
	}

	[Token(Token = "0x6000775")]
	[Address(RVA = "0x4627560", Offset = "0x4627560", VA = "0x4627560")]
	internal void RequestCallback(object obj)
	{
	}

	[Token(Token = "0x6000776")]
	[Address(RVA = "0x4636970", Offset = "0x4636970", VA = "0x4636970")]
	private void SyncRequestCallback(object obj)
	{
	}

	[Token(Token = "0x6000777")]
	[Address(RVA = "0x4635B90", Offset = "0x4635B90", VA = "0x4635B90")]
	private void AsyncRequestCallback(object obj)
	{
	}

	[Token(Token = "0x6000778")]
	[Address(RVA = "0x4632590", Offset = "0x4632590", VA = "0x4632590")]
	private RequestStage FinishRequestStage(RequestStage stage)
	{
		return default(RequestStage);
	}

	[Token(Token = "0x6000779")]
	[Address(RVA = "0x4636F10", Offset = "0x4636F10", VA = "0x4636F10", Slot = "24")]
	public override void Abort()
	{
	}

	[Token(Token = "0x6000782")]
	[Address(RVA = "0x46332C0", Offset = "0x46332C0", VA = "0x46332C0")]
	private void EnsureFtpWebResponse(Exception exception)
	{
	}

	[Token(Token = "0x6000783")]
	[Address(RVA = "0x4637950", Offset = "0x4637950", VA = "0x4637950")]
	internal void DataStreamClosed(CloseExState closeState)
	{
	}
}
