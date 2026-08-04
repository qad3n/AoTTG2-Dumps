// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIVertex
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x200000C")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct UIVertex
{
	[Token(Token = "0x400003E")]
	[FieldOffset(Offset = "0x0")]
	public Vector3 position;

	[Token(Token = "0x400003F")]
	[FieldOffset(Offset = "0xC")]
	public Vector3 normal;

	[Token(Token = "0x4000040")]
	[FieldOffset(Offset = "0x18")]
	public Vector4 tangent;

	[Token(Token = "0x4000041")]
	[FieldOffset(Offset = "0x28")]
	public Color32 color;

	[Token(Token = "0x4000042")]
	[FieldOffset(Offset = "0x2C")]
	public Vector4 uv0;

	[Token(Token = "0x4000043")]
	[FieldOffset(Offset = "0x3C")]
	public Vector4 uv1;

	[Token(Token = "0x4000044")]
	[FieldOffset(Offset = "0x4C")]
	public Vector4 uv2;

	[Token(Token = "0x4000045")]
	[FieldOffset(Offset = "0x5C")]
	public Vector4 uv3;

	[Token(Token = "0x4000046")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Color32 s_DefaultColor;

	[Token(Token = "0x4000047")]
	[FieldOffset(Offset = "0x4")]
	private static readonly Vector4 s_DefaultTangent;

	[Token(Token = "0x4000048")]
	[FieldOffset(Offset = "0x14")]
	public static UIVertex simpleVert;
}
