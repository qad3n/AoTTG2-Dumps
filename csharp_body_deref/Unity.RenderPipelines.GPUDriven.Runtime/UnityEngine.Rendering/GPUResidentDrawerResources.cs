// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.GPUResidentDrawerResources
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
[Token(Token = "0x200002B")]
[SupportedOnRenderPipeline(new Type[] { })]
[CategoryInfo(Name = "R: GPU Resident Drawers", Order = 1000)]
[HideInInspector]
internal class GPUResidentDrawerResources : IRenderPipelineResources, IRenderPipelineGraphicsSettings
{
	[Token(Token = "0x200002C")]
	public enum Version
	{
		[Token(Token = "0x4000095")]
		Initial = 0,
		[Token(Token = "0x4000096")]
		Count = 1,
		[Token(Token = "0x4000097")]
		Latest = Initial
	}

	[Token(Token = "0x400008A")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	[HideInInspector]
	private Version m_Version;

	[Token(Token = "0x400008B")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	[ResourcePath("Runtime/RenderPipelineResources/GPUDriven/InstanceDataBufferCopyKernels.compute", SearchType.ProjectPath)]
	private ComputeShader m_InstanceDataBufferCopyKernels;

	[Token(Token = "0x400008C")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	[ResourcePath("Runtime/RenderPipelineResources/GPUDriven/InstanceDataBufferUploadKernels.compute", SearchType.ProjectPath)]
	private ComputeShader m_InstanceDataBufferUploadKernels;

	[Token(Token = "0x400008D")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	[ResourcePath("Runtime/RenderPipelineResources/GPUDriven/InstanceTransformUpdateKernels.compute", SearchType.ProjectPath)]
	private ComputeShader m_TransformUpdaterKernels;

	[Token(Token = "0x400008E")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	[ResourcePath("Runtime/RenderPipelineResources/GPUDriven/InstanceWindDataUpdateKernels.compute", SearchType.ProjectPath)]
	public ComputeShader m_WindDataUpdaterKernels;

	[Token(Token = "0x400008F")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	[ResourcePath("Runtime/RenderPipelineResources/GPUDriven/OccluderDepthPyramidKernels.compute", SearchType.ProjectPath)]
	private ComputeShader m_OccluderDepthPyramidKernels;

	[Token(Token = "0x4000090")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	[ResourcePath("Runtime/RenderPipelineResources/GPUDriven/InstanceOcclusionCullingKernels.compute", SearchType.ProjectPath)]
	private ComputeShader m_InstanceOcclusionCullingKernels;

	[Token(Token = "0x4000091")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	[ResourcePath("Runtime/RenderPipelineResources/GPUDriven/OcclusionCullingDebug.compute", SearchType.ProjectPath)]
	private ComputeShader m_OcclusionCullingDebugKernels;

	[Token(Token = "0x4000092")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	[ResourcePath("Runtime/RenderPipelineResources/GPUDriven/DebugOcclusionTest.shader", SearchType.ProjectPath)]
	private Shader m_DebugOcclusionTestPS;

	[Token(Token = "0x4000093")]
	[FieldOffset(Offset = "0x58")]
	[SerializeField]
	[ResourcePath("Runtime/RenderPipelineResources/GPUDriven/DebugOccluder.shader", SearchType.ProjectPath)]
	private Shader m_DebugOccluderPS;

	[Token(Token = "0x17000015")]
	private int UnityEngine_002ERendering_002EIRenderPipelineGraphicsSettings_002Eversion
	{
		[Token(Token = "0x6000107")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000016")]
	public ComputeShader instanceDataBufferCopyKernels
	{
		[Token(Token = "0x6000108")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000109")]
		[Address(RVA = "0x2BC4DA0", Offset = "0x2BC33A0", VA = "0x182BC4DA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public ComputeShader instanceDataBufferUploadKernels
	{
		[Token(Token = "0x600010A")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600010B")]
		[Address(RVA = "0x2BC4E10", Offset = "0x2BC3410", VA = "0x182BC4E10")]
		set
		{
		}
	}

	[Token(Token = "0x17000018")]
	public ComputeShader transformUpdaterKernels
	{
		[Token(Token = "0x600010C")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x600010D")]
		[Address(RVA = "0x2BC4FD0", Offset = "0x2BC35D0", VA = "0x182BC4FD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000019")]
	public ComputeShader windDataUpdaterKernels
	{
		[Token(Token = "0x600010E")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600010F")]
		[Address(RVA = "0x2BC5040", Offset = "0x2BC3640", VA = "0x182BC5040")]
		set
		{
		}
	}

	[Token(Token = "0x1700001A")]
	public ComputeShader occluderDepthPyramidKernels
	{
		[Token(Token = "0x6000110")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000111")]
		[Address(RVA = "0x2BC4EF0", Offset = "0x2BC34F0", VA = "0x182BC4EF0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001B")]
	public ComputeShader instanceOcclusionCullingKernels
	{
		[Token(Token = "0x6000112")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000113")]
		[Address(RVA = "0x2BC4E80", Offset = "0x2BC3480", VA = "0x182BC4E80")]
		set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	public ComputeShader occlusionCullingDebugKernels
	{
		[Token(Token = "0x6000114")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000115")]
		[Address(RVA = "0x2BC4F60", Offset = "0x2BC3560", VA = "0x182BC4F60")]
		set
		{
		}
	}

	[Token(Token = "0x1700001D")]
	public Shader debugOcclusionTestPS
	{
		[Token(Token = "0x6000116")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000117")]
		[Address(RVA = "0x2BC4D30", Offset = "0x2BC3330", VA = "0x182BC4D30")]
		set
		{
		}
	}

	[Token(Token = "0x1700001E")]
	public Shader debugOccluderPS
	{
		[Token(Token = "0x6000118")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000119")]
		[Address(RVA = "0x2BC4CC0", Offset = "0x2BC32C0", VA = "0x182BC4CC0")]
		set
		{
		}
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public GPUResidentDrawerResources()
	{
	}
}
