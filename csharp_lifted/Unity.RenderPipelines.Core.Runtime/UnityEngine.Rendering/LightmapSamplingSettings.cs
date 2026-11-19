// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.LightmapSamplingSettings
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x65256F0", Offset = "0x65246F0", VA = "0x65256F0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000167")]
	private bool UnityEngine_002ERendering_002EIRenderPipelineGraphicsSettings_002EisAvailableInPlayerBuild
	{
		[Token(Token = "0x6000B9D")]
		[Address(RVA = "0x6525700", Offset = "0x6524700", VA = "0x6525700", Slot = "5")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000168")]
	public bool useBicubicLightmapSampling
	{
		[Token(Token = "0x6000B9E")]
		[Address(RVA = "0x6525710", Offset = "0x6524710", VA = "0x6525710")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000B9F")]
		[Address(RVA = "0x6525720", Offset = "0x6524720", VA = "0x6525720")]
		set
		{
		}
	}

	[Token(Token = "0x6000BA0")]
	[Address(RVA = "0x6525780", Offset = "0x6524780", VA = "0x6525780")]
	public LightmapSamplingSettings()
	{
	}
}
