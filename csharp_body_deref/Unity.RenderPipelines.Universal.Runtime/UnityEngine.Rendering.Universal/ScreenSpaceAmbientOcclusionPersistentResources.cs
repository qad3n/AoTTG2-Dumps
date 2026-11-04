// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionPersistentResources
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
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600088C")]
		[Address(RVA = "0x2C834A0", Offset = "0x2C81AA0", VA = "0x182C834A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000217")]
	public bool isAvailableInPlayerBuild
	{
		[Token(Token = "0x600088D")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000218")]
	public int version
	{
		[Token(Token = "0x600088E")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600088F")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public ScreenSpaceAmbientOcclusionPersistentResources()
	{
	}
}
