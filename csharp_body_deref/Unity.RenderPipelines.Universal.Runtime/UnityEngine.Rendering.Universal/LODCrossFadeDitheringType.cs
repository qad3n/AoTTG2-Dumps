// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.LODCrossFadeDitheringType
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x2000026")]
public enum LODCrossFadeDitheringType
{
	[Token(Token = "0x4000100")]
	BayerMatrix,
	[Token(Token = "0x4000101")]
	BlueNoise,
	[Token(Token = "0x4000102")]
	[InspectorName("2x2 Stencil")]
	[Tooltip("2x2 pixel dithering pattern by stencil test with 2 stencil bits (4 and 8). This option decreases the number of the shader variants.")]
	Stencil
}
