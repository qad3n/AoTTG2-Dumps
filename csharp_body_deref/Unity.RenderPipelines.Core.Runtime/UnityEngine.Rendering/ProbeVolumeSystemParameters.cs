// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ProbeVolumeSystemParameters
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200011E")]
public struct ProbeVolumeSystemParameters
{
	[Token(Token = "0x400052A")]
	[FieldOffset(Offset = "0x0")]
	public ProbeVolumeTextureMemoryBudget memoryBudget;

	[Token(Token = "0x400052B")]
	[FieldOffset(Offset = "0x4")]
	public ProbeVolumeBlendingTextureMemoryBudget blendingMemoryBudget;

	[Token(Token = "0x400052C")]
	[FieldOffset(Offset = "0x8")]
	public ProbeVolumeSHBands shBands;

	[Token(Token = "0x400052D")]
	[FieldOffset(Offset = "0xC")]
	public bool supportScenarios;

	[Token(Token = "0x400052E")]
	[FieldOffset(Offset = "0xD")]
	public bool supportScenarioBlending;

	[Token(Token = "0x400052F")]
	[FieldOffset(Offset = "0xE")]
	public bool supportGPUStreaming;

	[Token(Token = "0x4000530")]
	[FieldOffset(Offset = "0xF")]
	public bool supportDiskStreaming;

	[Token(Token = "0x4000531")]
	[FieldOffset(Offset = "0x10")]
	[Obsolete("This field is not used anymore. #from(2023.3)")]
	public Shader probeDebugShader;

	[Token(Token = "0x4000532")]
	[FieldOffset(Offset = "0x18")]
	[Obsolete("This field is not used anymore. #from(2023.3)")]
	public Shader probeSamplingDebugShader;

	[Token(Token = "0x4000533")]
	[FieldOffset(Offset = "0x20")]
	[Obsolete("This field is not used anymore. #from(2023.3)")]
	public Texture probeSamplingDebugTexture;

	[Token(Token = "0x4000534")]
	[FieldOffset(Offset = "0x28")]
	[Obsolete("This field is not used anymore. #from(2023.3)")]
	public Mesh probeSamplingDebugMesh;

	[Token(Token = "0x4000535")]
	[FieldOffset(Offset = "0x30")]
	[Obsolete("This field is not used anymore. #from(2023.3)")]
	public Shader offsetDebugShader;

	[Token(Token = "0x4000536")]
	[FieldOffset(Offset = "0x38")]
	[Obsolete("This field is not used anymore. #from(2023.3)")]
	public Shader fragmentationDebugShader;

	[Token(Token = "0x4000537")]
	[FieldOffset(Offset = "0x40")]
	[Obsolete("This field is not used anymore. #from(2023.3)")]
	public ComputeShader scenarioBlendingShader;

	[Token(Token = "0x4000538")]
	[FieldOffset(Offset = "0x48")]
	[Obsolete("This field is not used anymore. #from(2023.3)")]
	public ComputeShader streamingUploadShader;

	[Token(Token = "0x4000539")]
	[FieldOffset(Offset = "0x50")]
	[Obsolete("This field is not used anymore. #from(2023.3)")]
	public ProbeVolumeSceneData sceneData;

	[Token(Token = "0x400053A")]
	[FieldOffset(Offset = "0x58")]
	[Obsolete("This field is not used anymore. Used with the current Shader Stripping Settings. #from(2023.3)")]
	public bool supportsRuntimeDebug;
}
