// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.CoroutineTween.ColorTween
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Events;

namespace UnityEngine.UI.CoroutineTween;

[Token(Token = "0x2000089")]
internal struct ColorTween : ITweenValue
{
	[Token(Token = "0x200008A")]
	public enum ColorTweenMode
	{
		[Token(Token = "0x400027D")]
		All,
		[Token(Token = "0x400027E")]
		RGB,
		[Token(Token = "0x400027F")]
		Alpha
	}

	[Token(Token = "0x200008B")]
	public class ColorTweenCallback : UnityEvent<Color>
	{
		[Token(Token = "0x6000579")]
		[Address(RVA = "0x32F2430", Offset = "0x32F0A30", VA = "0x1832F2430")]
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

	[Token(Token = "0x1700015F")]
	public Color startColor
	{
		[Token(Token = "0x600056A")]
		[Address(RVA = "0xADC2D0", Offset = "0xADA8D0", VA = "0x180ADC2D0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x600056B")]
		[Address(RVA = "0x1B040E0", Offset = "0x1B026E0", VA = "0x181B040E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000160")]
	public Color targetColor
	{
		[Token(Token = "0x600056C")]
		[Address(RVA = "0x8E7990", Offset = "0x8E5F90", VA = "0x1808E7990")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x600056D")]
		[Address(RVA = "0x111C9E0", Offset = "0x111AFE0", VA = "0x18111C9E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000161")]
	public ColorTweenMode tweenMode
	{
		[Token(Token = "0x600056E")]
		[Address(RVA = "0x585030", Offset = "0x583630", VA = "0x180585030")]
		get
		{
			return default(ColorTweenMode);
		}
		[Token(Token = "0x600056F")]
		[Address(RVA = "0x585090", Offset = "0x583690", VA = "0x180585090")]
		set
		{
		}
	}

	[Token(Token = "0x17000162")]
	public float duration
	{
		[Token(Token = "0x6000570")]
		[Address(RVA = "0x1D90480", Offset = "0x1D8EA80", VA = "0x181D90480", Slot = "6")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000571")]
		[Address(RVA = "0x2CDD470", Offset = "0x2CDBA70", VA = "0x182CDD470")]
		set
		{
		}
	}

	[Token(Token = "0x17000163")]
	public bool ignoreTimeScale
	{
		[Token(Token = "0x6000572")]
		[Address(RVA = "0xACDD00", Offset = "0xACC300", VA = "0x180ACDD00", Slot = "5")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000573")]
		[Address(RVA = "0xACE1A0", Offset = "0xACC7A0", VA = "0x180ACE1A0")]
		set
		{
		}
	}

	[Token(Token = "0x6000574")]
	[Address(RVA = "0x32F2530", Offset = "0x32F0B30", VA = "0x1832F2530", Slot = "4")]
	public void TweenValue(float floatPercentage)
	{
	}

	[Token(Token = "0x6000575")]
	[Address(RVA = "0x32F2470", Offset = "0x32F0A70", VA = "0x1832F2470")]
	public void AddOnChangedCallback(UnityAction<Color> callback)
	{
	}

	[Token(Token = "0x6000576")]
	[Address(RVA = "0xACDD00", Offset = "0xACC300", VA = "0x180ACDD00")]
	public bool GetIgnoreTimescale()
	{
		return default(bool);
	}

	[Token(Token = "0x6000577")]
	[Address(RVA = "0x1D90480", Offset = "0x1D8EA80", VA = "0x181D90480")]
	public float GetDuration()
	{
		return default(float);
	}

	[Token(Token = "0x6000578")]
	[Address(RVA = "0x1B96F50", Offset = "0x1B95550", VA = "0x181B96F50", Slot = "7")]
	public bool ValidTarget()
	{
		return default(bool);
	}
}
