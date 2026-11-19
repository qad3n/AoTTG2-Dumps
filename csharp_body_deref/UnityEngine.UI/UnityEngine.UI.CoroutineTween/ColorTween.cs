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
		[Address(RVA = "0x6D00A00", Offset = "0x6CFFA00", VA = "0x6D00A00")]
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
		[Address(RVA = "0x6D007E0", Offset = "0x6CFF7E0", VA = "0x6D007E0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x600056B")]
		[Address(RVA = "0x6D007F0", Offset = "0x6CFF7F0", VA = "0x6D007F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000160")]
	public Color targetColor
	{
		[Token(Token = "0x600056C")]
		[Address(RVA = "0x6D00800", Offset = "0x6CFF800", VA = "0x6D00800")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x600056D")]
		[Address(RVA = "0x6D00810", Offset = "0x6CFF810", VA = "0x6D00810")]
		set
		{
		}
	}

	[Token(Token = "0x17000161")]
	public ColorTweenMode tweenMode
	{
		[Token(Token = "0x600056E")]
		[Address(RVA = "0x6D00820", Offset = "0x6CFF820", VA = "0x6D00820")]
		get
		{
			return default(ColorTweenMode);
		}
		[Token(Token = "0x600056F")]
		[Address(RVA = "0x6D00830", Offset = "0x6CFF830", VA = "0x6D00830")]
		set
		{
		}
	}

	[Token(Token = "0x17000162")]
	public float duration
	{
		[Token(Token = "0x6000570")]
		[Address(RVA = "0x6D00840", Offset = "0x6CFF840", VA = "0x6D00840", Slot = "6")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000571")]
		[Address(RVA = "0x6D00850", Offset = "0x6CFF850", VA = "0x6D00850")]
		set
		{
		}
	}

	[Token(Token = "0x17000163")]
	public bool ignoreTimeScale
	{
		[Token(Token = "0x6000572")]
		[Address(RVA = "0x6D00860", Offset = "0x6CFF860", VA = "0x6D00860", Slot = "5")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000573")]
		[Address(RVA = "0x6D00870", Offset = "0x6CFF870", VA = "0x6D00870")]
		set
		{
		}
	}

	[Token(Token = "0x6000574")]
	[Address(RVA = "0x6D00880", Offset = "0x6CFF880", VA = "0x6D00880", Slot = "4")]
	public void TweenValue(float floatPercentage)
	{
	}

	[Token(Token = "0x6000575")]
	[Address(RVA = "0x6D00950", Offset = "0x6CFF950", VA = "0x6D00950")]
	public void AddOnChangedCallback(UnityAction<Color> callback)
	{
	}

	[Token(Token = "0x6000576")]
	[Address(RVA = "0x6D00A40", Offset = "0x6CFFA40", VA = "0x6D00A40")]
	public bool GetIgnoreTimescale()
	{
		return default(bool);
	}

	[Token(Token = "0x6000577")]
	[Address(RVA = "0x6D00A50", Offset = "0x6CFFA50", VA = "0x6D00A50")]
	public float GetDuration()
	{
		return default(float);
	}

	[Token(Token = "0x6000578")]
	[Address(RVA = "0x6D00940", Offset = "0x6CFF940", VA = "0x6D00940", Slot = "7")]
	public bool ValidTarget()
	{
		return default(bool);
	}
}
