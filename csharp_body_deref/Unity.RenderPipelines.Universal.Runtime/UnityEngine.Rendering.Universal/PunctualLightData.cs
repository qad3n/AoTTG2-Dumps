// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.PunctualLightData
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20001E5")]
public struct PunctualLightData
{
	[Token(Token = "0x4000A68")]
	[FieldOffset(Offset = "0x0")]
	public Vector3 wsPos;

	[Token(Token = "0x4000A69")]
	[FieldOffset(Offset = "0xC")]
	public float radius;

	[Token(Token = "0x4000A6A")]
	[FieldOffset(Offset = "0x10")]
	public Vector4 color;

	[Token(Token = "0x4000A6B")]
	[FieldOffset(Offset = "0x20")]
	public Vector4 attenuation;

	[Token(Token = "0x4000A6C")]
	[FieldOffset(Offset = "0x30")]
	public Vector3 spotDirection;

	[Token(Token = "0x4000A6D")]
	[FieldOffset(Offset = "0x3C")]
	public int flags;

	[Token(Token = "0x4000A6E")]
	[FieldOffset(Offset = "0x40")]
	public Vector4 occlusionProbeInfo;

	[Token(Token = "0x4000A6F")]
	[FieldOffset(Offset = "0x50")]
	public uint layerMask;
}
