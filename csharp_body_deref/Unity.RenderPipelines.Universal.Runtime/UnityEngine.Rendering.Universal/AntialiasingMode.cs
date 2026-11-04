// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.AntialiasingMode
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x20001C1")]
public enum AntialiasingMode
{
	[Token(Token = "0x40009AA")]
	[InspectorName("No Anti-aliasing")]
	None,
	[Token(Token = "0x40009AB")]
	[InspectorName("Fast Approximate Anti-aliasing (FXAA)")]
	FastApproximateAntialiasing,
	[Token(Token = "0x40009AC")]
	[InspectorName("Subpixel Morphological Anti-aliasing (SMAA)")]
	SubpixelMorphologicalAntiAliasing,
	[Token(Token = "0x40009AD")]
	[InspectorName("Temporal Anti-aliasing (TAA)")]
	TemporalAntiAliasing
}
