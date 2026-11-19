// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.AutoPerformanceLevelController
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.AdaptivePerformance;

[Token(Token = "0x2000009")]
internal class AutoPerformanceLevelController
{
	[Token(Token = "0x400002C")]
	[FieldOffset(Offset = "0x10")]
	private IDevicePerformanceControl m_PerfControl;

	[Token(Token = "0x400002D")]
	[FieldOffset(Offset = "0x18")]
	private IPerformanceStatus m_PerfStats;

	[Token(Token = "0x400002E")]
	[FieldOffset(Offset = "0x20")]
	private IThermalStatus m_ThermalStats;

	[Token(Token = "0x400002F")]
	[FieldOffset(Offset = "0x28")]
	private float m_LastChangeTimeStamp;

	[Token(Token = "0x4000030")]
	[FieldOffset(Offset = "0x2C")]
	private float m_LastGpuLevelRaiseTimeStamp;

	[Token(Token = "0x4000031")]
	[FieldOffset(Offset = "0x30")]
	private float m_LastCpuLevelRaiseTimeStamp;

	[Token(Token = "0x4000032")]
	[FieldOffset(Offset = "0x34")]
	private float m_TargetFrameRateHitTimestamp;

	[Token(Token = "0x4000033")]
	[FieldOffset(Offset = "0x38")]
	private float m_BottleneckUnknownTimestamp;

	[Token(Token = "0x4000034")]
	[FieldOffset(Offset = "0x3C")]
	private bool m_TriedToResolveUnknownBottleneck;

	[Token(Token = "0x4000035")]
	[FieldOffset(Offset = "0x3D")]
	private bool m_Enabled;

	[Token(Token = "0x4000036")]
	[FieldOffset(Offset = "0x40")]
	private string m_FeatureName;

	[Token(Token = "0x1700001A")]
	public float TargetFrameTime
	{
		[Token(Token = "0x6000056")]
		[Address(RVA = "0x6884660", Offset = "0x6883660", VA = "0x6884660")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000057")]
		[Address(RVA = "0x6884670", Offset = "0x6883670", VA = "0x6884670")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001B")]
	public float AllowedCpuActiveTimeRatio
	{
		[Token(Token = "0x6000058")]
		[Address(RVA = "0x6884680", Offset = "0x6883680", VA = "0x6884680")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000059")]
		[Address(RVA = "0x6884690", Offset = "0x6883690", VA = "0x6884690")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	public float AllowedGpuActiveTimeRatio
	{
		[Token(Token = "0x600005A")]
		[Address(RVA = "0x68846A0", Offset = "0x68836A0", VA = "0x68846A0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600005B")]
		[Address(RVA = "0x68846B0", Offset = "0x68836B0", VA = "0x68846B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001D")]
	public float GpuLevelBounceAvoidanceThreshold
	{
		[Token(Token = "0x600005C")]
		[Address(RVA = "0x68846C0", Offset = "0x68836C0", VA = "0x68846C0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600005D")]
		[Address(RVA = "0x68846D0", Offset = "0x68836D0", VA = "0x68846D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001E")]
	public float CpuLevelBounceAvoidanceThreshold
	{
		[Token(Token = "0x600005E")]
		[Address(RVA = "0x68846E0", Offset = "0x68836E0", VA = "0x68846E0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600005F")]
		[Address(RVA = "0x68846F0", Offset = "0x68836F0", VA = "0x68846F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001F")]
	public float UpdateInterval
	{
		[Token(Token = "0x6000060")]
		[Address(RVA = "0x6884700", Offset = "0x6883700", VA = "0x6884700")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000061")]
		[Address(RVA = "0x6884710", Offset = "0x6883710", VA = "0x6884710")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000020")]
	public float MinTargetFrameRateHitTime
	{
		[Token(Token = "0x6000062")]
		[Address(RVA = "0x6884720", Offset = "0x6883720", VA = "0x6884720")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000063")]
		[Address(RVA = "0x6884730", Offset = "0x6883730", VA = "0x6884730")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000021")]
	public float MaxTemperatureLevel
	{
		[Token(Token = "0x6000064")]
		[Address(RVA = "0x6884740", Offset = "0x6883740", VA = "0x6884740")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000065")]
		[Address(RVA = "0x6884750", Offset = "0x6883750", VA = "0x6884750")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000022")]
	public bool Enabled
	{
		[Token(Token = "0x6000067")]
		[Address(RVA = "0x6880EC0", Offset = "0x687FEC0", VA = "0x6880EC0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000068")]
		[Address(RVA = "0x6880EB0", Offset = "0x687FEB0", VA = "0x6880EB0")]
		set
		{
		}
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x6882A00", Offset = "0x6881A00", VA = "0x6882A00")]
	public AutoPerformanceLevelController(IDevicePerformanceControl perfControl, IPerformanceStatus perfStat, IThermalStatus thermalStat)
	{
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x6881110", Offset = "0x6880110", VA = "0x6881110")]
	public void Update()
	{
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x6880ED0", Offset = "0x687FED0", VA = "0x6880ED0")]
	public void Override(int requestedCpuLevel, int requestedGpuLevel)
	{
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x6884760", Offset = "0x6883760", VA = "0x6884760")]
	private void UpdateImpl(float timestamp)
	{
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x6885930", Offset = "0x6884930", VA = "0x6885930")]
	private void OnBottleneckChange(PerformanceBottleneckChangeEventArgs ev)
	{
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x6884A90", Offset = "0x6883A90", VA = "0x6884A90")]
	private void RaiseGpuLevel(float timestamp)
	{
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x6884E60", Offset = "0x6883E60", VA = "0x6884E60")]
	private void RaiseCpuLevel(float timestamp)
	{
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x6885290", Offset = "0x6884290", VA = "0x6885290")]
	private void LowerCpuLevel(float timestamp)
	{
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x68856B0", Offset = "0x68846B0", VA = "0x68856B0")]
	private void LowerGpuLevel(float timestamp)
	{
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x68850F0", Offset = "0x68840F0", VA = "0x68850F0")]
	private bool AllowLowerCpuLevel(float timestamp)
	{
		return default(bool);
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x6885510", Offset = "0x6884510", VA = "0x6885510")]
	private bool AllowLowerGpuLevel(float timestamp)
	{
		return default(bool);
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x6885960", Offset = "0x6884960", VA = "0x6885960")]
	private bool AllowRaiseLevels()
	{
		return default(bool);
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x6884D20", Offset = "0x6883D20", VA = "0x6884D20")]
	private bool AllowRaiseCpuLevel()
	{
		return default(bool);
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x6884950", Offset = "0x6883950", VA = "0x6884950")]
	private bool AllowRaiseGpuLevel()
	{
		return default(bool);
	}
}
