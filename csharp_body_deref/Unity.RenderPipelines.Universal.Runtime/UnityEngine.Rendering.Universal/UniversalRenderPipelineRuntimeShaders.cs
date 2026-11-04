// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.UniversalRenderPipelineRuntimeShaders
// Update status: NEW in this game update
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
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001EE")]
	private bool UnityEngine_002ERendering_002EIRenderPipelineGraphicsSettings_002EisAvailableInPlayerBuild
	{
		[Token(Token = "0x6000807")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001EF")]
	public Shader fallbackErrorShader
	{
		[Token(Token = "0x6000808")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000809")]
		[Address(RVA = "0x2C8E080", Offset = "0x2C8C680", VA = "0x182C8E080")]
		set
		{
		}
	}

	[Token(Token = "0x170001F0")]
	public Shader blitHDROverlay
	{
		[Token(Token = "0x600080A")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600080B")]
		[Address(RVA = "0x2C8DF30", Offset = "0x2C8C530", VA = "0x182C8DF30")]
		set
		{
		}
	}

	[Token(Token = "0x170001F1")]
	public Shader coreBlitPS
	{
		[Token(Token = "0x600080C")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x600080D")]
		[Address(RVA = "0x2C8E010", Offset = "0x2C8C610", VA = "0x182C8E010")]
		set
		{
		}
	}

	[Token(Token = "0x170001F2")]
	public Shader coreBlitColorAndDepthPS
	{
		[Token(Token = "0x600080E")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600080F")]
		[Address(RVA = "0x2C8DFA0", Offset = "0x2C8C5A0", VA = "0x182C8DFA0")]
		set
		{
		}
	}

	[Token(Token = "0x170001F3")]
	public Shader samplingPS
	{
		[Token(Token = "0x6000810")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000811")]
		[Address(RVA = "0x2C8E0F0", Offset = "0x2C8C6F0", VA = "0x182C8E0F0")]
		set
		{
		}
	}

	[Token(Token = "0x170001F4")]
	[Obsolete("terrainDetailLitShader is obsolete. Use UniversalRenderPipelineRuntimeTerrainShaders.terrainDetailLitShader instead.", false)]
	public Shader terrainDetailLitShader
	{
		[Token(Token = "0x6000816")]
		[Address(RVA = "0x2C8DEB0", Offset = "0x2C8C4B0", VA = "0x182C8DEB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000817")]
		[Address(RVA = "0x2C8E300", Offset = "0x2C8C900", VA = "0x182C8E300")]
		set
		{
		}
	}

	[Token(Token = "0x170001F5")]
	[Obsolete("terrainDetailGrassBillboardShader is obsolete. Use UniversalRenderPipelineRuntimeTerrainShaders.terrainDetailGrassBillboardShader instead.", false)]
	public Shader terrainDetailGrassBillboardShader
	{
		[Token(Token = "0x6000818")]
		[Address(RVA = "0x2C8DDB0", Offset = "0x2C8C3B0", VA = "0x182C8DDB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000819")]
		[Address(RVA = "0x2C8E160", Offset = "0x2C8C760", VA = "0x182C8E160")]
		set
		{
		}
	}

	[Token(Token = "0x170001F6")]
	[Obsolete("terrainDetailGrassShader is obsolete; Use UniversalRenderPipelineRuntimeTerrainShaders.terrainDetailGrassShader instead.)", false)]
	public Shader terrainDetailGrassShader
	{
		[Token(Token = "0x600081A")]
		[Address(RVA = "0x2C8DE30", Offset = "0x2C8C430", VA = "0x182C8DE30")]
		get
		{
			return null;
		}
		[Token(Token = "0x600081B")]
		[Address(RVA = "0x2C8E230", Offset = "0x2C8C830", VA = "0x182C8E230")]
		set
		{
		}
	}

	[Token(Token = "0x6000812")]
	[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
	internal Shader GetOriginalTerrainDetailLitShader()
	{
		return null;
	}

	[Token(Token = "0x6000813")]
	[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
	internal Shader GetOriginalTerrainDetailGrassBillboardShader()
	{
		return null;
	}

	[Token(Token = "0x6000814")]
	[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
	internal Shader GetOriginalTerrainDetailGrassShader()
	{
		return null;
	}

	[Token(Token = "0x6000815")]
	[Address(RVA = "0x2C8DD60", Offset = "0x2C8C360", VA = "0x182C8DD60")]
	internal void ClearOriginalTerrainDetailShaders()
	{
	}

	[Token(Token = "0x600081C")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public UniversalRenderPipelineRuntimeShaders()
	{
	}
}
