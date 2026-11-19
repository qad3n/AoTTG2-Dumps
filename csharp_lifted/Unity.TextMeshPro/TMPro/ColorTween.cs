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
		[Address(RVA = "0x66DD600", Offset = "0x66DC600", VA = "0x66DD600")]
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
		[Address(RVA = "0x66DD3E0", Offset = "0x66DC3E0", VA = "0x66DD3E0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000087")]
		[Address(RVA = "0x66DD3F0", Offset = "0x66DC3F0", VA = "0x66DD3F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000023")]
	public Color targetColor
	{
		[Token(Token = "0x6000088")]
		[Address(RVA = "0x66DD400", Offset = "0x66DC400", VA = "0x66DD400")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000089")]
		[Address(RVA = "0x66DD410", Offset = "0x66DC410", VA = "0x66DD410")]
		set
		{
		}
	}

	[Token(Token = "0x17000024")]
	public ColorTweenMode tweenMode
	{
		[Token(Token = "0x600008A")]
		[Address(RVA = "0x66DD420", Offset = "0x66DC420", VA = "0x66DD420")]
		get
		{
			return default(ColorTweenMode);
		}
		[Token(Token = "0x600008B")]
		[Address(RVA = "0x66DD430", Offset = "0x66DC430", VA = "0x66DD430")]
		set
		{
		}
	}

	[Token(Token = "0x17000025")]
	public float duration
	{
		[Token(Token = "0x600008C")]
		[Address(RVA = "0x66DD440", Offset = "0x66DC440", VA = "0x66DD440", Slot = "6")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600008D")]
		[Address(RVA = "0x66DD450", Offset = "0x66DC450", VA = "0x66DD450")]
		set
		{
		}
	}

	[Token(Token = "0x17000026")]
	public bool ignoreTimeScale
	{
		[Token(Token = "0x600008E")]
		[Address(RVA = "0x66DD460", Offset = "0x66DC460", VA = "0x66DD460", Slot = "5")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600008F")]
		[Address(RVA = "0x66DD470", Offset = "0x66DC470", VA = "0x66DD470")]
		set
		{
		}
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x66DD480", Offset = "0x66DC480", VA = "0x66DD480", Slot = "4")]
	public void TweenValue(float floatPercentage)
	{
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x66DD550", Offset = "0x66DC550", VA = "0x66DD550")]
	public void AddOnChangedCallback(UnityAction<Color> callback)
	{
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x66DD640", Offset = "0x66DC640", VA = "0x66DD640")]
	public bool GetIgnoreTimescale()
	{
		return default(bool);
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x66DD650", Offset = "0x66DC650", VA = "0x66DD650")]
	public float GetDuration()
	{
		return default(float);
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x66DD540", Offset = "0x66DC540", VA = "0x66DD540", Slot = "7")]
	public bool ValidTarget()
	{
		return default(bool);
	}
}
