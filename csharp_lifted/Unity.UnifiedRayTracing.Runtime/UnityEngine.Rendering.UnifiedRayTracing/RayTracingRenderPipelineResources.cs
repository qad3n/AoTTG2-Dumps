// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.RayTracingRenderPipelineResources
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Categorization;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.Rendering.UnifiedRayTracing;

[Serializable]
[Token(Token = "0x2000058")]
[MovedFrom(true, "UnityEngine.Rendering.UnifiedRayTracing", "Unity.Rendering.LightTransport.Runtime", null)]
[SupportedOnRenderPipeline(new Type[] { })]
[CategoryInfo(Name = "R: Unified Ray Tracing", Order = 1000)]
[HideInInspector]
public sealed class RayTracingRenderPipelineResources : IRenderPipelineResources, IRenderPipelineGraphicsSettings
{
	[Token(Token = "0x40001E0")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	[HideInInspector]
	private int m_Version;

	[Token(Token = "0x40001E1")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	[ResourcePath("Runtime/UnifiedRayTracing/Common/GeometryPool/GeometryPoolKernels.compute", SearchType.ProjectPath)]
	private ComputeShader m_GeometryPoolKernels;

	[Token(Token = "0x40001E2")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	[ResourcePath("Runtime/UnifiedRayTracing/Common/Utilities/CopyBuffer.compute", SearchType.ProjectPath)]
	private ComputeShader m_CopyBuffer;

	[Token(Token = "0x40001E3")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	[ResourcePath("Runtime/UnifiedRayTracing/Compute/RadeonRays/kernels/copyPositions.compute", SearchType.ProjectPath)]
	private ComputeShader m_CopyPositions;

	[Token(Token = "0x40001E4")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	[ResourcePath("Runtime/UnifiedRayTracing/Compute/RadeonRays/kernels/bit_histogram.compute", SearchType.ProjectPath)]
	private ComputeShader m_BitHistogram;

	[Token(Token = "0x40001E5")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	[ResourcePath("Runtime/UnifiedRayTracing/Compute/RadeonRays/kernels/block_reduce_part.compute", SearchType.ProjectPath)]
	private ComputeShader m_BlockReducePart;

	[Token(Token = "0x40001E6")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	[ResourcePath("Runtime/UnifiedRayTracing/Compute/RadeonRays/kernels/block_scan.compute", SearchType.ProjectPath)]
	private ComputeShader m_BlockScan;

	[Token(Token = "0x40001E7")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	[ResourcePath("Runtime/UnifiedRayTracing/Compute/RadeonRays/kernels/build_hlbvh.compute", SearchType.ProjectPath)]
	private ComputeShader m_BuildHlbvh;

	[Token(Token = "0x40001E8")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	[ResourcePath("Runtime/UnifiedRayTracing/Compute/RadeonRays/kernels/restructure_bvh.compute", SearchType.ProjectPath)]
	private ComputeShader m_RestructureBvh;

	[Token(Token = "0x40001E9")]
	[FieldOffset(Offset = "0x58")]
	[SerializeField]
	[ResourcePath("Runtime/UnifiedRayTracing/Compute/RadeonRays/kernels/scatter.compute", SearchType.ProjectPath)]
	private ComputeShader m_Scatter;

	[Token(Token = "0x17000025")]
	public int version
	{
		[Token(Token = "0x600018B")]
		[Address(RVA = "0x678CD50", Offset = "0x678BD50", VA = "0x678CD50", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000026")]
	public ComputeShader GeometryPoolKernels
	{
		[Token(Token = "0x600018C")]
		[Address(RVA = "0x678CD60", Offset = "0x678BD60", VA = "0x678CD60")]
		get
		{
			return null;
		}
		[Token(Token = "0x600018D")]
		[Address(RVA = "0x678CD70", Offset = "0x678BD70", VA = "0x678CD70")]
		set
		{
		}
	}

	[Token(Token = "0x17000027")]
	public ComputeShader CopyBuffer
	{
		[Token(Token = "0x600018E")]
		[Address(RVA = "0x678CDD0", Offset = "0x678BDD0", VA = "0x678CDD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600018F")]
		[Address(RVA = "0x678CDE0", Offset = "0x678BDE0", VA = "0x678CDE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000028")]
	public ComputeShader CopyPositions
	{
		[Token(Token = "0x6000190")]
		[Address(RVA = "0x678CE40", Offset = "0x678BE40", VA = "0x678CE40")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000191")]
		[Address(RVA = "0x678CE50", Offset = "0x678BE50", VA = "0x678CE50")]
		set
		{
		}
	}

	[Token(Token = "0x17000029")]
	public ComputeShader BitHistogram
	{
		[Token(Token = "0x6000192")]
		[Address(RVA = "0x678CEB0", Offset = "0x678BEB0", VA = "0x678CEB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000193")]
		[Address(RVA = "0x678CEC0", Offset = "0x678BEC0", VA = "0x678CEC0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002A")]
	public ComputeShader BlockReducePart
	{
		[Token(Token = "0x6000194")]
		[Address(RVA = "0x678CF20", Offset = "0x678BF20", VA = "0x678CF20")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000195")]
		[Address(RVA = "0x678CF30", Offset = "0x678BF30", VA = "0x678CF30")]
		set
		{
		}
	}

	[Token(Token = "0x1700002B")]
	public ComputeShader BlockScan
	{
		[Token(Token = "0x6000196")]
		[Address(RVA = "0x678CF90", Offset = "0x678BF90", VA = "0x678CF90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000197")]
		[Address(RVA = "0x678CFA0", Offset = "0x678BFA0", VA = "0x678CFA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002C")]
	public ComputeShader BuildHlbvh
	{
		[Token(Token = "0x6000198")]
		[Address(RVA = "0x678D000", Offset = "0x678C000", VA = "0x678D000")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000199")]
		[Address(RVA = "0x678D010", Offset = "0x678C010", VA = "0x678D010")]
		set
		{
		}
	}

	[Token(Token = "0x1700002D")]
	public ComputeShader RestructureBvh
	{
		[Token(Token = "0x600019A")]
		[Address(RVA = "0x678D070", Offset = "0x678C070", VA = "0x678D070")]
		get
		{
			return null;
		}
		[Token(Token = "0x600019B")]
		[Address(RVA = "0x678D080", Offset = "0x678C080", VA = "0x678D080")]
		set
		{
		}
	}

	[Token(Token = "0x1700002E")]
	public ComputeShader Scatter
	{
		[Token(Token = "0x600019C")]
		[Address(RVA = "0x678D0E0", Offset = "0x678C0E0", VA = "0x678D0E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600019D")]
		[Address(RVA = "0x678D0F0", Offset = "0x678C0F0", VA = "0x678D0F0")]
		set
		{
		}
	}

	[Token(Token = "0x600019E")]
	[Address(RVA = "0x678D150", Offset = "0x678C150", VA = "0x678D150")]
	public RayTracingRenderPipelineResources()
	{
	}
}
