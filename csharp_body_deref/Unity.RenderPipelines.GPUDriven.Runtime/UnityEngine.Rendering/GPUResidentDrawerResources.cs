// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.GPUResidentDrawerResources
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x65C19D0", Offset = "0x65C09D0", VA = "0x65C19D0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000016")]
	public ComputeShader instanceDataBufferCopyKernels
	{
		[Token(Token = "0x6000108")]
		[Address(RVA = "0x65C19E0", Offset = "0x65C09E0", VA = "0x65C19E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000109")]
		[Address(RVA = "0x65C19F0", Offset = "0x65C09F0", VA = "0x65C19F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public ComputeShader instanceDataBufferUploadKernels
	{
		[Token(Token = "0x600010A")]
		[Address(RVA = "0x65C1A50", Offset = "0x65C0A50", VA = "0x65C1A50")]
		get
		{
			return null;
		}
		[Token(Token = "0x600010B")]
		[Address(RVA = "0x65C1A60", Offset = "0x65C0A60", VA = "0x65C1A60")]
		set
		{
		}
	}

	[Token(Token = "0x17000018")]
	public ComputeShader transformUpdaterKernels
	{
		[Token(Token = "0x600010C")]
		[Address(RVA = "0x65C1AC0", Offset = "0x65C0AC0", VA = "0x65C1AC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600010D")]
		[Address(RVA = "0x65C1AD0", Offset = "0x65C0AD0", VA = "0x65C1AD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000019")]
	public ComputeShader windDataUpdaterKernels
	{
		[Token(Token = "0x600010E")]
		[Address(RVA = "0x65C1B30", Offset = "0x65C0B30", VA = "0x65C1B30")]
		get
		{
			return null;
		}
		[Token(Token = "0x600010F")]
		[Address(RVA = "0x65C1B40", Offset = "0x65C0B40", VA = "0x65C1B40")]
		set
		{
		}
	}

	[Token(Token = "0x1700001A")]
	public ComputeShader occluderDepthPyramidKernels
	{
		[Token(Token = "0x6000110")]
		[Address(RVA = "0x65C1BA0", Offset = "0x65C0BA0", VA = "0x65C1BA0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000111")]
		[Address(RVA = "0x65C1BB0", Offset = "0x65C0BB0", VA = "0x65C1BB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001B")]
	public ComputeShader instanceOcclusionCullingKernels
	{
		[Token(Token = "0x6000112")]
		[Address(RVA = "0x65C1C10", Offset = "0x65C0C10", VA = "0x65C1C10")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000113")]
		[Address(RVA = "0x65C1C20", Offset = "0x65C0C20", VA = "0x65C1C20")]
		set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	public ComputeShader occlusionCullingDebugKernels
	{
		[Token(Token = "0x6000114")]
		[Address(RVA = "0x65C1C80", Offset = "0x65C0C80", VA = "0x65C1C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000115")]
		[Address(RVA = "0x65C1C90", Offset = "0x65C0C90", VA = "0x65C1C90")]
		set
		{
		}
	}

	[Token(Token = "0x1700001D")]
	public Shader debugOcclusionTestPS
	{
		[Token(Token = "0x6000116")]
		[Address(RVA = "0x65C1CF0", Offset = "0x65C0CF0", VA = "0x65C1CF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000117")]
		[Address(RVA = "0x65C1D00", Offset = "0x65C0D00", VA = "0x65C1D00")]
		set
		{
		}
	}

	[Token(Token = "0x1700001E")]
	public Shader debugOccluderPS
	{
		[Token(Token = "0x6000118")]
		[Address(RVA = "0x65C1D60", Offset = "0x65C0D60", VA = "0x65C1D60")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000119")]
		[Address(RVA = "0x65C1D70", Offset = "0x65C0D70", VA = "0x65C1D70")]
		set
		{
		}
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x65C1DD0", Offset = "0x65C0DD0", VA = "0x65C1DD0")]
	public GPUResidentDrawerResources()
	{
	}
}
