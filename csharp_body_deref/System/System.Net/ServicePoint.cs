using System.Net.Sockets;
using System.Runtime.CompilerServices;
using System.Security.Cryptography.X509Certificates;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x20001A9")]
public class ServicePoint
{
	[Token(Token = "0x4000870")]
	[FieldOffset(Offset = "0x10")]
	private readonly Uri uri;

	[Token(Token = "0x4000871")]
	[FieldOffset(Offset = "0x18")]
	private DateTime lastDnsResolve;

	[Token(Token = "0x4000872")]
	[FieldOffset(Offset = "0x20")]
	private Version protocolVersion;

	[Token(Token = "0x4000873")]
	[FieldOffset(Offset = "0x28")]
	private IPHostEntry host;

	[Token(Token = "0x4000874")]
	[FieldOffset(Offset = "0x30")]
	private bool usesProxy;

	[Token(Token = "0x4000875")]
	[FieldOffset(Offset = "0x31")]
	private bool sendContinue;

	[Token(Token = "0x4000876")]
	[FieldOffset(Offset = "0x32")]
	private bool useConnect;

	[Token(Token = "0x4000877")]
	[FieldOffset(Offset = "0x38")]
	private object hostE;

	[Token(Token = "0x4000878")]
	[FieldOffset(Offset = "0x40")]
	private bool useNagle;

	[Token(Token = "0x4000879")]
	[FieldOffset(Offset = "0x48")]
	private BindIPEndPoint endPointCallback;

	[Token(Token = "0x400087A")]
	[FieldOffset(Offset = "0x50")]
	private bool tcp_keepalive;

	[Token(Token = "0x400087B")]
	[FieldOffset(Offset = "0x54")]
	private int tcp_keepalive_time;

	[Token(Token = "0x400087C")]
	[FieldOffset(Offset = "0x58")]
	private int tcp_keepalive_interval;

	[Token(Token = "0x400087D")]
	[FieldOffset(Offset = "0x5C")]
	private bool disposed;

	[Token(Token = "0x400087E")]
	[FieldOffset(Offset = "0x60")]
	private int connectionLeaseTimeout;

	[Token(Token = "0x400087F")]
	[FieldOffset(Offset = "0x64")]
	private int receiveBufferSize;

	[Token(Token = "0x4000882")]
	[FieldOffset(Offset = "0x78")]
	private int connectionLimit;

	[Token(Token = "0x4000883")]
	[FieldOffset(Offset = "0x7C")]
	private int maxIdleTime;

	[Token(Token = "0x4000884")]
	[FieldOffset(Offset = "0x80")]
	private object m_ServerCertificateOrBytes;

	[Token(Token = "0x4000885")]
	[FieldOffset(Offset = "0x88")]
	private object m_ClientCertificateOrBytes;

	[Token(Token = "0x17000261")]
	internal ServicePointManager.SPKey Key
	{
		[Token(Token = "0x6000A50")]
		[Address(RVA = "0x46676F0", Offset = "0x46676F0", VA = "0x46676F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000262")]
	private ServicePointScheduler Scheduler
	{
		[Token(Token = "0x6000A51")]
		[Address(RVA = "0x4667700", Offset = "0x4667700", VA = "0x4667700")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000A52")]
		[Address(RVA = "0x4667710", Offset = "0x4667710", VA = "0x4667710")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000263")]
	public Uri Address
	{
		[Token(Token = "0x6000A53")]
		[Address(RVA = "0x4667720", Offset = "0x4667720", VA = "0x4667720")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000264")]
	public int ConnectionLimit
	{
		[Token(Token = "0x6000A54")]
		[Address(RVA = "0x4667730", Offset = "0x4667730", VA = "0x4667730")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000265")]
	public virtual Version ProtocolVersion
	{
		[Token(Token = "0x6000A55")]
		[Address(RVA = "0x4667740", Offset = "0x4667740", VA = "0x4667740", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000266")]
	public bool Expect100Continue
	{
		[Token(Token = "0x6000A56")]
		[Address(RVA = "0x4667750", Offset = "0x4667750", VA = "0x4667750")]
		set
		{
		}
	}

	[Token(Token = "0x17000267")]
	public bool UseNagleAlgorithm
	{
		[Token(Token = "0x6000A57")]
		[Address(RVA = "0x4667760", Offset = "0x4667760", VA = "0x4667760")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000A58")]
		[Address(RVA = "0x4667770", Offset = "0x4667770", VA = "0x4667770")]
		set
		{
		}
	}

	[Token(Token = "0x17000268")]
	internal bool SendContinue
	{
		[Token(Token = "0x6000A59")]
		[Address(RVA = "0x4660280", Offset = "0x4660280", VA = "0x4660280")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000A5A")]
		[Address(RVA = "0x4667780", Offset = "0x4667780", VA = "0x4667780")]
		set
		{
		}
	}

	[Token(Token = "0x17000269")]
	internal bool UsesProxy
	{
		[Token(Token = "0x6000A5E")]
		[Address(RVA = "0x46679A0", Offset = "0x46679A0", VA = "0x46679A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000A5F")]
		[Address(RVA = "0x46679B0", Offset = "0x46679B0", VA = "0x46679B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700026A")]
	internal bool UseConnect
	{
		[Token(Token = "0x6000A60")]
		[Address(RVA = "0x46679C0", Offset = "0x46679C0", VA = "0x46679C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000A61")]
		[Address(RVA = "0x46679D0", Offset = "0x46679D0", VA = "0x46679D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700026B")]
	private bool HasTimedOut
	{
		[Token(Token = "0x6000A62")]
		[Address(RVA = "0x46679E0", Offset = "0x46679E0", VA = "0x46679E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700026C")]
	internal IPHostEntry HostEntry
	{
		[Token(Token = "0x6000A63")]
		[Address(RVA = "0x4667B50", Offset = "0x4667B50", VA = "0x4667B50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A4F")]
	[Address(RVA = "0x46673B0", Offset = "0x46673B0", VA = "0x46673B0")]
	internal ServicePoint(ServicePointManager.SPKey key, Uri uri, int connectionLimit, int maxIdleTime)
	{
	}

	[Token(Token = "0x6000A5B")]
	[Address(RVA = "0x4667790", Offset = "0x4667790", VA = "0x4667790")]
	public void SetTcpKeepAlive(bool enabled, int keepAliveTime, int keepAliveInterval)
	{
	}

	[Token(Token = "0x6000A5C")]
	[Address(RVA = "0x4667830", Offset = "0x4667830", VA = "0x4667830")]
	internal void KeepAliveSetup(Socket socket)
	{
	}

	[Token(Token = "0x6000A5D")]
	[Address(RVA = "0x4667940", Offset = "0x4667940", VA = "0x4667940")]
	private static void PutBytes(byte[] bytes, uint v, int offset)
	{
	}

	[Token(Token = "0x6000A64")]
	[Address(RVA = "0x4667F70", Offset = "0x4667F70", VA = "0x4667F70")]
	internal void SetVersion(Version version)
	{
	}

	[Token(Token = "0x6000A65")]
	[Address(RVA = "0x465E780", Offset = "0x465E780", VA = "0x465E780")]
	internal void SendRequest(WebOperation operation, string groupName)
	{
	}

	[Token(Token = "0x6000A66")]
	[Address(RVA = "0x46680A0", Offset = "0x46680A0", VA = "0x46680A0")]
	internal void FreeServicePoint()
	{
	}

	[Token(Token = "0x6000A67")]
	[Address(RVA = "0x46680C0", Offset = "0x46680C0", VA = "0x46680C0")]
	internal void UpdateServerCertificate(X509Certificate certificate)
	{
	}

	[Token(Token = "0x6000A68")]
	[Address(RVA = "0x4668110", Offset = "0x4668110", VA = "0x4668110")]
	internal void UpdateClientCertificate(X509Certificate certificate)
	{
	}

	[Token(Token = "0x6000A69")]
	[Address(RVA = "0x4668170", Offset = "0x4668170", VA = "0x4668170")]
	internal bool CallEndPointDelegate(Socket sock, IPEndPoint remote)
	{
		return default(bool);
	}
}
