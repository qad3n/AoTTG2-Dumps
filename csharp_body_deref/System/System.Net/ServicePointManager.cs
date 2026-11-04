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

[Token(Token = "0x2000332")]
public class ServicePointManager
{
	[Token(Token = "0x2000333")]
	internal class SPKey
	{
		[Token(Token = "0x4000CAA")]
		[FieldOffset(Offset = "0x10")]
		private Uri uri;

		[Token(Token = "0x4000CAB")]
		[FieldOffset(Offset = "0x18")]
		private Uri proxy;

		[Token(Token = "0x4000CAC")]
		[FieldOffset(Offset = "0x20")]
		private bool use_connect;

		[Token(Token = "0x170004C8")]
		public bool UsesProxy
		{
			[Token(Token = "0x6001635")]
			[Address(RVA = "0x27E80B0", Offset = "0x27E66B0", VA = "0x1827E80B0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x6001634")]
		[Address(RVA = "0x1A1E5E0", Offset = "0x1A1CBE0", VA = "0x181A1E5E0")]
		public SPKey(Uri uri, Uri proxy, bool use_connect)
		{
		}

		[Token(Token = "0x6001636")]
		[Address(RVA = "0x27E7FD0", Offset = "0x27E65D0", VA = "0x1827E7FD0", Slot = "2")]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x6001637")]
		[Address(RVA = "0x27E7EC0", Offset = "0x27E64C0", VA = "0x1827E7EC0", Slot = "0")]
		public override bool Equals(object obj)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x4000C9C")]
	[FieldOffset(Offset = "0x0")]
	private static ConcurrentDictionary<SPKey, ServicePoint> servicePoints;

	[Token(Token = "0x4000C9D")]
	[FieldOffset(Offset = "0x8")]
	private static ICertificatePolicy policy;

	[Token(Token = "0x4000C9E")]
	[FieldOffset(Offset = "0x10")]
	private static int defaultConnectionLimit;

	[Token(Token = "0x4000C9F")]
	[FieldOffset(Offset = "0x14")]
	private static int maxServicePointIdleTime;

	[Token(Token = "0x4000CA0")]
	[FieldOffset(Offset = "0x18")]
	private static int maxServicePoints;

	[Token(Token = "0x4000CA1")]
	[FieldOffset(Offset = "0x1C")]
	private static int dnsRefreshTimeout;

	[Token(Token = "0x4000CA2")]
	[FieldOffset(Offset = "0x20")]
	private static bool _checkCRL;

	[Token(Token = "0x4000CA3")]
	[FieldOffset(Offset = "0x24")]
	private static SecurityProtocolType _securityProtocol;

	[Token(Token = "0x4000CA4")]
	[FieldOffset(Offset = "0x28")]
	private static bool expectContinue;

	[Token(Token = "0x4000CA5")]
	[FieldOffset(Offset = "0x29")]
	private static bool useNagle;

	[Token(Token = "0x4000CA6")]
	[FieldOffset(Offset = "0x30")]
	private static ServerCertValidationCallback server_cert_cb;

	[Token(Token = "0x4000CA7")]
	[FieldOffset(Offset = "0x38")]
	private static bool tcp_keepalive;

	[Token(Token = "0x4000CA8")]
	[FieldOffset(Offset = "0x3C")]
	private static int tcp_keepalive_time;

	[Token(Token = "0x4000CA9")]
	[FieldOffset(Offset = "0x40")]
	private static int tcp_keepalive_interval;

	[Token(Token = "0x170004C3")]
	[System.MonoTODO("CRL checks not implemented")]
	public static bool CheckCertificateRevocationList
	{
		[Token(Token = "0x600162D")]
		[Address(RVA = "0x27E8FC0", Offset = "0x27E75C0", VA = "0x1827E8FC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004C4")]
	public static int DnsRefreshTimeout
	{
		[Token(Token = "0x600162E")]
		[Address(RVA = "0x27E9010", Offset = "0x27E7610", VA = "0x1827E9010")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170004C5")]
	public static SecurityProtocolType SecurityProtocol
	{
		[Token(Token = "0x600162F")]
		[Address(RVA = "0x27E9060", Offset = "0x27E7660", VA = "0x1827E9060")]
		get
		{
			return default(SecurityProtocolType);
		}
	}

	[Token(Token = "0x170004C6")]
	internal static ServerCertValidationCallback ServerCertValidationCallback
	{
		[Token(Token = "0x6001630")]
		[Address(RVA = "0x27E90B0", Offset = "0x27E76B0", VA = "0x1827E90B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004C7")]
	public static RemoteCertificateValidationCallback ServerCertificateValidationCallback
	{
		[Token(Token = "0x6001631")]
		[Address(RVA = "0x27E9100", Offset = "0x27E7700", VA = "0x1827E9100")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600162B")]
	[Address(RVA = "0x27E8EB0", Offset = "0x27E74B0", VA = "0x1827E8EB0")]
	static ServicePointManager()
	{
	}

	[Token(Token = "0x600162C")]
	[Address(RVA = "0x27E8DD0", Offset = "0x27E73D0", VA = "0x1827E8DD0")]
	internal static ICertificatePolicy GetLegacyCertificatePolicy()
	{
		return null;
	}

	[Token(Token = "0x6001632")]
	[Address(RVA = "0x27E8550", Offset = "0x27E6B50", VA = "0x1827E8550")]
	public static ServicePoint FindServicePoint(Uri address, IWebProxy proxy)
	{
		return null;
	}

	[Token(Token = "0x6001633")]
	[Address(RVA = "0x27E8E20", Offset = "0x27E7420", VA = "0x1827E8E20")]
	internal static void RemoveServicePoint(ServicePoint sp)
	{
	}
}
