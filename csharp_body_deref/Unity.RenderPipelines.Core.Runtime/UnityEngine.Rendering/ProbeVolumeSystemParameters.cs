using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000130")]
public struct ProbeVolumeSystemParameters
{
	[Token(Token = "0x400050C")]
	[FieldOffset(Offset = "0x0")]
	public ProbeVolumeTextureMemoryBudget memoryBudget;

	[Token(Token = "0x400050D")]
	[FieldOffset(Offset = "0x4")]
	public ProbeVolumeBlendingTextureMemoryBudget blendingMemoryBudget;

	[Token(Token = "0x400050E")]
	[FieldOffset(Offset = "0x8")]
	public Shader probeDebugShader;

	[Token(Token = "0x400050F")]
	[FieldOffset(Offset = "0x10")]
	public Shader probeSamplingDebugShader;

	[Token(Token = "0x4000510")]
	[FieldOffset(Offset = "0x18")]
	public Texture probeSamplingDebugTexture;

	[Token(Token = "0x4000511")]
	[FieldOffset(Offset = "0x20")]
	public Mesh probeSamplingDebugMesh;

	[Token(Token = "0x4000512")]
	[FieldOffset(Offset = "0x28")]
	public Shader offsetDebugShader;

	[Token(Token = "0x4000513")]
	[FieldOffset(Offset = "0x30")]
	public Shader fragmentationDebugShader;

	[Token(Token = "0x4000514")]
	[FieldOffset(Offset = "0x38")]
	public ComputeShader scenarioBlendingShader;

	[Token(Token = "0x4000515")]
	[FieldOffset(Offset = "0x40")]
	public ProbeVolumeSceneData sceneData;

	[Token(Token = "0x4000516")]
	[FieldOffset(Offset = "0x48")]
	public ProbeVolumeSHBands shBands;

	[Token(Token = "0x4000517")]
	[FieldOffset(Offset = "0x4C")]
	public bool supportsRuntimeDebug;

	[Token(Token = "0x4000518")]
	[FieldOffset(Offset = "0x4D")]
	public bool supportStreaming;

	[Token(Token = "0x4000519")]
	[FieldOffset(Offset = "0x4E")]
	public bool supportScenarios;
}
