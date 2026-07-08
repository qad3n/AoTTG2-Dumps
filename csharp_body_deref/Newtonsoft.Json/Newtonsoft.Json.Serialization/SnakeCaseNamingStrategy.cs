using Il2CppDummyDll;

namespace Newtonsoft.Json.Serialization;

[Token(Token = "0x200013A")]
public class SnakeCaseNamingStrategy : NamingStrategy
{
	[Token(Token = "0x6000997")]
	[Address(RVA = "0x3AFFC50", Offset = "0x3AFFC50", VA = "0x3AFFC50")]
	public SnakeCaseNamingStrategy(bool processDictionaryKeys, bool overrideSpecifiedNames)
	{
	}

	[Token(Token = "0x6000998")]
	[Address(RVA = "0x3AFFC70", Offset = "0x3AFFC70", VA = "0x3AFFC70")]
	public SnakeCaseNamingStrategy(bool processDictionaryKeys, bool overrideSpecifiedNames, bool processExtensionDataNames)
	{
	}

	[Token(Token = "0x6000999")]
	[Address(RVA = "0x3AFFCA0", Offset = "0x3AFFCA0", VA = "0x3AFFCA0")]
	public SnakeCaseNamingStrategy()
	{
	}

	[Token(Token = "0x600099A")]
	[Address(RVA = "0x3AFFCB0", Offset = "0x3AFFCB0", VA = "0x3AFFCB0", Slot = "7")]
	protected override string ResolvePropertyName(string name)
	{
		return null;
	}
}
