using Il2CppDummyDll;

namespace Newtonsoft.Json;

[Token(Token = "0x2000072")]
public enum JsonToken
{
	[Token(Token = "0x400029F")]
	None,
	[Token(Token = "0x40002A0")]
	StartObject,
	[Token(Token = "0x40002A1")]
	StartArray,
	[Token(Token = "0x40002A2")]
	StartConstructor,
	[Token(Token = "0x40002A3")]
	PropertyName,
	[Token(Token = "0x40002A4")]
	Comment,
	[Token(Token = "0x40002A5")]
	Raw,
	[Token(Token = "0x40002A6")]
	Integer,
	[Token(Token = "0x40002A7")]
	Float,
	[Token(Token = "0x40002A8")]
	String,
	[Token(Token = "0x40002A9")]
	Boolean,
	[Token(Token = "0x40002AA")]
	Null,
	[Token(Token = "0x40002AB")]
	Undefined,
	[Token(Token = "0x40002AC")]
	EndObject,
	[Token(Token = "0x40002AD")]
	EndArray,
	[Token(Token = "0x40002AE")]
	EndConstructor,
	[Token(Token = "0x40002AF")]
	Date,
	[Token(Token = "0x40002B0")]
	Bytes
}
