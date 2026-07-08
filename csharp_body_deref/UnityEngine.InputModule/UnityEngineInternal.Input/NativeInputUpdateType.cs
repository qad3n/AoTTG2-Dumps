using System;
using Il2CppDummyDll;

namespace UnityEngineInternal.Input;

[Token(Token = "0x2000004")]
[Flags]
internal enum NativeInputUpdateType
{
	[Token(Token = "0x4000006")]
	Dynamic = 1,
	[Token(Token = "0x4000007")]
	Fixed = 2,
	[Token(Token = "0x4000008")]
	BeforeRender = 4,
	[Token(Token = "0x4000009")]
	Editor = 8,
	[Token(Token = "0x400000A")]
	IgnoreFocus = int.MinValue
}
