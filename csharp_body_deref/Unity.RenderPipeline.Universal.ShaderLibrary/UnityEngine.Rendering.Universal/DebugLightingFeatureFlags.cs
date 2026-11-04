// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DebugLightingFeatureFlags
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x2000010")]
[GenerateHLSL(PackingRules.Exact, true, false, false, 1, false, false, false, -1, ".\\Packages\\com.unity.render-pipelines.universal\\ShaderLibrary\\Debug\\DebugViewEnums.cs")]
[Flags]
public enum DebugLightingFeatureFlags
{
	[Token(Token = "0x4000061")]
	None = 0,
	[Token(Token = "0x4000062")]
	GlobalIllumination = 1,
	[Token(Token = "0x4000063")]
	MainLight = 2,
	[Token(Token = "0x4000064")]
	AdditionalLights = 4,
	[Token(Token = "0x4000065")]
	VertexLighting = 8,
	[Token(Token = "0x4000066")]
	Emission = 0x10,
	[Token(Token = "0x4000067")]
	AmbientOcclusion = 0x20
}
