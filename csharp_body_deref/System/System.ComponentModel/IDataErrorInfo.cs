using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200029C")]
public interface IDataErrorInfo
{
	[Token(Token = "0x170003B3")]
	string this[string columnName]
	{
		[Token(Token = "0x600109F")]
		get;
	}

	[Token(Token = "0x170003B4")]
	string Error
	{
		[Token(Token = "0x60010A0")]
		get;
	}
}
