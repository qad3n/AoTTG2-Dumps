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
		[Address(RVA = "0x45CF6F0", Offset = "0x45CF6F0", VA = "0x45CF6F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000566")]
	public HttpCachePolicyElement DefaultHttpCachePolicy
	{
		[Token(Token = "0x60017F4")]
		[Address(RVA = "0x45CF720", Offset = "0x45CF720", VA = "0x45CF720")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000567")]
	public RequestCacheLevel DefaultPolicyLevel
	{
		[Token(Token = "0x60017F5")]
		[Address(RVA = "0x45CF750", Offset = "0x45CF750", VA = "0x45CF750")]
		get
		{
			return default(RequestCacheLevel);
		}
		[Token(Token = "0x60017F6")]
		[Address(RVA = "0x45CF780", Offset = "0x45CF780", VA = "0x45CF780")]
		set
		{
		}
	}

	[Token(Token = "0x17000568")]
	public bool DisableAllCaching
	{
		[Token(Token = "0x60017F7")]
		[Address(RVA = "0x45CF7B0", Offset = "0x45CF7B0", VA = "0x45CF7B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60017F8")]
		[Address(RVA = "0x45CF7E0", Offset = "0x45CF7E0", VA = "0x45CF7E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000569")]
	public bool IsPrivateCache
	{
		[Token(Token = "0x60017F9")]
		[Address(RVA = "0x45CF810", Offset = "0x45CF810", VA = "0x45CF810")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60017FA")]
		[Address(RVA = "0x45CF840", Offset = "0x45CF840", VA = "0x45CF840")]
		set
		{
		}
	}

	[Token(Token = "0x1700056A")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x60017FB")]
		[Address(RVA = "0x45CF870", Offset = "0x45CF870", VA = "0x45CF870", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700056B")]
	public TimeSpan UnspecifiedMaximumAge
	{
		[Token(Token = "0x60017FC")]
		[Address(RVA = "0x45CF8A0", Offset = "0x45CF8A0", VA = "0x45CF8A0")]
		get
		{
			return default(TimeSpan);
		}
		[Token(Token = "0x60017FD")]
		[Address(RVA = "0x45CF8D0", Offset = "0x45CF8D0", VA = "0x45CF8D0")]
		set
		{
		}
	}

	[Token(Token = "0x60017F2")]
	[Address(RVA = "0x45CF6C0", Offset = "0x45CF6C0", VA = "0x45CF6C0")]
	public RequestCachingSection()
	{
	}

	[Token(Token = "0x60017FE")]
	[Address(RVA = "0x45CF900", Offset = "0x45CF900", VA = "0x45CF900", Slot = "5")]
	protected override void DeserializeElement(XmlReader reader, bool serializeCollectionKey)
	{
	}

	[Token(Token = "0x60017FF")]
	[Address(RVA = "0x45CF930", Offset = "0x45CF930", VA = "0x45CF930", Slot = "8")]
	protected override void PostDeserialize()
	{
	}
}
