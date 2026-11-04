// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.ScreenSpaceAmbientOcclusionDynamicResources
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
[Token(Token = "0x200018B")]
[SupportedOnRenderPipeline(typeof(UniversalRenderPipelineAsset))]
[CategoryInfo(Name = "R: SSAO Noise Textures", Order = 1000)]
[ElementInfo(Order = 0)]
[HideInInspector]
internal class ScreenSpaceAmbientOcclusionDynamicResources : IRenderPipelineResources, IRenderPipelineGraphicsSettings
{
	[Token(Token = "0x40008CF")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	[ResourceFormattedPaths("Textures/BlueNoise256/LDR_LLL1_{0}.png", 0, 7, SearchType.ProjectPath)]
	private Texture2D[] m_BlueNoise256Textures;

	[Token(Token = "0x40008D0")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	[HideInInspector]
	private int m_Version;

	[Token(Token = "0x17000219")]
	public Texture2D[] BlueNoise256Textures
	{
		[Token(Token = "0x6000890")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000891")]
		[Address(RVA = "0x2C80DA0", Offset = "0x2C7F3A0", VA = "0x182C80DA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700021A")]
	public bool isAvailableInPlayerBuild
	{
		[Token(Token = "0x6000892")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700021B")]
	public int version
	{
		[Token(Token = "0x6000893")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000894")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public ScreenSpaceAmbientOcclusionDynamicResources()
	{
	}
}
