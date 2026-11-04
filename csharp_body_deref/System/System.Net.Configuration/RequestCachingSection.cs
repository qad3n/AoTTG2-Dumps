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

[Token(Token = "0x20003F7")]
public sealed class RequestCachingSection : ConfigurationSection
{
	[Token(Token = "0x170005CF")]
	public FtpCachePolicyElement DefaultFtpCachePolicy
	{
		[Token(Token = "0x6001A97")]
		[Address(RVA = "0x282B9B0", Offset = "0x2829FB0", VA = "0x18282B9B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005D0")]
	public HttpCachePolicyElement DefaultHttpCachePolicy
	{
		[Token(Token = "0x6001A98")]
		[Address(RVA = "0x282B9E0", Offset = "0x2829FE0", VA = "0x18282B9E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005D1")]
	public RequestCacheLevel DefaultPolicyLevel
	{
		[Token(Token = "0x6001A99")]
		[Address(RVA = "0x282BA10", Offset = "0x282A010", VA = "0x18282BA10")]
		get
		{
			return default(RequestCacheLevel);
		}
		[Token(Token = "0x6001A9A")]
		[Address(RVA = "0x282BB00", Offset = "0x282A100", VA = "0x18282BB00")]
		set
		{
		}
	}

	[Token(Token = "0x170005D2")]
	public bool DisableAllCaching
	{
		[Token(Token = "0x6001A9B")]
		[Address(RVA = "0x282BA40", Offset = "0x282A040", VA = "0x18282BA40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001A9C")]
		[Address(RVA = "0x282BB30", Offset = "0x282A130", VA = "0x18282BB30")]
		set
		{
		}
	}

	[Token(Token = "0x170005D3")]
	public bool IsPrivateCache
	{
		[Token(Token = "0x6001A9D")]
		[Address(RVA = "0x282BA70", Offset = "0x282A070", VA = "0x18282BA70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6001A9E")]
		[Address(RVA = "0x282BB60", Offset = "0x282A160", VA = "0x18282BB60")]
		set
		{
		}
	}

	[Token(Token = "0x170005D4")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x6001A9F")]
		[Address(RVA = "0x282BAA0", Offset = "0x282A0A0", VA = "0x18282BAA0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170005D5")]
	public TimeSpan UnspecifiedMaximumAge
	{
		[Token(Token = "0x6001AA0")]
		[Address(RVA = "0x282BAD0", Offset = "0x282A0D0", VA = "0x18282BAD0")]
		get
		{
			return default(TimeSpan);
		}
		[Token(Token = "0x6001AA1")]
		[Address(RVA = "0x282BB90", Offset = "0x282A190", VA = "0x18282BB90")]
		set
		{
		}
	}

	[Token(Token = "0x6001A96")]
	[Address(RVA = "0x282B980", Offset = "0x2829F80", VA = "0x18282B980")]
	public RequestCachingSection()
	{
	}

	[Token(Token = "0x6001AA2")]
	[Address(RVA = "0x282B920", Offset = "0x2829F20", VA = "0x18282B920", Slot = "5")]
	protected override void DeserializeElement(XmlReader reader, bool serializeCollectionKey)
	{
	}

	[Token(Token = "0x6001AA3")]
	[Address(RVA = "0x282B950", Offset = "0x2829F50", VA = "0x18282B950", Slot = "8")]
	protected override void PostDeserialize()
	{
	}
}
