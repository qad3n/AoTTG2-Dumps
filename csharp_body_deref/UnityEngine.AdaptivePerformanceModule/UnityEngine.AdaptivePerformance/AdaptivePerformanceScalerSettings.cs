// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.AdaptivePerformanceScalerSettings
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using Il2CppDummyDll;

namespace UnityEngine.AdaptivePerformance;

[Serializable]
[Token(Token = "0x2000038")]
public class AdaptivePerformanceScalerSettings
{
	[Token(Token = "0x40000DD")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	[Tooltip("Settings for a scaler used by the Indexer to adjust the application update rate using Application.TargetFramerate")]
	private AdaptivePerformanceScalerSettingsBase m_AdaptiveFramerate;

	[Token(Token = "0x40000DE")]
	[FieldOffset(Offset = "0x18")]
	[Tooltip("Settings for a scaler used by the Indexer to adjust the resolution of all render targets that allow dynamic resolution.")]
	[SerializeField]
	private AdaptivePerformanceScalerSettingsBase m_AdaptiveResolution;

	[Token(Token = "0x40000DF")]
	[FieldOffset(Offset = "0x20")]
	[Tooltip("Settings for a scaler used by the Indexer to control if dynamic batching is enabled.")]
	[SerializeField]
	private AdaptivePerformanceScalerSettingsBase m_AdaptiveBatching;

	[Token(Token = "0x40000E0")]
	[FieldOffset(Offset = "0x28")]
	[Tooltip("Settings for a scaler used by the Indexer for adjusting at what distance LODs are switched.")]
	[SerializeField]
	private AdaptivePerformanceScalerSettingsBase m_AdaptiveLOD;

	[Token(Token = "0x40000E1")]
	[FieldOffset(Offset = "0x30")]
	[Tooltip("Settings for a scaler used by the Indexer to adjust the size of the palette used for color grading in URP.")]
	[SerializeField]
	private AdaptivePerformanceScalerSettingsBase m_AdaptiveLut;

	[Token(Token = "0x40000E2")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	[Tooltip("Settings for a scaler used by the Indexer to adjust the level of antialiasing.")]
	private AdaptivePerformanceScalerSettingsBase m_AdaptiveMSAA;

	[Token(Token = "0x40000E3")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	[Tooltip("Settings for a scaler used by the Indexer to adjust the number of shadow cascades to be used.")]
	private AdaptivePerformanceScalerSettingsBase m_AdaptiveShadowCascade;

	[Token(Token = "0x40000E4")]
	private const string obsoleteMsg = "AdaptiveShadowCascades has been renamed. Please use AdaptiveShadowCascade. (UnityUpgradable) -> AdaptiveShadowCascade";

	[Token(Token = "0x40000E5")]
	[FieldOffset(Offset = "0x48")]
	[Tooltip("Settings for a scaler used by the Indexer to change the distance at which shadows are rendered.")]
	[SerializeField]
	private AdaptivePerformanceScalerSettingsBase m_AdaptiveShadowDistance;

	[Token(Token = "0x40000E6")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	[Tooltip("Settings for a scaler used by the Indexer to adjust the resolution of shadow maps.")]
	private AdaptivePerformanceScalerSettingsBase m_AdaptiveShadowmapResolution;

	[Token(Token = "0x40000E7")]
	[FieldOffset(Offset = "0x58")]
	[SerializeField]
	[Tooltip("Settings for a scaler used by the Indexer to adjust the quality of shadows.")]
	private AdaptivePerformanceScalerSettingsBase m_AdaptiveShadowQuality;

	[Token(Token = "0x40000E8")]
	[FieldOffset(Offset = "0x60")]
	[Tooltip("Settings for a scaler used by the Indexer to change if objects in the scene are sorted by depth before rendering to reduce overdraw.")]
	[SerializeField]
	private AdaptivePerformanceScalerSettingsBase m_AdaptiveSorting;

	[Token(Token = "0x40000E9")]
	[FieldOffset(Offset = "0x68")]
	[Tooltip("Settings for a scaler used by the Indexer to disable transparent objects rendering")]
	[SerializeField]
	private AdaptivePerformanceScalerSettingsBase m_AdaptiveTransparency;

	[Token(Token = "0x40000EA")]
	[FieldOffset(Offset = "0x70")]
	[SerializeField]
	[Tooltip("Settings for a scaler used by the Indexer to change the view distance")]
	private AdaptivePerformanceScalerSettingsBase m_AdaptiveViewDistance;

	[Token(Token = "0x40000EB")]
	[FieldOffset(Offset = "0x78")]
	[Tooltip("Settings for a scaler used by the Indexer to change physics properties")]
	[SerializeField]
	private AdaptivePerformanceScalerSettingsBase m_AdaptivePhysics;

	[Token(Token = "0x40000EC")]
	[FieldOffset(Offset = "0x80")]
	[SerializeField]
	[Tooltip("Settings for a scaler used by the Indexer to change decal properties")]
	private AdaptivePerformanceScalerSettingsBase m_AdaptiveDecals;

	[Token(Token = "0x40000ED")]
	[FieldOffset(Offset = "0x88")]
	[SerializeField]
	[Tooltip("Settings for a scaler used by the Indexer to change the layer culling distance")]
	private AdaptivePerformanceScalerSettingsBase m_AdaptiveLayerCulling;

	[Token(Token = "0x40000EE")]
	[FieldOffset(Offset = "0x90")]
	private AdaptivePerformanceScalerSettingsBase[] m_DefaultScalerSettings;

	[Token(Token = "0x40000EF")]
	[FieldOffset(Offset = "0x98")]
	private ReadOnlyCollection<AdaptivePerformanceScalerSettingsBase> m_ReadOnlyDefaultScalerSettings;

	[Token(Token = "0x40000F0")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly List<Type> k_DefaultScalerNames;

	[Token(Token = "0x17000089")]
	public AdaptivePerformanceScalerSettingsBase AdaptiveFramerate
	{
		[Token(Token = "0x60001A3")]
		[Address(RVA = "0x172DEB0", Offset = "0x172C4B0", VA = "0x18172DEB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001A4")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		set
		{
		}
	}

	[Token(Token = "0x1700008A")]
	public AdaptivePerformanceScalerSettingsBase AdaptiveResolution
	{
		[Token(Token = "0x60001A5")]
		[Address(RVA = "0x1536BF0", Offset = "0x15351F0", VA = "0x181536BF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001A6")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		set
		{
		}
	}

	[Token(Token = "0x1700008B")]
	public AdaptivePerformanceScalerSettingsBase AdaptiveBatching
	{
		[Token(Token = "0x60001A7")]
		[Address(RVA = "0x2E85240", Offset = "0x2E83840", VA = "0x182E85240")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001A8")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700008C")]
	public AdaptivePerformanceScalerSettingsBase AdaptiveLOD
	{
		[Token(Token = "0x60001A9")]
		[Address(RVA = "0x2E8E8B0", Offset = "0x2E8CEB0", VA = "0x182E8E8B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001AA")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700008D")]
	public AdaptivePerformanceScalerSettingsBase AdaptiveLut
	{
		[Token(Token = "0x60001AB")]
		[Address(RVA = "0xD0ECE0", Offset = "0xD0D2E0", VA = "0x180D0ECE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001AC")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
		set
		{
		}
	}

	[Token(Token = "0x1700008E")]
	public AdaptivePerformanceScalerSettingsBase AdaptiveMSAA
	{
		[Token(Token = "0x60001AD")]
		[Address(RVA = "0xAD2BE0", Offset = "0xAD11E0", VA = "0x180AD2BE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001AE")]
		[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700008F")]
	[Obsolete("AdaptiveShadowCascades has been renamed. Please use AdaptiveShadowCascade. (UnityUpgradable) -> AdaptiveShadowCascade", false)]
	public AdaptivePerformanceScalerSettingsBase AdaptiveShadowCascades
	{
		[Token(Token = "0x60001AF")]
		[Address(RVA = "0xAD2BF0", Offset = "0xAD11F0", VA = "0x180AD2BF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000090")]
	public AdaptivePerformanceScalerSettingsBase AdaptiveShadowCascade
	{
		[Token(Token = "0x60001B0")]
		[Address(RVA = "0xAD2BF0", Offset = "0xAD11F0", VA = "0x180AD2BF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B1")]
		[Address(RVA = "0xE8F700", Offset = "0xE8DD00", VA = "0x180E8F700")]
		set
		{
		}
	}

	[Token(Token = "0x17000091")]
	public AdaptivePerformanceScalerSettingsBase AdaptiveShadowDistance
	{
		[Token(Token = "0x60001B2")]
		[Address(RVA = "0x2E8E8E0", Offset = "0x2E8CEE0", VA = "0x182E8E8E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B3")]
		[Address(RVA = "0xF1DB10", Offset = "0xF1C110", VA = "0x180F1DB10")]
		set
		{
		}
	}

	[Token(Token = "0x17000092")]
	public AdaptivePerformanceScalerSettingsBase AdaptiveShadowmapResolution
	{
		[Token(Token = "0x60001B4")]
		[Address(RVA = "0x2E8E900", Offset = "0x2E8CF00", VA = "0x182E8E900")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B5")]
		[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000093")]
	public AdaptivePerformanceScalerSettingsBase AdaptiveShadowQuality
	{
		[Token(Token = "0x60001B6")]
		[Address(RVA = "0x2E8E8F0", Offset = "0x2E8CEF0", VA = "0x182E8E8F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B7")]
		[Address(RVA = "0xA37140", Offset = "0xA35740", VA = "0x180A37140")]
		set
		{
		}
	}

	[Token(Token = "0x17000094")]
	public AdaptivePerformanceScalerSettingsBase AdaptiveSorting
	{
		[Token(Token = "0x60001B8")]
		[Address(RVA = "0x2E8E910", Offset = "0x2E8CF10", VA = "0x182E8E910")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B9")]
		[Address(RVA = "0x152F2F0", Offset = "0x152D8F0", VA = "0x18152F2F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000095")]
	public AdaptivePerformanceScalerSettingsBase AdaptiveTransparency
	{
		[Token(Token = "0x60001BA")]
		[Address(RVA = "0x2E8E920", Offset = "0x2E8CF20", VA = "0x182E8E920")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001BB")]
		[Address(RVA = "0xB48790", Offset = "0xB46D90", VA = "0x180B48790")]
		set
		{
		}
	}

	[Token(Token = "0x17000096")]
	public AdaptivePerformanceScalerSettingsBase AdaptiveViewDistance
	{
		[Token(Token = "0x60001BC")]
		[Address(RVA = "0x2E8E930", Offset = "0x2E8CF30", VA = "0x182E8E930")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001BD")]
		[Address(RVA = "0xB48780", Offset = "0xB46D80", VA = "0x180B48780")]
		set
		{
		}
	}

	[Token(Token = "0x17000097")]
	public AdaptivePerformanceScalerSettingsBase AdaptivePhysics
	{
		[Token(Token = "0x60001BE")]
		[Address(RVA = "0x2E8E8D0", Offset = "0x2E8CED0", VA = "0x182E8E8D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001BF")]
		[Address(RVA = "0xCDB690", Offset = "0xCD9C90", VA = "0x180CDB690")]
		set
		{
		}
	}

	[Token(Token = "0x17000098")]
	public AdaptivePerformanceScalerSettingsBase AdaptiveDecals
	{
		[Token(Token = "0x60001C0")]
		[Address(RVA = "0x2E8E8A0", Offset = "0x2E8CEA0", VA = "0x182E8E8A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001C1")]
		[Address(RVA = "0x58A960", Offset = "0x588F60", VA = "0x18058A960")]
		set
		{
		}
	}

	[Token(Token = "0x17000099")]
	public AdaptivePerformanceScalerSettingsBase AdaptiveLayerCulling
	{
		[Token(Token = "0x60001C2")]
		[Address(RVA = "0x2E8E8C0", Offset = "0x2E8CEC0", VA = "0x182E8E8C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001C3")]
		[Address(RVA = "0xB5BE30", Offset = "0xB5A430", VA = "0x180B5BE30")]
		set
		{
		}
	}

	[Token(Token = "0x1700009A")]
	public IReadOnlyList<AdaptivePerformanceScalerSettingsBase> DefaultScalerSettings
	{
		[Token(Token = "0x60001C5")]
		[Address(RVA = "0x2E8E940", Offset = "0x2E8CF40", VA = "0x182E8E940")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001A1")]
	[Address(RVA = "0x2E8CC60", Offset = "0x2E8B260", VA = "0x182E8CC60")]
	public void ApplySettings(AdaptivePerformanceScalerSettings settings)
	{
	}

	[Token(Token = "0x60001A2")]
	[Address(RVA = "0x2E8CC10", Offset = "0x2E8B210", VA = "0x182E8CC10")]
	private void ApplySettingsBase(AdaptivePerformanceScalerSettingsBase destination, AdaptivePerformanceScalerSettingsBase sources)
	{
	}

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x2E8D1B0", Offset = "0x2E8B7B0", VA = "0x182E8D1B0")]
	private void SyncDefaultScalerSettings()
	{
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x2E8E050", Offset = "0x2E8C650", VA = "0x182E8E050")]
	public AdaptivePerformanceScalerSettings()
	{
	}
}
