// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.UniversalRenderPipelineRuntimeTerrainShaders
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
		[Address(RVA = "0x667B990", Offset = "0x667A990", VA = "0x667B990", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001F8")]
	private bool UnityEngine_002ERendering_002EIRenderPipelineGraphicsSettings_002EisAvailableInPlayerBuild
	{
		[Token(Token = "0x600081E")]
		[Address(RVA = "0x667B9A0", Offset = "0x667A9A0", VA = "0x667B9A0", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001F9")]
	public Shader terrainDetailLitShader
	{
		[Token(Token = "0x600081F")]
		[Address(RVA = "0x667BA20", Offset = "0x667AA20", VA = "0x667BA20")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000820")]
		[Address(RVA = "0x667B5C0", Offset = "0x667A5C0", VA = "0x667B5C0")]
		set
		{
		}
	}

	[Token(Token = "0x170001FA")]
	public Shader terrainDetailGrassBillboardShader
	{
		[Token(Token = "0x6000821")]
		[Address(RVA = "0x667BA30", Offset = "0x667AA30", VA = "0x667BA30")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000822")]
		[Address(RVA = "0x667B770", Offset = "0x667A770", VA = "0x667B770")]
		set
		{
		}
	}

	[Token(Token = "0x170001FB")]
	public Shader terrainDetailGrassShader
	{
		[Token(Token = "0x6000823")]
		[Address(RVA = "0x667BA40", Offset = "0x667AA40", VA = "0x667BA40")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000824")]
		[Address(RVA = "0x667B920", Offset = "0x667A920", VA = "0x667B920")]
		set
		{
		}
	}

	[Token(Token = "0x6000825")]
	[Address(RVA = "0x667BA50", Offset = "0x667AA50", VA = "0x667BA50")]
	public UniversalRenderPipelineRuntimeTerrainShaders()
	{
	}
}
