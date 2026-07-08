using Il2CppDummyDll;
using UnityEngine.Events;

namespace UnityEngine.UI.CoroutineTween;

[Token(Token = "0x200008B")]
internal struct ColorTween : ITweenValue
{
	[Token(Token = "0x200008C")]
	public enum ColorTweenMode
	{
		[Token(Token = "0x400027D")]
		All,
		[Token(Token = "0x400027E")]
		RGB,
		[Token(Token = "0x400027F")]
		Alpha
	}

	[Token(Token = "0x200008D")]
	public class ColorTweenCallback : UnityEvent<Color>
	{
		[Token(Token = "0x600056D")]
		[Address(RVA = "0x4DC92F0", Offset = "0x4DC92F0", VA = "0x4DC92F0")]
		public ColorTweenCallback()
		{
		}
	}

	[Token(Token = "0x4000276")]
	[FieldOffset(Offset = "0x0")]
	private ColorTweenCallback m_Target;

	[Token(Token = "0x4000277")]
	[FieldOffset(Offset = "0x8")]
	private Color m_StartColor;

	[Token(Token = "0x4000278")]
	[FieldOffset(Offset = "0x18")]
	private Color m_TargetColor;

	[Token(Token = "0x4000279")]
	[FieldOffset(Offset = "0x28")]
	private ColorTweenMode m_TweenMode;

	[Token(Token = "0x400027A")]
	[FieldOffset(Offset = "0x2C")]
	private float m_Duration;

	[Token(Token = "0x400027B")]
	[FieldOffset(Offset = "0x30")]
	private bool m_IgnoreTimeScale;

	[Token(Token = "0x1700015E")]
	public Color startColor
	{
		[Token(Token = "0x600055E")]
		[Address(RVA = "0x4DC90C0", Offset = "0x4DC90C0", VA = "0x4DC90C0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x600055F")]
		[Address(RVA = "0x4DC90D0", Offset = "0x4DC90D0", VA = "0x4DC90D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700015F")]
	public Color targetColor
	{
		[Token(Token = "0x6000560")]
		[Address(RVA = "0x4DC90E0", Offset = "0x4DC90E0", VA = "0x4DC90E0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000561")]
		[Address(RVA = "0x4DC90F0", Offset = "0x4DC90F0", VA = "0x4DC90F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000160")]
	public ColorTweenMode tweenMode
	{
		[Token(Token = "0x6000562")]
		[Address(RVA = "0x4DC9100", Offset = "0x4DC9100", VA = "0x4DC9100")]
		get
		{
			return default(ColorTweenMode);
		}
		[Token(Token = "0x6000563")]
		[Address(RVA = "0x4DC9110", Offset = "0x4DC9110", VA = "0x4DC9110")]
		set
		{
		}
	}

	[Token(Token = "0x17000161")]
	public float duration
	{
		[Token(Token = "0x6000564")]
		[Address(RVA = "0x4DC9120", Offset = "0x4DC9120", VA = "0x4DC9120", Slot = "6")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000565")]
		[Address(RVA = "0x4DC9130", Offset = "0x4DC9130", VA = "0x4DC9130")]
		set
		{
		}
	}

	[Token(Token = "0x17000162")]
	public bool ignoreTimeScale
	{
		[Token(Token = "0x6000566")]
		[Address(RVA = "0x4DC9140", Offset = "0x4DC9140", VA = "0x4DC9140", Slot = "5")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000567")]
		[Address(RVA = "0x4DC9150", Offset = "0x4DC9150", VA = "0x4DC9150")]
		set
		{
		}
	}

	[Token(Token = "0x6000568")]
	[Address(RVA = "0x4DC9160", Offset = "0x4DC9160", VA = "0x4DC9160", Slot = "4")]
	public void TweenValue(float floatPercentage)
	{
	}

	[Token(Token = "0x6000569")]
	[Address(RVA = "0x4DC9240", Offset = "0x4DC9240", VA = "0x4DC9240")]
	public void AddOnChangedCallback(UnityAction<Color> callback)
	{
	}

	[Token(Token = "0x600056A")]
	[Address(RVA = "0x4DC9330", Offset = "0x4DC9330", VA = "0x4DC9330")]
	public bool GetIgnoreTimescale()
	{
		return default(bool);
	}

	[Token(Token = "0x600056B")]
	[Address(RVA = "0x4DC9340", Offset = "0x4DC9340", VA = "0x4DC9340")]
	public float GetDuration()
	{
		return default(float);
	}

	[Token(Token = "0x600056C")]
	[Address(RVA = "0x4DC9230", Offset = "0x4DC9230", VA = "0x4DC9230", Slot = "7")]
	public bool ValidTarget()
	{
		return default(bool);
	}
}
