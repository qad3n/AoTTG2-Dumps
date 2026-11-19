// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.AdaptivePerformanceScalerSettingsBase
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.AdaptivePerformance;

[Serializable]
[Token(Token = "0x2000039")]
public class AdaptivePerformanceScalerSettingsBase
{
	[Token(Token = "0x40000F1")]
	[FieldOffset(Offset = "0x10")]
	[SerializeField]
	[Tooltip("Name of the scaler.")]
	private string m_Name;

	[Token(Token = "0x40000F2")]
	[FieldOffset(Offset = "0x18")]
	[Tooltip("Active")]
	[SerializeField]
	private bool m_Enabled;

	[Token(Token = "0x40000F3")]
	[FieldOffset(Offset = "0x1C")]
	[Tooltip("Scale to control the quality impact for the scaler. No quality change when 1, improved quality when >1, and lowered quality when <1.")]
	[SerializeField]
	private float m_Scale;

	[Token(Token = "0x40000F4")]
	[FieldOffset(Offset = "0x20")]
	[Tooltip("Visual impact the scaler has on the application. The higher the value, the more impact the scaler has on the visuals.")]
	[SerializeField]
	private ScalerVisualImpact m_VisualImpact;

	[Token(Token = "0x40000F5")]
	[FieldOffset(Offset = "0x24")]
	[Tooltip("Application bottleneck that the scaler targets. The target selected has the most impact on the quality control of this scaler.")]
	[SerializeField]
	private ScalerTarget m_Target;

	[Token(Token = "0x40000F6")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	[Tooltip("Maximum level for the scaler. This is tied to the implementation of the scaler to divide the levels into concrete steps.")]
	private int m_MaxLevel;

	[Token(Token = "0x40000F7")]
	[FieldOffset(Offset = "0x2C")]
	[Tooltip("Minimum value for the scale boundary.")]
	[SerializeField]
	private float m_MinBound;

	[Token(Token = "0x40000F8")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	[Tooltip("Maximum value for the scale boundary.")]
	private float m_MaxBound;

	[Token(Token = "0x1700009B")]
	public string name
	{
		[Token(Token = "0x60001C8")]
		[Address(RVA = "0x688A100", Offset = "0x6889100", VA = "0x688A100")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001C9")]
		[Address(RVA = "0x688A160", Offset = "0x6889160", VA = "0x688A160")]
		set
		{
		}
	}

	[Token(Token = "0x1700009C")]
	public bool enabled
	{
		[Token(Token = "0x60001CA")]
		[Address(RVA = "0x688A190", Offset = "0x6889190", VA = "0x688A190")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001CB")]
		[Address(RVA = "0x688A1D0", Offset = "0x68891D0", VA = "0x688A1D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700009D")]
	public float scale
	{
		[Token(Token = "0x60001CC")]
		[Address(RVA = "0x688A200", Offset = "0x6889200", VA = "0x688A200")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001CD")]
		[Address(RVA = "0x688A240", Offset = "0x6889240", VA = "0x688A240")]
		set
		{
		}
	}

	[Token(Token = "0x1700009E")]
	public ScalerVisualImpact visualImpact
	{
		[Token(Token = "0x60001CE")]
		[Address(RVA = "0x688A270", Offset = "0x6889270", VA = "0x688A270")]
		get
		{
			return default(ScalerVisualImpact);
		}
		[Token(Token = "0x60001CF")]
		[Address(RVA = "0x688A2A0", Offset = "0x68892A0", VA = "0x688A2A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700009F")]
	public ScalerTarget target
	{
		[Token(Token = "0x60001D0")]
		[Address(RVA = "0x688A2D0", Offset = "0x68892D0", VA = "0x688A2D0")]
		get
		{
			return default(ScalerTarget);
		}
		[Token(Token = "0x60001D1")]
		[Address(RVA = "0x688A300", Offset = "0x6889300", VA = "0x688A300")]
		set
		{
		}
	}

	[Token(Token = "0x170000A0")]
	public int maxLevel
	{
		[Token(Token = "0x60001D2")]
		[Address(RVA = "0x688A330", Offset = "0x6889330", VA = "0x688A330")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001D3")]
		[Address(RVA = "0x688A360", Offset = "0x6889360", VA = "0x688A360")]
		set
		{
		}
	}

	[Token(Token = "0x170000A1")]
	public float minBound
	{
		[Token(Token = "0x60001D4")]
		[Address(RVA = "0x688A390", Offset = "0x6889390", VA = "0x688A390")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001D5")]
		[Address(RVA = "0x688A3D0", Offset = "0x68893D0", VA = "0x688A3D0")]
		set
		{
		}
	}

	[Token(Token = "0x170000A2")]
	public float maxBound
	{
		[Token(Token = "0x60001D6")]
		[Address(RVA = "0x688A400", Offset = "0x6889400", VA = "0x688A400")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001D7")]
		[Address(RVA = "0x688A440", Offset = "0x6889440", VA = "0x688A440")]
		set
		{
		}
	}

	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x688AA00", Offset = "0x6889A00", VA = "0x688AA00")]
	public AdaptivePerformanceScalerSettingsBase()
	{
	}
}
