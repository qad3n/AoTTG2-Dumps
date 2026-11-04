// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.FilterFunctionType
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x20002FF")]
public enum FilterFunctionType
{
	[Token(Token = "0x4000BB6")]
	None,
	[Token(Token = "0x4000BB7")]
	Custom,
	[Token(Token = "0x4000BB8")]
	Tint,
	[Token(Token = "0x4000BB9")]
	Opacity,
	[Token(Token = "0x4000BBA")]
	Invert,
	[Token(Token = "0x4000BBB")]
	Grayscale,
	[Token(Token = "0x4000BBC")]
	Sepia,
	[Token(Token = "0x4000BBD")]
	Blur,
	[Token(Token = "0x4000BBE")]
	Contrast,
	[Token(Token = "0x4000BBF")]
	HueRotate,
	[Token(Token = "0x4000BC0")]
	[Obsolete("Use Enum.GetValues(typeof(FilterFunctionType)).Length instead", false)]
	Count
}
