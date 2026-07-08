using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.Events;

namespace TMPro;

[Token(Token = "0x2000017")]
internal struct ColorTween : ITweenValue
{
	[Token(Token = "0x2000018")]
	public enum ColorTweenMode
	{
		[Token(Token = "0x4000077")]
		All,
		[Token(Token = "0x4000078")]
		RGB,
		[Token(Token = "0x4000079")]
		Alpha
	}

	[Token(Token = "0x2000019")]
	public class ColorTweenCallback : UnityEvent<Color>
	{
		[Token(Token = "0x600006A")]
		[Address(RVA = "0x48F8250", Offset = "0x48F8250", VA = "0x48F8250")]
		public ColorTweenCallback()
		{
		}
	}

	[Token(Token = "0x4000070")]
	[FieldOffset(Offset = "0x0")]
	private ColorTweenCallback m_Target;

	[Token(Token = "0x4000071")]
	[FieldOffset(Offset = "0x8")]
	private Color m_StartColor;

	[Token(Token = "0x4000072")]
	[FieldOffset(Offset = "0x18")]
	private Color m_TargetColor;

	[Token(Token = "0x4000073")]
	[FieldOffset(Offset = "0x28")]
	private ColorTweenMode m_TweenMode;

	[Token(Token = "0x4000074")]
	[FieldOffset(Offset = "0x2C")]
	private float m_Duration;

	[Token(Token = "0x4000075")]
	[FieldOffset(Offset = "0x30")]
	private bool m_IgnoreTimeScale;

	[Token(Token = "0x1700000D")]
	public Color startColor
	{
		[Token(Token = "0x600005B")]
		[Address(RVA = "0x48F8020", Offset = "0x48F8020", VA = "0x48F8020")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x600005C")]
		[Address(RVA = "0x48F8030", Offset = "0x48F8030", VA = "0x48F8030")]
		set
		{
		}
	}

	[Token(Token = "0x1700000E")]
	public Color targetColor
	{
		[Token(Token = "0x600005D")]
		[Address(RVA = "0x48F8040", Offset = "0x48F8040", VA = "0x48F8040")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x600005E")]
		[Address(RVA = "0x48F8050", Offset = "0x48F8050", VA = "0x48F8050")]
		set
		{
		}
	}

	[Token(Token = "0x1700000F")]
	public ColorTweenMode tweenMode
	{
		[Token(Token = "0x600005F")]
		[Address(RVA = "0x48F8060", Offset = "0x48F8060", VA = "0x48F8060")]
		get
		{
			return default(ColorTweenMode);
		}
		[Token(Token = "0x6000060")]
		[Address(RVA = "0x48F8070", Offset = "0x48F8070", VA = "0x48F8070")]
		set
		{
		}
	}

	[Token(Token = "0x17000010")]
	public float duration
	{
		[Token(Token = "0x6000061")]
		[Address(RVA = "0x48F8080", Offset = "0x48F8080", VA = "0x48F8080", Slot = "6")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000062")]
		[Address(RVA = "0x48F8090", Offset = "0x48F8090", VA = "0x48F8090")]
		set
		{
		}
	}

	[Token(Token = "0x17000011")]
	public bool ignoreTimeScale
	{
		[Token(Token = "0x6000063")]
		[Address(RVA = "0x48F80A0", Offset = "0x48F80A0", VA = "0x48F80A0", Slot = "5")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000064")]
		[Address(RVA = "0x48F80B0", Offset = "0x48F80B0", VA = "0x48F80B0")]
		set
		{
		}
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x48F80C0", Offset = "0x48F80C0", VA = "0x48F80C0", Slot = "4")]
	public void TweenValue(float floatPercentage)
	{
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x48F81A0", Offset = "0x48F81A0", VA = "0x48F81A0")]
	public void AddOnChangedCallback(UnityAction<Color> callback)
	{
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x48F8290", Offset = "0x48F8290", VA = "0x48F8290")]
	public bool GetIgnoreTimescale()
	{
		return default(bool);
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x48F82A0", Offset = "0x48F82A0", VA = "0x48F82A0")]
	public float GetDuration()
	{
		return default(float);
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x48F8190", Offset = "0x48F8190", VA = "0x48F8190", Slot = "7")]
	public bool ValidTarget()
	{
		return default(bool);
	}
}
