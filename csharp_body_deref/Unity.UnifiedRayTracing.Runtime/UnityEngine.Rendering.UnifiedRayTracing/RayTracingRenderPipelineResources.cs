// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.UnifiedRayTracing.RayTracingRenderPipelineResources
// Update status: NEW in this game update
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
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000026")]
	public ComputeShader GeometryPoolKernels
	{
		[Token(Token = "0x600018C")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x600018D")]
		[Address(RVA = "0x2D98170", Offset = "0x2D96770", VA = "0x182D98170")]
		set
		{
		}
	}

	[Token(Token = "0x17000027")]
	public ComputeShader CopyBuffer
	{
		[Token(Token = "0x600018E")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600018F")]
		[Address(RVA = "0x2D98090", Offset = "0x2D96690", VA = "0x182D98090")]
		set
		{
		}
	}

	[Token(Token = "0x17000028")]
	public ComputeShader CopyPositions
	{
		[Token(Token = "0x6000190")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000191")]
		[Address(RVA = "0x2D98100", Offset = "0x2D96700", VA = "0x182D98100")]
		set
		{
		}
	}

	[Token(Token = "0x17000029")]
	public ComputeShader BitHistogram
	{
		[Token(Token = "0x6000192")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000193")]
		[Address(RVA = "0x2D97ED0", Offset = "0x2D964D0", VA = "0x182D97ED0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002A")]
	public ComputeShader BlockReducePart
	{
		[Token(Token = "0x6000194")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000195")]
		[Address(RVA = "0x2D97F40", Offset = "0x2D96540", VA = "0x182D97F40")]
		set
		{
		}
	}

	[Token(Token = "0x1700002B")]
	public ComputeShader BlockScan
	{
		[Token(Token = "0x6000196")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000197")]
		[Address(RVA = "0x2D97FB0", Offset = "0x2D965B0", VA = "0x182D97FB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002C")]
	public ComputeShader BuildHlbvh
	{
		[Token(Token = "0x6000198")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000199")]
		[Address(RVA = "0x2D98020", Offset = "0x2D96620", VA = "0x182D98020")]
		set
		{
		}
	}

	[Token(Token = "0x1700002D")]
	public ComputeShader RestructureBvh
	{
		[Token(Token = "0x600019A")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600019B")]
		[Address(RVA = "0x2D981E0", Offset = "0x2D967E0", VA = "0x182D981E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002E")]
	public ComputeShader Scatter
	{
		[Token(Token = "0x600019C")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		get
		{
			return null;
		}
		[Token(Token = "0x600019D")]
		[Address(RVA = "0x2D98250", Offset = "0x2D96850", VA = "0x182D98250")]
		set
		{
		}
	}

	[Token(Token = "0x600019E")]
	[Address(RVA = "0x18D09C0", Offset = "0x18CEFC0", VA = "0x1818D09C0")]
	public RayTracingRenderPipelineResources()
	{
	}
}
