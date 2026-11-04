// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.AdaptivePerformanceScalerSettingsBase
// Update status: NEW in this game update
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
	[SerializeField]
	[Tooltip("Minimum value for the scale boundary.")]
	private float m_MinBound;

	[Token(Token = "0x40000F8")]
	[FieldOffset(Offset = "0x30")]
	[Tooltip("Maximum value for the scale boundary.")]
	[SerializeField]
	private float m_MaxBound;

	[Token(Token = "0x1700009B")]
	public string name
	{
		[Token(Token = "0x60001C8")]
		[Address(RVA = "0x172DEB0", Offset = "0x172C4B0", VA = "0x18172DEB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001C9")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		set
		{
		}
	}

	[Token(Token = "0x1700009C")]
	public bool enabled
	{
		[Token(Token = "0x60001CA")]
		[Address(RVA = "0x2E85230", Offset = "0x2E83830", VA = "0x182E85230")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001CB")]
		[Address(RVA = "0x111C9F0", Offset = "0x111AFF0", VA = "0x18111C9F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700009D")]
	public float scale
	{
		[Token(Token = "0x60001CC")]
		[Address(RVA = "0x2E8CC00", Offset = "0x2E8B200", VA = "0x182E8CC00")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001CD")]
		[Address(RVA = "0x2B5B5F0", Offset = "0x2B59BF0", VA = "0x182B5B5F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700009E")]
	public ScalerVisualImpact visualImpact
	{
		[Token(Token = "0x60001CE")]
		[Address(RVA = "0xE28270", Offset = "0xE26870", VA = "0x180E28270")]
		get
		{
			return default(ScalerVisualImpact);
		}
		[Token(Token = "0x60001CF")]
		[Address(RVA = "0xE4C6E0", Offset = "0xE4ACE0", VA = "0x180E4C6E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700009F")]
	public ScalerTarget target
	{
		[Token(Token = "0x60001D0")]
		[Address(RVA = "0x1CC78C0", Offset = "0x1CC5EC0", VA = "0x181CC78C0")]
		get
		{
			return default(ScalerTarget);
		}
		[Token(Token = "0x60001D1")]
		[Address(RVA = "0xD23EF0", Offset = "0xD224F0", VA = "0x180D23EF0")]
		set
		{
		}
	}

	[Token(Token = "0x170000A0")]
	public int maxLevel
	{
		[Token(Token = "0x60001D2")]
		[Address(RVA = "0xE282E0", Offset = "0xE268E0", VA = "0x180E282E0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001D3")]
		[Address(RVA = "0x585090", Offset = "0x583690", VA = "0x180585090")]
		set
		{
		}
	}

	[Token(Token = "0x170000A1")]
	public float minBound
	{
		[Token(Token = "0x60001D4")]
		[Address(RVA = "0xD0EAF0", Offset = "0xD0D0F0", VA = "0x180D0EAF0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001D5")]
		[Address(RVA = "0x2CDD470", Offset = "0x2CDBA70", VA = "0x182CDD470")]
		set
		{
		}
	}

	[Token(Token = "0x170000A2")]
	public float maxBound
	{
		[Token(Token = "0x60001D6")]
		[Address(RVA = "0x2E8CBF0", Offset = "0x2E8B1F0", VA = "0x182E8CBF0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60001D7")]
		[Address(RVA = "0x584CB0", Offset = "0x5832B0", VA = "0x180584CB0")]
		set
		{
		}
	}

	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x2E8CB70", Offset = "0x2E8B170", VA = "0x182E8CB70")]
	public AdaptivePerformanceScalerSettingsBase()
	{
	}
}
