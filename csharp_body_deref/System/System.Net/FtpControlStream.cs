// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.FtpControlStream
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using System.Net.Sockets;
using System.Text;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000270")]
internal class FtpControlStream : CommandStream
{
	[Token(Token = "0x2000271")]
	private enum GetPathOption
	{
		[Token(Token = "0x400090E")]
		Normal,
		[Token(Token = "0x400090F")]
		AssumeFilename,
		[Token(Token = "0x4000910")]
		AssumeNoFilename
	}

	[Token(Token = "0x40008F8")]
	[FieldOffset(Offset = "0x88")]
	private Socket _dataSocket;

	[Token(Token = "0x40008F9")]
	[FieldOffset(Offset = "0x90")]
	private IPEndPoint _passiveEndPoint;

	[Token(Token = "0x40008FA")]
	[FieldOffset(Offset = "0x98")]
	private TlsStream _tlsStream;

	[Token(Token = "0x40008FB")]
	[FieldOffset(Offset = "0xA0")]
	private StringBuilder _bannerMessage;

	[Token(Token = "0x40008FC")]
	[FieldOffset(Offset = "0xA8")]
	private StringBuilder _welcomeMessage;

	[Token(Token = "0x40008FD")]
	[FieldOffset(Offset = "0xB0")]
	private StringBuilder _exitMessage;

	[Token(Token = "0x40008FE")]
	[FieldOffset(Offset = "0xB8")]
	private WeakReference _credentials;

	[Token(Token = "0x40008FF")]
	[FieldOffset(Offset = "0xC0")]
	private string _currentTypeSetting;

	[Token(Token = "0x4000900")]
	[FieldOffset(Offset = "0xC8")]
	private long _contentLength;

	[Token(Token = "0x4000901")]
	[FieldOffset(Offset = "0xD0")]
	private DateTime _lastModified;

	[Token(Token = "0x4000902")]
	[FieldOffset(Offset = "0xD8")]
	private bool _dataHandshakeStarted;

	[Token(Token = "0x4000903")]
	[FieldOffset(Offset = "0xE0")]
	private string _loginDirectory;

	[Token(Token = "0x4000904")]
	[FieldOffset(Offset = "0xE8")]
	private string _establishedServerDirectory;

	[Token(Token = "0x4000905")]
	[FieldOffset(Offset = "0xF0")]
	private string _requestedServerDirectory;

	[Token(Token = "0x4000906")]
	[FieldOffset(Offset = "0xF8")]
	private Uri _responseUri;

	[Token(Token = "0x4000907")]
	[FieldOffset(Offset = "0x100")]
	private FtpLoginState _loginState;

	[Token(Token = "0x4000908")]
	[FieldOffset(Offset = "0x104")]
	internal FtpStatusCode StatusCode;

	[Token(Token = "0x4000909")]
	[FieldOffset(Offset = "0x108")]
	internal string StatusLine;

	[Token(Token = "0x400090A")]
	[FieldOffset(Offset = "0x0")]
	private static readonly AsyncCallback s_acceptCallbackDelegate;

	[Token(Token = "0x400090B")]
	[FieldOffset(Offset = "0x8")]
	private static readonly AsyncCallback s_connectCallbackDelegate;

	[Token(Token = "0x400090C")]
	[FieldOffset(Offset = "0x10")]
	private static readonly AsyncCallback s_SSLHandshakeCallback;

	[Token(Token = "0x17000399")]
	internal NetworkCredential Credentials
	{
		[Token(Token = "0x6001112")]
		[Address(RVA = "0x6297690", Offset = "0x6296690", VA = "0x6297690")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001113")]
		[Address(RVA = "0x6297730", Offset = "0x6296730", VA = "0x6297730")]
		set
		{
		}
	}

	[Token(Token = "0x1700039A")]
	internal long ContentLength
	{
		[Token(Token = "0x6001121")]
		[Address(RVA = "0x629C450", Offset = "0x629B450", VA = "0x629C450")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x1700039B")]
	internal DateTime LastModified
	{
		[Token(Token = "0x6001122")]
		[Address(RVA = "0x629C460", Offset = "0x629B460", VA = "0x629C460")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x1700039C")]
	internal Uri ResponseUri
	{
		[Token(Token = "0x6001123")]
		[Address(RVA = "0x629C470", Offset = "0x629B470", VA = "0x629C470")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700039D")]
	internal string BannerMessage
	{
		[Token(Token = "0x6001124")]
		[Address(RVA = "0x629C480", Offset = "0x629B480", VA = "0x629C480")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700039E")]
	internal string WelcomeMessage
	{
		[Token(Token = "0x6001125")]
		[Address(RVA = "0x629C4B0", Offset = "0x629B4B0", VA = "0x629C4B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700039F")]
	internal string ExitMessage
	{
		[Token(Token = "0x6001126")]
		[Address(RVA = "0x629C4E0", Offset = "0x629B4E0", VA = "0x629C4E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001114")]
	[Address(RVA = "0x62977C0", Offset = "0x62967C0", VA = "0x62977C0")]
	internal FtpControlStream(TcpClient client)
	{
	}

	[Token(Token = "0x6001115")]
	[Address(RVA = "0x6297850", Offset = "0x6296850", VA = "0x6297850")]
	internal void AbortConnect()
	{
	}

	[Token(Token = "0x6001116")]
	[Address(RVA = "0x62978E0", Offset = "0x62968E0", VA = "0x62978E0")]
	private static void AcceptCallback(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6001117")]
	[Address(RVA = "0x6297C40", Offset = "0x6296C40", VA = "0x6297C40")]
	private static void ConnectCallback(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6001118")]
	[Address(RVA = "0x6297DF0", Offset = "0x6296DF0", VA = "0x6297DF0")]
	private static void SSLHandshakeCallback(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6001119")]
	[Address(RVA = "0x6297FB0", Offset = "0x6296FB0", VA = "0x6297FB0")]
	private PipelineInstruction QueueOrCreateFtpDataStream(ref Stream stream)
	{
		return default(PipelineInstruction);
	}

	[Token(Token = "0x600111A")]
	[Address(RVA = "0x6298690", Offset = "0x6297690", VA = "0x6298690", Slot = "40")]
	protected override void ClearState()
	{
	}

	[Token(Token = "0x600111B")]
	[Address(RVA = "0x6298800", Offset = "0x6297800", VA = "0x6298800", Slot = "42")]
	protected override PipelineInstruction PipelineCallback(PipelineEntry entry, ResponseDescription response, bool timeout, ref Stream stream)
	{
		return default(PipelineInstruction);
	}

	[Token(Token = "0x600111C")]
	[Address(RVA = "0x629A450", Offset = "0x6299450", VA = "0x629A450", Slot = "41")]
	protected override PipelineEntry[] BuildCommandsList(WebRequest req)
	{
		return null;
	}

	[Token(Token = "0x600111D")]
	[Address(RVA = "0x62992B0", Offset = "0x62982B0", VA = "0x62992B0")]
	private PipelineInstruction QueueOrCreateDataConection(PipelineEntry entry, ResponseDescription response, bool timeout, ref Stream stream, out bool isSocketReady)
	{
		return default(PipelineInstruction);
	}

	[Token(Token = "0x600111E")]
	[Address(RVA = "0x629B890", Offset = "0x629A890", VA = "0x629B890")]
	private static void GetPathInfo(GetPathOption pathOption, Uri uri, out string path, out string directory, out string filename)
	{
	}

	[Token(Token = "0x600111F")]
	[Address(RVA = "0x629C210", Offset = "0x629B210", VA = "0x629C210")]
	private string FormatAddress(IPAddress address, int Port)
	{
		return null;
	}

	[Token(Token = "0x6001120")]
	[Address(RVA = "0x629C350", Offset = "0x629B350", VA = "0x629C350")]
	private string FormatAddressV6(IPAddress address, int port)
	{
		return null;
	}

	[Token(Token = "0x6001127")]
	[Address(RVA = "0x6299F30", Offset = "0x6298F30", VA = "0x6299F30")]
	private long GetContentLengthFrom213Response(string responseString)
	{
		return default(long);
	}

	[Token(Token = "0x6001128")]
	[Address(RVA = "0x629A060", Offset = "0x6299060", VA = "0x629A060")]
	private DateTime GetLastModifiedFrom213Response(string str)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6001129")]
	[Address(RVA = "0x6299BE0", Offset = "0x6298BE0", VA = "0x6299BE0")]
	private void TryUpdateResponseUri(string str, FtpWebRequest request)
	{
	}

	[Token(Token = "0x600112A")]
	[Address(RVA = "0x6299AF0", Offset = "0x6298AF0", VA = "0x6299AF0")]
	private void TryUpdateContentLength(string str)
	{
	}

	[Token(Token = "0x600112B")]
	[Address(RVA = "0x629A3D0", Offset = "0x62993D0", VA = "0x629A3D0")]
	private string GetLoginDirectory(string str)
	{
		return null;
	}

	[Token(Token = "0x600112C")]
	[Address(RVA = "0x629BE50", Offset = "0x629AE50", VA = "0x629BE50")]
	private int GetPortV4(string responseString)
	{
		return default(int);
	}

	[Token(Token = "0x600112D")]
	[Address(RVA = "0x629C000", Offset = "0x629B000", VA = "0x629C000")]
	private int GetPortV6(string responseString)
	{
		return default(int);
	}

	[Token(Token = "0x600112E")]
	[Address(RVA = "0x629BA20", Offset = "0x629AA20", VA = "0x629BA20")]
	private void CreateFtpListenerSocket(FtpWebRequest request)
	{
	}

	[Token(Token = "0x600112F")]
	[Address(RVA = "0x629BC70", Offset = "0x629AC70", VA = "0x629BC70")]
	private string GetPortCommandLine(FtpWebRequest request)
	{
		return null;
	}

	[Token(Token = "0x6001130")]
	[Address(RVA = "0x629B790", Offset = "0x629A790", VA = "0x629B790")]
	private string FormatFtpCommand(string command, string parameter)
	{
		return null;
	}

	[Token(Token = "0x6001131")]
	[Address(RVA = "0x629C1A0", Offset = "0x629B1A0", VA = "0x629C1A0")]
	protected Socket CreateFtpDataSocket(FtpWebRequest request, Socket templateSocket)
	{
		return null;
	}

	[Token(Token = "0x6001132")]
	[Address(RVA = "0x629C510", Offset = "0x629B510", VA = "0x629C510", Slot = "43")]
	protected override bool CheckValid(ResponseDescription response, ref int validThrough, ref int completeLength)
	{
		return default(bool);
	}

	[Token(Token = "0x6001133")]
	[Address(RVA = "0x6298370", Offset = "0x6297370", VA = "0x6298370")]
	private TriState IsFtpDataStreamWriteable()
	{
		return default(TriState);
	}
}
