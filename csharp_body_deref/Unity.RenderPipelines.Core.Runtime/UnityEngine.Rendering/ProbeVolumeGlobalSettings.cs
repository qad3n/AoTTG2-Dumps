// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ProbeVolumeGlobalSettings
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
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700013A")]
	public bool probeVolumeDisableStreamingAssets
	{
		[Token(Token = "0x6000AA7")]
		[Address(RVA = "0x1537420", Offset = "0x1535A20", VA = "0x181537420")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000AA8")]
		[Address(RVA = "0x2B2ABE0", Offset = "0x2B291E0", VA = "0x182B2ABE0")]
		set
		{
		}
	}

	[Token(Token = "0x6000AA9")]
	[Address(RVA = "0x18D09C0", Offset = "0x18CEFC0", VA = "0x1818D09C0")]
	public ProbeVolumeGlobalSettings()
	{
	}
}
