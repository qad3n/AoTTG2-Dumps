// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.DevicePerformanceControlImpl
// Update status: NEW in this game update
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
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390", Slot = "10")]
		[CompilerGenerated]
		get
		{
			return default(PerformanceControlMode);
		}
		[Token(Token = "0x6000082")]
		[Address(RVA = "0x111C9C0", Offset = "0x111AFC0", VA = "0x18111C9C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000025")]
	public int MaxCpuPerformanceLevel
	{
		[Token(Token = "0x6000083")]
		[Address(RVA = "0x2E913F0", Offset = "0x2E8F9F0", VA = "0x182E913F0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000026")]
	public int MaxGpuPerformanceLevel
	{
		[Token(Token = "0x6000084")]
		[Address(RVA = "0x2E91440", Offset = "0x2E8FA40", VA = "0x182E91440", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000027")]
	public int CpuLevel
	{
		[Token(Token = "0x6000085")]
		[Address(RVA = "0xD23EC0", Offset = "0xD224C0", VA = "0x180D23EC0", Slot = "6")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000086")]
		[Address(RVA = "0xD23F80", Offset = "0xD22580", VA = "0x180D23F80", Slot = "7")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000028")]
	public int GpuLevel
	{
		[Token(Token = "0x6000087")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170", Slot = "8")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000088")]
		[Address(RVA = "0xE4C6E0", Offset = "0xE4ACE0", VA = "0x180E4C6E0", Slot = "9")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000029")]
	public int CurrentCpuLevel
	{
		[Token(Token = "0x6000089")]
		[Address(RVA = "0xBDB280", Offset = "0xBD9880", VA = "0x180BDB280")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600008A")]
		[Address(RVA = "0xD23EF0", Offset = "0xD224F0", VA = "0x180D23EF0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700002A")]
	public int CurrentGpuLevel
	{
		[Token(Token = "0x600008B")]
		[Address(RVA = "0x585030", Offset = "0x583630", VA = "0x180585030")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600008C")]
		[Address(RVA = "0x585090", Offset = "0x583690", VA = "0x180585090")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700002B")]
	public bool CpuPerformanceBoost
	{
		[Token(Token = "0x600008D")]
		[Address(RVA = "0x584AB0", Offset = "0x5830B0", VA = "0x180584AB0", Slot = "11")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600008E")]
		[Address(RVA = "0x584B60", Offset = "0x583160", VA = "0x180584B60", Slot = "12")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700002C")]
	public bool GpuPerformanceBoost
	{
		[Token(Token = "0x600008F")]
		[Address(RVA = "0x2809E90", Offset = "0x2808490", VA = "0x182809E90", Slot = "13")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000090")]
		[Address(RVA = "0x2809EA0", Offset = "0x28084A0", VA = "0x182809EA0", Slot = "14")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x2E913A0", Offset = "0x2E8F9A0", VA = "0x182E913A0")]
	public DevicePerformanceControlImpl(IDevicePerformanceLevelControl performanceLevelControl)
	{
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x2E90F90", Offset = "0x2E8F590", VA = "0x182E90F90")]
	public bool Update(out PerformanceLevelChangeEventArgs changeArgs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x2E90F60", Offset = "0x2E8F560", VA = "0x182E90F60")]
	private int ComputeDelta(int oldLevel, int newLevel)
	{
		return default(int);
	}
}
