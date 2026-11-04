// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ProbeVolumeDebugResources
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Categorization;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x2000136")]
[SupportedOnRenderPipeline(new Type[] { })]
[CategoryInfo(Name = "R: Adaptive Probe Volumes", Order = 1000)]
[HideInInspector]
internal class ProbeVolumeDebugResources : IRenderPipelineResources, IRenderPipelineGraphicsSettings
{
	[Token(Token = "0x40005DE")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	[HideInInspector]
	private int m_Version;

	[Token(Token = "0x40005DF")]
	[FieldOffset(Offset = "0x18")]
	[Header("Debug")]
	[ResourcePath("Runtime/Debug/ProbeVolumeDebug.shader", SearchType.ProjectPath)]
	public Shader probeVolumeDebugShader;

	[Token(Token = "0x40005E0")]
	[FieldOffset(Offset = "0x20")]
	[ResourcePath("Runtime/Debug/ProbeVolumeFragmentationDebug.shader", SearchType.ProjectPath)]
	public Shader probeVolumeFragmentationDebugShader;

	[Token(Token = "0x40005E1")]
	[FieldOffset(Offset = "0x28")]
	[ResourcePath("Runtime/Debug/ProbeVolumeSamplingDebug.shader", SearchType.ProjectPath)]
	public Shader probeVolumeSamplingDebugShader;

	[Token(Token = "0x40005E2")]
	[FieldOffset(Offset = "0x30")]
	[ResourcePath("Runtime/Debug/ProbeVolumeOffsetDebug.shader", SearchType.ProjectPath)]
	public Shader probeVolumeOffsetDebugShader;

	[Token(Token = "0x40005E3")]
	[FieldOffset(Offset = "0x38")]
	[ResourcePath("Runtime/Debug/ProbeSamplingDebugMesh.fbx", SearchType.ProjectPath)]
	public Mesh probeSamplingDebugMesh;

	[Token(Token = "0x40005E4")]
	[FieldOffset(Offset = "0x40")]
	[ResourcePath("Runtime/Debug/ProbeVolumeNumbersDisplayTex.png", SearchType.ProjectPath)]
	public Texture2D numbersDisplayTex;

	[Token(Token = "0x17000137")]
	public int version
	{
		[Token(Token = "0x6000AA2")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000AA3")]
	[Address(RVA = "0x18D09C0", Offset = "0x18CEFC0", VA = "0x1818D09C0")]
	public ProbeVolumeDebugResources()
	{
	}
}
