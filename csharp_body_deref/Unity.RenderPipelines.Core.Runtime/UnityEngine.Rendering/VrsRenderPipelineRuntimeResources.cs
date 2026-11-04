// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.VrsRenderPipelineRuntimeResources
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
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000201")]
	private bool UnityEngine_002ERendering_002EIRenderPipelineGraphicsSettings_002EisAvailableInPlayerBuild
	{
		[Token(Token = "0x6000FB5")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000202")]
	public ComputeShader textureComputeShader
	{
		[Token(Token = "0x6000FB6")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FB7")]
		[Address(RVA = "0x2B82820", Offset = "0x2B80E20", VA = "0x182B82820")]
		set
		{
		}
	}

	[Token(Token = "0x17000203")]
	public Shader visualizationShader
	{
		[Token(Token = "0x6000FB8")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FB9")]
		[Address(RVA = "0x2B82900", Offset = "0x2B80F00", VA = "0x182B82900")]
		set
		{
		}
	}

	[Token(Token = "0x17000204")]
	public VrsLut visualizationLookupTable
	{
		[Token(Token = "0x6000FBA")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FBB")]
		[Address(RVA = "0x2B82890", Offset = "0x2B80E90", VA = "0x182B82890")]
		set
		{
		}
	}

	[Token(Token = "0x17000205")]
	public VrsLut conversionLookupTable
	{
		[Token(Token = "0x6000FBC")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FBD")]
		[Address(RVA = "0x2B827B0", Offset = "0x2B80DB0", VA = "0x182B827B0")]
		set
		{
		}
	}

	[Token(Token = "0x6000FBE")]
	[Address(RVA = "0x2B82760", Offset = "0x2B80D60", VA = "0x182B82760")]
	public VrsRenderPipelineRuntimeResources()
	{
	}
}
