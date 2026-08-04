// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Scroller
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4FFE620", Offset = "0x4FFE620", VA = "0x4FFE620")]
		public ScrollerSlider(float start, float end, SliderDirection direction, float pageSize)
		{
		}

		[Token(Token = "0x6000736")]
		[Address(RVA = "0x4FFEDC0", Offset = "0x4FFEDC0", VA = "0x4FFEDC0", Slot = "126")]
		internal override float SliderNormalizeValue(float currentValue, float lowerValue, float higherValue)
		{
			return default(float);
		}
	}

	[Token(Token = "0x200010B")]
	public new class UxmlFactory : UxmlFactory<Scroller, UxmlTraits>
	{
		[Token(Token = "0x6000737")]
		[Address(RVA = "0x4FFEE00", Offset = "0x4FFEE00", VA = "0x4FFEE00")]
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
		[Address(RVA = "0x4FFEE40", Offset = "0x4FFEE40", VA = "0x4FFEE40", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000739")]
		[Address(RVA = "0x4FFF0A0", Offset = "0x4FFF0A0", VA = "0x4FFF0A0")]
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
		[Address(RVA = "0x4FFD8C0", Offset = "0x4FFD8C0", VA = "0x4FFD8C0")]
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
		[Address(RVA = "0x4FFD8D0", Offset = "0x4FFD8D0", VA = "0x4FFD8D0")]
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
		[Address(RVA = "0x4FFD8E0", Offset = "0x4FFD8E0", VA = "0x4FFD8E0")]
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
		[Address(RVA = "0x4FFD8F0", Offset = "0x4FFD8F0", VA = "0x4FFD8F0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000725")]
		[Address(RVA = "0x4FFD920", Offset = "0x4FFD920", VA = "0x4FFD920")]
		set
		{
		}
	}

	[Token(Token = "0x17000149")]
	[CreateProperty]
	public float lowValue
	{
		[Token(Token = "0x6000726")]
		[Address(RVA = "0x4FFDAA0", Offset = "0x4FFDAA0", VA = "0x4FFDAA0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000727")]
		[Address(RVA = "0x4FFDAF0", Offset = "0x4FFDAF0", VA = "0x4FFDAF0")]
		set
		{
		}
	}

	[Token(Token = "0x1700014A")]
	[CreateProperty]
	public float highValue
	{
		[Token(Token = "0x6000728")]
		[Address(RVA = "0x4FFDC70", Offset = "0x4FFDC70", VA = "0x4FFDC70")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000729")]
		[Address(RVA = "0x4FFDCC0", Offset = "0x4FFDCC0", VA = "0x4FFDCC0")]
		set
		{
		}
	}

	[Token(Token = "0x1700014B")]
	[CreateProperty]
	public SliderDirection direction
	{
		[Token(Token = "0x600072A")]
		[Address(RVA = "0x4FFDE40", Offset = "0x4FFDE40", VA = "0x4FFDE40")]
		get
		{
			return default(SliderDirection);
		}
		[Token(Token = "0x600072B")]
		[Address(RVA = "0x4FFDF00", Offset = "0x4FFDF00", VA = "0x4FFDF00")]
		set
		{
		}
	}

	[Token(Token = "0x1400001B")]
	public event Action<float> valueChanged
	{
		[Token(Token = "0x600071F")]
		[Address(RVA = "0x4FFD760", Offset = "0x4FFD760", VA = "0x4FFD760")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000720")]
		[Address(RVA = "0x4FFD810", Offset = "0x4FFD810", VA = "0x4FFD810")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600072C")]
	[Address(RVA = "0x4FFE1F0", Offset = "0x4FFE1F0", VA = "0x4FFE1F0")]
	public Scroller()
	{
	}

	[Token(Token = "0x600072D")]
	[Address(RVA = "0x4FFE200", Offset = "0x4FFE200", VA = "0x4FFE200")]
	public Scroller(float lowValue, float highValue, Action<float> valueChanged, SliderDirection direction = SliderDirection.Vertical)
	{
	}

	[Token(Token = "0x600072E")]
	[Address(RVA = "0x4FFE6C0", Offset = "0x4FFE6C0", VA = "0x4FFE6C0")]
	public void Adjust(float factor)
	{
	}

	[Token(Token = "0x600072F")]
	[Address(RVA = "0x4FFE740", Offset = "0x4FFE740", VA = "0x4FFE740")]
	private void OnSliderValueChange(ChangeEvent<float> evt)
	{
	}

	[Token(Token = "0x6000730")]
	[Address(RVA = "0x4FFE7D0", Offset = "0x4FFE7D0", VA = "0x4FFE7D0")]
	public void ScrollPageUp()
	{
	}

	[Token(Token = "0x6000731")]
	[Address(RVA = "0x4FFE8E0", Offset = "0x4FFE8E0", VA = "0x4FFE8E0")]
	public void ScrollPageDown()
	{
	}

	[Token(Token = "0x6000732")]
	[Address(RVA = "0x4FFE7E0", Offset = "0x4FFE7E0", VA = "0x4FFE7E0")]
	public void ScrollPageUp(float factor)
	{
	}

	[Token(Token = "0x6000733")]
	[Address(RVA = "0x4FFE8F0", Offset = "0x4FFE8F0", VA = "0x4FFE8F0")]
	public void ScrollPageDown(float factor)
	{
	}
}
