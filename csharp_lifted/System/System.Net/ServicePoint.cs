// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.ServicePoint
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Net.Sockets;
using System.Runtime.CompilerServices;
using System.Security.Cryptography.X509Certificates;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x20002F2")]
public class ServicePoint
{
	[Token(Token = "0x4000BB7")]
	[FieldOffset(Offset = "0x10")]
	private readonly Uri uri;

	[Token(Token = "0x4000BB8")]
	[FieldOffset(Offset = "0x18")]
	private DateTime lastDnsResolve;

	[Token(Token = "0x4000BB9")]
	[FieldOffset(Offset = "0x20")]
	private Version protocolVersion;

	[Token(Token = "0x4000BBA")]
	[FieldOffset(Offset = "0x28")]
	private IPHostEntry host;

	[Token(Token = "0x4000BBB")]
	[FieldOffset(Offset = "0x30")]
	private bool usesProxy;

	[Token(Token = "0x4000BBC")]
	[FieldOffset(Offset = "0x31")]
	private bool sendContinue;

	[Token(Token = "0x4000BBD")]
	[FieldOffset(Offset = "0x32")]
	private bool useConnect;

	[Token(Token = "0x4000BBE")]
	[FieldOffset(Offset = "0x38")]
	private object hostE;

	[Token(Token = "0x4000BBF")]
	[FieldOffset(Offset = "0x40")]
	private bool useNagle;

	[Token(Token = "0x4000BC0")]
	[FieldOffset(Offset = "0x48")]
	private BindIPEndPoint endPointCallback;

	[Token(Token = "0x4000BC1")]
	[FieldOffset(Offset = "0x50")]
	private bool tcp_keepalive;

	[Token(Token = "0x4000BC2")]
	[FieldOffset(Offset = "0x54")]
	private int tcp_keepalive_time;

	[Token(Token = "0x4000BC3")]
	[FieldOffset(Offset = "0x58")]
	private int tcp_keepalive_interval;

	[Token(Token = "0x4000BC4")]
	[FieldOffset(Offset = "0x5C")]
	private bool disposed;

	[Token(Token = "0x4000BC5")]
	[FieldOffset(Offset = "0x60")]
	private int connectionLeaseTimeout;

	[Token(Token = "0x4000BC6")]
	[FieldOffset(Offset = "0x64")]
	private int receiveBufferSize;

	[Token(Token = "0x4000BC9")]
	[FieldOffset(Offset = "0x78")]
	private int connectionLimit;

	[Token(Token = "0x4000BCA")]
	[FieldOffset(Offset = "0x7C")]
	private int maxIdleTime;

	[Token(Token = "0x4000BCB")]
	[FieldOffset(Offset = "0x80")]
	private object m_ServerCertificateOrBytes;

	[Token(Token = "0x4000BCC")]
	[FieldOffset(Offset = "0x88")]
	private object m_ClientCertificateOrBytes;

	[Token(Token = "0x17000488")]
	internal ServicePointManager.SPKey Key
	{
		[Token(Token = "0x6001453")]
		[Address(RVA = "0x618E880", Offset = "0x618D880", VA = "0x618E880")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000489")]
	private ServicePointScheduler Scheduler
	{
		[Token(Token = "0x6001454")]
		[Address(RVA = "0x618E890", Offset = "0x618D890", VA = "0x618E890")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001455")]
		[Address(RVA = "0x618E8A0", Offset = "0x618D8A0", VA = "0x618E8A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700048A")]
	public Uri Address
	{
		[Token(Token = "0x6001456")]
		[Address(RVA = "0x618E8B0", Offset = "0x618D8B0", VA = "0x618E8B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700048B")]
	public int ConnectionLimit
	{
		[Token(Token = "0x6001457")]
		[Address(RVA = "0x618E8C0", Offset = "0x618D8C0", VA = "0x618E8C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700048C")]
	public virtual Version ProtocolVersion
	{
		[Token(Token = "0x6001458")]
		[Address(RVA = "0x618E8D0", Offset = "0x618D8D0", VA = "0x618E8D0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700048D")]
	public bool Expect100Continue
	{
		[Token(Token = "0x6001459")]
		[Address(RVA = "0x618E8E0", Offset = "0x618D8E0", VA = "0x618E8E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700048E")]
	public bool UseNagleAlgorithm
	{
		[Token(Token = "0x600145A")]
		[Address(RVA = "0x618E8F0", Offset = "0x618D8F0", VA = "0x618E8F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600145B")]
		[Address(RVA = "0x618E900", Offset = "0x618D900", VA = "0x618E900")]
		set
		{
		}
	}

	[Token(Token = "0x1700048F")]
	internal bool SendContinue
	{
		[Token(Token = "0x600145C")]
		[Address(RVA = "0x61879E0", Offset = "0x61869E0", VA = "0x61879E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600145D")]
		[Address(RVA = "0x618E910", Offset = "0x618D910", VA = "0x618E910")]
		set
		{
		}
	}

	[Token(Token = "0x17000490")]
	internal bool UsesProxy
	{
		[Token(Token = "0x6001461")]
		[Address(RVA = "0x618EB90", Offset = "0x618DB90", VA = "0x618EB90")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001462")]
		[Address(RVA = "0x618EBA0", Offset = "0x618DBA0", VA = "0x618EBA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000491")]
	internal bool UseConnect
	{
		[Token(Token = "0x6001463")]
		[Address(RVA = "0x618EBB0", Offset = "0x618DBB0", VA = "0x618EBB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001464")]
		[Address(RVA = "0x618EBC0", Offset = "0x618DBC0", VA = "0x618EBC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000492")]
	private bool HasTimedOut
	{
		[Token(Token = "0x6001465")]
		[Address(RVA = "0x618EBD0", Offset = "0x618DBD0", VA = "0x618EBD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000493")]
	internal IPHostEntry HostEntry
	{
		[Token(Token = "0x6001466")]
		[Address(RVA = "0x618ED40", Offset = "0x618DD40", VA = "0x618ED40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001452")]
	[Address(RVA = "0x618E540", Offset = "0x618D540", VA = "0x618E540")]
	internal ServicePoint(ServicePointManager.SPKey key, Uri uri, int connectionLimit, int maxIdleTime)
	{
	}

	[Token(Token = "0x600145E")]
	[Address(RVA = "0x618E920", Offset = "0x618D920", VA = "0x618E920")]
	public void SetTcpKeepAlive(bool enabled, int keepAliveTime, int keepAliveInterval)
	{
	}

	[Token(Token = "0x600145F")]
	[Address(RVA = "0x618E9C0", Offset = "0x618D9C0", VA = "0x618E9C0")]
	internal void KeepAliveSetup(Socket socket)
	{
	}

	[Token(Token = "0x6001460")]
	[Address(RVA = "0x618EB30", Offset = "0x618DB30", VA = "0x618EB30")]
	private static void PutBytes(byte[] bytes, uint v, int offset)
	{
	}

	[Token(Token = "0x6001467")]
	[Address(RVA = "0x618F110", Offset = "0x618E110", VA = "0x618F110")]
	internal void SetVersion(Version version)
	{
	}

	[Token(Token = "0x6001468")]
	[Address(RVA = "0x6185F40", Offset = "0x6184F40", VA = "0x6185F40")]
	internal void SendRequest(WebOperation operation, string groupName)
	{
	}

	[Token(Token = "0x6001469")]
	[Address(RVA = "0x618F230", Offset = "0x618E230", VA = "0x618F230")]
	internal void FreeServicePoint()
	{
	}

	[Token(Token = "0x600146A")]
	[Address(RVA = "0x618F250", Offset = "0x618E250", VA = "0x618F250")]
	internal void UpdateServerCertificate(X509Certificate certificate)
	{
	}

	[Token(Token = "0x600146B")]
	[Address(RVA = "0x618F2A0", Offset = "0x618E2A0", VA = "0x618F2A0")]
	internal void UpdateClientCertificate(X509Certificate certificate)
	{
	}

	[Token(Token = "0x600146C")]
	[Address(RVA = "0x618F300", Offset = "0x618E300", VA = "0x618F300")]
	internal bool CallEndPointDelegate(Socket sock, IPEndPoint remote)
	{
		return default(bool);
	}
}
