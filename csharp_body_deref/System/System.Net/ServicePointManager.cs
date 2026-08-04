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

[Token(Token = "0x20001AA")]
public class ServicePointManager
{
	[Token(Token = "0x20001AB")]
	internal class SPKey
	{
		[Token(Token = "0x4000894")]
		[FieldOffset(Offset = "0x10")]
		private Uri uri;

		[Token(Token = "0x4000895")]
		[FieldOffset(Offset = "0x18")]
		private Uri proxy;

		[Token(Token = "0x4000896")]
		[FieldOffset(Offset = "0x20")]
		private bool use_connect;

		[Token(Token = "0x17000272")]
		public bool UsesProxy
		{
			[Token(Token = "0x6000A74")]
			[Address(RVA = "0x498D920", Offset = "0x498D920", VA = "0x498D920")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000A73")]
		[Address(RVA = "0x498D840", Offset = "0x498D840", VA = "0x498D840")]
		public SPKey(Uri uri, Uri proxy, bool use_connect)
		{
		}

		[Token(Token = "0x6000A75")]
		[Address(RVA = "0x498D970", Offset = "0x498D970", VA = "0x498D970", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x6000A76")]
		[Address(RVA = "0x498DA40", Offset = "0x498DA40", VA = "0x498DA40", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x4000886")]
	[FieldOffset(Offset = "0x0")]
	private static ConcurrentDictionary<SPKey, ServicePoint> servicePoints;

	[Token(Token = "0x4000887")]
	[FieldOffset(Offset = "0x8")]
	private static ICertificatePolicy policy;

	[Token(Token = "0x4000888")]
	[FieldOffset(Offset = "0x10")]
	private static int defaultConnectionLimit;

	[Token(Token = "0x4000889")]
	[FieldOffset(Offset = "0x14")]
	private static int maxServicePointIdleTime;

	[Token(Token = "0x400088A")]
	[FieldOffset(Offset = "0x18")]
	private static int maxServicePoints;

	[Token(Token = "0x400088B")]
	[FieldOffset(Offset = "0x1C")]
	private static int dnsRefreshTimeout;

	[Token(Token = "0x400088C")]
	[FieldOffset(Offset = "0x20")]
	private static bool _checkCRL;

	[Token(Token = "0x400088D")]
	[FieldOffset(Offset = "0x24")]
	private static SecurityProtocolType _securityProtocol;

	[Token(Token = "0x400088E")]
	[FieldOffset(Offset = "0x28")]
	private static bool expectContinue;

	[Token(Token = "0x400088F")]
	[FieldOffset(Offset = "0x29")]
	private static bool useNagle;

	[Token(Token = "0x4000890")]
	[FieldOffset(Offset = "0x30")]
	private static ServerCertValidationCallback server_cert_cb;

	[Token(Token = "0x4000891")]
	[FieldOffset(Offset = "0x38")]
	private static bool tcp_keepalive;

	[Token(Token = "0x4000892")]
	[FieldOffset(Offset = "0x3C")]
	private static int tcp_keepalive_time;

	[Token(Token = "0x4000893")]
	[FieldOffset(Offset = "0x40")]
	private static int tcp_keepalive_interval;

	[Token(Token = "0x1700026D")]
	[System.MonoTODO("CRL checks not implemented")]
	public static bool CheckCertificateRevocationList
	{
		[Token(Token = "0x6000A6C")]
		[Address(RVA = "0x498D5E0", Offset = "0x498D5E0", VA = "0x498D5E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700026E")]
	public static int DnsRefreshTimeout
	{
		[Token(Token = "0x6000A6D")]
		[Address(RVA = "0x498D650", Offset = "0x498D650", VA = "0x498D650")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700026F")]
	public static SecurityProtocolType SecurityProtocol
	{
		[Token(Token = "0x6000A6E")]
		[Address(RVA = "0x498D6C0", Offset = "0x498D6C0", VA = "0x498D6C0")]
		get
		{
			return default(SecurityProtocolType);
		}
	}

	[Token(Token = "0x17000270")]
	internal static ServerCertValidationCallback ServerCertValidationCallback
	{
		[Token(Token = "0x6000A6F")]
		[Address(RVA = "0x498D730", Offset = "0x498D730", VA = "0x498D730")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000271")]
	public static RemoteCertificateValidationCallback ServerCertificateValidationCallback
	{
		[Token(Token = "0x6000A70")]
		[Address(RVA = "0x498D7A0", Offset = "0x498D7A0", VA = "0x498D7A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A6A")]
	[Address(RVA = "0x498D4C0", Offset = "0x498D4C0", VA = "0x498D4C0")]
	static ServicePointManager()
	{
	}

	[Token(Token = "0x6000A6B")]
	[Address(RVA = "0x498D570", Offset = "0x498D570", VA = "0x498D570")]
	internal static ICertificatePolicy GetLegacyCertificatePolicy()
	{
		return null;
	}

	[Token(Token = "0x6000A71")]
	[Address(RVA = "0x4982ED0", Offset = "0x4982ED0", VA = "0x4982ED0")]
	public static ServicePoint FindServicePoint(Uri address, IWebProxy proxy)
	{
		return null;
	}

	[Token(Token = "0x6000A72")]
	[Address(RVA = "0x498D890", Offset = "0x498D890", VA = "0x498D890")]
	internal static void RemoveServicePoint(ServicePoint sp)
	{
	}
}
