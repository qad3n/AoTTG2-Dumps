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

[Token(Token = "0x20002AF")]
internal class FtpControlStream : CommandStream
{
	[Token(Token = "0x20002B0")]
	private enum GetPathOption
	{
		[Token(Token = "0x40009DD")]
		Normal,
		[Token(Token = "0x40009DE")]
		AssumeFilename,
		[Token(Token = "0x40009DF")]
		AssumeNoFilename
	}

	[Token(Token = "0x40009C7")]
	[FieldOffset(Offset = "0x88")]
	private Socket _dataSocket;

	[Token(Token = "0x40009C8")]
	[FieldOffset(Offset = "0x90")]
	private IPEndPoint _passiveEndPoint;

	[Token(Token = "0x40009C9")]
	[FieldOffset(Offset = "0x98")]
	private TlsStream _tlsStream;

	[Token(Token = "0x40009CA")]
	[FieldOffset(Offset = "0xA0")]
	private StringBuilder _bannerMessage;

	[Token(Token = "0x40009CB")]
	[FieldOffset(Offset = "0xA8")]
	private StringBuilder _welcomeMessage;

	[Token(Token = "0x40009CC")]
	[FieldOffset(Offset = "0xB0")]
	private StringBuilder _exitMessage;

	[Token(Token = "0x40009CD")]
	[FieldOffset(Offset = "0xB8")]
	private WeakReference _credentials;

	[Token(Token = "0x40009CE")]
	[FieldOffset(Offset = "0xC0")]
	private string _currentTypeSetting;

	[Token(Token = "0x40009CF")]
	[FieldOffset(Offset = "0xC8")]
	private long _contentLength;

	[Token(Token = "0x40009D0")]
	[FieldOffset(Offset = "0xD0")]
	private DateTime _lastModified;

	[Token(Token = "0x40009D1")]
	[FieldOffset(Offset = "0xD8")]
	private bool _dataHandshakeStarted;

	[Token(Token = "0x40009D2")]
	[FieldOffset(Offset = "0xE0")]
	private string _loginDirectory;

	[Token(Token = "0x40009D3")]
	[FieldOffset(Offset = "0xE8")]
	private string _establishedServerDirectory;

	[Token(Token = "0x40009D4")]
	[FieldOffset(Offset = "0xF0")]
	private string _requestedServerDirectory;

	[Token(Token = "0x40009D5")]
	[FieldOffset(Offset = "0xF8")]
	private Uri _responseUri;

	[Token(Token = "0x40009D6")]
	[FieldOffset(Offset = "0x100")]
	private FtpLoginState _loginState;

	[Token(Token = "0x40009D7")]
	[FieldOffset(Offset = "0x104")]
	internal FtpStatusCode StatusCode;

	[Token(Token = "0x40009D8")]
	[FieldOffset(Offset = "0x108")]
	internal string StatusLine;

	[Token(Token = "0x40009D9")]
	[FieldOffset(Offset = "0x0")]
	private static readonly AsyncCallback s_acceptCallbackDelegate;

	[Token(Token = "0x40009DA")]
	[FieldOffset(Offset = "0x8")]
	private static readonly AsyncCallback s_connectCallbackDelegate;

	[Token(Token = "0x40009DB")]
	[FieldOffset(Offset = "0x10")]
	private static readonly AsyncCallback s_SSLHandshakeCallback;

	[Token(Token = "0x170003C8")]
	internal NetworkCredential Credentials
	{
		[Token(Token = "0x60012D0")]
		[Address(RVA = "0x28F7420", Offset = "0x28F5A20", VA = "0x1828F7420")]
		get
		{
			return null;
		}
		[Token(Token = "0x60012D1")]
		[Address(RVA = "0x28F7540", Offset = "0x28F5B40", VA = "0x1828F7540")]
		set
		{
		}
	}

	[Token(Token = "0x170003C9")]
	internal long ContentLength
	{
		[Token(Token = "0x60012DF")]
		[Address(RVA = "0x187BC00", Offset = "0x187A200", VA = "0x18187BC00")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x170003CA")]
	internal DateTime LastModified
	{
		[Token(Token = "0x60012E0")]
		[Address(RVA = "0x187BC40", Offset = "0x187A240", VA = "0x18187BC40")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x170003CB")]
	internal Uri ResponseUri
	{
		[Token(Token = "0x60012E1")]
		[Address(RVA = "0x1BD4F90", Offset = "0x1BD3590", VA = "0x181BD4F90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003CC")]
	internal string BannerMessage
	{
		[Token(Token = "0x60012E2")]
		[Address(RVA = "0x28F73F0", Offset = "0x28F59F0", VA = "0x1828F73F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003CD")]
	internal string WelcomeMessage
	{
		[Token(Token = "0x60012E3")]
		[Address(RVA = "0x28F7510", Offset = "0x28F5B10", VA = "0x1828F7510")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003CE")]
	internal string ExitMessage
	{
		[Token(Token = "0x60012E4")]
		[Address(RVA = "0x28F74E0", Offset = "0x28F5AE0", VA = "0x1828F74E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60012D2")]
	[Address(RVA = "0x28F72F0", Offset = "0x28F58F0", VA = "0x1828F72F0")]
	internal FtpControlStream(TcpClient client)
	{
	}

	[Token(Token = "0x60012D3")]
	[Address(RVA = "0x28F23F0", Offset = "0x28F09F0", VA = "0x1828F23F0")]
	internal void AbortConnect()
	{
	}

	[Token(Token = "0x60012D4")]
	[Address(RVA = "0x28F2410", Offset = "0x28F0A10", VA = "0x1828F2410")]
	private static void AcceptCallback(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x60012D5")]
	[Address(RVA = "0x28F3EC0", Offset = "0x28F24C0", VA = "0x1828F3EC0")]
	private static void ConnectCallback(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x60012D6")]
	[Address(RVA = "0x28F6BF0", Offset = "0x28F51F0", VA = "0x1828F6BF0")]
	private static void SSLHandshakeCallback(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x60012D7")]
	[Address(RVA = "0x28F6840", Offset = "0x28F4E40", VA = "0x1828F6840")]
	private PipelineInstruction QueueOrCreateFtpDataStream(ref Stream stream)
	{
		return default(PipelineInstruction);
	}

	[Token(Token = "0x60012D8")]
	[Address(RVA = "0x28F3DC0", Offset = "0x28F23C0", VA = "0x1828F3DC0", Slot = "39")]
	protected override void ClearState()
	{
	}

	[Token(Token = "0x60012D9")]
	[Address(RVA = "0x28F5470", Offset = "0x28F3A70", VA = "0x1828F5470", Slot = "41")]
	protected override PipelineInstruction PipelineCallback(PipelineEntry entry, ResponseDescription response, bool timeout, ref Stream stream)
	{
		return default(PipelineInstruction);
	}

	[Token(Token = "0x60012DA")]
	[Address(RVA = "0x28F26D0", Offset = "0x28F0CD0", VA = "0x1828F26D0", Slot = "40")]
	protected override PipelineEntry[] BuildCommandsList(WebRequest req)
	{
		return null;
	}

	[Token(Token = "0x60012DB")]
	[Address(RVA = "0x28F6100", Offset = "0x28F4700", VA = "0x1828F6100")]
	private PipelineInstruction QueueOrCreateDataConection(PipelineEntry entry, ResponseDescription response, bool timeout, ref Stream stream, out bool isSocketReady)
	{
		return default(PipelineInstruction);
	}

	[Token(Token = "0x60012DC")]
	[Address(RVA = "0x28F4A90", Offset = "0x28F3090", VA = "0x1828F4A90")]
	private static void GetPathInfo(GetPathOption pathOption, Uri uri, out string path, out string directory, out string filename)
	{
	}

	[Token(Token = "0x60012DD")]
	[Address(RVA = "0x28F4380", Offset = "0x28F2980", VA = "0x1828F4380")]
	private string FormatAddress(IPAddress address, int Port)
	{
		return null;
	}

	[Token(Token = "0x60012DE")]
	[Address(RVA = "0x28F4270", Offset = "0x28F2870", VA = "0x1828F4270")]
	private string FormatAddressV6(IPAddress address, int port)
	{
		return null;
	}

	[Token(Token = "0x60012E5")]
	[Address(RVA = "0x28F45C0", Offset = "0x28F2BC0", VA = "0x1828F45C0")]
	private long GetContentLengthFrom213Response(string responseString)
	{
		return default(long);
	}

	[Token(Token = "0x60012E6")]
	[Address(RVA = "0x28F46F0", Offset = "0x28F2CF0", VA = "0x1828F46F0")]
	private DateTime GetLastModifiedFrom213Response(string str)
	{
		return default(DateTime);
	}

	[Token(Token = "0x60012E7")]
	[Address(RVA = "0x28F6E00", Offset = "0x28F5400", VA = "0x1828F6E00")]
	private void TryUpdateResponseUri(string str, FtpWebRequest request)
	{
	}

	[Token(Token = "0x60012E8")]
	[Address(RVA = "0x28F6D10", Offset = "0x28F5310", VA = "0x1828F6D10")]
	private void TryUpdateContentLength(string str)
	{
	}

	[Token(Token = "0x60012E9")]
	[Address(RVA = "0x28F4A00", Offset = "0x28F3000", VA = "0x1828F4A00")]
	private string GetLoginDirectory(string str)
	{
		return null;
	}

	[Token(Token = "0x60012EA")]
	[Address(RVA = "0x28F5000", Offset = "0x28F3600", VA = "0x1828F5000")]
	private int GetPortV4(string responseString)
	{
		return default(int);
	}

	[Token(Token = "0x60012EB")]
	[Address(RVA = "0x28F51F0", Offset = "0x28F37F0", VA = "0x1828F51F0")]
	private int GetPortV6(string responseString)
	{
		return default(int);
	}

	[Token(Token = "0x60012EC")]
	[Address(RVA = "0x28F4060", Offset = "0x28F2660", VA = "0x1828F4060")]
	private void CreateFtpListenerSocket(FtpWebRequest request)
	{
	}

	[Token(Token = "0x60012ED")]
	[Address(RVA = "0x28F4C30", Offset = "0x28F3230", VA = "0x1828F4C30")]
	private string GetPortCommandLine(FtpWebRequest request)
	{
		return null;
	}

	[Token(Token = "0x60012EE")]
	[Address(RVA = "0x28F44B0", Offset = "0x28F2AB0", VA = "0x1828F44B0")]
	private string FormatFtpCommand(string command, string parameter)
	{
		return null;
	}

	[Token(Token = "0x60012EF")]
	[Address(RVA = "0x28F3FD0", Offset = "0x28F25D0", VA = "0x1828F3FD0")]
	protected Socket CreateFtpDataSocket(FtpWebRequest request, Socket templateSocket)
	{
		return null;
	}

	[Token(Token = "0x60012F0")]
	[Address(RVA = "0x28F39D0", Offset = "0x28F1FD0", VA = "0x1828F39D0", Slot = "42")]
	protected override bool CheckValid(ResponseDescription response, ref int validThrough, ref int completeLength)
	{
		return default(bool);
	}

	[Token(Token = "0x60012F1")]
	[Address(RVA = "0x28F53E0", Offset = "0x28F39E0", VA = "0x1828F53E0")]
	private TriState IsFtpDataStreamWriteable()
	{
		return default(TriState);
	}
}
