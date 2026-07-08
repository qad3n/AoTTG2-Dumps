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
			[Address(RVA = "0x4668820", Offset = "0x4668820", VA = "0x4668820")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6000A73")]
		[Address(RVA = "0x4668740", Offset = "0x4668740", VA = "0x4668740")]
		public SPKey(Uri uri, Uri proxy, bool use_connect)
		{
		}

		[Token(Token = "0x6000A75")]
		[Address(RVA = "0x4668870", Offset = "0x4668870", VA = "0x4668870", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x6000A76")]
		[Address(RVA = "0x4668940", Offset = "0x4668940", VA = "0x4668940", Slot = "0")]
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
		[Address(RVA = "0x46684E0", Offset = "0x46684E0", VA = "0x46684E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700026E")]
	public static int DnsRefreshTimeout
	{
		[Token(Token = "0x6000A6D")]
		[Address(RVA = "0x4668550", Offset = "0x4668550", VA = "0x4668550")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700026F")]
	public static SecurityProtocolType SecurityProtocol
	{
		[Token(Token = "0x6000A6E")]
		[Address(RVA = "0x46685C0", Offset = "0x46685C0", VA = "0x46685C0")]
		get
		{
			return default(SecurityProtocolType);
		}
	}

	[Token(Token = "0x17000270")]
	internal static ServerCertValidationCallback ServerCertValidationCallback
	{
		[Token(Token = "0x6000A6F")]
		[Address(RVA = "0x4668630", Offset = "0x4668630", VA = "0x4668630")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000271")]
	public static RemoteCertificateValidationCallback ServerCertificateValidationCallback
	{
		[Token(Token = "0x6000A70")]
		[Address(RVA = "0x46686A0", Offset = "0x46686A0", VA = "0x46686A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000A6A")]
	[Address(RVA = "0x46683C0", Offset = "0x46683C0", VA = "0x46683C0")]
	static ServicePointManager()
	{
	}

	[Token(Token = "0x6000A6B")]
	[Address(RVA = "0x4668470", Offset = "0x4668470", VA = "0x4668470")]
	internal static ICertificatePolicy GetLegacyCertificatePolicy()
	{
		return null;
	}

	[Token(Token = "0x6000A71")]
	[Address(RVA = "0x465DDD0", Offset = "0x465DDD0", VA = "0x465DDD0")]
	public static ServicePoint FindServicePoint(Uri address, IWebProxy proxy)
	{
		return null;
	}

	[Token(Token = "0x6000A72")]
	[Address(RVA = "0x4668790", Offset = "0x4668790", VA = "0x4668790")]
	internal static void RemoveServicePoint(ServicePoint sp)
	{
	}
}
