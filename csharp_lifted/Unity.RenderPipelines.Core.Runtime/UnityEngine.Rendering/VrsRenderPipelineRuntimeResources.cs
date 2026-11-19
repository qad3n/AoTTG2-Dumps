// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.VrsRenderPipelineRuntimeResources
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
[Token(Token = "0x2000231")]
[SupportedOnRenderPipeline(new Type[] { })]
[CategoryInfo(Name = "VRS - Runtime Resources", Order = 1000)]
public sealed class VrsRenderPipelineRuntimeResources : IRenderPipelineResources, IRenderPipelineGraphicsSettings
{
	[Token(Token = "0x40009D6")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	[Tooltip("Compute shader used for converting textures to shading rate values")]
	[ResourcePath("Runtime/Vrs/Shaders/VrsTexture.compute", SearchType.ProjectPath)]
	private ComputeShader m_TextureComputeShader;

	[Token(Token = "0x40009D7")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	[Tooltip("Shader used when visualizing shading rate values as a color image")]
	[ResourcePath("Runtime/Vrs/Shaders/VrsVisualization.shader", SearchType.ProjectPath)]
	private Shader m_VisualizationShader;

	[Token(Token = "0x40009D8")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	[Tooltip("Colors to visualize the shading rates")]
	private VrsLut m_VisualizationLookupTable;

	[Token(Token = "0x40009D9")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	[Tooltip("Colors to convert between shading rates and textures")]
	private VrsLut m_ConversionLookupTable;

	[Token(Token = "0x17000200")]
	public int version
	{
		[Token(Token = "0x6000FB4")]
		[Address(RVA = "0x655B2C0", Offset = "0x655A2C0", VA = "0x655B2C0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000201")]
	private bool UnityEngine_002ERendering_002EIRenderPipelineGraphicsSettings_002EisAvailableInPlayerBuild
	{
		[Token(Token = "0x6000FB5")]
		[Address(RVA = "0x655B2D0", Offset = "0x655A2D0", VA = "0x655B2D0", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000202")]
	public ComputeShader textureComputeShader
	{
		[Token(Token = "0x6000FB6")]
		[Address(RVA = "0x655B2E0", Offset = "0x655A2E0", VA = "0x655B2E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FB7")]
		[Address(RVA = "0x655B2F0", Offset = "0x655A2F0", VA = "0x655B2F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000203")]
	public Shader visualizationShader
	{
		[Token(Token = "0x6000FB8")]
		[Address(RVA = "0x655B350", Offset = "0x655A350", VA = "0x655B350")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FB9")]
		[Address(RVA = "0x655B360", Offset = "0x655A360", VA = "0x655B360")]
		set
		{
		}
	}

	[Token(Token = "0x17000204")]
	public VrsLut visualizationLookupTable
	{
		[Token(Token = "0x6000FBA")]
		[Address(RVA = "0x655B3C0", Offset = "0x655A3C0", VA = "0x655B3C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FBB")]
		[Address(RVA = "0x655B3D0", Offset = "0x655A3D0", VA = "0x655B3D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000205")]
	public VrsLut conversionLookupTable
	{
		[Token(Token = "0x6000FBC")]
		[Address(RVA = "0x655B430", Offset = "0x655A430", VA = "0x655B430")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FBD")]
		[Address(RVA = "0x655B440", Offset = "0x655A440", VA = "0x655B440")]
		set
		{
		}
	}

	[Token(Token = "0x6000FBE")]
	[Address(RVA = "0x655B4A0", Offset = "0x655A4A0", VA = "0x655B4A0")]
	public VrsRenderPipelineRuntimeResources()
	{
	}
}
