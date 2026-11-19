// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.OnTilePostProcessResource
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
		[Address(RVA = "0x667F250", Offset = "0x667E250", VA = "0x667F250", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000214")]
	private bool UnityEngine_002ERendering_002EIRenderPipelineGraphicsSettings_002EisAvailableInPlayerBuild
	{
		[Token(Token = "0x6000880")]
		[Address(RVA = "0x667F260", Offset = "0x667E260", VA = "0x667F260", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000215")]
	public Shader uberPostShader
	{
		[Token(Token = "0x6000881")]
		[Address(RVA = "0x667F270", Offset = "0x667E270", VA = "0x667F270")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000882")]
		[Address(RVA = "0x667F280", Offset = "0x667E280", VA = "0x667F280")]
		set
		{
		}
	}

	[Token(Token = "0x6000883")]
	[Address(RVA = "0x667F2E0", Offset = "0x667E2E0", VA = "0x667F2E0")]
	public OnTilePostProcessResource()
	{
	}
}
