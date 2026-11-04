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

[Token(Token = "0x2000331")]
public class ServicePoint
{
	[Token(Token = "0x4000C86")]
	[FieldOffset(Offset = "0x10")]
	private readonly Uri uri;

	[Token(Token = "0x4000C87")]
	[FieldOffset(Offset = "0x18")]
	private DateTime lastDnsResolve;

	[Token(Token = "0x4000C88")]
	[FieldOffset(Offset = "0x20")]
	private Version protocolVersion;

	[Token(Token = "0x4000C89")]
	[FieldOffset(Offset = "0x28")]
	private IPHostEntry host;

	[Token(Token = "0x4000C8A")]
	[FieldOffset(Offset = "0x30")]
	private bool usesProxy;

	[Token(Token = "0x4000C8B")]
	[FieldOffset(Offset = "0x31")]
	private bool sendContinue;

	[Token(Token = "0x4000C8C")]
	[FieldOffset(Offset = "0x32")]
	private bool useConnect;

	[Token(Token = "0x4000C8D")]
	[FieldOffset(Offset = "0x38")]
	private object hostE;

	[Token(Token = "0x4000C8E")]
	[FieldOffset(Offset = "0x40")]
	private bool useNagle;

	[Token(Token = "0x4000C8F")]
	[FieldOffset(Offset = "0x48")]
	private BindIPEndPoint endPointCallback;

	[Token(Token = "0x4000C90")]
	[FieldOffset(Offset = "0x50")]
	private bool tcp_keepalive;

	[Token(Token = "0x4000C91")]
	[FieldOffset(Offset = "0x54")]
	private int tcp_keepalive_time;

	[Token(Token = "0x4000C92")]
	[FieldOffset(Offset = "0x58")]
	private int tcp_keepalive_interval;

	[Token(Token = "0x4000C93")]
	[FieldOffset(Offset = "0x5C")]
	private bool disposed;

	[Token(Token = "0x4000C94")]
	[FieldOffset(Offset = "0x60")]
	private int connectionLeaseTimeout;

	[Token(Token = "0x4000C95")]
	[FieldOffset(Offset = "0x64")]
	private int receiveBufferSize;

	[Token(Token = "0x4000C98")]
	[FieldOffset(Offset = "0x78")]
	private int connectionLimit;

	[Token(Token = "0x4000C99")]
	[FieldOffset(Offset = "0x7C")]
	private int maxIdleTime;

	[Token(Token = "0x4000C9A")]
	[FieldOffset(Offset = "0x80")]
	private object m_ServerCertificateOrBytes;

	[Token(Token = "0x4000C9B")]
	[FieldOffset(Offset = "0x88")]
	private object m_ClientCertificateOrBytes;

	[Token(Token = "0x170004B7")]
	internal ServicePointManager.SPKey Key
	{
		[Token(Token = "0x6001611")]
		[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004B8")]
	private ServicePointScheduler Scheduler
	{
		[Token(Token = "0x6001612")]
		[Address(RVA = "0xB48770", Offset = "0xB46D70", VA = "0x180B48770")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001613")]
		[Address(RVA = "0xB48780", Offset = "0xB46D80", VA = "0x180B48780")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170004B9")]
	public Uri Address
	{
		[Token(Token = "0x6001614")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004BA")]
	public int ConnectionLimit
	{
		[Token(Token = "0x6001615")]
		[Address(RVA = "0x58A600", Offset = "0x588C00", VA = "0x18058A600")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170004BB")]
	public virtual Version ProtocolVersion
	{
		[Token(Token = "0x6001616")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004BC")]
	public bool Expect100Continue
	{
		[Token(Token = "0x6001617")]
		[Address(RVA = "0x20FB170", Offset = "0x20F9770", VA = "0x1820FB170")]
		set
		{
		}
	}

	[Token(Token = "0x170004BD")]
	public bool UseNagleAlgorithm
	{
		[Token(Token = "0x6001618")]
		[Address(RVA = "0xA374E0", Offset = "0xA35AE0", VA = "0x180A374E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001619")]
		[Address(RVA = "0xA374F0", Offset = "0xA35AF0", VA = "0x180A374F0")]
		set
		{
		}
	}

	[Token(Token = "0x170004BE")]
	internal bool SendContinue
	{
		[Token(Token = "0x600161A")]
		[Address(RVA = "0x27EB200", Offset = "0x27E9800", VA = "0x1827EB200")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600161B")]
		[Address(RVA = "0x20FB170", Offset = "0x20F9770", VA = "0x1820FB170")]
		set
		{
		}
	}

	[Token(Token = "0x170004BF")]
	internal bool UsesProxy
	{
		[Token(Token = "0x600161F")]
		[Address(RVA = "0xACDD00", Offset = "0xACC300", VA = "0x180ACDD00")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001620")]
		[Address(RVA = "0xACE1A0", Offset = "0xACC7A0", VA = "0x180ACE1A0")]
		set
		{
		}
	}

	[Token(Token = "0x170004C0")]
	internal bool UseConnect
	{
		[Token(Token = "0x6001621")]
		[Address(RVA = "0x1D6A550", Offset = "0x1D68B50", VA = "0x181D6A550")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001622")]
		[Address(RVA = "0x27EB290", Offset = "0x27E9890", VA = "0x1827EB290")]
		set
		{
		}
	}

	[Token(Token = "0x170004C1")]
	private bool HasTimedOut
	{
		[Token(Token = "0x6001623")]
		[Address(RVA = "0x27EAC80", Offset = "0x27E9280", VA = "0x1827EAC80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004C2")]
	internal IPHostEntry HostEntry
	{
		[Token(Token = "0x6001624")]
		[Address(RVA = "0x27EADA0", Offset = "0x27E93A0", VA = "0x1827EADA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001610")]
	[Address(RVA = "0x27EAB90", Offset = "0x27E9190", VA = "0x1827EAB90")]
	internal ServicePoint(ServicePointManager.SPKey key, Uri uri, int connectionLimit, int maxIdleTime)
	{
	}

	[Token(Token = "0x600161C")]
	[Address(RVA = "0x27EA9E0", Offset = "0x27E8FE0", VA = "0x1827EA9E0")]
	public void SetTcpKeepAlive(bool enabled, int keepAliveTime, int keepAliveInterval)
	{
	}

	[Token(Token = "0x600161D")]
	[Address(RVA = "0x27EA6E0", Offset = "0x27E8CE0", VA = "0x1827EA6E0")]
	internal void KeepAliveSetup(Socket socket)
	{
	}

	[Token(Token = "0x600161E")]
	[Address(RVA = "0x27EA830", Offset = "0x27E8E30", VA = "0x1827EA830")]
	private static void PutBytes(byte[] bytes, uint v, int offset)
	{
	}

	[Token(Token = "0x6001625")]
	[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
	internal void SetVersion(Version version)
	{
	}

	[Token(Token = "0x6001626")]
	[Address(RVA = "0x27EA8A0", Offset = "0x27E8EA0", VA = "0x1827EA8A0")]
	internal void SendRequest(WebOperation operation, string groupName)
	{
	}

	[Token(Token = "0x6001627")]
	[Address(RVA = "0x27EA6C0", Offset = "0x27E8CC0", VA = "0x1827EA6C0")]
	internal void FreeServicePoint()
	{
	}

	[Token(Token = "0x6001628")]
	[Address(RVA = "0x27EAB30", Offset = "0x27E9130", VA = "0x1827EAB30")]
	internal void UpdateServerCertificate(X509Certificate certificate)
	{
	}

	[Token(Token = "0x6001629")]
	[Address(RVA = "0x27EAAD0", Offset = "0x27E90D0", VA = "0x1827EAAD0")]
	internal void UpdateClientCertificate(X509Certificate certificate)
	{
	}

	[Token(Token = "0x600162A")]
	[Address(RVA = "0x27EA5F0", Offset = "0x27E8BF0", VA = "0x1827EA5F0")]
	internal bool CallEndPointDelegate(Socket sock, IPEndPoint remote)
	{
		return default(bool);
	}
}
