// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.UniversalRenderPipelineRuntimeTextures
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
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001FD")]
	private bool UnityEngine_002ERendering_002EIRenderPipelineGraphicsSettings_002EisAvailableInPlayerBuild
	{
		[Token(Token = "0x6000827")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001FE")]
	public Texture2D blueNoise64LTex
	{
		[Token(Token = "0x6000828")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000829")]
		[Address(RVA = "0x2C8E7A0", Offset = "0x2C8CDA0", VA = "0x182C8E7A0")]
		set
		{
		}
	}

	[Token(Token = "0x170001FF")]
	public Texture2D bayerMatrixTex
	{
		[Token(Token = "0x600082A")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600082B")]
		[Address(RVA = "0x2C8E730", Offset = "0x2C8CD30", VA = "0x182C8E730")]
		set
		{
		}
	}

	[Token(Token = "0x17000200")]
	public Texture2D debugFontTexture
	{
		[Token(Token = "0x600082C")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
		[Token(Token = "0x600082D")]
		[Address(RVA = "0x2C8E810", Offset = "0x2C8CE10", VA = "0x182C8E810")]
		set
		{
		}
	}

	[Token(Token = "0x17000201")]
	public Texture2D stencilDitherTex
	{
		[Token(Token = "0x600082E")]
		[Address(RVA = "0x2C8E5A0", Offset = "0x2C8CBA0", VA = "0x182C8E5A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600082F")]
	[Address(RVA = "0x18D09C0", Offset = "0x18CEFC0", VA = "0x1818D09C0")]
	public UniversalRenderPipelineRuntimeTextures()
	{
	}
}
