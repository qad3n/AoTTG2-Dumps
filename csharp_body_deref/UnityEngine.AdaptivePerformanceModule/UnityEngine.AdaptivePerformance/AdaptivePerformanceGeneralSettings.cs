// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.AdaptivePerformanceGeneralSettings
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.AdaptivePerformance;

[Token(Token = "0x2000032")]
public class AdaptivePerformanceGeneralSettings : ScriptableObject
{
	[Token(Token = "0x40000C5")]
	[FieldOffset(Offset = "0x0")]
	public static string k_SettingsKey;

	[Token(Token = "0x40000C6")]
	[FieldOffset(Offset = "0x8")]
	internal static AdaptivePerformanceGeneralSettings s_RuntimeSettingsInstance;

	[Token(Token = "0x40000C7")]
	[FieldOffset(Offset = "0x18")]
	[SerializeField]
	internal AdaptivePerformanceManagerSettings m_LoaderManagerInstance;

	[Token(Token = "0x40000C8")]
	[FieldOffset(Offset = "0x20")]
	[Tooltip("Enable this to automatically start up Adaptive Performance at runtime.")]
	[SerializeField]
	internal bool m_InitManagerOnStart;

	[Token(Token = "0x40000C9")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.AdaptivePerformanceModule" })]
	internal string m_LastSelectedProvider;

	[Token(Token = "0x40000CA")]
	[FieldOffset(Offset = "0x30")]
	private AdaptivePerformanceManagerSettings m_AdaptivePerformanceManager;

	[Token(Token = "0x40000CB")]
	[FieldOffset(Offset = "0x38")]
	private bool m_ProviderIntialized;

	[Token(Token = "0x40000CC")]
	[FieldOffset(Offset = "0x39")]
	private bool m_ProviderStarted;

	[Token(Token = "0x17000075")]
	public AdaptivePerformanceManagerSettings Manager
	{
		[Token(Token = "0x600015F")]
		[Address(RVA = "0x1536BF0", Offset = "0x15351F0", VA = "0x181536BF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000160")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		set
		{
		}
	}

	[Token(Token = "0x17000076")]
	public bool IsProviderInitialized
	{
		[Token(Token = "0x6000161")]
		[Address(RVA = "0x2E82B20", Offset = "0x2E81120", VA = "0x182E82B20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000077")]
	public bool IsProviderStarted
	{
		[Token(Token = "0x6000162")]
		[Address(RVA = "0x2E82B30", Offset = "0x2E81130", VA = "0x182E82B30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000078")]
	public static AdaptivePerformanceGeneralSettings Instance
	{
		[Token(Token = "0x6000163")]
		[Address(RVA = "0x2E82AD0", Offset = "0x2E810D0", VA = "0x182E82AD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000164")]
		[Address(RVA = "0x2E82B40", Offset = "0x2E81140", VA = "0x182E82B40")]
		set
		{
		}
	}

	[Token(Token = "0x17000079")]
	public AdaptivePerformanceManagerSettings AssignedSettings
	{
		[Token(Token = "0x6000165")]
		[Address(RVA = "0x1536BF0", Offset = "0x15351F0", VA = "0x181536BF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000166")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		set
		{
		}
	}

	[Token(Token = "0x1700007A")]
	public bool InitManagerOnStart
	{
		[Token(Token = "0x6000167")]
		[Address(RVA = "0x2E82AC0", Offset = "0x2E810C0", VA = "0x182E82AC0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000168")]
		[Address(RVA = "0x138BAA0", Offset = "0x138A0A0", VA = "0x18138BAA0")]
		set
		{
		}
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x2E82140", Offset = "0x2E80740", VA = "0x182E82140")]
	private void Awake()
	{
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x2E825E0", Offset = "0x2E80BE0", VA = "0x182E825E0")]
	private static void Quit()
	{
	}

	[Token(Token = "0x600016B")]
	[Address(RVA = "0x2E82560", Offset = "0x2E80B60", VA = "0x182E82560")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600016C")]
	[Address(RVA = "0x2E81F80", Offset = "0x2E80580", VA = "0x182E81F80")]
	[UnityEngine.Scripting.RequiredByNativeCode(true)]
	internal static void AttemptInitializeAdaptivePerformanceGeneralSettingsOnLoad()
	{
	}

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x2E82060", Offset = "0x2E80660", VA = "0x182E82060")]
	[UnityEngine.Scripting.RequiredByNativeCode(true)]
	internal static void AttemptStartAdaptivePerformanceGeneralSettingsOnBeforeSplashScreen()
	{
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x2E82310", Offset = "0x2E80910", VA = "0x182E82310")]
	internal void InitAdaptivePerformance()
	{
	}

	[Token(Token = "0x600016F")]
	[Address(RVA = "0x2E826B0", Offset = "0x2E80CB0", VA = "0x182E826B0")]
	internal void StartAdaptivePerformance()
	{
	}

	[Token(Token = "0x6000170")]
	[Address(RVA = "0x2E828B0", Offset = "0x2E80EB0", VA = "0x182E828B0")]
	internal void StopAdaptivePerformance()
	{
	}

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x2E82260", Offset = "0x2E80860", VA = "0x182E82260")]
	internal void DeInitAdaptivePerformance()
	{
	}

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x2E82A40", Offset = "0x2E81040", VA = "0x182E82A40")]
	public AdaptivePerformanceGeneralSettings()
	{
	}
}
