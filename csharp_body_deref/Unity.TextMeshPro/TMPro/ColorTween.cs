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

[Token(Token = "0x200002D")]
internal struct ColorTween : ITweenValue
{
	[Token(Token = "0x200002E")]
	public enum ColorTweenMode
	{
		[Token(Token = "0x400016B")]
		All,
		[Token(Token = "0x400016C")]
		RGB,
		[Token(Token = "0x400016D")]
		Alpha
	}

	[Token(Token = "0x200002F")]
	public class ColorTweenCallback : UnityEvent<Color>
	{
		[Token(Token = "0x600015B")]
		[Address(RVA = "0x4C457D0", Offset = "0x4C457D0", VA = "0x4C457D0")]
		public ColorTweenCallback()
		{
		}
	}

	[Token(Token = "0x4000164")]
	[FieldOffset(Offset = "0x0")]
	private ColorTweenCallback m_Target;

	[Token(Token = "0x4000165")]
	[FieldOffset(Offset = "0x8")]
	private Color m_StartColor;

	[Token(Token = "0x4000166")]
	[FieldOffset(Offset = "0x18")]
	private Color m_TargetColor;

	[Token(Token = "0x4000167")]
	[FieldOffset(Offset = "0x28")]
	private ColorTweenMode m_TweenMode;

	[Token(Token = "0x4000168")]
	[FieldOffset(Offset = "0x2C")]
	private float m_Duration;

	[Token(Token = "0x4000169")]
	[FieldOffset(Offset = "0x30")]
	private bool m_IgnoreTimeScale;

	[Token(Token = "0x1700002E")]
	public Color startColor
	{
		[Token(Token = "0x600014C")]
		[Address(RVA = "0x4C455A0", Offset = "0x4C455A0", VA = "0x4C455A0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x600014D")]
		[Address(RVA = "0x4C455B0", Offset = "0x4C455B0", VA = "0x4C455B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002F")]
	public Color targetColor
	{
		[Token(Token = "0x600014E")]
		[Address(RVA = "0x4C455C0", Offset = "0x4C455C0", VA = "0x4C455C0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x600014F")]
		[Address(RVA = "0x4C455D0", Offset = "0x4C455D0", VA = "0x4C455D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000030")]
	public ColorTweenMode tweenMode
	{
		[Token(Token = "0x6000150")]
		[Address(RVA = "0x4C455E0", Offset = "0x4C455E0", VA = "0x4C455E0")]
		get
		{
			return default(ColorTweenMode);
		}
		[Token(Token = "0x6000151")]
		[Address(RVA = "0x4C455F0", Offset = "0x4C455F0", VA = "0x4C455F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000031")]
	public float duration
	{
		[Token(Token = "0x6000152")]
		[Address(RVA = "0x4C45600", Offset = "0x4C45600", VA = "0x4C45600", Slot = "6")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000153")]
		[Address(RVA = "0x4C45610", Offset = "0x4C45610", VA = "0x4C45610")]
		set
		{
		}
	}

	[Token(Token = "0x17000032")]
	public bool ignoreTimeScale
	{
		[Token(Token = "0x6000154")]
		[Address(RVA = "0x4C45620", Offset = "0x4C45620", VA = "0x4C45620", Slot = "5")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000155")]
		[Address(RVA = "0x4C45630", Offset = "0x4C45630", VA = "0x4C45630")]
		set
		{
		}
	}

	[Token(Token = "0x6000156")]
	[Address(RVA = "0x4C45640", Offset = "0x4C45640", VA = "0x4C45640", Slot = "4")]
	public void TweenValue(float floatPercentage)
	{
	}

	[Token(Token = "0x6000157")]
	[Address(RVA = "0x4C45720", Offset = "0x4C45720", VA = "0x4C45720")]
	public void AddOnChangedCallback(UnityAction<Color> callback)
	{
	}

	[Token(Token = "0x6000158")]
	[Address(RVA = "0x4C45810", Offset = "0x4C45810", VA = "0x4C45810")]
	public bool GetIgnoreTimescale()
	{
		return default(bool);
	}

	[Token(Token = "0x6000159")]
	[Address(RVA = "0x4C45820", Offset = "0x4C45820", VA = "0x4C45820")]
	public float GetDuration()
	{
		return default(float);
	}

	[Token(Token = "0x600015A")]
	[Address(RVA = "0x4C45710", Offset = "0x4C45710", VA = "0x4C45710", Slot = "7")]
	public bool ValidTarget()
	{
		return default(bool);
	}
}
