// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DebugValidationMode
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x200000C")]
[GenerateHLSL(PackingRules.Exact, true, false, false, 1, false, false, false, -1, ".\\Packages\\com.unity.render-pipelines.universal\\ShaderLibrary\\Debug\\DebugViewEnums.cs")]
public enum DebugValidationMode
{
	[Token(Token = "0x400004A")]
	None,
	[Token(Token = "0x400004B")]
	[InspectorName("Highlight NaN, Inf and Negative Values")]
	HighlightNanInfNegative,
	[Token(Token = "0x400004C")]
	[InspectorName("Highlight Values Outside Range")]
	HighlightOutsideOfRange
}
