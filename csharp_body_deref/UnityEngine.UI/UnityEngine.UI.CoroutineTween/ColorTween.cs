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
		[Address(RVA = "0x50F0C40", Offset = "0x50F0C40", VA = "0x50F0C40")]
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
		[Address(RVA = "0x50F0A10", Offset = "0x50F0A10", VA = "0x50F0A10")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x600055F")]
		[Address(RVA = "0x50F0A20", Offset = "0x50F0A20", VA = "0x50F0A20")]
		set
		{
		}
	}

	[Token(Token = "0x1700015F")]
	public Color targetColor
	{
		[Token(Token = "0x6000560")]
		[Address(RVA = "0x50F0A30", Offset = "0x50F0A30", VA = "0x50F0A30")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000561")]
		[Address(RVA = "0x50F0A40", Offset = "0x50F0A40", VA = "0x50F0A40")]
		set
		{
		}
	}

	[Token(Token = "0x17000160")]
	public ColorTweenMode tweenMode
	{
		[Token(Token = "0x6000562")]
		[Address(RVA = "0x50F0A50", Offset = "0x50F0A50", VA = "0x50F0A50")]
		get
		{
			return default(ColorTweenMode);
		}
		[Token(Token = "0x6000563")]
		[Address(RVA = "0x50F0A60", Offset = "0x50F0A60", VA = "0x50F0A60")]
		set
		{
		}
	}

	[Token(Token = "0x17000161")]
	public float duration
	{
		[Token(Token = "0x6000564")]
		[Address(RVA = "0x50F0A70", Offset = "0x50F0A70", VA = "0x50F0A70", Slot = "6")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000565")]
		[Address(RVA = "0x50F0A80", Offset = "0x50F0A80", VA = "0x50F0A80")]
		set
		{
		}
	}

	[Token(Token = "0x17000162")]
	public bool ignoreTimeScale
	{
		[Token(Token = "0x6000566")]
		[Address(RVA = "0x50F0A90", Offset = "0x50F0A90", VA = "0x50F0A90", Slot = "5")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000567")]
		[Address(RVA = "0x50F0AA0", Offset = "0x50F0AA0", VA = "0x50F0AA0")]
		set
		{
		}
	}

	[Token(Token = "0x6000568")]
	[Address(RVA = "0x50F0AB0", Offset = "0x50F0AB0", VA = "0x50F0AB0", Slot = "4")]
	public void TweenValue(float floatPercentage)
	{
	}

	[Token(Token = "0x6000569")]
	[Address(RVA = "0x50F0B90", Offset = "0x50F0B90", VA = "0x50F0B90")]
	public void AddOnChangedCallback(UnityAction<Color> callback)
	{
	}

	[Token(Token = "0x600056A")]
	[Address(RVA = "0x50F0C80", Offset = "0x50F0C80", VA = "0x50F0C80")]
	public bool GetIgnoreTimescale()
	{
		return default(bool);
	}

	[Token(Token = "0x600056B")]
	[Address(RVA = "0x50F0C90", Offset = "0x50F0C90", VA = "0x50F0C90")]
	public float GetDuration()
	{
		return default(float);
	}

	[Token(Token = "0x600056C")]
	[Address(RVA = "0x50F0B80", Offset = "0x50F0B80", VA = "0x50F0B80", Slot = "7")]
	public bool ValidTarget()
	{
		return default(bool);
	}
}
