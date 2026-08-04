// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ColorSpaceUtils
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Mathematics;

namespace UnityEngine.Rendering;

[Token(Token = "0x20001A3")]
public static class ColorSpaceUtils
{
	[Token(Token = "0x4000739")]
	[FieldOffset(Offset = "0x0")]
	public static readonly float3x3 Rec709ToRec2020Mat;

	[Token(Token = "0x400073A")]
	[FieldOffset(Offset = "0x24")]
	public static readonly float3x3 Rec709ToP3D65Mat;

	[Token(Token = "0x400073B")]
	[FieldOffset(Offset = "0x48")]
	public static readonly float3x3 Rec2020ToRec709Mat;

	[Token(Token = "0x400073C")]
	[FieldOffset(Offset = "0x6C")]
	public static readonly float3x3 Rec2020ToP3D65Mat;

	[Token(Token = "0x400073D")]
	[FieldOffset(Offset = "0x90")]
	public static readonly float3x3 P3D65ToRec2020Mat;
}
