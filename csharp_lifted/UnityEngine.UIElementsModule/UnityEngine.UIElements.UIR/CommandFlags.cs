// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIR.CommandFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.UIR;

[Token(Token = "0x20005E6")]
[Flags]
internal enum CommandFlags
{
	[Token(Token = "0x40015F8")]
	None = 0,
	[Token(Token = "0x40015F9")]
	IsPremultiplied = 1,
	[Token(Token = "0x40015FA")]
	ForceRenderTypeBitOffset = IsPremultiplied,
	[Token(Token = "0x40015FB")]
	ForceRenderTypeSolid = 2,
	[Token(Token = "0x40015FC")]
	ForceRenderTypeTextured = 4,
	[Token(Token = "0x40015FD")]
	ForceRenderTypeText = ForceRenderTypeSolid | ForceRenderTypeTextured,
	[Token(Token = "0x40015FE")]
	ForceRenderTypeSvgGradient = 8,
	[Token(Token = "0x40015FF")]
	ForceRenderTypeBits = ForceRenderTypeText | ForceRenderTypeSvgGradient,
	[Token(Token = "0x4001600")]
	ForceSingleTextureSlot = 0x10
}
