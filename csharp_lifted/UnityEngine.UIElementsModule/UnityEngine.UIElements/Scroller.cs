// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Scroller
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000145")]
public class Scroller : VisualElement
{
	[Token(Token = "0x2000146")]
	private class ScrollerSlider : Slider
	{
		[Token(Token = "0x600097E")]
		[Address(RVA = "0x6C36640", Offset = "0x6C35640", VA = "0x6C36640")]
		public ScrollerSlider(float start, float end, SliderDirection direction, float pageSize)
		{
		}

		[Token(Token = "0x600097F")]
		[Address(RVA = "0x6C36D20", Offset = "0x6C35D20", VA = "0x6C36D20", Slot = "171")]
		internal override float SliderNormalizeValue(float currentValue, float lowerValue, float higherValue)
		{
			return default(float);
		}
	}

	[Token(Token = "0x2000147")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<Scroller, UxmlTraits>
	{
		[Token(Token = "0x6000980")]
		[Address(RVA = "0x6C36E90", Offset = "0x6C35E90", VA = "0x6C36E90")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000148")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : VisualElement.UxmlTraits
	{
		[Token(Token = "0x40005F7")]
		[FieldOffset(Offset = "0x88")]
		private UxmlFloatAttributeDescription m_LowValue;

		[Token(Token = "0x40005F8")]
		[FieldOffset(Offset = "0x90")]
		private UxmlFloatAttributeDescription m_HighValue;

		[Token(Token = "0x40005F9")]
		[FieldOffset(Offset = "0x98")]
		private UxmlEnumAttributeDescription<SliderDirection> m_Direction;

		[Token(Token = "0x40005FA")]
		[FieldOffset(Offset = "0xA0")]
		private UxmlFloatAttributeDescription m_Value;

		[Token(Token = "0x6000981")]
		[Address(RVA = "0x6C36ED0", Offset = "0x6C35ED0", VA = "0x6C36ED0", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}

		[Token(Token = "0x6000982")]
		[Address(RVA = "0x6C37130", Offset = "0x6C36130", VA = "0x6C37130")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x40005E9")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly BindingId valueProperty;

	[Token(Token = "0x40005EA")]
	[FieldOffset(Offset = "0x98")]
	internal static readonly BindingId lowValueProperty;

	[Token(Token = "0x40005EB")]
	[FieldOffset(Offset = "0x130")]
	internal static readonly BindingId highValueProperty;

	[Token(Token = "0x40005EC")]
	[FieldOffset(Offset = "0x1C8")]
	internal static readonly BindingId directionProperty;

	[Token(Token = "0x40005ED")]
	[FieldOffset(Offset = "0x2C8")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private Action<float> m_valueChanged;

	[Token(Token = "0x40005F1")]
	[FieldOffset(Offset = "0x260")]
	public static readonly string ussClassName;

	[Token(Token = "0x40005F2")]
	[FieldOffset(Offset = "0x268")]
	public static readonly string horizontalVariantUssClassName;

	[Token(Token = "0x40005F3")]
	[FieldOffset(Offset = "0x270")]
	public static readonly string verticalVariantUssClassName;

	[Token(Token = "0x40005F4")]
	[FieldOffset(Offset = "0x278")]
	public static readonly string sliderUssClassName;

	[Token(Token = "0x40005F5")]
	[FieldOffset(Offset = "0x280")]
	public static readonly string lowButtonUssClassName;

	[Token(Token = "0x40005F6")]
	[FieldOffset(Offset = "0x288")]
	public static readonly string highButtonUssClassName;

	[Token(Token = "0x170001C0")]
	public Slider slider
	{
		[Token(Token = "0x600096A")]
		[Address(RVA = "0x6C36240", Offset = "0x6C35240", VA = "0x6C36240")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C1")]
	public RepeatButton lowButton
	{
		[Token(Token = "0x600096B")]
		[Address(RVA = "0x6C36250", Offset = "0x6C35250", VA = "0x6C36250")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C2")]
	public RepeatButton highButton
	{
		[Token(Token = "0x600096C")]
		[Address(RVA = "0x6C36260", Offset = "0x6C35260", VA = "0x6C36260")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C3")]
	[CreateProperty]
	public float value
	{
		[Token(Token = "0x600096D")]
		[Address(RVA = "0x6C2C990", Offset = "0x6C2B990", VA = "0x6C2C990")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600096E")]
		[Address(RVA = "0x6C2C840", Offset = "0x6C2B840", VA = "0x6C2C840")]
		set
		{
		}
	}

	[Token(Token = "0x170001C4")]
	[CreateProperty]
	public float lowValue
	{
		[Token(Token = "0x600096F")]
		[Address(RVA = "0x6C33140", Offset = "0x6C32140", VA = "0x6C33140")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000970")]
		[Address(RVA = "0x6C33A10", Offset = "0x6C32A10", VA = "0x6C33A10")]
		set
		{
		}
	}

	[Token(Token = "0x170001C5")]
	[CreateProperty]
	public float highValue
	{
		[Token(Token = "0x6000971")]
		[Address(RVA = "0x6C2E920", Offset = "0x6C2D920", VA = "0x6C2E920")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000972")]
		[Address(RVA = "0x6C31540", Offset = "0x6C30540", VA = "0x6C31540")]
		set
		{
		}
	}

	[Token(Token = "0x170001C6")]
	[CreateProperty]
	public SliderDirection direction
	{
		[Token(Token = "0x6000973")]
		[Address(RVA = "0x6C36270", Offset = "0x6C35270", VA = "0x6C36270")]
		get
		{
			return default(SliderDirection);
		}
		[Token(Token = "0x6000974")]
		[Address(RVA = "0x6C36330", Offset = "0x6C35330", VA = "0x6C36330")]
		set
		{
		}
	}

	[Token(Token = "0x14000024")]
	public event Action<float> valueChanged
	{
		[Token(Token = "0x6000968")]
		[Address(RVA = "0x6C360E0", Offset = "0x6C350E0", VA = "0x6C360E0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000969")]
		[Address(RVA = "0x6C36190", Offset = "0x6C35190", VA = "0x6C36190")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000975")]
	[Address(RVA = "0x6C36620", Offset = "0x6C35620", VA = "0x6C36620")]
	public Scroller()
	{
	}

	[Token(Token = "0x6000976")]
	[Address(RVA = "0x6C2FD90", Offset = "0x6C2ED90", VA = "0x6C2FD90")]
	public Scroller(float lowValue, float highValue, Action<float> valueChanged, SliderDirection direction = SliderDirection.Vertical)
	{
	}

	[Token(Token = "0x6000977")]
	[Address(RVA = "0x6C33990", Offset = "0x6C32990", VA = "0x6C33990")]
	public void Adjust(float factor)
	{
	}

	[Token(Token = "0x6000978")]
	[Address(RVA = "0x6C366E0", Offset = "0x6C356E0", VA = "0x6C366E0")]
	private void OnSliderValueChange(ChangeEvent<float> evt)
	{
	}

	[Token(Token = "0x6000979")]
	[Address(RVA = "0x6C36770", Offset = "0x6C35770", VA = "0x6C36770")]
	public void ScrollPageUp()
	{
	}

	[Token(Token = "0x600097A")]
	[Address(RVA = "0x6C36880", Offset = "0x6C35880", VA = "0x6C36880")]
	public void ScrollPageDown()
	{
	}

	[Token(Token = "0x600097B")]
	[Address(RVA = "0x6C36780", Offset = "0x6C35780", VA = "0x6C36780")]
	public void ScrollPageUp(float factor)
	{
	}

	[Token(Token = "0x600097C")]
	[Address(RVA = "0x6C36890", Offset = "0x6C35890", VA = "0x6C36890")]
	public void ScrollPageDown(float factor)
	{
	}
}
