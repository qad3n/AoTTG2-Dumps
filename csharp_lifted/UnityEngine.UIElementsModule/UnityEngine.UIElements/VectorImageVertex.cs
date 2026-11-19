// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.VectorImageVertex
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
[Token(Token = "0x200052E")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.VectorGraphicsModule", "UnityEditor.VectorGraphicsModule" })]
internal struct VectorImageVertex
{
	[Token(Token = "0x4001184")]
	[FieldOffset(Offset = "0x0")]
	public Vector3 position;

	[Token(Token = "0x4001185")]
	[FieldOffset(Offset = "0xC")]
	public Color32 tint;

	[Token(Token = "0x4001186")]
	[FieldOffset(Offset = "0x10")]
	public Vector2 uv;

	[Token(Token = "0x4001187")]
	[FieldOffset(Offset = "0x18")]
	public uint settingIndex;

	[Token(Token = "0x4001188")]
	[FieldOffset(Offset = "0x1C")]
	public Color32 flags;

	[Token(Token = "0x4001189")]
	[FieldOffset(Offset = "0x20")]
	public Vector4 circle;
}
