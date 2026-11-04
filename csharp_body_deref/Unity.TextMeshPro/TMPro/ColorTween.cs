// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.ColorTween
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.Events;

namespace TMPro;

[Token(Token = "0x200001E")]
internal struct ColorTween : ITweenValue
{
	[Token(Token = "0x200001F")]
	public enum ColorTweenMode
	{
		[Token(Token = "0x4000088")]
		All,
		[Token(Token = "0x4000089")]
		RGB,
		[Token(Token = "0x400008A")]
		Alpha
	}

	[Token(Token = "0x2000020")]
	public class ColorTweenCallback : UnityEvent<Color>
	{
		[Token(Token = "0x6000095")]
		[Address(RVA = "0x2CDD270", Offset = "0x2CDB870", VA = "0x182CDD270")]
		public ColorTweenCallback()
		{
		}
	}

	[Token(Token = "0x4000081")]
	[FieldOffset(Offset = "0x0")]
	private ColorTweenCallback m_Target;

	[Token(Token = "0x4000082")]
	[FieldOffset(Offset = "0x8")]
	private Color m_StartColor;

	[Token(Token = "0x4000083")]
	[FieldOffset(Offset = "0x18")]
	private Color m_TargetColor;

	[Token(Token = "0x4000084")]
	[FieldOffset(Offset = "0x28")]
	private ColorTweenMode m_TweenMode;

	[Token(Token = "0x4000085")]
	[FieldOffset(Offset = "0x2C")]
	private float m_Duration;

	[Token(Token = "0x4000086")]
	[FieldOffset(Offset = "0x30")]
	private bool m_IgnoreTimeScale;

	[Token(Token = "0x17000022")]
	public Color startColor
	{
		[Token(Token = "0x6000086")]
		[Address(RVA = "0xADC2D0", Offset = "0xADA8D0", VA = "0x180ADC2D0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000087")]
		[Address(RVA = "0x1B040E0", Offset = "0x1B026E0", VA = "0x181B040E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000023")]
	public Color targetColor
	{
		[Token(Token = "0x6000088")]
		[Address(RVA = "0x8E7990", Offset = "0x8E5F90", VA = "0x1808E7990")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000089")]
		[Address(RVA = "0x111C9E0", Offset = "0x111AFE0", VA = "0x18111C9E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000024")]
	public ColorTweenMode tweenMode
	{
		[Token(Token = "0x600008A")]
		[Address(RVA = "0x585030", Offset = "0x583630", VA = "0x180585030")]
		get
		{
			return default(ColorTweenMode);
		}
		[Token(Token = "0x600008B")]
		[Address(RVA = "0x585090", Offset = "0x583690", VA = "0x180585090")]
		set
		{
		}
	}

	[Token(Token = "0x17000025")]
	public float duration
	{
		[Token(Token = "0x600008C")]
		[Address(RVA = "0x1D90480", Offset = "0x1D8EA80", VA = "0x181D90480", Slot = "6")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600008D")]
		[Address(RVA = "0x2CDD470", Offset = "0x2CDBA70", VA = "0x182CDD470")]
		set
		{
		}
	}

	[Token(Token = "0x17000026")]
	public bool ignoreTimeScale
	{
		[Token(Token = "0x600008E")]
		[Address(RVA = "0xACDD00", Offset = "0xACC300", VA = "0x180ACDD00", Slot = "5")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600008F")]
		[Address(RVA = "0xACE1A0", Offset = "0xACC7A0", VA = "0x180ACE1A0")]
		set
		{
		}
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x2CDD370", Offset = "0x2CDB970", VA = "0x182CDD370", Slot = "4")]
	public void TweenValue(float floatPercentage)
	{
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x2CDD2B0", Offset = "0x2CDB8B0", VA = "0x182CDD2B0")]
	public void AddOnChangedCallback(UnityAction<Color> callback)
	{
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0xACDD00", Offset = "0xACC300", VA = "0x180ACDD00")]
	public bool GetIgnoreTimescale()
	{
		return default(bool);
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x1D90480", Offset = "0x1D8EA80", VA = "0x181D90480")]
	public float GetDuration()
	{
		return default(float);
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x1B96F50", Offset = "0x1B95550", VA = "0x181B96F50", Slot = "7")]
	public bool ValidTarget()
	{
		return default(bool);
	}
}
