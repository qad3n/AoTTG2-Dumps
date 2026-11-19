// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ProbeVolumeGlobalSettings
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
[Token(Token = "0x2000138")]
[SupportedOnRenderPipeline(new Type[] { })]
[CategoryInfo(Name = "Lighting", Order = 20)]
internal class ProbeVolumeGlobalSettings : IRenderPipelineGraphicsSettings
{
	[Token(Token = "0x40005EF")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	[HideInInspector]
	private int m_Version;

	[Token(Token = "0x40005F0")]
	[FieldOffset(Offset = "0x14")]
	[SerializeField]
	[Tooltip("Enabling this will make APV baked data assets compatible with Addressables and Asset Bundles. This will also make Disk Streaming unavailable. After changing this setting, a clean rebuild may be required for data assets to be included in Adressables and Asset Bundles.")]
	private bool m_ProbeVolumeDisableStreamingAssets;

	[Token(Token = "0x17000139")]
	public int version
	{
		[Token(Token = "0x6000AA6")]
		[Address(RVA = "0x650DB30", Offset = "0x650CB30", VA = "0x650DB30", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700013A")]
	public bool probeVolumeDisableStreamingAssets
	{
		[Token(Token = "0x6000AA7")]
		[Address(RVA = "0x650DB40", Offset = "0x650CB40", VA = "0x650DB40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000AA8")]
		[Address(RVA = "0x650DB50", Offset = "0x650CB50", VA = "0x650DB50")]
		set
		{
		}
	}

	[Token(Token = "0x6000AA9")]
	[Address(RVA = "0x650DBB0", Offset = "0x650CBB0", VA = "0x650DBB0")]
	public ProbeVolumeGlobalSettings()
	{
	}
}
