using Il2CppDummyDll;

namespace Newtonsoft.Json;

[Token(Token = "0x2000016")]
public interface IJsonLineInfo
{
	[Token(Token = "0x17000003")]
	int LineNumber
	{
		[Token(Token = "0x6000018")]
		get;
	}

	[Token(Token = "0x17000004")]
	int LinePosition
	{
		[Token(Token = "0x6000019")]
		get;
	}

	[Token(Token = "0x6000017")]
	bool HasLineInfo();
}
