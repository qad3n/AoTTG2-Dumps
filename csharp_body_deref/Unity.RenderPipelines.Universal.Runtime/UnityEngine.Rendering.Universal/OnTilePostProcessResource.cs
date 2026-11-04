// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.OnTilePostProcessResource
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
[Token(Token = "0x200017D")]
[SupportedOnRenderPipeline(typeof(UniversalRenderPipelineAsset))]
[CategoryInfo(Name = "R: On Tile Post Process Resources", Order = 1000)]
[HideInInspector]
internal class OnTilePostProcessResource : IRenderPipelineResources, IRenderPipelineGraphicsSettings
{
	[Token(Token = "0x4000890")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	[HideInInspector]
	private int m_Version;

	[Token(Token = "0x4000891")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	[ResourcePath("Runtime/RendererFeatures/OnTileUberPost.shader", SearchType.ProjectPath)]
	private Shader m_UberPostShader;

	[Token(Token = "0x17000213")]
	public int version
	{
		[Token(Token = "0x600087F")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000214")]
	private bool UnityEngine_002ERendering_002EIRenderPipelineGraphicsSettings_002EisAvailableInPlayerBuild
	{
		[Token(Token = "0x6000880")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000215")]
	public Shader uberPostShader
	{
		[Token(Token = "0x6000881")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000882")]
		[Address(RVA = "0x2C71F80", Offset = "0x2C70580", VA = "0x182C71F80")]
		set
		{
		}
	}

	[Token(Token = "0x6000883")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public OnTilePostProcessResource()
	{
	}
}
