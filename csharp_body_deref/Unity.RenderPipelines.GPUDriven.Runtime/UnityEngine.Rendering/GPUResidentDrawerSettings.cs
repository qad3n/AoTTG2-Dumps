// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.GPUResidentDrawerSettings
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000035")]
public struct GPUResidentDrawerSettings
{
	[Token(Token = "0x40000B1")]
	[FieldOffset(Offset = "0x0")]
	public GPUResidentDrawerMode mode;

	[Token(Token = "0x40000B2")]
	[FieldOffset(Offset = "0x1")]
	public bool supportDitheringCrossFade;

	[Token(Token = "0x40000B3")]
	[FieldOffset(Offset = "0x2")]
	public bool enableOcclusionCulling;

	[Token(Token = "0x40000B4")]
	[FieldOffset(Offset = "0x3")]
	public bool allowInEditMode;

	[Token(Token = "0x40000B5")]
	[FieldOffset(Offset = "0x4")]
	public float smallMeshScreenPercentage;

	[Token(Token = "0x40000B6")]
	[FieldOffset(Offset = "0x8")]
	public Shader errorShader;

	[Token(Token = "0x40000B7")]
	[FieldOffset(Offset = "0x10")]
	public Shader loadingShader;
}
