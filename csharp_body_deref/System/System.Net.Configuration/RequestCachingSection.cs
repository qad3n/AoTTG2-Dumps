// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Configuration.RequestCachingSection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Configuration;
using System.Net.Cache;
using System.Xml;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x20003B3")]
public sealed class RequestCachingSection : ConfigurationSection
{
	[Token(Token = "0x170005A1")]
	public FtpCachePolicyElement DefaultFtpCachePolicy
	{
		[Token(Token = "0x60018DD")]
		[Address(RVA = "0x61D12E0", Offset = "0x61D02E0", VA = "0x61D12E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005A2")]
	public HttpCachePolicyElement DefaultHttpCachePolicy
	{
		[Token(Token = "0x60018DE")]
		[Address(RVA = "0x61D1310", Offset = "0x61D0310", VA = "0x61D1310")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005A3")]
	public RequestCacheLevel DefaultPolicyLevel
	{
		[Token(Token = "0x60018DF")]
		[Address(RVA = "0x61D1340", Offset = "0x61D0340", VA = "0x61D1340")]
		get
		{
			return default(RequestCacheLevel);
		}
		[Token(Token = "0x60018E0")]
		[Address(RVA = "0x61D1370", Offset = "0x61D0370", VA = "0x61D1370")]
		set
		{
		}
	}

	[Token(Token = "0x170005A4")]
	public bool DisableAllCaching
	{
		[Token(Token = "0x60018E1")]
		[Address(RVA = "0x61D13A0", Offset = "0x61D03A0", VA = "0x61D13A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60018E2")]
		[Address(RVA = "0x61D13D0", Offset = "0x61D03D0", VA = "0x61D13D0")]
		set
		{
		}
	}

	[Token(Token = "0x170005A5")]
	public bool IsPrivateCache
	{
		[Token(Token = "0x60018E3")]
		[Address(RVA = "0x61D1400", Offset = "0x61D0400", VA = "0x61D1400")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60018E4")]
		[Address(RVA = "0x61D1430", Offset = "0x61D0430", VA = "0x61D1430")]
		set
		{
		}
	}

	[Token(Token = "0x170005A6")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x60018E5")]
		[Address(RVA = "0x61D1460", Offset = "0x61D0460", VA = "0x61D1460", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005A7")]
	public TimeSpan UnspecifiedMaximumAge
	{
		[Token(Token = "0x60018E6")]
		[Address(RVA = "0x61D1490", Offset = "0x61D0490", VA = "0x61D1490")]
		get
		{
			return default(TimeSpan);
		}
		[Token(Token = "0x60018E7")]
		[Address(RVA = "0x61D14C0", Offset = "0x61D04C0", VA = "0x61D14C0")]
		set
		{
		}
	}

	[Token(Token = "0x60018DC")]
	[Address(RVA = "0x61D12B0", Offset = "0x61D02B0", VA = "0x61D12B0")]
	public RequestCachingSection()
	{
	}

	[Token(Token = "0x60018E8")]
	[Address(RVA = "0x61D14F0", Offset = "0x61D04F0", VA = "0x61D14F0", Slot = "5")]
	protected override void DeserializeElement(XmlReader reader, bool serializeCollectionKey)
	{
	}

	[Token(Token = "0x60018E9")]
	[Address(RVA = "0x61D1520", Offset = "0x61D0520", VA = "0x61D1520", Slot = "8")]
	protected override void PostDeserialize()
	{
	}
}
