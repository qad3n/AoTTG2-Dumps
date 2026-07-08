using System;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Bson;

[Token(Token = "0x20001D4")]
internal enum BsonBinaryType : byte
{
	[Token(Token = "0x400082B")]
	Binary = 0,
	[Token(Token = "0x400082C")]
	Function = 1,
	[Token(Token = "0x400082D")]
	[Obsolete("This type has been deprecated in the BSON specification. Use Binary instead.")]
	BinaryOld = 2,
	[Token(Token = "0x400082E")]
	[Obsolete("This type has been deprecated in the BSON specification. Use Uuid instead.")]
	UuidOld = 3,
	[Token(Token = "0x400082F")]
	Uuid = 4,
	[Token(Token = "0x4000830")]
	Md5 = 5,
	[Token(Token = "0x4000831")]
	UserDefined = 128
}
