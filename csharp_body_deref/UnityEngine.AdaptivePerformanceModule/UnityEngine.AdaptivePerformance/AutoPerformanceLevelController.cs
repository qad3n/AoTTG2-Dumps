// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.AutoPerformanceLevelController
// Update status: NEW in this game update
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
		[Address(RVA = "0x5853E0", Offset = "0x5839E0", VA = "0x1805853E0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000057")]
		[Address(RVA = "0x2E847A0", Offset = "0x2E82DA0", VA = "0x182E847A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001B")]
	public float AllowedCpuActiveTimeRatio
	{
		[Token(Token = "0x6000058")]
		[Address(RVA = "0x2E90970", Offset = "0x2E8EF70", VA = "0x182E90970")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000059")]
		[Address(RVA = "0x2E909B0", Offset = "0x2E8EFB0", VA = "0x182E909B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001C")]
	public float AllowedGpuActiveTimeRatio
	{
		[Token(Token = "0x600005A")]
		[Address(RVA = "0xDA5AC0", Offset = "0xDA40C0", VA = "0x180DA5AC0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600005B")]
		[Address(RVA = "0x2E909C0", Offset = "0x2E8EFC0", VA = "0x182E909C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001D")]
	public float GpuLevelBounceAvoidanceThreshold
	{
		[Token(Token = "0x600005C")]
		[Address(RVA = "0x2D45BF0", Offset = "0x2D441F0", VA = "0x182D45BF0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600005D")]
		[Address(RVA = "0x2D45F10", Offset = "0x2D44510", VA = "0x182D45F10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001E")]
	public float CpuLevelBounceAvoidanceThreshold
	{
		[Token(Token = "0x600005E")]
		[Address(RVA = "0x2E90980", Offset = "0x2E8EF80", VA = "0x182E90980")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600005F")]
		[Address(RVA = "0x2E909D0", Offset = "0x2E8EFD0", VA = "0x182E909D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700001F")]
	public float UpdateInterval
	{
		[Token(Token = "0x6000060")]
		[Address(RVA = "0x2E909A0", Offset = "0x2E8EFA0", VA = "0x182E909A0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000061")]
		[Address(RVA = "0x2E909F0", Offset = "0x2E8EFF0", VA = "0x182E909F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000020")]
	public float MinTargetFrameRateHitTime
	{
		[Token(Token = "0x6000062")]
		[Address(RVA = "0x58A700", Offset = "0x588D00", VA = "0x18058A700")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000063")]
		[Address(RVA = "0x58A9F0", Offset = "0x588FF0", VA = "0x18058A9F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000021")]
	public float MaxTemperatureLevel
	{
		[Token(Token = "0x6000064")]
		[Address(RVA = "0xCDE8A0", Offset = "0xCDCEA0", VA = "0x180CDE8A0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000065")]
		[Address(RVA = "0xCDEB40", Offset = "0xCDD140", VA = "0x180CDEB40")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000022")]
	public bool Enabled
	{
		[Token(Token = "0x6000067")]
		[Address(RVA = "0x2E90990", Offset = "0x2E8EF90", VA = "0x182E90990")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000068")]
		[Address(RVA = "0x2E909E0", Offset = "0x2E8EFE0", VA = "0x182E909E0")]
		set
		{
		}
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x2E90770", Offset = "0x2E8ED70", VA = "0x182E90770")]
	public AutoPerformanceLevelController(IDevicePerformanceControl perfControl, IPerformanceStatus perfStat, IThermalStatus thermalStat)
	{
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x2E90740", Offset = "0x2E8ED40", VA = "0x182E90740")]
	public void Update()
	{
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x2E8FD90", Offset = "0x2E8E390", VA = "0x182E8FD90")]
	public void Override(int requestedCpuLevel, int requestedGpuLevel)
	{
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x2E90150", Offset = "0x2E8E750", VA = "0x182E90150")]
	private void UpdateImpl(float timestamp)
	{
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x2E8FD40", Offset = "0x2E8E340", VA = "0x182E8FD40")]
	private void OnBottleneckChange(PerformanceBottleneckChangeEventArgs ev)
	{
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x2E8FFE0", Offset = "0x2E8E5E0", VA = "0x182E8FFE0")]
	private void RaiseGpuLevel(float timestamp)
	{
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x2E8FE70", Offset = "0x2E8E470", VA = "0x182E8FE70")]
	private void RaiseCpuLevel(float timestamp)
	{
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x2E8FA60", Offset = "0x2E8E060", VA = "0x182E8FA60")]
	private void LowerCpuLevel(float timestamp)
	{
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x2E8FBD0", Offset = "0x2E8E1D0", VA = "0x182E8FBD0")]
	private void LowerGpuLevel(float timestamp)
	{
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x2E8F540", Offset = "0x2E8DB40", VA = "0x182E8F540")]
	private bool AllowLowerCpuLevel(float timestamp)
	{
		return default(bool);
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x2E8F620", Offset = "0x2E8DC20", VA = "0x182E8F620")]
	private bool AllowLowerGpuLevel(float timestamp)
	{
		return default(bool);
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x2E8F820", Offset = "0x2E8DE20", VA = "0x182E8F820")]
	private bool AllowRaiseLevels()
	{
		return default(bool);
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x2E8F700", Offset = "0x2E8DD00", VA = "0x182E8F700")]
	private bool AllowRaiseCpuLevel()
	{
		return default(bool);
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x2E8F790", Offset = "0x2E8DD90", VA = "0x182E8F790")]
	private bool AllowRaiseGpuLevel()
	{
		return default(bool);
	}
}
