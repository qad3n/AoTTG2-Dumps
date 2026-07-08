using Il2CppDummyDll;

namespace System.ComponentModel.Design;

[Token(Token = "0x200032A")]
public interface IDictionaryService
{
	[Token(Token = "0x6001516")]
	object GetValue(object key);

	[Token(Token = "0x6001517")]
	void SetValue(object key, object value);
}
