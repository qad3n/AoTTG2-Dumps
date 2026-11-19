// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.DevicePerformanceControlImpl
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.AdaptivePerformance.Provider;

namespace UnityEngine.AdaptivePerformance;

[Token(Token = "0x200000C")]
internal class DevicePerformanceControlImpl : IDevicePerformanceControl
{
	[Token(Token = "0x4000041")]
	[FieldOffset(Offset = "0x10")]
	private IDevicePerformanceLevelControl m_PerformanceLevelControl;

	[Token(Token = "0x17000024")]
	public PerformanceControlMode PerformanceControlMode
	{
		[Token(Token = "0x6000081")]
		[Address(RVA = "0x6885CB0", Offset = "0x6884CB0", VA = "0x6885CB0", Slot = "10")]
		[CompilerGenerated]
		get
		{
			return default(PerformanceControlMode);
		}
		[Token(Token = "0x6000082")]
		[Address(RVA = "0x6885CC0", Offset = "0x6884CC0", VA = "0x6885CC0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000025")]
	public int MaxCpuPerformanceLevel
	{
		[Token(Token = "0x6000083")]
		[Address(RVA = "0x687C820", Offset = "0x687B820", VA = "0x687C820", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000026")]
	public int MaxGpuPerformanceLevel
	{
		[Token(Token = "0x6000084")]
		[Address(RVA = "0x687C970", Offset = "0x687B970", VA = "0x687C970", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000027")]
	public int CpuLevel
	{
		[Token(Token = "0x6000085")]
		[Address(RVA = "0x6885CD0", Offset = "0x6884CD0", VA = "0x6885CD0", Slot = "6")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000086")]
		[Address(RVA = "0x6885CE0", Offset = "0x6884CE0", VA = "0x6885CE0", Slot = "7")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000028")]
	public int GpuLevel
	{
		[Token(Token = "0x6000087")]
		[Address(RVA = "0x6885CF0", Offset = "0x6884CF0", VA = "0x6885CF0", Slot = "8")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000088")]
		[Address(RVA = "0x6885D00", Offset = "0x6884D00", VA = "0x6885D00", Slot = "9")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000029")]
	public int CurrentCpuLevel
	{
		[Token(Token = "0x6000089")]
		[Address(RVA = "0x6885D10", Offset = "0x6884D10", VA = "0x6885D10")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600008A")]
		[Address(RVA = "0x6885D20", Offset = "0x6884D20", VA = "0x6885D20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700002A")]
	public int CurrentGpuLevel
	{
		[Token(Token = "0x600008B")]
		[Address(RVA = "0x6885D30", Offset = "0x6884D30", VA = "0x6885D30")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600008C")]
		[Address(RVA = "0x6885D40", Offset = "0x6884D40", VA = "0x6885D40")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700002B")]
	public bool CpuPerformanceBoost
	{
		[Token(Token = "0x600008D")]
		[Address(RVA = "0x6885D50", Offset = "0x6884D50", VA = "0x6885D50", Slot = "11")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600008E")]
		[Address(RVA = "0x6885D60", Offset = "0x6884D60", VA = "0x6885D60", Slot = "12")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700002C")]
	public bool GpuPerformanceBoost
	{
		[Token(Token = "0x600008F")]
		[Address(RVA = "0x6885D70", Offset = "0x6884D70", VA = "0x6885D70", Slot = "13")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000090")]
		[Address(RVA = "0x6885D80", Offset = "0x6884D80", VA = "0x6885D80", Slot = "14")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x68829C0", Offset = "0x68819C0", VA = "0x68829C0")]
	public DevicePerformanceControlImpl(IDevicePerformanceLevelControl performanceLevelControl)
	{
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x6881130", Offset = "0x6880130", VA = "0x6881130")]
	public bool Update(out PerformanceLevelChangeEventArgs changeArgs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x6885CA0", Offset = "0x6884CA0", VA = "0x6885CA0")]
	private int ComputeDelta(int oldLevel, int newLevel)
	{
		return default(int);
	}
}
