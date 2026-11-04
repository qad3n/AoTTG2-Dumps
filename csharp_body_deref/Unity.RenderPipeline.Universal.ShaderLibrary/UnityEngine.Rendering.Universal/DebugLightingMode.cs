// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DebugLightingMode
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x200000E")]
[GenerateHLSL(PackingRules.Exact, true, false, false, 1, false, false, false, -1, ".\\Packages\\com.unity.render-pipelines.universal\\ShaderLibrary\\Debug\\DebugViewEnums.cs")]
public enum DebugLightingMode
{
	[Token(Token = "0x4000054")]
	None,
	[Token(Token = "0x4000055")]
	ShadowCascades,
	[Token(Token = "0x4000056")]
	LightingWithoutNormalMaps,
	[Token(Token = "0x4000057")]
	LightingWithNormalMaps,
	[Token(Token = "0x4000058")]
	Reflections,
	[Token(Token = "0x4000059")]
	ReflectionsWithSmoothness,
	[Token(Token = "0x400005A")]
	GlobalIllumination
}
