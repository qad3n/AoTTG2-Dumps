// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.AdaptivePerformanceManager
// Update status: NEW in this game update
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
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private PerformanceBottleneckChangeHandler m_PerformanceBottleneckChangeEvent;

	[Token(Token = "0x4000004")]
	[FieldOffset(Offset = "0x30")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private PerformanceLevelChangeHandler m_PerformanceLevelChangeEvent;

	[Token(Token = "0x4000005")]
	[FieldOffset(Offset = "0x38")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private PerformanceBoostChangeHandler m_PerformanceBoostChangeEvent;

	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x40")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
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
		[Address(RVA = "0x2E8A950", Offset = "0x2E88F50", VA = "0x182E8A950", Slot = "9")]
		get
		{
			return default(ThermalMetrics);
		}
	}

	[Token(Token = "0x17000002")]
	public PerformanceMetrics PerformanceMetrics
	{
		[Token(Token = "0x6000012")]
		[Address(RVA = "0x2E8A900", Offset = "0x2E88F00", VA = "0x182E8A900", Slot = "10")]
		get
		{
			return default(PerformanceMetrics);
		}
	}

	[Token(Token = "0x17000003")]
	public FrameTiming FrameTiming
	{
		[Token(Token = "0x6000013")]
		[Address(RVA = "0x2E8A640", Offset = "0x2E88C40", VA = "0x182E8A640", Slot = "11")]
		get
		{
			return default(FrameTiming);
		}
	}

	[Token(Token = "0x17000004")]
	public PerformanceMode PerformanceMode
	{
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x2E8A920", Offset = "0x2E88F20", VA = "0x182E8A920", Slot = "28")]
		get
		{
			return default(PerformanceMode);
		}
	}

	[Token(Token = "0x17000005")]
	public bool Logging
	{
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x2E8A790", Offset = "0x2E88D90", VA = "0x182E8A790", Slot = "29")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x2E8ACE0", Offset = "0x2E892E0", VA = "0x182E8ACE0", Slot = "30")]
		set
		{
		}
	}

	[Token(Token = "0x17000006")]
	public int LoggingFrequencyInFrames
	{
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x25EDB20", Offset = "0x25EC120", VA = "0x1825EDB20", Slot = "31")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x2B0A850", Offset = "0x2B08E50", VA = "0x182B0A850", Slot = "32")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000007")]
	public bool Initialized
	{
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x2E8A670", Offset = "0x2E88C70", VA = "0x182E8A670", Slot = "33")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000008")]
	public bool Active
	{
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x2E8A4D0", Offset = "0x2E88AD0", VA = "0x182E8A4D0", Slot = "34")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000009")]
	public int MaxCpuPerformanceLevel
	{
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x2E8A7E0", Offset = "0x2E88DE0", VA = "0x182E8A7E0", Slot = "14")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700000A")]
	public int MaxGpuPerformanceLevel
	{
		[Token(Token = "0x600001C")]
		[Address(RVA = "0x2E8A860", Offset = "0x2E88E60", VA = "0x182E8A860", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700000B")]
	public bool AutomaticPerformanceControl
	{
		[Token(Token = "0x600001D")]
		[Address(RVA = "0x2E8A610", Offset = "0x2E88C10", VA = "0x182E8A610", Slot = "35")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600001E")]
		[Address(RVA = "0x2E8AC90", Offset = "0x2E89290", VA = "0x182E8AC90", Slot = "36")]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public PerformanceControlMode PerformanceControlMode
	{
		[Token(Token = "0x600001F")]
		[Address(RVA = "0x2E8A8E0", Offset = "0x2E88EE0", VA = "0x182E8A8E0", Slot = "37")]
		get
		{
			return default(PerformanceControlMode);
		}
	}

	[Token(Token = "0x1700000D")]
	public int CpuLevel
	{
		[Token(Token = "0x6000020")]
		[Address(RVA = "0x2E8A620", Offset = "0x2E88C20", VA = "0x182E8A620", Slot = "16")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000021")]
		[Address(RVA = "0x2E8ACA0", Offset = "0x2E892A0", VA = "0x182E8ACA0", Slot = "17")]
		set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public int GpuLevel
	{
		[Token(Token = "0x6000022")]
		[Address(RVA = "0xE282D0", Offset = "0xE268D0", VA = "0x180E282D0", Slot = "18")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000023")]
		[Address(RVA = "0x2E8ACC0", Offset = "0x2E892C0", VA = "0x182E8ACC0", Slot = "19")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public bool CpuPerformanceBoost
	{
		[Token(Token = "0x6000024")]
		[Address(RVA = "0x2E8A630", Offset = "0x2E88C30", VA = "0x182E8A630", Slot = "38")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000025")]
		[Address(RVA = "0x2E8ACB0", Offset = "0x2E892B0", VA = "0x182E8ACB0", Slot = "39")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public bool GpuPerformanceBoost
	{
		[Token(Token = "0x6000026")]
		[Address(RVA = "0x2E8A660", Offset = "0x2E88C60", VA = "0x182E8A660", Slot = "40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000027")]
		[Address(RVA = "0x2E8ACD0", Offset = "0x2E892D0", VA = "0x182E8ACD0", Slot = "41")]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public IDevelopmentSettings DevelopmentSettings
	{
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x1B827F0", Offset = "0x1B80DF0", VA = "0x181B827F0", Slot = "42")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000012")]
	public IThermalStatus ThermalStatus
	{
		[Token(Token = "0x6000029")]
		[Address(RVA = "0x1B827F0", Offset = "0x1B80DF0", VA = "0x181B827F0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000013")]
	public IPerformanceStatus PerformanceStatus
	{
		[Token(Token = "0x600002A")]
		[Address(RVA = "0x1B827F0", Offset = "0x1B80DF0", VA = "0x181B827F0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000014")]
	public IDevicePerformanceControl DevicePerformanceControl
	{
		[Token(Token = "0x600002B")]
		[Address(RVA = "0x1B827F0", Offset = "0x1B80DF0", VA = "0x181B827F0", Slot = "43")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000015")]
	public IPerformanceModeStatus PerformanceModeStatus
	{
		[Token(Token = "0x600002C")]
		[Address(RVA = "0x1B827F0", Offset = "0x1B80DF0", VA = "0x181B827F0", Slot = "44")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000016")]
	public AdaptivePerformanceIndexer Indexer
	{
		[Token(Token = "0x600002D")]
		[Address(RVA = "0x58A890", Offset = "0x588E90", VA = "0x18058A890", Slot = "6")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600002E")]
		[Address(RVA = "0x58AA30", Offset = "0x589030", VA = "0x18058AA30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000017")]
	public IAdaptivePerformanceSettings Settings
	{
		[Token(Token = "0x600002F")]
		[Address(RVA = "0x2E8A930", Offset = "0x2E88F30", VA = "0x182E8A930", Slot = "7")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000030")]
		[Address(RVA = "0x1537500", Offset = "0x1535B00", VA = "0x181537500")]
		private set
		{
		}
	}

	[Token(Token = "0x17000018")]
	public AdaptivePerformanceSubsystem Subsystem
	{
		[Token(Token = "0x6000031")]
		[Address(RVA = "0x2E8A940", Offset = "0x2E88F40", VA = "0x182E8A940", Slot = "45")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000001")]
	public event ThermalEventHandler ThermalEvent
	{
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x2E8A430", Offset = "0x2E88A30", VA = "0x182E8A430", Slot = "22")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x2E8ABF0", Offset = "0x2E891F0", VA = "0x182E8ABF0", Slot = "23")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000002")]
	public event PerformanceBottleneckChangeHandler PerformanceBottleneckChangeEvent
	{
		[Token(Token = "0x6000009")]
		[Address(RVA = "0x2E8A250", Offset = "0x2E88850", VA = "0x182E8A250", Slot = "12")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600000A")]
		[Address(RVA = "0x2E8AA10", Offset = "0x2E89010", VA = "0x182E8AA10", Slot = "13")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000003")]
	public event PerformanceLevelChangeHandler PerformanceLevelChangeEvent
	{
		[Token(Token = "0x600000B")]
		[Address(RVA = "0x2E8A2F0", Offset = "0x2E888F0", VA = "0x182E8A2F0", Slot = "24")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600000C")]
		[Address(RVA = "0x2E8AAB0", Offset = "0x2E890B0", VA = "0x182E8AAB0", Slot = "25")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000004")]
	public event PerformanceBoostChangeHandler PerformanceBoostChangeEvent
	{
		[Token(Token = "0x600000D")]
		[Address(RVA = "0x2E8A1B0", Offset = "0x2E887B0", VA = "0x182E8A1B0", Slot = "26")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600000E")]
		[Address(RVA = "0x2E8A970", Offset = "0x2E88F70", VA = "0x182E8A970", Slot = "27")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000005")]
	public event PerformanceModeEventHandler PerformanceModeEvent
	{
		[Token(Token = "0x600000F")]
		[Address(RVA = "0x2E8A390", Offset = "0x2E88990", VA = "0x182E8A390", Slot = "20")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000010")]
		[Address(RVA = "0x2E8AB50", Offset = "0x2E89150", VA = "0x182E8AB50", Slot = "21")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000032")]
	[Address(RVA = "0x2E867E0", Offset = "0x2E84DE0", VA = "0x182E867E0")]
	private static bool HasFeature(Feature flags, Feature feature)
	{
		return default(bool);
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x2E89070", Offset = "0x2E87670", VA = "0x182E89070", Slot = "8")]
	public bool SupportedFeature(Feature feature)
	{
		return default(bool);
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x2E85BC0", Offset = "0x2E841C0", VA = "0x182E85BC0")]
	public void Awake()
	{
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x2E88BD0", Offset = "0x2E871D0", VA = "0x182E88BD0")]
	private void LogThermalEvent(ThermalMetrics ev)
	{
	}

	[Token(Token = "0x6000036")]
	[Address(RVA = "0x2E88600", Offset = "0x2E86C00", VA = "0x182E88600")]
	private void LogBottleneckEvent(PerformanceBottleneckChangeEventArgs ev)
	{
	}

	[Token(Token = "0x6000037")]
	[Address(RVA = "0x2E884A0", Offset = "0x2E86AA0", VA = "0x182E884A0")]
	private void LogBoostEvent(PerformanceBoostChangeEventArgs ev)
	{
	}

	[Token(Token = "0x6000038")]
	[Address(RVA = "0x2E88A40", Offset = "0x2E87040", VA = "0x182E88A40")]
	private void LogPerformanceModeEvent(PerformanceMode performanceMode)
	{
	}

	[Token(Token = "0x6000039")]
	[Address(RVA = "0x2E87A20", Offset = "0x2E86020", VA = "0x182E87A20")]
	private void LogAdaptivePerformanceStatus()
	{
	}

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x2E890B0", Offset = "0x2E876B0", VA = "0x182E890B0")]
	private static string ToStringWithSign(int x)
	{
		return null;
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x2E88700", Offset = "0x2E86D00", VA = "0x182E88700")]
	private void LogPerformanceLevelEvent(PerformanceLevelChangeEventArgs ev)
	{
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x2E85940", Offset = "0x2E83F40", VA = "0x182E85940")]
	private void AddNonNegativeValue(RunningAverage runningAverage, float value)
	{
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x2E87980", Offset = "0x2E85F80", VA = "0x182E87980")]
	public void LateUpdate()
	{
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x2E89EE0", Offset = "0x2E884E0", VA = "0x182E89EE0")]
	public void Update()
	{
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x2E85D80", Offset = "0x2E84380", VA = "0x182E85D80")]
	private void CollectProfilerStats()
	{
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x2E85A00", Offset = "0x2E84000", VA = "0x182E85A00")]
	private void AppendFrameTiming(string label, float averageSeconds, float currentSeconds)
	{
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x2E85910", Offset = "0x2E83F10", VA = "0x182E85910")]
	private void AccumulateTimingValue(ref float accu, float newValue)
	{
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x2E890F0", Offset = "0x2E876F0", VA = "0x182E890F0")]
	private void UpdateSubsystem()
	{
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x2E89F90", Offset = "0x2E88590", VA = "0x182E89F90")]
	private static bool WillCurrentFrameRender()
	{
		return default(bool);
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x2E86790", Offset = "0x2E84D90", VA = "0x182E86790")]
	public static float EffectiveTargetFrameRate()
	{
		return default(float);
	}

	[Token(Token = "0x6000045")]
	[Address(RVA = "0x2E88F00", Offset = "0x2E87500", VA = "0x182E88F00")]
	public void OnDestroy()
	{
	}

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x2E867F0", Offset = "0x2E84DF0", VA = "0x182E867F0", Slot = "46")]
	public void InitializeAdaptivePerformance()
	{
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x2E88F10", Offset = "0x2E87510", VA = "0x182E88F10", Slot = "47")]
	public void StartAdaptivePerformance()
	{
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x2E88FC0", Offset = "0x2E875C0", VA = "0x182E88FC0", Slot = "48")]
	public void StopAdaptivePerformance()
	{
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x2E85FF0", Offset = "0x2E845F0", VA = "0x182E85FF0", Slot = "49")]
	public void DeinitializeAdaptivePerformance()
	{
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x2E88DB0", Offset = "0x2E873B0", VA = "0x182E88DB0")]
	public void OnApplicationPause(bool pause)
	{
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x2E89FD0", Offset = "0x2E885D0", VA = "0x182E89FD0")]
	public AdaptivePerformanceManager()
	{
	}
}
