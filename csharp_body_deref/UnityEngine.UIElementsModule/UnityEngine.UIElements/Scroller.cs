using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000109")]
public class Scroller : VisualElement
{
	[Token(Token = "0x200010A")]
	private class ScrollerSlider : Slider
	{
		[Token(Token = "0x6000735")]
		[Address(RVA = "0x4CD6CF0", Offset = "0x4CD6CF0", VA = "0x4CD6CF0")]
		public ScrollerSlider(float start, float end, SliderDirection direction, float pageSize)
		{
		}

		[Token(Token = "0x6000736")]
		[Address(RVA = "0x4CD7490", Offset = "0x4CD7490", VA = "0x4CD7490", Slot = "126")]
		internal override float SliderNormalizeValue(float currentValue, float lowerValue, float higherValue)
		{
			return default(float);
		}
	}

	[Token(Token = "0x200010B")]
	public new class UxmlFactory : UxmlFactory<Scroller, UxmlTraits>
	{
		[Token(Token = "0x6000737")]
		[Address(RVA = "0x4CD74D0", Offset = "0x4CD74D0", VA = "0x4CD74D0")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x200010C")]
	public new class UxmlTraits : VisualElement.UxmlTraits
	{
		[Token(Token = "0x4000481")]
		[FieldOffset(Offset = "0x70")]
		private UxmlFloatAttributeDescription m_LowValue;

		[Token(Token = "0x4000482")]
		[FieldOffset(Offset = "0x78")]
		private UxmlFloatAttributeDescription m_HighValue;

		[Token(Token = "0x4000483")]
		[FieldOffset(Offset = "0x80")]
		private UxmlEnumAttributeDescription<SliderDirection> m_Direction;

		[Token(Token = "0x4000484")]
		[FieldOffset(Offset = "0x88")]
		private UxmlFloatAttributeDescription m_Value;

		[Token(Token = "0x6000738")]
		[Address(RVA = "0x4CD7510", Offset = "0x4CD7510", VA = "0x4CD7510", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000739")]
		[Address(RVA = "0x4CD7770", Offset = "0x4CD7770", VA = "0x4CD7770")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x4000473")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly DataBindingProperty valueProperty;

	[Token(Token = "0x4000474")]
	[FieldOffset(Offset = "0xA0")]
	internal static readonly DataBindingProperty lowValueProperty;

	[Token(Token = "0x4000475")]
	[FieldOffset(Offset = "0x140")]
	internal static readonly DataBindingProperty highValueProperty;

	[Token(Token = "0x4000476")]
	[FieldOffset(Offset = "0x1E0")]
	internal static readonly DataBindingProperty directionProperty;

	[Token(Token = "0x400047B")]
	[FieldOffset(Offset = "0x280")]
	public static readonly string ussClassName;

	[Token(Token = "0x400047C")]
	[FieldOffset(Offset = "0x288")]
	public static readonly string horizontalVariantUssClassName;

	[Token(Token = "0x400047D")]
	[FieldOffset(Offset = "0x290")]
	public static readonly string verticalVariantUssClassName;

	[Token(Token = "0x400047E")]
	[FieldOffset(Offset = "0x298")]
	public static readonly string sliderUssClassName;

	[Token(Token = "0x400047F")]
	[FieldOffset(Offset = "0x2A0")]
	public static readonly string lowButtonUssClassName;

	[Token(Token = "0x4000480")]
	[FieldOffset(Offset = "0x2A8")]
	public static readonly string highButtonUssClassName;

	[Token(Token = "0x17000145")]
	public Slider slider
	{
		[Token(Token = "0x6000721")]
		[Address(RVA = "0x4CD5F90", Offset = "0x4CD5F90", VA = "0x4CD5F90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000146")]
	public RepeatButton lowButton
	{
		[Token(Token = "0x6000722")]
		[Address(RVA = "0x4CD5FA0", Offset = "0x4CD5FA0", VA = "0x4CD5FA0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000147")]
	public RepeatButton highButton
	{
		[Token(Token = "0x6000723")]
		[Address(RVA = "0x4CD5FB0", Offset = "0x4CD5FB0", VA = "0x4CD5FB0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000148")]
	[CreateProperty]
	public float value
	{
		[Token(Token = "0x6000724")]
		[Address(RVA = "0x4CD5FC0", Offset = "0x4CD5FC0", VA = "0x4CD5FC0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000725")]
		[Address(RVA = "0x4CD5FF0", Offset = "0x4CD5FF0", VA = "0x4CD5FF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000149")]
	[CreateProperty]
	public float lowValue
	{
		[Token(Token = "0x6000726")]
		[Address(RVA = "0x4CD6170", Offset = "0x4CD6170", VA = "0x4CD6170")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000727")]
		[Address(RVA = "0x4CD61C0", Offset = "0x4CD61C0", VA = "0x4CD61C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700014A")]
	[CreateProperty]
	public float highValue
	{
		[Token(Token = "0x6000728")]
		[Address(RVA = "0x4CD6340", Offset = "0x4CD6340", VA = "0x4CD6340")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000729")]
		[Address(RVA = "0x4CD6390", Offset = "0x4CD6390", VA = "0x4CD6390")]
		set
		{
		}
	}

	[Token(Token = "0x1700014B")]
	[CreateProperty]
	public SliderDirection direction
	{
		[Token(Token = "0x600072A")]
		[Address(RVA = "0x4CD6510", Offset = "0x4CD6510", VA = "0x4CD6510")]
		get
		{
			return default(SliderDirection);
		}
		[Token(Token = "0x600072B")]
		[Address(RVA = "0x4CD65D0", Offset = "0x4CD65D0", VA = "0x4CD65D0")]
		set
		{
		}
	}

	[Token(Token = "0x1400001B")]
	public event Action<float> valueChanged
	{
		[Token(Token = "0x600071F")]
		[Address(RVA = "0x4CD5E30", Offset = "0x4CD5E30", VA = "0x4CD5E30")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000720")]
		[Address(RVA = "0x4CD5EE0", Offset = "0x4CD5EE0", VA = "0x4CD5EE0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600072C")]
	[Address(RVA = "0x4CD68C0", Offset = "0x4CD68C0", VA = "0x4CD68C0")]
	public Scroller()
	{
	}

	[Token(Token = "0x600072D")]
	[Address(RVA = "0x4CD68D0", Offset = "0x4CD68D0", VA = "0x4CD68D0")]
	public Scroller(float lowValue, float highValue, Action<float> valueChanged, SliderDirection direction = SliderDirection.Vertical)
	{
	}

	[Token(Token = "0x600072E")]
	[Address(RVA = "0x4CD6D90", Offset = "0x4CD6D90", VA = "0x4CD6D90")]
	public void Adjust(float factor)
	{
	}

	[Token(Token = "0x600072F")]
	[Address(RVA = "0x4CD6E10", Offset = "0x4CD6E10", VA = "0x4CD6E10")]
	private void OnSliderValueChange(ChangeEvent<float> evt)
	{
	}

	[Token(Token = "0x6000730")]
	[Address(RVA = "0x4CD6EA0", Offset = "0x4CD6EA0", VA = "0x4CD6EA0")]
	public void ScrollPageUp()
	{
	}

	[Token(Token = "0x6000731")]
	[Address(RVA = "0x4CD6FB0", Offset = "0x4CD6FB0", VA = "0x4CD6FB0")]
	public void ScrollPageDown()
	{
	}

	[Token(Token = "0x6000732")]
	[Address(RVA = "0x4CD6EB0", Offset = "0x4CD6EB0", VA = "0x4CD6EB0")]
	public void ScrollPageUp(float factor)
	{
	}

	[Token(Token = "0x6000733")]
	[Address(RVA = "0x4CD6FC0", Offset = "0x4CD6FC0", VA = "0x4CD6FC0")]
	public void ScrollPageDown(float factor)
	{
	}
}
