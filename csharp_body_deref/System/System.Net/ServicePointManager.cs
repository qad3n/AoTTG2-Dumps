// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.ServicePointManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Concurrent;
using System.Net.Security;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x20002F3")]
public class ServicePointManager
{
	[Token(Token = "0x20002F4")]
	internal class SPKey
	{
		[Token(Token = "0x4000BDB")]
		[FieldOffset(Offset = "0x10")]
		private Uri uri;

		[Token(Token = "0x4000BDC")]
		[FieldOffset(Offset = "0x18")]
		private Uri proxy;

		[Token(Token = "0x4000BDD")]
		[FieldOffset(Offset = "0x20")]
		private bool use_connect;

		[Token(Token = "0x17000499")]
		public bool UsesProxy
		{
			[Token(Token = "0x6001477")]
			[Address(RVA = "0x618F990", Offset = "0x618E990", VA = "0x618F990")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001476")]
		[Address(RVA = "0x618F8B0", Offset = "0x618E8B0", VA = "0x618F8B0")]
		public SPKey(Uri uri, Uri proxy, bool use_connect)
		{
		}

		[Token(Token = "0x6001478")]
		[Address(RVA = "0x618F9E0", Offset = "0x618E9E0", VA = "0x618F9E0", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x6001479")]
		[Address(RVA = "0x618FAB0", Offset = "0x618EAB0", VA = "0x618FAB0", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x4000BCD")]
	[FieldOffset(Offset = "0x0")]
	private static ConcurrentDictionary<SPKey, ServicePoint> servicePoints;

	[Token(Token = "0x4000BCE")]
	[FieldOffset(Offset = "0x8")]
	private static ICertificatePolicy policy;

	[Token(Token = "0x4000BCF")]
	[FieldOffset(Offset = "0x10")]
	private static int defaultConnectionLimit;

	[Token(Token = "0x4000BD0")]
	[FieldOffset(Offset = "0x14")]
	private static int maxServicePointIdleTime;

	[Token(Token = "0x4000BD1")]
	[FieldOffset(Offset = "0x18")]
	private static int maxServicePoints;

	[Token(Token = "0x4000BD2")]
	[FieldOffset(Offset = "0x1C")]
	private static int dnsRefreshTimeout;

	[Token(Token = "0x4000BD3")]
	[FieldOffset(Offset = "0x20")]
	private static bool _checkCRL;

	[Token(Token = "0x4000BD4")]
	[FieldOffset(Offset = "0x24")]
	private static SecurityProtocolType _securityProtocol;

	[Token(Token = "0x4000BD5")]
	[FieldOffset(Offset = "0x28")]
	private static bool expectContinue;

	[Token(Token = "0x4000BD6")]
	[FieldOffset(Offset = "0x29")]
	private static bool useNagle;

	[Token(Token = "0x4000BD7")]
	[FieldOffset(Offset = "0x30")]
	private static ServerCertValidationCallback server_cert_cb;

	[Token(Token = "0x4000BD8")]
	[FieldOffset(Offset = "0x38")]
	private static bool tcp_keepalive;

	[Token(Token = "0x4000BD9")]
	[FieldOffset(Offset = "0x3C")]
	private static int tcp_keepalive_time;

	[Token(Token = "0x4000BDA")]
	[FieldOffset(Offset = "0x40")]
	private static int tcp_keepalive_interval;

	[Token(Token = "0x17000494")]
	[System.MonoTODO("CRL checks not implemented")]
	public static bool CheckCertificateRevocationList
	{
		[Token(Token = "0x600146F")]
		[Address(RVA = "0x618F650", Offset = "0x618E650", VA = "0x618F650")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000495")]
	public static int DnsRefreshTimeout
	{
		[Token(Token = "0x6001470")]
		[Address(RVA = "0x618F6C0", Offset = "0x618E6C0", VA = "0x618F6C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000496")]
	public static SecurityProtocolType SecurityProtocol
	{
		[Token(Token = "0x6001471")]
		[Address(RVA = "0x618F730", Offset = "0x618E730", VA = "0x618F730")]
		get
		{
			return default(SecurityProtocolType);
		}
	}

	[Token(Token = "0x17000497")]
	internal static ServerCertValidationCallback ServerCertValidationCallback
	{
		[Token(Token = "0x6001472")]
		[Address(RVA = "0x618F7A0", Offset = "0x618E7A0", VA = "0x618F7A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000498")]
	public static RemoteCertificateValidationCallback ServerCertificateValidationCallback
	{
		[Token(Token = "0x6001473")]
		[Address(RVA = "0x618F810", Offset = "0x618E810", VA = "0x618F810")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600146D")]
	[Address(RVA = "0x618F530", Offset = "0x618E530", VA = "0x618F530")]
	static ServicePointManager()
	{
	}

	[Token(Token = "0x600146E")]
	[Address(RVA = "0x618F5E0", Offset = "0x618E5E0", VA = "0x618F5E0")]
	internal static ICertificatePolicy GetLegacyCertificatePolicy()
	{
		return null;
	}

	[Token(Token = "0x6001474")]
	[Address(RVA = "0x6185640", Offset = "0x6184640", VA = "0x6185640")]
	public static ServicePoint FindServicePoint(Uri address, IWebProxy proxy)
	{
		return null;
	}

	[Token(Token = "0x6001475")]
	[Address(RVA = "0x618F900", Offset = "0x618E900", VA = "0x618F900")]
	internal static void RemoveServicePoint(ServicePoint sp)
	{
	}
}
