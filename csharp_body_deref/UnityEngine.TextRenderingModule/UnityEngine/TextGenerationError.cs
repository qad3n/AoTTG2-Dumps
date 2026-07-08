using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000003")]
[Flags]
internal enum TextGenerationError
{
	[Token(Token = "0x4000007")]
	None = 0,
	[Token(Token = "0x4000008")]
	CustomSizeOnNonDynamicFont = 1,
	[Token(Token = "0x4000009")]
	CustomStyleOnNonDynamicFont = 2,
	[Token(Token = "0x400000A")]
	NoFont = 4
}
