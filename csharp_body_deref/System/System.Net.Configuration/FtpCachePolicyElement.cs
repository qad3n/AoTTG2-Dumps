using System.Configuration;
using System.Net.Cache;
using System.Xml;
using Il2CppDummyDll;

namespace System.Net.Configuration;

[Token(Token = "0x2000391")]
public sealed class FtpCachePolicyElement : ConfigurationElement
{
	[Token(Token = "0x17000534")]
	public RequestCacheLevel PolicyLevel
	{
		[Token(Token = "0x600179A")]
		[Address(RVA = "0x45CE640", Offset = "0x45CE640", VA = "0x45CE640")]
		get
		{
			return default(RequestCacheLevel);
		}
		[Token(Token = "0x600179B")]
		[Address(RVA = "0x45CE670", Offset = "0x45CE670", VA = "0x45CE670")]
		set
		{
		}
	}

	[Token(Token = "0x17000535")]
	protected override ConfigurationPropertyCollection Properties
	{
		[Token(Token = "0x600179C")]
		[Address(RVA = "0x45CE6A0", Offset = "0x45CE6A0", VA = "0x45CE6A0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001799")]
	[Address(RVA = "0x45CE610", Offset = "0x45CE610", VA = "0x45CE610")]
	public FtpCachePolicyElement()
	{
	}

	[Token(Token = "0x600179D")]
	[Address(RVA = "0x45CE6D0", Offset = "0x45CE6D0", VA = "0x45CE6D0", Slot = "5")]
	protected override void DeserializeElement(XmlReader reader, bool serializeCollectionKey)
	{
	}

	[Token(Token = "0x600179E")]
	[Address(RVA = "0x45CE700", Offset = "0x45CE700", VA = "0x45CE700", Slot = "9")]
	protected override void Reset(ConfigurationElement parentElement)
	{
	}
}
