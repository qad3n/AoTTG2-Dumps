// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Scroller
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x200013C")]
public class Scroller : VisualElement
{
	[Token(Token = "0x200013D")]
	private class ScrollerSlider : Slider
	{
		[Token(Token = "0x600091A")]
		[Address(RVA = "0x322FB10", Offset = "0x322E110", VA = "0x18322FB10")]
		public ScrollerSlider(float start, float end, SliderDirection direction, float pageSize)
		{
		}

		[Token(Token = "0x600091B")]
		[Address(RVA = "0x322FA40", Offset = "0x322E040", VA = "0x18322FA40", Slot = "171")]
		internal override float SliderNormalizeValue(float currentValue, float lowerValue, float higherValue)
		{
			return default(float);
		}
	}

	[Token(Token = "0x200013E")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<Scroller, UxmlTraits>
	{
		[Token(Token = "0x600091C")]
		[Address(RVA = "0x323B040", Offset = "0x3239640", VA = "0x18323B040")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x200013F")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : VisualElement.UxmlTraits
	{
		[Token(Token = "0x4000587")]
		[FieldOffset(Offset = "0x88")]
		private UxmlFloatAttributeDescription m_LowValue;

		[Token(Token = "0x4000588")]
		[FieldOffset(Offset = "0x90")]
		private UxmlFloatAttributeDescription m_HighValue;

		[Token(Token = "0x4000589")]
		[FieldOffset(Offset = "0x98")]
		private UxmlEnumAttributeDescription<SliderDirection> m_Direction;

		[Token(Token = "0x400058A")]
		[FieldOffset(Offset = "0xA0")]
		private UxmlFloatAttributeDescription m_Value;

		[Token(Token = "0x600091D")]
		[Address(RVA = "0x323BB70", Offset = "0x323A170", VA = "0x18323BB70", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x600091E")]
		[Address(RVA = "0x323D4F0", Offset = "0x323BAF0", VA = "0x18323D4F0")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x4000579")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly BindingId valueProperty;

	[Token(Token = "0x400057A")]
	[FieldOffset(Offset = "0x98")]
	internal static readonly BindingId lowValueProperty;

	[Token(Token = "0x400057B")]
	[FieldOffset(Offset = "0x130")]
	internal static readonly BindingId highValueProperty;

	[Token(Token = "0x400057C")]
	[FieldOffset(Offset = "0x1C8")]
	internal static readonly BindingId directionProperty;

	[Token(Token = "0x400057D")]
	[FieldOffset(Offset = "0x2C8")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action<float> m_valueChanged;

	[Token(Token = "0x4000581")]
	[FieldOffset(Offset = "0x260")]
	public static readonly string ussClassName;

	[Token(Token = "0x4000582")]
	[FieldOffset(Offset = "0x268")]
	public static readonly string horizontalVariantUssClassName;

	[Token(Token = "0x4000583")]
	[FieldOffset(Offset = "0x270")]
	public static readonly string verticalVariantUssClassName;

	[Token(Token = "0x4000584")]
	[FieldOffset(Offset = "0x278")]
	public static readonly string sliderUssClassName;

	[Token(Token = "0x4000585")]
	[FieldOffset(Offset = "0x280")]
	public static readonly string lowButtonUssClassName;

	[Token(Token = "0x4000586")]
	[FieldOffset(Offset = "0x288")]
	public static readonly string highButtonUssClassName;

	[Token(Token = "0x170001A7")]
	public Slider slider
	{
		[Token(Token = "0x6000906")]
		[Address(RVA = "0x31DC9F0", Offset = "0x31DAFF0", VA = "0x1831DC9F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A8")]
	public RepeatButton lowButton
	{
		[Token(Token = "0x6000907")]
		[Address(RVA = "0x312F010", Offset = "0x312D610", VA = "0x18312F010")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001A9")]
	public RepeatButton highButton
	{
		[Token(Token = "0x6000908")]
		[Address(RVA = "0x2D076E0", Offset = "0x2D05CE0", VA = "0x182D076E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001AA")]
	[CreateProperty]
	public float value
	{
		[Token(Token = "0x6000909")]
		[Address(RVA = "0x3230CF0", Offset = "0x322F2F0", VA = "0x183230CF0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600090A")]
		[Address(RVA = "0x3231220", Offset = "0x322F820", VA = "0x183231220")]
		set
		{
		}
	}

	[Token(Token = "0x170001AB")]
	[CreateProperty]
	public float lowValue
	{
		[Token(Token = "0x600090B")]
		[Address(RVA = "0x3230CA0", Offset = "0x322F2A0", VA = "0x183230CA0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600090C")]
		[Address(RVA = "0x3231120", Offset = "0x322F720", VA = "0x183231120")]
		set
		{
		}
	}

	[Token(Token = "0x170001AC")]
	[CreateProperty]
	public float highValue
	{
		[Token(Token = "0x600090D")]
		[Address(RVA = "0x3230C50", Offset = "0x322F250", VA = "0x183230C50")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600090E")]
		[Address(RVA = "0x3231020", Offset = "0x322F620", VA = "0x183231020")]
		set
		{
		}
	}

	[Token(Token = "0x170001AD")]
	[CreateProperty]
	public SliderDirection direction
	{
		[Token(Token = "0x600090F")]
		[Address(RVA = "0x3230BF0", Offset = "0x322F1F0", VA = "0x183230BF0")]
		get
		{
			return default(SliderDirection);
		}
		[Token(Token = "0x6000910")]
		[Address(RVA = "0x3230DD0", Offset = "0x322F3D0", VA = "0x183230DD0")]
		set
		{
		}
	}

	[Token(Token = "0x14000024")]
	public event Action<float> valueChanged
	{
		[Token(Token = "0x6000904")]
		[Address(RVA = "0x3230B40", Offset = "0x322F140", VA = "0x183230B40")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000905")]
		[Address(RVA = "0x3230D20", Offset = "0x322F320", VA = "0x183230D20")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000911")]
	[Address(RVA = "0x32306D0", Offset = "0x322ECD0", VA = "0x1832306D0")]
	public Scroller()
	{
	}

	[Token(Token = "0x6000912")]
	[Address(RVA = "0x3230700", Offset = "0x322ED00", VA = "0x183230700")]
	public Scroller(float lowValue, float highValue, Action<float> valueChanged, SliderDirection direction = SliderDirection.Vertical)
	{
	}

	[Token(Token = "0x6000913")]
	[Address(RVA = "0x322FBB0", Offset = "0x322E1B0", VA = "0x18322FBB0")]
	public void Adjust(float factor)
	{
	}

	[Token(Token = "0x6000914")]
	[Address(RVA = "0x322FC30", Offset = "0x322E230", VA = "0x18322FC30")]
	private void OnSliderValueChange(ChangeEvent<float> evt)
	{
	}

	[Token(Token = "0x6000915")]
	[Address(RVA = "0x3230020", Offset = "0x322E620", VA = "0x183230020")]
	public void ScrollPageUp()
	{
	}

	[Token(Token = "0x6000916")]
	[Address(RVA = "0x322FDF0", Offset = "0x322E3F0", VA = "0x18322FDF0")]
	public void ScrollPageDown()
	{
	}

	[Token(Token = "0x6000917")]
	[Address(RVA = "0x322FF00", Offset = "0x322E500", VA = "0x18322FF00")]
	public void ScrollPageUp(float factor)
	{
	}

	[Token(Token = "0x6000918")]
	[Address(RVA = "0x322FCD0", Offset = "0x322E2D0", VA = "0x18322FCD0")]
	public void ScrollPageDown(float factor)
	{
	}
}
