using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200029E")]
public interface IIntellisenseBuilder
{
	[Token(Token = "0x170003B5")]
	string Name
	{
		[Token(Token = "0x60010A2")]
		get;
	}

	[Token(Token = "0x60010A3")]
	bool Show(string language, string value, ref string newValue);
}
