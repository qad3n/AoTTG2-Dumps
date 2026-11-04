// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.UpscalingFilterSelection
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x2000025")]
public enum UpscalingFilterSelection
{
	[Token(Token = "0x40000FA")]
	[InspectorName("Automatic")]
	[Tooltip("Unity selects a filtering option automatically based on the Render Scale value and the current screen resolution.")]
	Auto,
	[Token(Token = "0x40000FB")]
	[InspectorName("Bilinear")]
	Linear,
	[Token(Token = "0x40000FC")]
	[InspectorName("Nearest-Neighbor")]
	Point,
	[Token(Token = "0x40000FD")]
	[InspectorName("FidelityFX Super Resolution 1.0")]
	[Tooltip("If the target device does not support Unity shader model 4.5, Unity falls back to the Automatic option.")]
	FSR,
	[Token(Token = "0x40000FE")]
	[InspectorName("Spatial-Temporal Post-Processing")]
	[Tooltip("If the target device does not support compute shaders or is running GLES, Unity falls back to the Automatic option.")]
	STP
}
