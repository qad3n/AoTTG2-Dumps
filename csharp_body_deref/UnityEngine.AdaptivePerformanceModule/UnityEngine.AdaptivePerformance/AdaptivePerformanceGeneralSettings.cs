// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.AdaptivePerformanceGeneralSettings
// Update status: unchanged since the previous dump
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
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.AdaptivePerformanceModule" })]
	[SerializeField]
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
		[Address(RVA = "0x6881FB0", Offset = "0x6880FB0", VA = "0x6881FB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000160")]
		[Address(RVA = "0x688AA70", Offset = "0x6889A70", VA = "0x688AA70")]
		set
		{
		}
	}

	[Token(Token = "0x17000076")]
	public bool IsProviderInitialized
	{
		[Token(Token = "0x6000161")]
		[Address(RVA = "0x687C530", Offset = "0x687B530", VA = "0x687C530")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000077")]
	public bool IsProviderStarted
	{
		[Token(Token = "0x6000162")]
		[Address(RVA = "0x687C760", Offset = "0x687B760", VA = "0x687C760")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000078")]
	public static AdaptivePerformanceGeneralSettings Instance
	{
		[Token(Token = "0x6000163")]
		[Address(RVA = "0x687C4C0", Offset = "0x687B4C0", VA = "0x687C4C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000164")]
		[Address(RVA = "0x688AA80", Offset = "0x6889A80", VA = "0x688AA80")]
		set
		{
		}
	}

	[Token(Token = "0x17000079")]
	public AdaptivePerformanceManagerSettings AssignedSettings
	{
		[Token(Token = "0x6000165")]
		[Address(RVA = "0x688AAE0", Offset = "0x6889AE0", VA = "0x688AAE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000166")]
		[Address(RVA = "0x688AAF0", Offset = "0x6889AF0", VA = "0x688AAF0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007A")]
	public bool InitManagerOnStart
	{
		[Token(Token = "0x6000167")]
		[Address(RVA = "0x687CE80", Offset = "0x687BE80", VA = "0x687CE80")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000168")]
		[Address(RVA = "0x688AB00", Offset = "0x6889B00", VA = "0x688AB00")]
		set
		{
		}
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x688AB10", Offset = "0x6889B10", VA = "0x688AB10")]
	private void Awake()
	{
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x688AC20", Offset = "0x6889C20", VA = "0x688AC20")]
	private static void Quit()
	{
	}

	[Token(Token = "0x600016B")]
	[Address(RVA = "0x688AD20", Offset = "0x6889D20", VA = "0x688AD20")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600016C")]
	[Address(RVA = "0x688AD80", Offset = "0x6889D80", VA = "0x688AD80")]
	[UnityEngine.Scripting.RequiredByNativeCode(true)]
	internal static void AttemptInitializeAdaptivePerformanceGeneralSettingsOnLoad()
	{
	}

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x688AE90", Offset = "0x6889E90", VA = "0x688AE90")]
	[UnityEngine.Scripting.RequiredByNativeCode(true)]
	internal static void AttemptStartAdaptivePerformanceGeneralSettingsOnBeforeSplashScreen()
	{
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x6881D30", Offset = "0x6880D30", VA = "0x6881D30")]
	internal void InitAdaptivePerformance()
	{
	}

	[Token(Token = "0x600016F")]
	[Address(RVA = "0x6883490", Offset = "0x6882490", VA = "0x6883490")]
	internal void StartAdaptivePerformance()
	{
	}

	[Token(Token = "0x6000170")]
	[Address(RVA = "0x6883630", Offset = "0x6882630", VA = "0x6883630")]
	internal void StopAdaptivePerformance()
	{
	}

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x6883710", Offset = "0x6882710", VA = "0x6883710")]
	internal void DeInitAdaptivePerformance()
	{
	}

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x688B6A0", Offset = "0x688A6A0", VA = "0x688B6A0")]
	public AdaptivePerformanceGeneralSettings()
	{
	}
}
