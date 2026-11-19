// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.UniversalRenderPipelineRuntimeTextures
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
[Token(Token = "0x2000169")]
[SupportedOnRenderPipeline(typeof(UniversalRenderPipelineAsset))]
[CategoryInfo(Name = "R: Runtime Textures", Order = 1000)]
[HideInInspector]
public class UniversalRenderPipelineRuntimeTextures : IRenderPipelineResources, IRenderPipelineGraphicsSettings
{
	[Token(Token = "0x4000845")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	[HideInInspector]
	private int m_Version;

	[Token(Token = "0x4000846")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	[ResourcePath("Textures/BlueNoise64/L/LDR_LLL1_0.png", SearchType.ProjectPath)]
	private Texture2D m_BlueNoise64LTex;

	[Token(Token = "0x4000847")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	[ResourcePath("Textures/BayerMatrix.png", SearchType.ProjectPath)]
	private Texture2D m_BayerMatrixTex;

	[Token(Token = "0x4000848")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	[ResourcePath("Textures/DebugFont.tga", SearchType.ProjectPath)]
	private Texture2D m_DebugFontTex;

	[Token(Token = "0x4000849")]
	[FieldOffset(Offset = "0x30")]
	private Texture2D m_StencilDitherTex;

	[Token(Token = "0x170001FC")]
	public int version
	{
		[Token(Token = "0x6000826")]
		[Address(RVA = "0x667BA60", Offset = "0x667AA60", VA = "0x667BA60", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001FD")]
	private bool UnityEngine_002ERendering_002EIRenderPipelineGraphicsSettings_002EisAvailableInPlayerBuild
	{
		[Token(Token = "0x6000827")]
		[Address(RVA = "0x667BA70", Offset = "0x667AA70", VA = "0x667BA70", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001FE")]
	public Texture2D blueNoise64LTex
	{
		[Token(Token = "0x6000828")]
		[Address(RVA = "0x667BA80", Offset = "0x667AA80", VA = "0x667BA80")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000829")]
		[Address(RVA = "0x667BA90", Offset = "0x667AA90", VA = "0x667BA90")]
		set
		{
		}
	}

	[Token(Token = "0x170001FF")]
	public Texture2D bayerMatrixTex
	{
		[Token(Token = "0x600082A")]
		[Address(RVA = "0x667BAF0", Offset = "0x667AAF0", VA = "0x667BAF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600082B")]
		[Address(RVA = "0x667BB00", Offset = "0x667AB00", VA = "0x667BB00")]
		set
		{
		}
	}

	[Token(Token = "0x17000200")]
	public Texture2D debugFontTexture
	{
		[Token(Token = "0x600082C")]
		[Address(RVA = "0x667BB60", Offset = "0x667AB60", VA = "0x667BB60")]
		get
		{
			return null;
		}
		[Token(Token = "0x600082D")]
		[Address(RVA = "0x667BB70", Offset = "0x667AB70", VA = "0x667BB70")]
		set
		{
		}
	}

	[Token(Token = "0x17000201")]
	public Texture2D stencilDitherTex
	{
		[Token(Token = "0x600082E")]
		[Address(RVA = "0x667BBD0", Offset = "0x667ABD0", VA = "0x667BBD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600082F")]
	[Address(RVA = "0x667BD40", Offset = "0x667AD40", VA = "0x667BD40")]
	public UniversalRenderPipelineRuntimeTextures()
	{
	}
}
