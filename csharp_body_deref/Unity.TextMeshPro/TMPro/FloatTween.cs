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
		[Address(RVA = "0x66DD820", Offset = "0x66DC820", VA = "0x66DD820")]
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
		[Address(RVA = "0x66DD660", Offset = "0x66DC660", VA = "0x66DD660")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000097")]
		[Address(RVA = "0x66DD670", Offset = "0x66DC670", VA = "0x66DD670")]
		set
		{
		}
	}

	[Token(Token = "0x17000028")]
	public float targetValue
	{
		[Token(Token = "0x6000098")]
		[Address(RVA = "0x66DD680", Offset = "0x66DC680", VA = "0x66DD680")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000099")]
		[Address(RVA = "0x66DD690", Offset = "0x66DC690", VA = "0x66DD690")]
		set
		{
		}
	}

	[Token(Token = "0x17000029")]
	public float duration
	{
		[Token(Token = "0x600009A")]
		[Address(RVA = "0x66DD6A0", Offset = "0x66DC6A0", VA = "0x66DD6A0", Slot = "6")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600009B")]
		[Address(RVA = "0x66DD6B0", Offset = "0x66DC6B0", VA = "0x66DD6B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002A")]
	public bool ignoreTimeScale
	{
		[Token(Token = "0x600009C")]
		[Address(RVA = "0x66DD6C0", Offset = "0x66DC6C0", VA = "0x66DD6C0", Slot = "5")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600009D")]
		[Address(RVA = "0x66DD6D0", Offset = "0x66DC6D0", VA = "0x66DD6D0")]
		set
		{
		}
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x66DD6E0", Offset = "0x66DC6E0", VA = "0x66DD6E0", Slot = "4")]
	public void TweenValue(float floatPercentage)
	{
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x66DD770", Offset = "0x66DC770", VA = "0x66DD770")]
	public void AddOnChangedCallback(UnityAction<float> callback)
	{
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x66DD860", Offset = "0x66DC860", VA = "0x66DD860")]
	public bool GetIgnoreTimescale()
	{
		return default(bool);
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x66DD870", Offset = "0x66DC870", VA = "0x66DD870")]
	public float GetDuration()
	{
		return default(float);
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x66DD760", Offset = "0x66DC760", VA = "0x66DD760", Slot = "7")]
	public bool ValidTarget()
	{
		return default(bool);
	}
}
