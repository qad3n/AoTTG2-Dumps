// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.APVLeakReductionMode
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000148")]
[GenerateHLSL(PackingRules.Exact, true, false, false, 1, false, false, false, -1, ".\\Library\\PackageCache\\com.unity.render-pipelines.core@6c7e6aba313a\\Runtime\\Lighting\\ProbeVolume\\ShaderVariablesProbeVolumes.cs")]
public enum APVLeakReductionMode
{
	[Token(Token = "0x4000630")]
	None = 0,
	[Token(Token = "0x4000631")]
	Performance = 1,
	[Token(Token = "0x4000632")]
	Quality = 2,
	[Token(Token = "0x4000633")]
	[Obsolete("Performance #from(6000.0)")]
	ValidityBased = Performance,
	[Token(Token = "0x4000634")]
	[Obsolete("Quality #from(6000.0)")]
	ValidityAndNormalBased = Quality
}
