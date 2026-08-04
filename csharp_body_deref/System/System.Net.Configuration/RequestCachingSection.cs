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

[Token(Token = "0x200039C")]
public sealed class RequestCachingSection : ConfigurationSection
{
	[Token(Token = "0x17000565")]
	public FtpCachePolicyElement DefaultFtpCachePolicy
	{
		[Token(Token = "0x60017F3")]
		[Address(RVA = "0x48F47F0", Offset = "0x48F47F0", VA = "0x48F47F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000566")]
	public HttpCachePolicyElement DefaultHttpCachePolicy
	{
		[Token(Token = "0x60017F4")]
		[Address(RVA = "0x48F4820", Offset = "0x48F4820", VA = "0x48F4820")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000567")]
	public RequestCacheLevel DefaultPolicyLevel
	{
		[Token(Token = "0x60017F5")]
		[Address(RVA = "0x48F4850", Offset = "0x48F4850", VA = "0x48F4850")]
		get
		{
			return default(RequestCacheLevel);
		}
		[Token(Token = "0x60017F6")]
		[Address(RVA = "0x48F4880", Offset = "0x48F4880", VA = "0x48F4880")]
		set
		{
		}
	}

	[Token(Token = "0x17000568")]
	public bool DisableAllCaching
	{
		[Token(Token = "0x60017F7")]
		[Address(RVA = "0x48F48B0", Offset = "0x48F48B0", VA = "0x48F48B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60017F8")]
		[Address(RVA = "0x48F48E0", Offset = "0x48F48E0", VA = "0x48F48E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000569")]
	public bool IsPrivateCache
	{
		[Token(Token = "0x60017F9")]
		[Address(RVA = "0x48F4910", Offset = "0x48F4910", VA = "0x48F4910")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60017FA")]
		[Address(RVA = "0x48F4940", Offset = "0x48F4940", VA = "0x48F4940")]
		set
		{
		}
	}

	[Token(Token = "0x1700056A")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x60017FB")]
		[Address(RVA = "0x48F4970", Offset = "0x48F4970", VA = "0x48F4970", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700056B")]
	public TimeSpan UnspecifiedMaximumAge
	{
		[Token(Token = "0x60017FC")]
		[Address(RVA = "0x48F49A0", Offset = "0x48F49A0", VA = "0x48F49A0")]
		get
		{
			return default(TimeSpan);
		}
		[Token(Token = "0x60017FD")]
		[Address(RVA = "0x48F49D0", Offset = "0x48F49D0", VA = "0x48F49D0")]
		set
		{
		}
	}

	[Token(Token = "0x60017F2")]
	[Address(RVA = "0x48F47C0", Offset = "0x48F47C0", VA = "0x48F47C0")]
	public RequestCachingSection()
	{
	}

	[Token(Token = "0x60017FE")]
	[Address(RVA = "0x48F4A00", Offset = "0x48F4A00", VA = "0x48F4A00", Slot = "5")]
	protected override void DeserializeElement(XmlReader reader, bool serializeCollectionKey)
	{
	}

	[Token(Token = "0x60017FF")]
	[Address(RVA = "0x48F4A30", Offset = "0x48F4A30", VA = "0x48F4A30", Slot = "8")]
	protected override void PostDeserialize()
	{
	}
}
