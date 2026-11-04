// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.DebugMipInfoMode
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x2000008")]
[GenerateHLSL(PackingRules.Exact, true, false, false, 1, false, false, false, -1, ".\\Packages\\com.unity.render-pipelines.universal\\ShaderLibrary\\Debug\\DebugViewEnums.cs")]
public enum DebugMipInfoMode
{
	[Token(Token = "0x4000035")]
	None,
	[Token(Token = "0x4000036")]
	MipStreamingPerformance,
	[Token(Token = "0x4000037")]
	MipStreamingStatus,
	[Token(Token = "0x4000038")]
	MipStreamingActivity,
	[Token(Token = "0x4000039")]
	MipStreamingPriority,
	[Token(Token = "0x400003A")]
	MipCount,
	[Token(Token = "0x400003B")]
	MipRatio
}
