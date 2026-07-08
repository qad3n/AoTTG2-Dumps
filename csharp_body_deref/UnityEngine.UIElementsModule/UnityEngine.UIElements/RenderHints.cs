using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000237")]
[Flags]
internal enum RenderHints
{
	[Token(Token = "0x4000811")]
	None = 0,
	[Token(Token = "0x4000812")]
	GroupTransform = 1,
	[Token(Token = "0x4000813")]
	BoneTransform = 2,
	[Token(Token = "0x4000814")]
	ClipWithScissors = 4,
	[Token(Token = "0x4000815")]
	MaskContainer = 8,
	[Token(Token = "0x4000816")]
	DynamicColor = 0x10,
	[Token(Token = "0x4000817")]
	DirtyOffset = 5,
	[Token(Token = "0x4000818")]
	DirtyGroupTransform = 0x20,
	[Token(Token = "0x4000819")]
	DirtyBoneTransform = 0x40,
	[Token(Token = "0x400081A")]
	DirtyClipWithScissors = 0x80,
	[Token(Token = "0x400081B")]
	DirtyMaskContainer = 0x100,
	[Token(Token = "0x400081C")]
	DirtyAll = 0x1E0
}
