// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DebugFullScreenMode
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x2000005")]
[GenerateHLSL(PackingRules.Exact, true, false, false, 1, false, false, false, -1, ".\\Packages\\com.unity.render-pipelines.universal\\ShaderLibrary\\Debug\\DebugViewEnums.cs")]
public enum DebugFullScreenMode
{
	[Token(Token = "0x4000021")]
	None,
	[Token(Token = "0x4000022")]
	Depth,
	[Token(Token = "0x4000023")]
	[InspectorName("Motion Vector (100x, normalized)")]
	MotionVector,
	[Token(Token = "0x4000024")]
	AdditionalLightsShadowMap,
	[Token(Token = "0x4000025")]
	MainLightShadowMap,
	[Token(Token = "0x4000026")]
	AdditionalLightsCookieAtlas,
	[Token(Token = "0x4000027")]
	ReflectionProbeAtlas,
	[Token(Token = "0x4000028")]
	STP
}
