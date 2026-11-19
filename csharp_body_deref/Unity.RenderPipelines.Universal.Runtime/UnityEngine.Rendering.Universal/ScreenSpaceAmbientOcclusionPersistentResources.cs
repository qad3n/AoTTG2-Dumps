// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionPersistentResources
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
[Token(Token = "0x200018A")]
[SupportedOnRenderPipeline(typeof(UniversalRenderPipelineAsset))]
[CategoryInfo(Name = "R: SSAO Shader", Order = 1000)]
[ElementInfo(Order = 0)]
[HideInInspector]
internal class ScreenSpaceAmbientOcclusionPersistentResources : IRenderPipelineResources, IRenderPipelineGraphicsSettings
{
	[Token(Token = "0x40008CD")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	[ResourcePath("Shaders/Utils/ScreenSpaceAmbientOcclusion.shader", SearchType.ProjectPath)]
	private Shader m_Shader;

	[Token(Token = "0x40008CE")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	[HideInInspector]
	private int m_Version;

	[Token(Token = "0x17000216")]
	public Shader Shader
	{
		[Token(Token = "0x600088B")]
		[Address(RVA = "0x667F7E0", Offset = "0x667E7E0", VA = "0x667F7E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600088C")]
		[Address(RVA = "0x667F7F0", Offset = "0x667E7F0", VA = "0x667F7F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000217")]
	public bool isAvailableInPlayerBuild
	{
		[Token(Token = "0x600088D")]
		[Address(RVA = "0x667F850", Offset = "0x667E850", VA = "0x667F850", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000218")]
	public int version
	{
		[Token(Token = "0x600088E")]
		[Address(RVA = "0x667F860", Offset = "0x667E860", VA = "0x667F860", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600088F")]
	[Address(RVA = "0x667F870", Offset = "0x667E870", VA = "0x667F870")]
	public ScreenSpaceAmbientOcclusionPersistentResources()
	{
	}
}
