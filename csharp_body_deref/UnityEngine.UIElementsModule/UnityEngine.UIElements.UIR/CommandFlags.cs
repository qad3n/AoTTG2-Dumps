// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.CommandFlags
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x200058C")]
[Flags]
internal enum CommandFlags
{
	[Token(Token = "0x400134F")]
	None = 0,
	[Token(Token = "0x4001350")]
	IsPremultiplied = 1,
	[Token(Token = "0x4001351")]
	ForceRenderTypeBitOffset = IsPremultiplied,
	[Token(Token = "0x4001352")]
	ForceRenderTypeSolid = 2,
	[Token(Token = "0x4001353")]
	ForceRenderTypeTextured = 4,
	[Token(Token = "0x4001354")]
	ForceRenderTypeText = ForceRenderTypeSolid | ForceRenderTypeTextured,
	[Token(Token = "0x4001355")]
	ForceRenderTypeSvgGradient = 8,
	[Token(Token = "0x4001356")]
	ForceRenderTypeBits = ForceRenderTypeText | ForceRenderTypeSvgGradient,
	[Token(Token = "0x4001357")]
	ForceSingleTextureSlot = 0x10
}
