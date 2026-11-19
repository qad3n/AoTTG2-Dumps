// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.AdaptivePerformanceManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.AdaptivePerformance.Provider;

namespace UnityEngine.AdaptivePerformance;

[Token(Token = "0x2000006")]
internal class AdaptivePerformanceManager : MonoBehaviour, IAdaptivePerformance, IThermalStatus, IPerformanceStatus, IDevicePerformanceControl, IDevelopmentSettings, IPerformanceModeStatus
{
	[Token(Token = "0x4000002")]
	[FieldOffset(Offset = "0x20")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private ThermalEventHandler m_ThermalEvent;

	[Token(Token = "0x4000003")]
	[FieldOffset(Offset = "0x28")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private PerformanceBottleneckChangeHandler m_PerformanceBottleneckChangeEvent;

	[Token(Token = "0x4000004")]
	[FieldOffset(Offset = "0x30")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private PerformanceLevelChangeHandler m_PerformanceLevelChangeEvent;

	[Token(Token = "0x4000005")]
	[FieldOffset(Offset = "0x38")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private PerformanceBoostChangeHandler m_PerformanceBoostChangeEvent;

	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x40")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private PerformanceModeEventHandler m_PerformanceModeEvent;

	[Token(Token = "0x4000007")]
	[FieldOffset(Offset = "0x48")]
	private bool m_JustResumed;

	[Token(Token = "0x4000008")]
	[FieldOffset(Offset = "0x4C")]
	private int m_RequestedCpuLevel;

	[Token(Token = "0x4000009")]
	[FieldOffset(Offset = "0x50")]
	private int m_RequestedGpuLevel;

	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0x54")]
	private bool m_NewUserPerformanceLevelRequest;

	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x55")]
	private bool m_RequestedCpuBoost;

	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x56")]
	private bool m_RequestedGpuBoost;

	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0x57")]
	private bool m_NewUserCpuPerformanceBoostRequest;

	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x58")]
	private bool m_NewUserGpuPerformanceBoostRequest;

	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x5C")]
	private ThermalMetrics m_ThermalMetrics;

	[Token(Token = "0x4000010")]
	[FieldOffset(Offset = "0x68")]
	private PerformanceMetrics m_PerformanceMetrics;

	[Token(Token = "0x4000011")]
	[FieldOffset(Offset = "0x84")]
	private FrameTiming m_FrameTiming;

	[Token(Token = "0x4000012")]
	[FieldOffset(Offset = "0x9C")]
	private PerformanceMode m_PerformanceMode;

	[Token(Token = "0x4000014")]
	[FieldOffset(Offset = "0xA4")]
	private bool m_AutomaticPerformanceControl;

	[Token(Token = "0x4000015")]
	[FieldOffset(Offset = "0xA5")]
	private bool m_AutomaticPerformanceControlChanged;

	[Token(Token = "0x4000017")]
	[FieldOffset(Offset = "0xB0")]
	private IAdaptivePerformanceSettings m_Settings;

	[Token(Token = "0x4000018")]
	[FieldOffset(Offset = "0xB8")]
	private AdaptivePerformanceSubsystem m_Subsystem;

	[Token(Token = "0x4000019")]
	[FieldOffset(Offset = "0xC0")]
	private DevicePerformanceControlImpl m_DevicePerfControl;

	[Token(Token = "0x400001A")]
	[FieldOffset(Offset = "0xC8")]
	private AutoPerformanceLevelController m_AutoPerformanceLevelController;

	[Token(Token = "0x400001B")]
	[FieldOffset(Offset = "0xD0")]
	private AutoPerformanceModeController m_AutoPerformanceModeController;

	[Token(Token = "0x400001C")]
	[FieldOffset(Offset = "0xD8")]
	private CpuTimeProvider m_CpuFrameTimeProvider;

	[Token(Token = "0x400001D")]
	[FieldOffset(Offset = "0xE0")]
	private GpuTimeProvider m_GpuFrameTimeProvider;

	[Token(Token = "0x400001E")]
	[FieldOffset(Offset = "0xE8")]
	private IApplicationLifecycle m_AppLifecycle;

	[Token(Token = "0x400001F")]
	[FieldOffset(Offset = "0xF0")]
	private TemperatureTrend m_TemperatureTrend;

	[Token(Token = "0x4000020")]
	[FieldOffset(Offset = "0xF8")]
	private bool m_UseProviderOverallFrameTime;

	[Token(Token = "0x4000021")]
	[FieldOffset(Offset = "0x100")]
	private WaitForEndOfFrame m_WaitForEndOfFrame;

	[Token(Token = "0x4000022")]
	[FieldOffset(Offset = "0x108")]
	private int m_FrameCount;

	[Token(Token = "0x4000023")]
	[FieldOffset(Offset = "0x110")]
	private RunningAverage m_OverallFrameTime;

	[Token(Token = "0x4000024")]
	[FieldOffset(Offset = "0x118")]
	private float m_OverallFrameTimeAccu;

	[Token(Token = "0x4000025")]
	[FieldOffset(Offset = "0x120")]
	private RunningAverage m_GpuFrameTime;

	[Token(Token = "0x4000026")]
	[FieldOffset(Offset = "0x128")]
	private RunningAverage m_CpuFrameTime;

	[Token(Token = "0x17000001")]
	public ThermalMetrics ThermalMetrics
	{
		[Token(Token = "0x6000011")]
		[Address(RVA = "0x687C1D0", Offset = "0x687B1D0", VA = "0x687C1D0", Slot = "9")]
		get
		{
			return default(ThermalMetrics);
		}
	}

	[Token(Token = "0x17000002")]
	public PerformanceMetrics PerformanceMetrics
	{
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x687C1E0", Offset = "0x687B1E0", VA = "0x687C1E0", Slot = "10")]
		get
		{
			return default(PerformanceMetrics);
		}
	}

	[Token(Token = "0x17000003")]
	public FrameTiming FrameTiming
	{
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x687C200", Offset = "0x687B200", VA = "0x687C200", Slot = "11")]
		get
		{
			return default(FrameTiming);
		}
	}

	[Token(Token = "0x17000004")]
	public PerformanceMode PerformanceMode
	{
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x687C220", Offset = "0x687B220", VA = "0x687C220", Slot = "28")]
		get
		{
			return default(PerformanceMode);
		}
	}

	[Token(Token = "0x17000005")]
	public bool Logging
	{
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x687C230", Offset = "0x687B230", VA = "0x687C230", Slot = "29")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x687C2A0", Offset = "0x687B2A0", VA = "0x687C2A0", Slot = "30")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public int LoggingFrequencyInFrames
	{
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x687C2F0", Offset = "0x687B2F0", VA = "0x687C2F0", Slot = "31")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x687C300", Offset = "0x687B300", VA = "0x687C300", Slot = "32")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public bool Initialized
	{
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x687C310", Offset = "0x687B310", VA = "0x687C310", Slot = "33")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000008")]
	public bool Active
	{
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x687C540", Offset = "0x687B540", VA = "0x687C540", Slot = "34")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000009")]
	public int MaxCpuPerformanceLevel
	{
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x687C770", Offset = "0x687B770", VA = "0x687C770", Slot = "14")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700000A")]
	public int MaxGpuPerformanceLevel
	{
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x687C8C0", Offset = "0x687B8C0", VA = "0x687C8C0", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700000B")]
	public bool AutomaticPerformanceControl
	{
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x687CA10", Offset = "0x687BA10", VA = "0x687CA10", Slot = "35")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x687CA20", Offset = "0x687BA20", VA = "0x687CA20", Slot = "36")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public PerformanceControlMode PerformanceControlMode
	{
		[Token(Token = "0x600001F")]
		[Address(RVA = "0x687CA30", Offset = "0x687BA30", VA = "0x687CA30", Slot = "37")]
		get
		{
			return default(PerformanceControlMode);
		}
	}

	[Token(Token = "0x1700000D")]
	public int CpuLevel
	{
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x687CA50", Offset = "0x687BA50", VA = "0x687CA50", Slot = "16")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x687CA60", Offset = "0x687BA60", VA = "0x687CA60", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public int GpuLevel
	{
		[Token(Token = "0x6000022")]
		[Address(RVA = "0x687CA70", Offset = "0x687BA70", VA = "0x687CA70", Slot = "18")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000023")]
		[Address(RVA = "0x687CA80", Offset = "0x687BA80", VA = "0x687CA80", Slot = "19")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public bool CpuPerformanceBoost
	{
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x687CA90", Offset = "0x687BA90", VA = "0x687CA90", Slot = "38")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000025")]
		[Address(RVA = "0x687CAA0", Offset = "0x687BAA0", VA = "0x687CAA0", Slot = "39")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public bool GpuPerformanceBoost
	{
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x687CAB0", Offset = "0x687BAB0", VA = "0x687CAB0", Slot = "40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x687CAC0", Offset = "0x687BAC0", VA = "0x687CAC0", Slot = "41")]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public IDevelopmentSettings DevelopmentSettings
	{
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x687CAD0", Offset = "0x687BAD0", VA = "0x687CAD0", Slot = "42")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000012")]
	public IThermalStatus ThermalStatus
	{
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x687CAE0", Offset = "0x687BAE0", VA = "0x687CAE0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000013")]
	public IPerformanceStatus PerformanceStatus
	{
		[Token(Token = "0x600002A")]
		[Address(RVA = "0x687CAF0", Offset = "0x687BAF0", VA = "0x687CAF0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000014")]
	public IDevicePerformanceControl DevicePerformanceControl
	{
		[Token(Token = "0x600002B")]
		[Address(RVA = "0x687CB00", Offset = "0x687BB00", VA = "0x687CB00", Slot = "43")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000015")]
	public IPerformanceModeStatus PerformanceModeStatus
	{
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x687CB10", Offset = "0x687BB10", VA = "0x687CB10", Slot = "44")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000016")]
	public AdaptivePerformanceIndexer Indexer
	{
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x687CB20", Offset = "0x687BB20", VA = "0x687CB20", Slot = "6")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x687CB30", Offset = "0x687BB30", VA = "0x687CB30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public IAdaptivePerformanceSettings Settings
	{
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x687CB50", Offset = "0x687BB50", VA = "0x687CB50", Slot = "7")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x687CB60", Offset = "0x687BB60", VA = "0x687CB60")]
		private set
		{
		}
	}

	[Token(Token = "0x17000018")]
	public AdaptivePerformanceSubsystem Subsystem
	{
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x687CB80", Offset = "0x687BB80", VA = "0x687CB80", Slot = "45")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000001")]
	public event ThermalEventHandler ThermalEvent
	{
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x687BC30", Offset = "0x687AC30", VA = "0x687BC30", Slot = "22")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x687BCC0", Offset = "0x687ACC0", VA = "0x687BCC0", Slot = "23")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000002")]
	public event PerformanceBottleneckChangeHandler PerformanceBottleneckChangeEvent
	{
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x687BD50", Offset = "0x687AD50", VA = "0x687BD50", Slot = "12")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x687BDE0", Offset = "0x687ADE0", VA = "0x687BDE0", Slot = "13")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000003")]
	public event PerformanceLevelChangeHandler PerformanceLevelChangeEvent
	{
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x687BE70", Offset = "0x687AE70", VA = "0x687BE70", Slot = "24")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x687BF00", Offset = "0x687AF00", VA = "0x687BF00", Slot = "25")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000004")]
	public event PerformanceBoostChangeHandler PerformanceBoostChangeEvent
	{
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x687BF90", Offset = "0x687AF90", VA = "0x687BF90", Slot = "26")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x687C020", Offset = "0x687B020", VA = "0x687C020", Slot = "27")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000005")]
	public event PerformanceModeEventHandler PerformanceModeEvent
	{
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x687C0B0", Offset = "0x687B0B0", VA = "0x687C0B0", Slot = "20")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x687C140", Offset = "0x687B140", VA = "0x687C140", Slot = "21")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x687CB90", Offset = "0x687BB90", VA = "0x687CB90")]
	private static bool HasFeature(Feature flags, Feature feature)
	{
		return default(bool);
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x687CBA0", Offset = "0x687BBA0", VA = "0x687CBA0", Slot = "8")]
	public bool SupportedFeature(Feature feature)
	{
		return default(bool);
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x687CBD0", Offset = "0x687BBD0", VA = "0x687CBD0")]
	public void Awake()
	{
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x687DDA0", Offset = "0x687CDA0", VA = "0x687DDA0")]
	private void LogThermalEvent(ThermalMetrics ev)
	{
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x687DF80", Offset = "0x687CF80", VA = "0x687DF80")]
	private void LogBottleneckEvent(PerformanceBottleneckChangeEventArgs ev)
	{
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x687E080", Offset = "0x687D080", VA = "0x687E080")]
	private void LogBoostEvent(PerformanceBoostChangeEventArgs ev)
	{
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x687E1E0", Offset = "0x687D1E0", VA = "0x687E1E0")]
	private void LogPerformanceModeEvent(PerformanceMode performanceMode)
	{
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x687E360", Offset = "0x687D360", VA = "0x687E360")]
	private void LogAdaptivePerformanceStatus()
	{
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x687F0F0", Offset = "0x687E0F0", VA = "0x687F0F0")]
	private static string ToStringWithSign(int x)
	{
		return null;
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x687F130", Offset = "0x687E130", VA = "0x687F130")]
	private void LogPerformanceLevelEvent(PerformanceLevelChangeEventArgs ev)
	{
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x687F430", Offset = "0x687E430", VA = "0x687F430")]
	private void AddNonNegativeValue(RunningAverage runningAverage, float value)
	{
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x687F520", Offset = "0x687E520", VA = "0x687F520")]
	public void LateUpdate()
	{
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x687F650", Offset = "0x687E650", VA = "0x687F650")]
	public void Update()
	{
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x6880770", Offset = "0x687F770", VA = "0x6880770")]
	private void CollectProfilerStats()
	{
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x687EE80", Offset = "0x687DE80", VA = "0x687EE80")]
	private void AppendFrameTiming(string label, float averageSeconds, float currentSeconds)
	{
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x6880A30", Offset = "0x687FA30", VA = "0x6880A30")]
	private void AccumulateTimingValue(ref float accu, float newValue)
	{
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x687F7B0", Offset = "0x687E7B0", VA = "0x687F7B0")]
	private void UpdateSubsystem()
	{
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x687F5D0", Offset = "0x687E5D0", VA = "0x687F5D0")]
	private static bool WillCurrentFrameRender()
	{
		return default(bool);
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x6880E30", Offset = "0x687FE30", VA = "0x6880E30")]
	public static float EffectiveTargetFrameRate()
	{
		return default(float);
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x6881510", Offset = "0x6880510", VA = "0x6881510")]
	public void OnDestroy()
	{
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x687D000", Offset = "0x687C000", VA = "0x687D000", Slot = "46")]
	public void InitializeAdaptivePerformance()
	{
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x68833D0", Offset = "0x68823D0", VA = "0x68833D0", Slot = "47")]
	public void StartAdaptivePerformance()
	{
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x6883570", Offset = "0x6882570", VA = "0x6883570", Slot = "48")]
	public void StopAdaptivePerformance()
	{
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x6881520", Offset = "0x6880520", VA = "0x6881520", Slot = "49")]
	public void DeinitializeAdaptivePerformance()
	{
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x6883850", Offset = "0x6882850", VA = "0x6883850")]
	public void OnApplicationPause(bool pause)
	{
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x6883A70", Offset = "0x6882A70", VA = "0x6883A70")]
	public AdaptivePerformanceManager()
	{
	}
}
