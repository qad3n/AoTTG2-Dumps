// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.URPShaderStrippingSetting
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
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000227")]
	public bool stripUnusedPostProcessingVariants
	{
		[Token(Token = "0x60008FB")]
		[Address(RVA = "0x1537420", Offset = "0x1535A20", VA = "0x181537420")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60008FC")]
		[Address(RVA = "0x2CA2CB0", Offset = "0x2CA12B0", VA = "0x182CA2CB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000228")]
	public bool stripUnusedVariants
	{
		[Token(Token = "0x60008FD")]
		[Address(RVA = "0x1A78700", Offset = "0x1A76D00", VA = "0x181A78700")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60008FE")]
		[Address(RVA = "0x2CA2D20", Offset = "0x2CA1320", VA = "0x182CA2D20")]
		set
		{
		}
	}

	[Token(Token = "0x17000229")]
	public bool stripScreenCoordOverrideVariants
	{
		[Token(Token = "0x60008FF")]
		[Address(RVA = "0x29532F0", Offset = "0x29518F0", VA = "0x1829532F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000900")]
		[Address(RVA = "0x2CA2C40", Offset = "0x2CA1240", VA = "0x182CA2C40")]
		set
		{
		}
	}

	[Token(Token = "0x6000901")]
	[Address(RVA = "0x2CA2C30", Offset = "0x2CA1230", VA = "0x182CA2C30")]
	public URPShaderStrippingSetting()
	{
	}
}
