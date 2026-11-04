// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.RenderGraphSettings
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
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000222")]
	private bool UnityEngine_002ERendering_002EIRenderPipelineGraphicsSettings_002EisAvailableInPlayerBuild
	{
		[Token(Token = "0x60008F1")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000223")]
	public bool enableRenderCompatibilityMode
	{
		[Token(Token = "0x60008F2")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60008F3")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
		[Obsolete("Compatibility Mode is being removed. This setter is not accessible without the define URP_COMPATIBILITY_MODE. #from(6000.3) #breakingFrom(6000.3)", true)]
		set
		{
		}
	}

	[Token(Token = "0x60008F4")]
	[Address(RVA = "0x1A78710", Offset = "0x1A76D10", VA = "0x181A78710")]
	internal void SetCompatibilityModeFromUpgrade(bool value)
	{
	}

	[Token(Token = "0x60008F5")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public RenderGraphSettings()
	{
	}
}
