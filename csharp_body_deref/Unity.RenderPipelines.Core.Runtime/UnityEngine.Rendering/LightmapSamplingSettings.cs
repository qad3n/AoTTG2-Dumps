// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.LightmapSamplingSettings
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Categorization;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x200017E")]
[SupportedOnRenderPipeline(new Type[] { })]
[CategoryInfo(Name = "Lighting", Order = 20)]
public class LightmapSamplingSettings : IRenderPipelineGraphicsSettings
{
	[Token(Token = "0x4000788")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	[HideInInspector]
	private int m_Version;

	[Token(Token = "0x4000789")]
	[FieldOffset(Offset = "0x14")]
	[SerializeField]
	[Tooltip("Use Bicubic Lightmap Sampling. Enabling this will improve the appearance of lightmaps, but may worsen performance on lower end platforms.")]
	private bool m_UseBicubicLightmapSampling;

	[Token(Token = "0x17000166")]
	private int UnityEngine_002ERendering_002EIRenderPipelineGraphicsSettings_002Eversion
	{
		[Token(Token = "0x6000B9C")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000167")]
	private bool UnityEngine_002ERendering_002EIRenderPipelineGraphicsSettings_002EisAvailableInPlayerBuild
	{
		[Token(Token = "0x6000B9D")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000168")]
	public bool useBicubicLightmapSampling
	{
		[Token(Token = "0x6000B9E")]
		[Address(RVA = "0x1537420", Offset = "0x1535A20", VA = "0x181537420")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000B9F")]
		[Address(RVA = "0x2B41520", Offset = "0x2B3FB20", VA = "0x182B41520")]
		set
		{
		}
	}

	[Token(Token = "0x6000BA0")]
	[Address(RVA = "0x18D09C0", Offset = "0x18CEFC0", VA = "0x1818D09C0")]
	public LightmapSamplingSettings()
	{
	}
}
