// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.RenderHints
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20002B0")]
[Flags]
internal enum RenderHints
{
	[Token(Token = "0x4000A4A")]
	None = 0,
	[Token(Token = "0x4000A4B")]
	GroupTransform = 1,
	[Token(Token = "0x4000A4C")]
	BoneTransform = 2,
	[Token(Token = "0x4000A4D")]
	ClipWithScissors = 4,
	[Token(Token = "0x4000A4E")]
	MaskContainer = 8,
	[Token(Token = "0x4000A4F")]
	DynamicColor = 0x10,
	[Token(Token = "0x4000A50")]
	DynamicPostProcessing = 0x20,
	[Token(Token = "0x4000A51")]
	LargePixelCoverage = 0x40,
	[Token(Token = "0x4000A52")]
	DirtyOffset = GroupTransform | BoneTransform | ClipWithScissors,
	[Token(Token = "0x4000A53")]
	DirtyGroupTransform = 0x80,
	[Token(Token = "0x4000A54")]
	DirtyBoneTransform = 0x100,
	[Token(Token = "0x4000A55")]
	DirtyClipWithScissors = 0x200,
	[Token(Token = "0x4000A56")]
	DirtyMaskContainer = 0x400,
	[Token(Token = "0x4000A57")]
	DirtyDynamicColor = 0x800,
	[Token(Token = "0x4000A58")]
	DirtyDynamicPostProcessing = 0x1000,
	[Token(Token = "0x4000A59")]
	DirtyLargePixelCoverage = 0x2000,
	[Token(Token = "0x4000A5A")]
	DirtyAll = DirtyGroupTransform | DirtyBoneTransform | DirtyClipWithScissors | DirtyMaskContainer | DirtyDynamicColor | DirtyDynamicPostProcessing | DirtyLargePixelCoverage
}
