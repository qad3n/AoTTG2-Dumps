// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.URPShaderStrippingSetting
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
[Token(Token = "0x200019E")]
[SupportedOnRenderPipeline(typeof(UniversalRenderPipelineAsset))]
[CategoryInfo(Name = "Additional Shader Stripping Settings", Order = 40)]
[ElementInfo(Order = 10)]
public class URPShaderStrippingSetting : IRenderPipelineGraphicsSettings
{
	[Token(Token = "0x200019F")]
	internal enum Version
	{
		[Token(Token = "0x4000910")]
		Initial
	}

	[Token(Token = "0x400090B")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	[HideInInspector]
	private Version m_Version;

	[Token(Token = "0x400090C")]
	[FieldOffset(Offset = "0x14")]
	[SerializeField]
	[Tooltip("Controls whether to automatically strip post processing shader variants based on VolumeProfile components. Stripping is done based on VolumeProfiles in project, their usage in scenes is not considered.")]
	private bool m_StripUnusedPostProcessingVariants;

	[Token(Token = "0x400090D")]
	[FieldOffset(Offset = "0x15")]
	[SerializeField]
	[Tooltip("Controls whether to strip variants if the feature is disabled.")]
	private bool m_StripUnusedVariants;

	[Token(Token = "0x400090E")]
	[FieldOffset(Offset = "0x16")]
	[SerializeField]
	[Tooltip("Controls whether Screen Coordinates Override shader variants are automatically stripped.")]
	private bool m_StripScreenCoordOverrideVariants;

	[Token(Token = "0x17000226")]
	public int version
	{
		[Token(Token = "0x60008FA")]
		[Address(RVA = "0x6689610", Offset = "0x6688610", VA = "0x6689610", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000227")]
	public bool stripUnusedPostProcessingVariants
	{
		[Token(Token = "0x60008FB")]
		[Address(RVA = "0x6689620", Offset = "0x6688620", VA = "0x6689620")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60008FC")]
		[Address(RVA = "0x6689630", Offset = "0x6688630", VA = "0x6689630")]
		set
		{
		}
	}

	[Token(Token = "0x17000228")]
	public bool stripUnusedVariants
	{
		[Token(Token = "0x60008FD")]
		[Address(RVA = "0x6689690", Offset = "0x6688690", VA = "0x6689690")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60008FE")]
		[Address(RVA = "0x66896A0", Offset = "0x66886A0", VA = "0x66896A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000229")]
	public bool stripScreenCoordOverrideVariants
	{
		[Token(Token = "0x60008FF")]
		[Address(RVA = "0x6689700", Offset = "0x6688700", VA = "0x6689700")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000900")]
		[Address(RVA = "0x6689710", Offset = "0x6688710", VA = "0x6689710")]
		set
		{
		}
	}

	[Token(Token = "0x6000901")]
	[Address(RVA = "0x6689770", Offset = "0x6688770", VA = "0x6689770")]
	public URPShaderStrippingSetting()
	{
	}
}
