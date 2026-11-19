// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.GradientSettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Serializable]
[Token(Token = "0x200052F")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.VectorGraphicsModule", "UnityEditor.VectorGraphicsModule" })]
internal struct GradientSettings
{
	[Token(Token = "0x400118A")]
	[FieldOffset(Offset = "0x0")]
	public GradientType gradientType;

	[Token(Token = "0x400118B")]
	[FieldOffset(Offset = "0x4")]
	public AddressMode addressMode;

	[Token(Token = "0x400118C")]
	[FieldOffset(Offset = "0x8")]
	public Vector2 radialFocus;

	[Token(Token = "0x400118D")]
	[FieldOffset(Offset = "0x10")]
	public RectInt location;
}
