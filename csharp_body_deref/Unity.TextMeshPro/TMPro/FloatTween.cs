// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.FloatTween
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Events;

namespace TMPro;

[Token(Token = "0x2000021")]
internal struct FloatTween : ITweenValue
{
	[Token(Token = "0x2000022")]
	public class FloatTweenCallback : UnityEvent<float>
	{
		[Token(Token = "0x60000A3")]
		[Address(RVA = "0x2CDD890", Offset = "0x2CDBE90", VA = "0x182CDD890")]
		public FloatTweenCallback()
		{
		}
	}

	[Token(Token = "0x400008B")]
	[FieldOffset(Offset = "0x0")]
	private FloatTweenCallback m_Target;

	[Token(Token = "0x400008C")]
	[FieldOffset(Offset = "0x8")]
	private float m_StartValue;

	[Token(Token = "0x400008D")]
	[FieldOffset(Offset = "0xC")]
	private float m_TargetValue;

	[Token(Token = "0x400008E")]
	[FieldOffset(Offset = "0x10")]
	private float m_Duration;

	[Token(Token = "0x400008F")]
	[FieldOffset(Offset = "0x14")]
	private bool m_IgnoreTimeScale;

	[Token(Token = "0x17000027")]
	public float startValue
	{
		[Token(Token = "0x6000096")]
		[Address(RVA = "0x562B90", Offset = "0x561190", VA = "0x180562B90")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000097")]
		[Address(RVA = "0x2CDDA10", Offset = "0x2CDC010", VA = "0x182CDDA10")]
		set
		{
		}
	}

	[Token(Token = "0x17000028")]
	public float targetValue
	{
		[Token(Token = "0x6000098")]
		[Address(RVA = "0x562B80", Offset = "0x561180", VA = "0x180562B80")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000099")]
		[Address(RVA = "0x2A3A8E0", Offset = "0x2A38EE0", VA = "0x182A3A8E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000029")]
	public float duration
	{
		[Token(Token = "0x600009A")]
		[Address(RVA = "0x5606A0", Offset = "0x55ECA0", VA = "0x1805606A0", Slot = "6")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600009B")]
		[Address(RVA = "0x5606B0", Offset = "0x55ECB0", VA = "0x1805606B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002A")]
	public bool ignoreTimeScale
	{
		[Token(Token = "0x600009C")]
		[Address(RVA = "0x1537420", Offset = "0x1535A20", VA = "0x181537420", Slot = "5")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600009D")]
		[Address(RVA = "0x1A78710", Offset = "0x1A76D10", VA = "0x181A78710")]
		set
		{
		}
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x2CDD990", Offset = "0x2CDBF90", VA = "0x182CDD990", Slot = "4")]
	public void TweenValue(float floatPercentage)
	{
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x2CDD8D0", Offset = "0x2CDBED0", VA = "0x182CDD8D0")]
	public void AddOnChangedCallback(UnityAction<float> callback)
	{
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x1537420", Offset = "0x1535A20", VA = "0x181537420")]
	public bool GetIgnoreTimescale()
	{
		return default(bool);
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x5606A0", Offset = "0x55ECA0", VA = "0x1805606A0")]
	public float GetDuration()
	{
		return default(float);
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x1B96F50", Offset = "0x1B95550", VA = "0x181B96F50", Slot = "7")]
	public bool ValidTarget()
	{
		return default(bool);
	}
}
