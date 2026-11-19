// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.RenderGraphSettings
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
[Token(Token = "0x200019A")]
[SupportedOnRenderPipeline(typeof(UniversalRenderPipelineAsset))]
[CategoryInfo(Name = "Render Graph", Order = 50)]
[ElementInfo(Order = -10)]
public class RenderGraphSettings : IRenderPipelineGraphicsSettings
{
	[Token(Token = "0x200019B")]
	internal enum Version
	{
		[Token(Token = "0x4000906")]
		Initial
	}

	[Token(Token = "0x4000903")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	[HideInInspector]
	private Version m_Version;

	[Token(Token = "0x4000904")]
	[FieldOffset(Offset = "0x14")]
	[SerializeField]
	[Tooltip("When enabled, URP does not use the Render Graph API to construct and execute the frame. Use this option only for compatibility purposes.")]
	[RecreatePipelineOnChange]
	private bool m_EnableRenderCompatibilityMode;

	[Token(Token = "0x17000221")]
	public int version
	{
		[Token(Token = "0x60008F0")]
		[Address(RVA = "0x6689520", Offset = "0x6688520", VA = "0x6689520", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000222")]
	private bool UnityEngine_002ERendering_002EIRenderPipelineGraphicsSettings_002EisAvailableInPlayerBuild
	{
		[Token(Token = "0x60008F1")]
		[Address(RVA = "0x6689530", Offset = "0x6688530", VA = "0x6689530", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000223")]
	public bool enableRenderCompatibilityMode
	{
		[Token(Token = "0x60008F2")]
		[Address(RVA = "0x6689540", Offset = "0x6688540", VA = "0x6689540")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60008F3")]
		[Address(RVA = "0x6689550", Offset = "0x6688550", VA = "0x6689550")]
		[Obsolete("Compatibility Mode is being removed. This setter is not accessible without the define URP_COMPATIBILITY_MODE. #from(6000.3) #breakingFrom(6000.3)", true)]
		set
		{
		}
	}

	[Token(Token = "0x60008F4")]
	[Address(RVA = "0x6689560", Offset = "0x6688560", VA = "0x6689560")]
	internal void SetCompatibilityModeFromUpgrade(bool value)
	{
	}

	[Token(Token = "0x60008F5")]
	[Address(RVA = "0x6689570", Offset = "0x6688570", VA = "0x6689570")]
	public RenderGraphSettings()
	{
	}
}
