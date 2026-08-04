// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ProbeVolumeSystemParameters
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200011C")]
public struct ProbeVolumeSystemParameters
{
	[Token(Token = "0x4000418")]
	[FieldOffset(Offset = "0x0")]
	public ProbeVolumeTextureMemoryBudget memoryBudget;

	[Token(Token = "0x4000419")]
	[FieldOffset(Offset = "0x4")]
	public ProbeVolumeBlendingTextureMemoryBudget blendingMemoryBudget;

	[Token(Token = "0x400041A")]
	[FieldOffset(Offset = "0x8")]
	public Shader probeDebugShader;

	[Token(Token = "0x400041B")]
	[FieldOffset(Offset = "0x10")]
	public Shader probeSamplingDebugShader;

	[Token(Token = "0x400041C")]
	[FieldOffset(Offset = "0x18")]
	public Texture probeSamplingDebugTexture;

	[Token(Token = "0x400041D")]
	[FieldOffset(Offset = "0x20")]
	public Mesh probeSamplingDebugMesh;

	[Token(Token = "0x400041E")]
	[FieldOffset(Offset = "0x28")]
	public Shader offsetDebugShader;

	[Token(Token = "0x400041F")]
	[FieldOffset(Offset = "0x30")]
	public Shader fragmentationDebugShader;

	[Token(Token = "0x4000420")]
	[FieldOffset(Offset = "0x38")]
	public ComputeShader scenarioBlendingShader;

	[Token(Token = "0x4000421")]
	[FieldOffset(Offset = "0x40")]
	public ProbeVolumeSceneData sceneData;

	[Token(Token = "0x4000422")]
	[FieldOffset(Offset = "0x48")]
	public ProbeVolumeSHBands shBands;

	[Token(Token = "0x4000423")]
	[FieldOffset(Offset = "0x4C")]
	public bool supportsRuntimeDebug;

	[Token(Token = "0x4000424")]
	[FieldOffset(Offset = "0x4D")]
	public bool supportStreaming;

	[Token(Token = "0x4000425")]
	[FieldOffset(Offset = "0x4E")]
	public bool supportScenarios;
}
