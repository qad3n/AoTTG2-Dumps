// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.AdaptivePerformance;

[Token(Token = "0x200003A")]
public class IAdaptivePerformanceSettings : ScriptableObject
{
	[Token(Token = "0x40000F9")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	[Tooltip("Enable Logging in Devmode")]
	private bool m_Logging;

	[Token(Token = "0x40000FA")]
	[FieldOffset(Offset = "0x19")]
	[Tooltip("Automatic Performance Mode")]
	[SerializeField]
	private bool m_AutomaticPerformanceModeEnabled;

	[Token(Token = "0x40000FB")]
	[FieldOffset(Offset = "0x1A")]
	[Tooltip("Automatic Game Mode")]
	[SerializeField]
	private bool m_AutomaticGameModeEnabled;

	[Token(Token = "0x40000FC")]
	[FieldOffset(Offset = "0x1B")]
	[SerializeField]
	[Tooltip("Enables the CPU and GPU boost mode before engine startup to decrease startup time.")]
	private bool m_EnableBoostOnStartup;

	[Token(Token = "0x40000FD")]
	[FieldOffset(Offset = "0x1C")]
	[SerializeField]
	[Min(1f)]
	[Tooltip("Logging Frequency (Development mode only)")]
	private int m_StatsLoggingFrequencyInFrames;

	[Token(Token = "0x40000FE")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	[Tooltip("Indexer Settings")]
	private AdaptivePerformanceIndexerSettings m_IndexerSettings;

	[Token(Token = "0x40000FF")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	[Tooltip("Scaler Settings")]
	private AdaptivePerformanceScalerSettings m_ScalerSettings;

	[Token(Token = "0x4000100")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	private List<AdaptivePerformanceScaler> m_AddedScalerViaScan;

	[Token(Token = "0x4000101")]
	[FieldOffset(Offset = "0x38")]
	[SerializeReference]
	private AdaptivePerformanceScalerProfile m_ActiveScalerProfile;

	[Token(Token = "0x4000102")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	private AdaptivePerformanceScalerProfile[] m_scalerProfileList;

	[Token(Token = "0x4000103")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	internal int m_DefaultScalerProfilerIndex;

	[Token(Token = "0x4000104")]
	[FieldOffset(Offset = "0x4C")]
	[SerializeField]
	private int k_AssetVersion;

	[Token(Token = "0x170000A3")]
	public bool logging
	{
		[Token(Token = "0x60001D9")]
		[Address(RVA = "0x68829B0", Offset = "0x68819B0", VA = "0x68829B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001DA")]
		[Address(RVA = "0x688E370", Offset = "0x688D370", VA = "0x688E370")]
		set
		{
		}
	}

	[Token(Token = "0x170000A4")]
	public bool automaticPerformanceMode
	{
		[Token(Token = "0x60001DB")]
		[Address(RVA = "0x6882990", Offset = "0x6881990", VA = "0x6882990")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001DC")]
		[Address(RVA = "0x688E380", Offset = "0x688D380", VA = "0x688E380")]
		set
		{
		}
	}

	[Token(Token = "0x170000A5")]
	public bool automaticGameMode
	{
		[Token(Token = "0x60001DD")]
		[Address(RVA = "0x6882BE0", Offset = "0x6881BE0", VA = "0x6882BE0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001DE")]
		[Address(RVA = "0x688E390", Offset = "0x688D390", VA = "0x688E390")]
		set
		{
		}
	}

	[Token(Token = "0x170000A6")]
	public bool enableBoostOnStartup
	{
		[Token(Token = "0x60001DF")]
		[Address(RVA = "0x688E3A0", Offset = "0x688D3A0", VA = "0x688E3A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001E0")]
		[Address(RVA = "0x688E3B0", Offset = "0x688D3B0", VA = "0x688E3B0")]
		set
		{
		}
	}

	[Token(Token = "0x170000A7")]
	public int statsLoggingFrequencyInFrames
	{
		[Token(Token = "0x60001E1")]
		[Address(RVA = "0x68829A0", Offset = "0x68819A0", VA = "0x68829A0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001E2")]
		[Address(RVA = "0x688E3C0", Offset = "0x688D3C0", VA = "0x688E3C0")]
		set
		{
		}
	}

	[Token(Token = "0x170000A8")]
	public AdaptivePerformanceIndexerSettings indexerSettings
	{
		[Token(Token = "0x60001E3")]
		[Address(RVA = "0x6887740", Offset = "0x6886740", VA = "0x6887740")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001E4")]
		[Address(RVA = "0x688E3D0", Offset = "0x688D3D0", VA = "0x688E3D0")]
		set
		{
		}
	}

	[Token(Token = "0x170000A9")]
	public AdaptivePerformanceScalerSettings scalerSettings
	{
		[Token(Token = "0x60001E5")]
		[Address(RVA = "0x688E3E0", Offset = "0x688D3E0", VA = "0x688E3E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001E6")]
		[Address(RVA = "0x688E3F0", Offset = "0x688D3F0", VA = "0x688E3F0")]
		set
		{
		}
	}

	[Token(Token = "0x170000AA")]
	public AdaptivePerformanceScalerProfile[] ScalerProfiles
	{
		[Token(Token = "0x60001E7")]
		[Address(RVA = "0x6883F90", Offset = "0x6882F90", VA = "0x6883F90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000AB")]
	public AdaptivePerformanceScalerProfile ActiveScalerProfile
	{
		[Token(Token = "0x60001E8")]
		[Address(RVA = "0x688E400", Offset = "0x688D400", VA = "0x688E400")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001E9")]
		[Address(RVA = "0x688E410", Offset = "0x688D410", VA = "0x688E410")]
		set
		{
		}
	}

	[Token(Token = "0x170000AC")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.AdaptivePerformanceModule" })]
	internal List<AdaptivePerformanceScaler> AddedScalerViaScan
	{
		[Token(Token = "0x60001EA")]
		[Address(RVA = "0x68843B0", Offset = "0x68833B0", VA = "0x68843B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001EB")]
		[Address(RVA = "0x688E420", Offset = "0x688D420", VA = "0x688E420")]
		set
		{
		}
	}

	[Token(Token = "0x170000AD")]
	public int defaultScalerProfilerIndex
	{
		[Token(Token = "0x60001F1")]
		[Address(RVA = "0x68821A0", Offset = "0x68811A0", VA = "0x68821A0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001F2")]
		[Address(RVA = "0x688EF20", Offset = "0x688DF20", VA = "0x688EF20")]
		set
		{
		}
	}

	[Token(Token = "0x60001EC")]
	[Address(RVA = "0x688E430", Offset = "0x688D430", VA = "0x688E430")]
	public void AddScalerProfileWithDefaultScalers(string name = "")
	{
	}

	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x688E640", Offset = "0x688D640", VA = "0x688E640")]
	public void DeleteScalerProfileAt(int index)
	{
	}

	[Token(Token = "0x60001EE")]
	[Address(RVA = "0x68821B0", Offset = "0x68811B0", VA = "0x68821B0")]
	public void LoadScalerProfile(string scalerProfileName)
	{
	}

	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x688E7C0", Offset = "0x688D7C0", VA = "0x688E7C0")]
	private bool ApplyScalerProfileToAllScalers()
	{
		return default(bool);
	}

	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x6881FC0", Offset = "0x6880FC0", VA = "0x6881FC0")]
	public string[] GetAvailableScalerProfiles()
	{
		return null;
	}

	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x688EF30", Offset = "0x688DF30", VA = "0x688EF30")]
	public void OnEnable()
	{
	}

	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x688EF40", Offset = "0x688DF40", VA = "0x688EF40")]
	public IAdaptivePerformanceSettings()
	{
	}
}
