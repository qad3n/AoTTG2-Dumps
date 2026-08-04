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

[Token(Token = "0x2000127")]
internal class FtpControlStream : CommandStream
{
	[Token(Token = "0x2000128")]
	private enum GetPathOption
	{
		[Token(Token = "0x40005C7")]
		Normal,
		[Token(Token = "0x40005C8")]
		AssumeFilename,
		[Token(Token = "0x40005C9")]
		AssumeNoFilename
	}

	[Token(Token = "0x40005B1")]
	[FieldOffset(Offset = "0x88")]
	private Socket _dataSocket;

	[Token(Token = "0x40005B2")]
	[FieldOffset(Offset = "0x90")]
	private IPEndPoint _passiveEndPoint;

	[Token(Token = "0x40005B3")]
	[FieldOffset(Offset = "0x98")]
	private TlsStream _tlsStream;

	[Token(Token = "0x40005B4")]
	[FieldOffset(Offset = "0xA0")]
	private StringBuilder _bannerMessage;

	[Token(Token = "0x40005B5")]
	[FieldOffset(Offset = "0xA8")]
	private StringBuilder _welcomeMessage;

	[Token(Token = "0x40005B6")]
	[FieldOffset(Offset = "0xB0")]
	private StringBuilder _exitMessage;

	[Token(Token = "0x40005B7")]
	[FieldOffset(Offset = "0xB8")]
	private WeakReference _credentials;

	[Token(Token = "0x40005B8")]
	[FieldOffset(Offset = "0xC0")]
	private string _currentTypeSetting;

	[Token(Token = "0x40005B9")]
	[FieldOffset(Offset = "0xC8")]
	private long _contentLength;

	[Token(Token = "0x40005BA")]
	[FieldOffset(Offset = "0xD0")]
	private DateTime _lastModified;

	[Token(Token = "0x40005BB")]
	[FieldOffset(Offset = "0xD8")]
	private bool _dataHandshakeStarted;

	[Token(Token = "0x40005BC")]
	[FieldOffset(Offset = "0xE0")]
	private string _loginDirectory;

	[Token(Token = "0x40005BD")]
	[FieldOffset(Offset = "0xE8")]
	private string _establishedServerDirectory;

	[Token(Token = "0x40005BE")]
	[FieldOffset(Offset = "0xF0")]
	private string _requestedServerDirectory;

	[Token(Token = "0x40005BF")]
	[FieldOffset(Offset = "0xF8")]
	private Uri _responseUri;

	[Token(Token = "0x40005C0")]
	[FieldOffset(Offset = "0x100")]
	private FtpLoginState _loginState;

	[Token(Token = "0x40005C1")]
	[FieldOffset(Offset = "0x104")]
	internal FtpStatusCode StatusCode;

	[Token(Token = "0x40005C2")]
	[FieldOffset(Offset = "0x108")]
	internal string StatusLine;

	[Token(Token = "0x40005C3")]
	[FieldOffset(Offset = "0x0")]
	private static readonly AsyncCallback s_acceptCallbackDelegate;

	[Token(Token = "0x40005C4")]
	[FieldOffset(Offset = "0x8")]
	private static readonly AsyncCallback s_connectCallbackDelegate;

	[Token(Token = "0x40005C5")]
	[FieldOffset(Offset = "0x10")]
	private static readonly AsyncCallback s_SSLHandshakeCallback;

	[Token(Token = "0x17000173")]
	internal NetworkCredential Credentials
	{
		[Token(Token = "0x6000711")]
		[Address(RVA = "0x494E890", Offset = "0x494E890", VA = "0x494E890")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000712")]
		[Address(RVA = "0x494E930", Offset = "0x494E930", VA = "0x494E930")]
		set
		{
		}
	}

	[Token(Token = "0x17000174")]
	internal long ContentLength
	{
		[Token(Token = "0x6000720")]
		[Address(RVA = "0x4953C00", Offset = "0x4953C00", VA = "0x4953C00")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x17000175")]
	internal DateTime LastModified
	{
		[Token(Token = "0x6000721")]
		[Address(RVA = "0x4953C10", Offset = "0x4953C10", VA = "0x4953C10")]
		get
		{
			return default(DateTime);
		}
	}

	[Token(Token = "0x17000176")]
	internal Uri ResponseUri
	{
		[Token(Token = "0x6000722")]
		[Address(RVA = "0x4953C20", Offset = "0x4953C20", VA = "0x4953C20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000177")]
	internal string BannerMessage
	{
		[Token(Token = "0x6000723")]
		[Address(RVA = "0x4953C30", Offset = "0x4953C30", VA = "0x4953C30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000178")]
	internal string WelcomeMessage
	{
		[Token(Token = "0x6000724")]
		[Address(RVA = "0x4953C60", Offset = "0x4953C60", VA = "0x4953C60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000179")]
	internal string ExitMessage
	{
		[Token(Token = "0x6000725")]
		[Address(RVA = "0x4953C90", Offset = "0x4953C90", VA = "0x4953C90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000713")]
	[Address(RVA = "0x494E9C0", Offset = "0x494E9C0", VA = "0x494E9C0")]
	internal FtpControlStream(TcpClient client)
	{
	}

	[Token(Token = "0x6000714")]
	[Address(RVA = "0x494EA50", Offset = "0x494EA50", VA = "0x494EA50")]
	internal void AbortConnect()
	{
	}

	[Token(Token = "0x6000715")]
	[Address(RVA = "0x494EAE0", Offset = "0x494EAE0", VA = "0x494EAE0")]
	private static void AcceptCallback(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6000716")]
	[Address(RVA = "0x494EFE0", Offset = "0x494EFE0", VA = "0x494EFE0")]
	private static void ConnectCallback(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6000717")]
	[Address(RVA = "0x494F220", Offset = "0x494F220", VA = "0x494F220")]
	private static void SSLHandshakeCallback(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6000718")]
	[Address(RVA = "0x494F480", Offset = "0x494F480", VA = "0x494F480")]
	private PipelineInstruction QueueOrCreateFtpDataStream(ref Stream stream)
	{
		return default(PipelineInstruction);
	}

	[Token(Token = "0x6000719")]
	[Address(RVA = "0x494FBD0", Offset = "0x494FBD0", VA = "0x494FBD0", Slot = "39")]
	protected override void ClearState()
	{
	}

	[Token(Token = "0x600071A")]
	[Address(RVA = "0x494FD40", Offset = "0x494FD40", VA = "0x494FD40", Slot = "41")]
	protected override PipelineInstruction PipelineCallback(PipelineEntry entry, ResponseDescription response, bool timeout, ref Stream stream)
	{
		return default(PipelineInstruction);
	}

	[Token(Token = "0x600071B")]
	[Address(RVA = "0x4951AA0", Offset = "0x4951AA0", VA = "0x4951AA0", Slot = "40")]
	protected override PipelineEntry[] BuildCommandsList(WebRequest req)
	{
		return null;
	}

	[Token(Token = "0x600071C")]
	[Address(RVA = "0x4950880", Offset = "0x4950880", VA = "0x4950880")]
	private PipelineInstruction QueueOrCreateDataConection(PipelineEntry entry, ResponseDescription response, bool timeout, ref Stream stream, out bool isSocketReady)
	{
		return default(PipelineInstruction);
	}

	[Token(Token = "0x600071D")]
	[Address(RVA = "0x4952FA0", Offset = "0x4952FA0", VA = "0x4952FA0")]
	private static void GetPathInfo(GetPathOption pathOption, Uri uri, out string path, out string directory, out string filename)
	{
	}

	[Token(Token = "0x600071E")]
	[Address(RVA = "0x49539D0", Offset = "0x49539D0", VA = "0x49539D0")]
	private string FormatAddress(IPAddress address, int Port)
	{
		return null;
	}

	[Token(Token = "0x600071F")]
	[Address(RVA = "0x4953B00", Offset = "0x4953B00", VA = "0x4953B00")]
	private string FormatAddressV6(IPAddress address, int port)
	{
		return null;
	}

	[Token(Token = "0x6000726")]
	[Address(RVA = "0x4951580", Offset = "0x4951580", VA = "0x4951580")]
	private long GetContentLengthFrom213Response(string responseString)
	{
		return default(long);
	}

	[Token(Token = "0x6000727")]
	[Address(RVA = "0x49516A0", Offset = "0x49516A0", VA = "0x49516A0")]
	private DateTime GetLastModifiedFrom213Response(string str)
	{
		return default(DateTime);
	}

	[Token(Token = "0x6000728")]
	[Address(RVA = "0x4951210", Offset = "0x4951210", VA = "0x4951210")]
	private void TryUpdateResponseUri(string str, FtpWebRequest request)
	{
	}

	[Token(Token = "0x6000729")]
	[Address(RVA = "0x4951120", Offset = "0x4951120", VA = "0x4951120")]
	private void TryUpdateContentLength(string str)
	{
	}

	[Token(Token = "0x600072A")]
	[Address(RVA = "0x4951A20", Offset = "0x4951A20", VA = "0x4951A20")]
	private string GetLoginDirectory(string str)
	{
		return null;
	}

	[Token(Token = "0x600072B")]
	[Address(RVA = "0x4953590", Offset = "0x4953590", VA = "0x4953590")]
	private int GetPortV4(string responseString)
	{
		return default(int);
	}

	[Token(Token = "0x600072C")]
	[Address(RVA = "0x4953740", Offset = "0x4953740", VA = "0x4953740")]
	private int GetPortV6(string responseString)
	{
		return default(int);
	}

	[Token(Token = "0x600072D")]
	[Address(RVA = "0x4953150", Offset = "0x4953150", VA = "0x4953150")]
	private void CreateFtpListenerSocket(FtpWebRequest request)
	{
	}

	[Token(Token = "0x600072E")]
	[Address(RVA = "0x4953360", Offset = "0x4953360", VA = "0x4953360")]
	private string GetPortCommandLine(FtpWebRequest request)
	{
		return null;
	}

	[Token(Token = "0x600072F")]
	[Address(RVA = "0x4952E70", Offset = "0x4952E70", VA = "0x4952E70")]
	private string FormatFtpCommand(string command, string parameter)
	{
		return null;
	}

	[Token(Token = "0x6000730")]
	[Address(RVA = "0x49538E0", Offset = "0x49538E0", VA = "0x49538E0")]
	protected Socket CreateFtpDataSocket(FtpWebRequest request, Socket templateSocket)
	{
		return null;
	}

	[Token(Token = "0x6000731")]
	[Address(RVA = "0x4953CC0", Offset = "0x4953CC0", VA = "0x4953CC0", Slot = "42")]
	protected override bool CheckValid(ResponseDescription response, ref int validThrough, ref int completeLength)
	{
		return default(bool);
	}

	[Token(Token = "0x6000732")]
	[Address(RVA = "0x494F870", Offset = "0x494F870", VA = "0x494F870")]
	private TriState IsFtpDataStreamWriteable()
	{
		return default(TriState);
	}
}
