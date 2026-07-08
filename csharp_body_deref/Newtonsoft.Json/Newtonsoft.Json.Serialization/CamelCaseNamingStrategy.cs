using Il2CppDummyDll;

namespace Newtonsoft.Json.Serialization;

[Token(Token = "0x20000F8")]
public class CamelCaseNamingStrategy : NamingStrategy
{
	[Token(Token = "0x6000735")]
	[Address(RVA = "0x3AD2B30", Offset = "0x3AD2B30", VA = "0x3AD2B30")]
	public CamelCaseNamingStrategy(bool processDictionaryKeys, bool overrideSpecifiedNames)
	{
	}

	[Token(Token = "0x6000736")]
	[Address(RVA = "0x3AD2B50", Offset = "0x3AD2B50", VA = "0x3AD2B50")]
	public CamelCaseNamingStrategy(bool processDictionaryKeys, bool overrideSpecifiedNames, bool processExtensionDataNames)
	{
	}

	[Token(Token = "0x6000737")]
	[Address(RVA = "0x3AD2B80", Offset = "0x3AD2B80", VA = "0x3AD2B80")]
	public CamelCaseNamingStrategy()
	{
	}

	[Token(Token = "0x6000738")]
	[Address(RVA = "0x3AD2B90", Offset = "0x3AD2B90", VA = "0x3AD2B90", Slot = "7")]
	protected override string ResolvePropertyName(string name)
	{
		return null;
	}
}
