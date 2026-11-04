// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.APVDefinitions
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000146")]
[GenerateHLSL(PackingRules.Exact, true, false, false, 1, false, false, false, -1, ".\\Library\\PackageCache\\com.unity.render-pipelines.core@6c7e6aba313a\\Runtime\\Lighting\\ProbeVolume\\ShaderVariablesProbeVolumes.cs")]
internal class APVDefinitions
{
	[Token(Token = "0x4000628")]
	[FieldOffset(Offset = "0x0")]
	public static int probeIndexChunkSize;

	[Token(Token = "0x4000629")]
	public const float probeValidityThreshold = 0.05f;

	[Token(Token = "0x400062A")]
	[FieldOffset(Offset = "0x4")]
	public static int probeMaxRegionCount;

	[Token(Token = "0x400062B")]
	[FieldOffset(Offset = "0x8")]
	public static Color32[] layerMaskColors;

	[Token(Token = "0x400062C")]
	[FieldOffset(Offset = "0x10")]
	public static Color debugEmptyColor;

	[Token(Token = "0x6000AE2")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public APVDefinitions()
	{
	}
}
