using Il2CppDummyDll;
using UnityEngine.Events;

namespace UnityEngine.UI.CoroutineTween;

[Token(Token = "0x200008E")]
internal struct FloatTween : ITweenValue
{
	[Token(Token = "0x200008F")]
	public class FloatTweenCallback : UnityEvent<float>
	{
		[Token(Token = "0x600057B")]
		[Address(RVA = "0x4DC9510", Offset = "0x4DC9510", VA = "0x4DC9510")]
		public FloatTweenCallback()
		{
		}
	}

	[Token(Token = "0x4000280")]
	[FieldOffset(Offset = "0x0")]
	private FloatTweenCallback m_Target;

	[Token(Token = "0x4000281")]
	[FieldOffset(Offset = "0x8")]
	private float m_StartValue;

	[Token(Token = "0x4000282")]
	[FieldOffset(Offset = "0xC")]
	private float m_TargetValue;

	[Token(Token = "0x4000283")]
	[FieldOffset(Offset = "0x10")]
	private float m_Duration;

	[Token(Token = "0x4000284")]
	[FieldOffset(Offset = "0x14")]
	private bool m_IgnoreTimeScale;

	[Token(Token = "0x17000163")]
	public float startValue
	{
		[Token(Token = "0x600056E")]
		[Address(RVA = "0x4DC9350", Offset = "0x4DC9350", VA = "0x4DC9350")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600056F")]
		[Address(RVA = "0x4DC9360", Offset = "0x4DC9360", VA = "0x4DC9360")]
		set
		{
		}
	}

	[Token(Token = "0x17000164")]
	public float targetValue
	{
		[Token(Token = "0x6000570")]
		[Address(RVA = "0x4DC9370", Offset = "0x4DC9370", VA = "0x4DC9370")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000571")]
		[Address(RVA = "0x4DC9380", Offset = "0x4DC9380", VA = "0x4DC9380")]
		set
		{
		}
	}

	[Token(Token = "0x17000165")]
	public float duration
	{
		[Token(Token = "0x6000572")]
		[Address(RVA = "0x4DC9390", Offset = "0x4DC9390", VA = "0x4DC9390", Slot = "6")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000573")]
		[Address(RVA = "0x4DC93A0", Offset = "0x4DC93A0", VA = "0x4DC93A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000166")]
	public bool ignoreTimeScale
	{
		[Token(Token = "0x6000574")]
		[Address(RVA = "0x4DC93B0", Offset = "0x4DC93B0", VA = "0x4DC93B0", Slot = "5")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000575")]
		[Address(RVA = "0x4DC93C0", Offset = "0x4DC93C0", VA = "0x4DC93C0")]
		set
		{
		}
	}

	[Token(Token = "0x6000576")]
	[Address(RVA = "0x4DC93D0", Offset = "0x4DC93D0", VA = "0x4DC93D0", Slot = "4")]
	public void TweenValue(float floatPercentage)
	{
	}

	[Token(Token = "0x6000577")]
	[Address(RVA = "0x4DC9460", Offset = "0x4DC9460", VA = "0x4DC9460")]
	public void AddOnChangedCallback(UnityAction<float> callback)
	{
	}

	[Token(Token = "0x6000578")]
	[Address(RVA = "0x4DC9550", Offset = "0x4DC9550", VA = "0x4DC9550")]
	public bool GetIgnoreTimescale()
	{
		return default(bool);
	}

	[Token(Token = "0x6000579")]
	[Address(RVA = "0x4DC9560", Offset = "0x4DC9560", VA = "0x4DC9560")]
	public float GetDuration()
	{
		return default(float);
	}

	[Token(Token = "0x600057A")]
	[Address(RVA = "0x4DC9450", Offset = "0x4DC9450", VA = "0x4DC9450", Slot = "7")]
	public bool ValidTarget()
	{
		return default(bool);
	}
}
