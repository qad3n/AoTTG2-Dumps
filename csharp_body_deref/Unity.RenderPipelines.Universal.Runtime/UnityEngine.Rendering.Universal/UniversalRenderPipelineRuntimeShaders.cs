// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.UniversalRenderPipelineRuntimeShaders
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Categorization;

namespace UnityEngine.Rendering.Universal;

[Serializable]
[Token(Token = "0x2000167")]
[SupportedOnRenderPipeline(typeof(UniversalRenderPipelineAsset))]
[CategoryInfo(Name = "R: Runtime Shaders", Order = 1000)]
[HideInInspector]
public class UniversalRenderPipelineRuntimeShaders : IRenderPipelineResources, IRenderPipelineGraphicsSettings
{
	[Token(Token = "0x4000838")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	[HideInInspector]
	private int m_Version;

	[Token(Token = "0x4000839")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	[ResourcePath("Shaders/Utils/FallbackError.shader", SearchType.ProjectPath)]
	private Shader m_FallbackErrorShader;

	[Token(Token = "0x400083A")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	[ResourcePath("Shaders/Utils/BlitHDROverlay.shader", SearchType.ProjectPath)]
	internal Shader m_BlitHDROverlay;

	[Token(Token = "0x400083B")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	[ResourcePath("Shaders/Utils/CoreBlit.shader", SearchType.ProjectPath)]
	internal Shader m_CoreBlitPS;

	[Token(Token = "0x400083C")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	[ResourcePath("Shaders/Utils/CoreBlitColorAndDepth.shader", SearchType.ProjectPath)]
	internal Shader m_CoreBlitColorAndDepthPS;

	[Token(Token = "0x400083D")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	[ResourcePath("Shaders/Utils/Sampling.shader", SearchType.ProjectPath)]
	private Shader m_SamplingPS;

	[Token(Token = "0x400083E")]
	[FieldOffset(Offset = "0x40")]
	[Header("Terrain")]
	[SerializeField]
	[HideInInspector]
	private Shader m_TerrainDetailLit;

	[Token(Token = "0x400083F")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	[HideInInspector]
	private Shader m_TerrainDetailGrassBillboard;

	[Token(Token = "0x4000840")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	[HideInInspector]
	private Shader m_TerrainDetailGrass;

	[Token(Token = "0x170001ED")]
	public int version
	{
		[Token(Token = "0x6000806")]
		[Address(RVA = "0x667B1A0", Offset = "0x667A1A0", VA = "0x667B1A0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001EE")]
	private bool UnityEngine_002ERendering_002EIRenderPipelineGraphicsSettings_002EisAvailableInPlayerBuild
	{
		[Token(Token = "0x6000807")]
		[Address(RVA = "0x667B1B0", Offset = "0x667A1B0", VA = "0x667B1B0", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001EF")]
	public Shader fallbackErrorShader
	{
		[Token(Token = "0x6000808")]
		[Address(RVA = "0x667B1C0", Offset = "0x667A1C0", VA = "0x667B1C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000809")]
		[Address(RVA = "0x667B1D0", Offset = "0x667A1D0", VA = "0x667B1D0")]
		set
		{
		}
	}

	[Token(Token = "0x170001F0")]
	public Shader blitHDROverlay
	{
		[Token(Token = "0x600080A")]
		[Address(RVA = "0x667B230", Offset = "0x667A230", VA = "0x667B230")]
		get
		{
			return null;
		}
		[Token(Token = "0x600080B")]
		[Address(RVA = "0x667B240", Offset = "0x667A240", VA = "0x667B240")]
		set
		{
		}
	}

	[Token(Token = "0x170001F1")]
	public Shader coreBlitPS
	{
		[Token(Token = "0x600080C")]
		[Address(RVA = "0x667B2A0", Offset = "0x667A2A0", VA = "0x667B2A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600080D")]
		[Address(RVA = "0x667B2B0", Offset = "0x667A2B0", VA = "0x667B2B0")]
		set
		{
		}
	}

	[Token(Token = "0x170001F2")]
	public Shader coreBlitColorAndDepthPS
	{
		[Token(Token = "0x600080E")]
		[Address(RVA = "0x667B310", Offset = "0x667A310", VA = "0x667B310")]
		get
		{
			return null;
		}
		[Token(Token = "0x600080F")]
		[Address(RVA = "0x667B320", Offset = "0x667A320", VA = "0x667B320")]
		set
		{
		}
	}

	[Token(Token = "0x170001F3")]
	public Shader samplingPS
	{
		[Token(Token = "0x6000810")]
		[Address(RVA = "0x667B380", Offset = "0x667A380", VA = "0x667B380")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000811")]
		[Address(RVA = "0x667B390", Offset = "0x667A390", VA = "0x667B390")]
		set
		{
		}
	}

	[Token(Token = "0x170001F4")]
	[Obsolete("terrainDetailLitShader is obsolete. Use UniversalRenderPipelineRuntimeTerrainShaders.terrainDetailLitShader instead.", false)]
	public Shader terrainDetailLitShader
	{
		[Token(Token = "0x6000816")]
		[Address(RVA = "0x667B470", Offset = "0x667A470", VA = "0x667B470")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000817")]
		[Address(RVA = "0x667B4F0", Offset = "0x667A4F0", VA = "0x667B4F0")]
		set
		{
		}
	}

	[Token(Token = "0x170001F5")]
	[Obsolete("terrainDetailGrassBillboardShader is obsolete. Use UniversalRenderPipelineRuntimeTerrainShaders.terrainDetailGrassBillboardShader instead.", false)]
	public Shader terrainDetailGrassBillboardShader
	{
		[Token(Token = "0x6000818")]
		[Address(RVA = "0x667B620", Offset = "0x667A620", VA = "0x667B620")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000819")]
		[Address(RVA = "0x667B6A0", Offset = "0x667A6A0", VA = "0x667B6A0")]
		set
		{
		}
	}

	[Token(Token = "0x170001F6")]
	[Obsolete("terrainDetailGrassShader is obsolete; Use UniversalRenderPipelineRuntimeTerrainShaders.terrainDetailGrassShader instead.)", false)]
	public Shader terrainDetailGrassShader
	{
		[Token(Token = "0x600081A")]
		[Address(RVA = "0x667B7D0", Offset = "0x667A7D0", VA = "0x667B7D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600081B")]
		[Address(RVA = "0x667B850", Offset = "0x667A850", VA = "0x667B850")]
		set
		{
		}
	}

	[Token(Token = "0x6000812")]
	[Address(RVA = "0x667B3F0", Offset = "0x667A3F0", VA = "0x667B3F0")]
	internal Shader GetOriginalTerrainDetailLitShader()
	{
		return null;
	}

	[Token(Token = "0x6000813")]
	[Address(RVA = "0x667B400", Offset = "0x667A400", VA = "0x667B400")]
	internal Shader GetOriginalTerrainDetailGrassBillboardShader()
	{
		return null;
	}

	[Token(Token = "0x6000814")]
	[Address(RVA = "0x667B410", Offset = "0x667A410", VA = "0x667B410")]
	internal Shader GetOriginalTerrainDetailGrassShader()
	{
		return null;
	}

	[Token(Token = "0x6000815")]
	[Address(RVA = "0x667B420", Offset = "0x667A420", VA = "0x667B420")]
	internal void ClearOriginalTerrainDetailShaders()
	{
	}

	[Token(Token = "0x600081C")]
	[Address(RVA = "0x667B980", Offset = "0x667A980", VA = "0x667B980")]
	public UniversalRenderPipelineRuntimeShaders()
	{
	}
}
