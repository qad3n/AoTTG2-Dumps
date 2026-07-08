using Il2CppDummyDll;

namespace System.Collections;

[Token(Token = "0x20005FB")]
public interface IDictionaryEnumerator : IEnumerator
{
	[Token(Token = "0x17000727")]
	object Key
	{
		[Token(Token = "0x6002EC2")]
		get;
	}

	[Token(Token = "0x17000728")]
	object Value
	{
		[Token(Token = "0x6002EC3")]
		get;
	}

	[Token(Token = "0x17000729")]
	DictionaryEntry Entry
	{
		[Token(Token = "0x6002EC4")]
		get;
	}
}
