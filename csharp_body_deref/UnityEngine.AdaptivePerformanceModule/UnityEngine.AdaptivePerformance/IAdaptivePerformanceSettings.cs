// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.IAdaptivePerformanceSettings
// Update status: NEW in this game update
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
	[Tooltip("Enable Logging in Devmode")]
	[SerializeField]
	private bool m_Logging;

	[Token(Token = "0x40000FA")]
	[FieldOffset(Offset = "0x19")]
	[SerializeField]
	[Tooltip("Automatic Performance Mode")]
	private bool m_AutomaticPerformanceModeEnabled;

	[Token(Token = "0x40000FB")]
	[FieldOffset(Offset = "0x1A")]
	[Tooltip("Automatic Game Mode")]
	[SerializeField]
	private bool m_AutomaticGameModeEnabled;

	[Token(Token = "0x40000FC")]
	[FieldOffset(Offset = "0x1B")]
	[Tooltip("Enables the CPU and GPU boost mode before engine startup to decrease startup time.")]
	[SerializeField]
	private bool m_EnableBoostOnStartup;

	[Token(Token = "0x40000FD")]
	[FieldOffset(Offset = "0x1C")]
	[Tooltip("Logging Frequency (Development mode only)")]
	[Min(1f)]
	[SerializeField]
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
		[Address(RVA = "0x2E85230", Offset = "0x2E83830", VA = "0x182E85230")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001DA")]
		[Address(RVA = "0x111C9F0", Offset = "0x111AFF0", VA = "0x18111C9F0")]
		set
		{
		}
	}

	[Token(Token = "0x170000A4")]
	public bool automaticPerformanceMode
	{
		[Token(Token = "0x60001DB")]
		[Address(RVA = "0x2E85210", Offset = "0x2E83810", VA = "0x182E85210")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001DC")]
		[Address(RVA = "0x18C3360", Offset = "0x18C1960", VA = "0x1818C3360")]
		set
		{
		}
	}

	[Token(Token = "0x170000A5")]
	public bool automaticGameMode
	{
		[Token(Token = "0x60001DD")]
		[Address(RVA = "0x2E85220", Offset = "0x2E83820", VA = "0x182E85220")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001DE")]
		[Address(RVA = "0x1CB9D80", Offset = "0x1CB8380", VA = "0x181CB9D80")]
		set
		{
		}
	}

	[Token(Token = "0x170000A6")]
	public bool enableBoostOnStartup
	{
		[Token(Token = "0x60001DF")]
		[Address(RVA = "0x2E926D0", Offset = "0x2E90CD0", VA = "0x182E926D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001E0")]
		[Address(RVA = "0x2DD7CD0", Offset = "0x2DD62D0", VA = "0x182DD7CD0")]
		set
		{
		}
	}

	[Token(Token = "0x170000A7")]
	public int statsLoggingFrequencyInFrames
	{
		[Token(Token = "0x60001E1")]
		[Address(RVA = "0xAD35F0", Offset = "0xAD1BF0", VA = "0x180AD35F0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001E2")]
		[Address(RVA = "0xD23F80", Offset = "0xD22580", VA = "0x180D23F80")]
		set
		{
		}
	}

	[Token(Token = "0x170000A8")]
	public AdaptivePerformanceIndexerSettings indexerSettings
	{
		[Token(Token = "0x60001E3")]
		[Address(RVA = "0x2E85240", Offset = "0x2E83840", VA = "0x182E85240")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001E4")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		set
		{
		}
	}

	[Token(Token = "0x170000A9")]
	public AdaptivePerformanceScalerSettings scalerSettings
	{
		[Token(Token = "0x60001E5")]
		[Address(RVA = "0x2E8E8B0", Offset = "0x2E8CEB0", VA = "0x182E8E8B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001E6")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
		set
		{
		}
	}

	[Token(Token = "0x170000AA")]
	public AdaptivePerformanceScalerProfile[] ScalerProfiles
	{
		[Token(Token = "0x60001E7")]
		[Address(RVA = "0xAD2BF0", Offset = "0xAD11F0", VA = "0x180AD2BF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000AB")]
	public AdaptivePerformanceScalerProfile ActiveScalerProfile
	{
		[Token(Token = "0x60001E8")]
		[Address(RVA = "0xAD2BE0", Offset = "0xAD11E0", VA = "0x180AD2BE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001E9")]
		[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
		set
		{
		}
	}

	[Token(Token = "0x170000AC")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.AdaptivePerformanceModule" })]
	internal List<AdaptivePerformanceScaler> AddedScalerViaScan
	{
		[Token(Token = "0x60001EA")]
		[Address(RVA = "0xD0ECE0", Offset = "0xD0D2E0", VA = "0x180D0ECE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001EB")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
		set
		{
		}
	}

	[Token(Token = "0x170000AD")]
	public int defaultScalerProfilerIndex
	{
		[Token(Token = "0x60001F1")]
		[Address(RVA = "0x2E926C0", Offset = "0x2E90CC0", VA = "0x182E926C0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001F2")]
		[Address(RVA = "0xB3E0D0", Offset = "0xB3C6D0", VA = "0x180B3E0D0")]
		set
		{
		}
	}

	[Token(Token = "0x60001EC")]
	[Address(RVA = "0x2E91640", Offset = "0x2E8FC40", VA = "0x182E91640")]
	public void AddScalerProfileWithDefaultScalers(string name = "")
	{
	}

	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x2E91EB0", Offset = "0x2E904B0", VA = "0x182E91EB0")]
	public void DeleteScalerProfileAt(int index)
	{
	}

	[Token(Token = "0x60001EE")]
	[Address(RVA = "0x2E92140", Offset = "0x2E90740", VA = "0x182E92140")]
	public void LoadScalerProfile(string scalerProfileName)
	{
	}

	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x2E91830", Offset = "0x2E8FE30", VA = "0x182E91830")]
	private bool ApplyScalerProfileToAllScalers()
	{
		return default(bool);
	}

	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x2E91FF0", Offset = "0x2E905F0", VA = "0x182E91FF0")]
	public string[] GetAvailableScalerProfiles()
	{
		return null;
	}

	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x2E92550", Offset = "0x2E90B50", VA = "0x182E92550")]
	public void OnEnable()
	{
	}

	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x2E92560", Offset = "0x2E90B60", VA = "0x182E92560")]
	public IAdaptivePerformanceSettings()
	{
	}
}
