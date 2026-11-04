// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ProbeVolumeBakingResources
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
[Token(Token = "0x2000137")]
[SupportedOnRenderPipeline(new Type[] { })]
[CategoryInfo(Name = "R: Adaptive Probe Volumes", Order = 1000)]
[HideInInspector]
internal class ProbeVolumeBakingResources : IRenderPipelineResources, IRenderPipelineGraphicsSettings
{
	[Token(Token = "0x40005E5")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	[HideInInspector]
	private int m_Version;

	[Token(Token = "0x40005E6")]
	[FieldOffset(Offset = "0x18")]
	[Header("Baking")]
	[ResourcePath("Editor/Lighting/ProbeVolume/ProbeVolumeCellDilation.compute", SearchType.ProjectPath)]
	public ComputeShader dilationShader;

	[Token(Token = "0x40005E7")]
	[FieldOffset(Offset = "0x20")]
	[ResourcePath("Editor/Lighting/ProbeVolume/ProbeVolumeSubdivide.compute", SearchType.ProjectPath)]
	public ComputeShader subdivideSceneCS;

	[Token(Token = "0x40005E8")]
	[FieldOffset(Offset = "0x28")]
	[ResourcePath("Editor/Lighting/ProbeVolume/VoxelizeScene.shader", SearchType.ProjectPath)]
	public Shader voxelizeSceneShader;

	[Token(Token = "0x40005E9")]
	[FieldOffset(Offset = "0x30")]
	[ResourcePath("Editor/Lighting/ProbeVolume/VirtualOffset/TraceVirtualOffset.urtshader", SearchType.ProjectPath)]
	public ComputeShader traceVirtualOffsetCS;

	[Token(Token = "0x40005EA")]
	[FieldOffset(Offset = "0x38")]
	[ResourcePath("Editor/Lighting/ProbeVolume/VirtualOffset/TraceVirtualOffset.urtshader", SearchType.ProjectPath)]
	public RayTracingShader traceVirtualOffsetRT;

	[Token(Token = "0x40005EB")]
	[FieldOffset(Offset = "0x40")]
	[ResourcePath("Editor/Lighting/ProbeVolume/DynamicGI/DynamicGISkyOcclusion.urtshader", SearchType.ProjectPath)]
	public ComputeShader skyOcclusionCS;

	[Token(Token = "0x40005EC")]
	[FieldOffset(Offset = "0x48")]
	[ResourcePath("Editor/Lighting/ProbeVolume/DynamicGI/DynamicGISkyOcclusion.urtshader", SearchType.ProjectPath)]
	public RayTracingShader skyOcclusionRT;

	[Token(Token = "0x40005ED")]
	[FieldOffset(Offset = "0x50")]
	[ResourcePath("Editor/Lighting/ProbeVolume/RenderingLayerMask/TraceRenderingLayerMask.urtshader", SearchType.ProjectPath)]
	public ComputeShader renderingLayerCS;

	[Token(Token = "0x40005EE")]
	[FieldOffset(Offset = "0x58")]
	[ResourcePath("Editor/Lighting/ProbeVolume/RenderingLayerMask/TraceRenderingLayerMask.urtshader", SearchType.ProjectPath)]
	public RayTracingShader renderingLayerRT;

	[Token(Token = "0x17000138")]
	public int version
	{
		[Token(Token = "0x6000AA4")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000AA5")]
	[Address(RVA = "0x18D09C0", Offset = "0x18CEFC0", VA = "0x1818D09C0")]
	public ProbeVolumeBakingResources()
	{
	}
}
