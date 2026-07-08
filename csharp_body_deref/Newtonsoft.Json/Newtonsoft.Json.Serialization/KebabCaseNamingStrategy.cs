using Il2CppDummyDll;

namespace Newtonsoft.Json.Serialization;

[Token(Token = "0x2000132")]
public class KebabCaseNamingStrategy : NamingStrategy
{
	[Token(Token = "0x6000971")]
	[Address(RVA = "0x3AFEB40", Offset = "0x3AFEB40", VA = "0x3AFEB40")]
	public KebabCaseNamingStrategy(bool processDictionaryKeys, bool overrideSpecifiedNames)
	{
	}

	[Token(Token = "0x6000972")]
	[Address(RVA = "0x3AFEB70", Offset = "0x3AFEB70", VA = "0x3AFEB70")]
	public KebabCaseNamingStrategy(bool processDictionaryKeys, bool overrideSpecifiedNames, bool processExtensionDataNames)
	{
	}

	[Token(Token = "0x6000973")]
	[Address(RVA = "0x3AFEBA0", Offset = "0x3AFEBA0", VA = "0x3AFEBA0")]
	public KebabCaseNamingStrategy()
	{
	}

	[Token(Token = "0x6000974")]
	[Address(RVA = "0x3AFEBB0", Offset = "0x3AFEBB0", VA = "0x3AFEBB0", Slot = "7")]
	protected override string ResolvePropertyName(string name)
	{
		return null;
	}
}
