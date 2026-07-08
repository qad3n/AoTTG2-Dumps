using System;
using Il2CppDummyDll;

namespace Newtonsoft.Json;

[Token(Token = "0x2000011")]
[Flags]
public enum DefaultValueHandling
{
	[Token(Token = "0x400001C")]
	Include = 0,
	[Token(Token = "0x400001D")]
	Ignore = 1,
	[Token(Token = "0x400001E")]
	Populate = 2,
	[Token(Token = "0x400001F")]
	IgnoreAndPopulate = 3
}
