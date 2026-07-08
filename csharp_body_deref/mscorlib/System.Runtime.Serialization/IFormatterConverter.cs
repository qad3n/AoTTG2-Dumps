using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Token(Token = "0x20003C8")]
[CLSCompliant(false)]
public interface IFormatterConverter
{
	[Token(Token = "0x6001F1F")]
	object Convert(object value, Type type);

	[Token(Token = "0x6001F20")]
	bool ToBoolean(object value);

	[Token(Token = "0x6001F21")]
	int ToInt32(object value);

	[Token(Token = "0x6001F22")]
	long ToInt64(object value);

	[Token(Token = "0x6001F23")]
	float ToSingle(object value);

	[Token(Token = "0x6001F24")]
	string ToString(object value);
}
