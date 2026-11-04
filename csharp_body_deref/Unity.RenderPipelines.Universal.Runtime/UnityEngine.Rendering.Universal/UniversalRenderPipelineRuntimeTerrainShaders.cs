// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.UniversalRenderPipelineRuntimeTerrainShaders
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
[Token(Token = "0x2000168")]
[SupportedOnRenderPipeline(typeof(UniversalRenderPipelineAsset))]
[CategoryInfo(Name = "R: Runtime Shaders", Order = 1000)]
[HideInInspector]
public class UniversalRenderPipelineRuntimeTerrainShaders : IRenderPipelineResources, IRenderPipelineGraphicsSettings
{
	[Token(Token = "0x4000841")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	[HideInInspector]
	private int m_Version;

	[Token(Token = "0x4000842")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	[ResourcePath("Shaders/Terrain/TerrainDetailLit.shader", SearchType.ProjectPath)]
	private Shader m_TerrainDetailLit;

	[Token(Token = "0x4000843")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	[ResourcePath("Shaders/Terrain/WavingGrassBillboard.shader", SearchType.ProjectPath)]
	private Shader m_TerrainDetailGrassBillboard;

	[Token(Token = "0x4000844")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	[ResourcePath("Shaders/Terrain/WavingGrass.shader", SearchType.ProjectPath)]
	private Shader m_TerrainDetailGrass;

	[Token(Token = "0x170001F7")]
	public int version
	{
		[Token(Token = "0x600081D")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001F8")]
	private bool UnityEngine_002ERendering_002EIRenderPipelineGraphicsSettings_002EisAvailableInPlayerBuild
	{
		[Token(Token = "0x600081E")]
		[Address(RVA = "0x2C8E3D0", Offset = "0x2C8C9D0", VA = "0x182C8E3D0", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001F9")]
	public Shader terrainDetailLitShader
	{
		[Token(Token = "0x600081F")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000820")]
		[Address(RVA = "0x2C8E530", Offset = "0x2C8CB30", VA = "0x182C8E530")]
		set
		{
		}
	}

	[Token(Token = "0x170001FA")]
	public Shader terrainDetailGrassBillboardShader
	{
		[Token(Token = "0x6000821")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000822")]
		[Address(RVA = "0x2C8E450", Offset = "0x2C8CA50", VA = "0x182C8E450")]
		set
		{
		}
	}

	[Token(Token = "0x170001FB")]
	public Shader terrainDetailGrassShader
	{
		[Token(Token = "0x6000823")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000824")]
		[Address(RVA = "0x2C8E4C0", Offset = "0x2C8CAC0", VA = "0x182C8E4C0")]
		set
		{
		}
	}

	[Token(Token = "0x6000825")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public UniversalRenderPipelineRuntimeTerrainShaders()
	{
	}
}
