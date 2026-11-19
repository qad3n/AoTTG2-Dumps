// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.AdaptivePerformanceScalerSettings
// Update status: unchanged since the previous dump
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
	[Tooltip("Settings for a scaler used by the Indexer to adjust the application update rate using Application.TargetFramerate")]
	[SerializeField]
	private AdaptivePerformanceScalerSettingsBase m_AdaptiveFramerate;

	[Token(Token = "0x40000DE")]
	[FieldOffset(Offset = "0x18")]
	[Tooltip("Settings for a scaler used by the Indexer to adjust the resolution of all render targets that allow dynamic resolution.")]
	[SerializeField]
	private AdaptivePerformanceScalerSettingsBase m_AdaptiveResolution;

	[Token(Token = "0x40000DF")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	[Tooltip("Settings for a scaler used by the Indexer to control if dynamic batching is enabled.")]
	private AdaptivePerformanceScalerSettingsBase m_AdaptiveBatching;

	[Token(Token = "0x40000E0")]
	[FieldOffset(Offset = "0x28")]
	[Tooltip("Settings for a scaler used by the Indexer for adjusting at what distance LODs are switched.")]
	[SerializeField]
	private AdaptivePerformanceScalerSettingsBase m_AdaptiveLOD;

	[Token(Token = "0x40000E1")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	[Tooltip("Settings for a scaler used by the Indexer to adjust the size of the palette used for color grading in URP.")]
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
	[SerializeField]
	[Tooltip("Settings for a scaler used by the Indexer to change the distance at which shadows are rendered.")]
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
	[SerializeField]
	[Tooltip("Settings for a scaler used by the Indexer to change if objects in the scene are sorted by depth before rendering to reduce overdraw.")]
	private AdaptivePerformanceScalerSettingsBase m_AdaptiveSorting;

	[Token(Token = "0x40000E9")]
	[FieldOffset(Offset = "0x68")]
	[SerializeField]
	[Tooltip("Settings for a scaler used by the Indexer to disable transparent objects rendering")]
	private AdaptivePerformanceScalerSettingsBase m_AdaptiveTransparency;

	[Token(Token = "0x40000EA")]
	[FieldOffset(Offset = "0x70")]
	[Tooltip("Settings for a scaler used by the Indexer to change the view distance")]
	[SerializeField]
	private AdaptivePerformanceScalerSettingsBase m_AdaptiveViewDistance;

	[Token(Token = "0x40000EB")]
	[FieldOffset(Offset = "0x78")]
	[SerializeField]
	[Tooltip("Settings for a scaler used by the Indexer to change physics properties")]
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
		[Address(RVA = "0x688D3A0", Offset = "0x688C3A0", VA = "0x688D3A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001A4")]
		[Address(RVA = "0x688D4E0", Offset = "0x688C4E0", VA = "0x688D4E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700008A")]
	public AdaptivePerformanceScalerSettingsBase AdaptiveResolution
	{
		[Token(Token = "0x60001A5")]
		[Address(RVA = "0x688D430", Offset = "0x688C430", VA = "0x688D430")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001A6")]
		[Address(RVA = "0x688D4F0", Offset = "0x688C4F0", VA = "0x688D4F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700008B")]
	public AdaptivePerformanceScalerSettingsBase AdaptiveBatching
	{
		[Token(Token = "0x60001A7")]
		[Address(RVA = "0x688D3F0", Offset = "0x688C3F0", VA = "0x688D3F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001A8")]
		[Address(RVA = "0x688D500", Offset = "0x688C500", VA = "0x688D500")]
		set
		{
		}
	}

	[Token(Token = "0x1700008C")]
	public AdaptivePerformanceScalerSettingsBase AdaptiveLOD
	{
		[Token(Token = "0x60001A9")]
		[Address(RVA = "0x688D400", Offset = "0x688C400", VA = "0x688D400")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001AA")]
		[Address(RVA = "0x688D510", Offset = "0x688C510", VA = "0x688D510")]
		set
		{
		}
	}

	[Token(Token = "0x1700008D")]
	public AdaptivePerformanceScalerSettingsBase AdaptiveLut
	{
		[Token(Token = "0x60001AB")]
		[Address(RVA = "0x688D410", Offset = "0x688C410", VA = "0x688D410")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001AC")]
		[Address(RVA = "0x688D520", Offset = "0x688C520", VA = "0x688D520")]
		set
		{
		}
	}

	[Token(Token = "0x1700008E")]
	public AdaptivePerformanceScalerSettingsBase AdaptiveMSAA
	{
		[Token(Token = "0x60001AD")]
		[Address(RVA = "0x688D420", Offset = "0x688C420", VA = "0x688D420")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001AE")]
		[Address(RVA = "0x688D530", Offset = "0x688C530", VA = "0x688D530")]
		set
		{
		}
	}

	[Token(Token = "0x1700008F")]
	[Obsolete("AdaptiveShadowCascades has been renamed. Please use AdaptiveShadowCascade. (UnityUpgradable) -> AdaptiveShadowCascade", false)]
	public AdaptivePerformanceScalerSettingsBase AdaptiveShadowCascades
	{
		[Token(Token = "0x60001AF")]
		[Address(RVA = "0x688D540", Offset = "0x688C540", VA = "0x688D540")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000090")]
	public AdaptivePerformanceScalerSettingsBase AdaptiveShadowCascade
	{
		[Token(Token = "0x60001B0")]
		[Address(RVA = "0x688D440", Offset = "0x688C440", VA = "0x688D440")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B1")]
		[Address(RVA = "0x688D550", Offset = "0x688C550", VA = "0x688D550")]
		set
		{
		}
	}

	[Token(Token = "0x17000091")]
	public AdaptivePerformanceScalerSettingsBase AdaptiveShadowDistance
	{
		[Token(Token = "0x60001B2")]
		[Address(RVA = "0x688D450", Offset = "0x688C450", VA = "0x688D450")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B3")]
		[Address(RVA = "0x688D560", Offset = "0x688C560", VA = "0x688D560")]
		set
		{
		}
	}

	[Token(Token = "0x17000092")]
	public AdaptivePerformanceScalerSettingsBase AdaptiveShadowmapResolution
	{
		[Token(Token = "0x60001B4")]
		[Address(RVA = "0x688D460", Offset = "0x688C460", VA = "0x688D460")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B5")]
		[Address(RVA = "0x688D570", Offset = "0x688C570", VA = "0x688D570")]
		set
		{
		}
	}

	[Token(Token = "0x17000093")]
	public AdaptivePerformanceScalerSettingsBase AdaptiveShadowQuality
	{
		[Token(Token = "0x60001B6")]
		[Address(RVA = "0x688D470", Offset = "0x688C470", VA = "0x688D470")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B7")]
		[Address(RVA = "0x688D580", Offset = "0x688C580", VA = "0x688D580")]
		set
		{
		}
	}

	[Token(Token = "0x17000094")]
	public AdaptivePerformanceScalerSettingsBase AdaptiveSorting
	{
		[Token(Token = "0x60001B8")]
		[Address(RVA = "0x688D490", Offset = "0x688C490", VA = "0x688D490")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B9")]
		[Address(RVA = "0x688D590", Offset = "0x688C590", VA = "0x688D590")]
		set
		{
		}
	}

	[Token(Token = "0x17000095")]
	public AdaptivePerformanceScalerSettingsBase AdaptiveTransparency
	{
		[Token(Token = "0x60001BA")]
		[Address(RVA = "0x688D480", Offset = "0x688C480", VA = "0x688D480")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001BB")]
		[Address(RVA = "0x688D5A0", Offset = "0x688C5A0", VA = "0x688D5A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000096")]
	public AdaptivePerformanceScalerSettingsBase AdaptiveViewDistance
	{
		[Token(Token = "0x60001BC")]
		[Address(RVA = "0x688D4A0", Offset = "0x688C4A0", VA = "0x688D4A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001BD")]
		[Address(RVA = "0x688D5B0", Offset = "0x688C5B0", VA = "0x688D5B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000097")]
	public AdaptivePerformanceScalerSettingsBase AdaptivePhysics
	{
		[Token(Token = "0x60001BE")]
		[Address(RVA = "0x688D4B0", Offset = "0x688C4B0", VA = "0x688D4B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001BF")]
		[Address(RVA = "0x688D5C0", Offset = "0x688C5C0", VA = "0x688D5C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000098")]
	public AdaptivePerformanceScalerSettingsBase AdaptiveDecals
	{
		[Token(Token = "0x60001C0")]
		[Address(RVA = "0x688D4D0", Offset = "0x688C4D0", VA = "0x688D4D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001C1")]
		[Address(RVA = "0x688D5D0", Offset = "0x688C5D0", VA = "0x688D5D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000099")]
	public AdaptivePerformanceScalerSettingsBase AdaptiveLayerCulling
	{
		[Token(Token = "0x60001C2")]
		[Address(RVA = "0x688D4C0", Offset = "0x688C4C0", VA = "0x688D4C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001C3")]
		[Address(RVA = "0x688D5E0", Offset = "0x688C5E0", VA = "0x688D5E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700009A")]
	public IReadOnlyList<AdaptivePerformanceScalerSettingsBase> DefaultScalerSettings
	{
		[Token(Token = "0x60001C5")]
		[Address(RVA = "0x688DB20", Offset = "0x688CB20", VA = "0x688DB20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001A1")]
	[Address(RVA = "0x688CF60", Offset = "0x688BF60", VA = "0x688CF60")]
	public void ApplySettings(AdaptivePerformanceScalerSettings settings)
	{
	}

	[Token(Token = "0x60001A2")]
	[Address(RVA = "0x688D3B0", Offset = "0x688C3B0", VA = "0x688D3B0")]
	private void ApplySettingsBase(AdaptivePerformanceScalerSettingsBase destination, AdaptivePerformanceScalerSettingsBase sources)
	{
	}

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x688D600", Offset = "0x688C600", VA = "0x688D600")]
	private void SyncDefaultScalerSettings()
	{
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x688C1E0", Offset = "0x688B1E0", VA = "0x688C1E0")]
	public AdaptivePerformanceScalerSettings()
	{
	}
}
