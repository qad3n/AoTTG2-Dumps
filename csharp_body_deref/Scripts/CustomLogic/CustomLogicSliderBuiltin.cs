using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.UIElements;

namespace CustomLogic;

[Token(Token = "0x2000403")]
[CompilerGenerated]
internal class CustomLogicSliderBuiltin : CustomLogicVisualElementBuiltin
{
	[Token(Token = "0x2000404")]
	public new static class Factory
	{
		[Token(Token = "0x60029AE")]
		[Address(RVA = "0x3DE61A0", Offset = "0x3DE61A0", VA = "0x3DE61A0")]
		public static CustomLogicSliderBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000405")]
	public new static class Bindings
	{
		[Token(Token = "0x40010B6")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60029AF")]
		[Address(RVA = "0x3DE6230", Offset = "0x3DE6230", VA = "0x3DE6230")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x60029B0")]
		[Address(RVA = "0x3DE66F0", Offset = "0x3DE66F0", VA = "0x3DE66F0")]
		public static CLPropertyBinding<CustomLogicSliderBuiltin> __CreatePropertyBinding__Label()
		{
			return null;
		}

		[Token(Token = "0x60029B1")]
		[Address(RVA = "0x3DE67D0", Offset = "0x3DE67D0", VA = "0x3DE67D0")]
		public static CLPropertyBinding<CustomLogicSliderBuiltin> __CreatePropertyBinding__Value()
		{
			return null;
		}

		[Token(Token = "0x60029B2")]
		[Address(RVA = "0x3DE68B0", Offset = "0x3DE68B0", VA = "0x3DE68B0")]
		public static CLPropertyBinding<CustomLogicSliderBuiltin> __CreatePropertyBinding__LowValue()
		{
			return null;
		}

		[Token(Token = "0x60029B3")]
		[Address(RVA = "0x3DE6990", Offset = "0x3DE6990", VA = "0x3DE6990")]
		public static CLPropertyBinding<CustomLogicSliderBuiltin> __CreatePropertyBinding__HighValue()
		{
			return null;
		}

		[Token(Token = "0x60029B4")]
		[Address(RVA = "0x3DE6A70", Offset = "0x3DE6A70", VA = "0x3DE6A70")]
		public static CLPropertyBinding<CustomLogicSliderBuiltin> __CreatePropertyBinding__PageSize()
		{
			return null;
		}

		[Token(Token = "0x60029B5")]
		[Address(RVA = "0x3DE6B50", Offset = "0x3DE6B50", VA = "0x3DE6B50")]
		public static CLPropertyBinding<CustomLogicSliderBuiltin> __CreatePropertyBinding__Direction()
		{
			return null;
		}

		[Token(Token = "0x60029B6")]
		[Address(RVA = "0x3DE6C30", Offset = "0x3DE6C30", VA = "0x3DE6C30")]
		public static CLPropertyBinding<CustomLogicSliderBuiltin> __CreatePropertyBinding__ShowInputField()
		{
			return null;
		}

		[Token(Token = "0x60029B7")]
		[Address(RVA = "0x3DE6D10", Offset = "0x3DE6D10", VA = "0x3DE6D10")]
		public static CLPropertyBinding<CustomLogicSliderBuiltin> __CreatePropertyBinding__IsIntSlider()
		{
			return null;
		}

		[Token(Token = "0x60029B8")]
		[Address(RVA = "0x3DE6DB0", Offset = "0x3DE6DB0", VA = "0x3DE6DB0")]
		public static CLMethodBinding<CustomLogicSliderBuiltin> __CreateMethodBinding__OnValueChanged()
		{
			return null;
		}

		[Token(Token = "0x60029B9")]
		[Address(RVA = "0x3DE6F00", Offset = "0x3DE6F00", VA = "0x3DE6F00")]
		public static CLMethodBinding<CustomLogicSliderBuiltin> __CreateMethodBinding__SetValueWithoutNotify()
		{
			return null;
		}
	}

	[Token(Token = "0x40010B2")]
	[FieldOffset(Offset = "0x60")]
	private readonly Slider _floatSlider;

	[Token(Token = "0x40010B3")]
	[FieldOffset(Offset = "0x68")]
	private readonly SliderInt _intSlider;

	[Token(Token = "0x40010B4")]
	[FieldOffset(Offset = "0x70")]
	private readonly bool _isIntSlider;

	[Token(Token = "0x40010B5")]
	[FieldOffset(Offset = "0x78")]
	private UserMethod _valueChangedEvent;

	[Token(Token = "0x1700086D")]
	public string Label
	{
		[Token(Token = "0x6002997")]
		[Address(RVA = "0x3DE56E0", Offset = "0x3DE56E0", VA = "0x3DE56E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002998")]
		[Address(RVA = "0x3DE5750", Offset = "0x3DE5750", VA = "0x3DE5750")]
		set
		{
		}
	}

	[Token(Token = "0x1700086E")]
	public object Value
	{
		[Token(Token = "0x6002999")]
		[Address(RVA = "0x3DE57E0", Offset = "0x3DE57E0", VA = "0x3DE57E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600299A")]
		[Address(RVA = "0x3DE5860", Offset = "0x3DE5860", VA = "0x3DE5860")]
		set
		{
		}
	}

	[Token(Token = "0x1700086F")]
	public object LowValue
	{
		[Token(Token = "0x600299B")]
		[Address(RVA = "0x3DE5930", Offset = "0x3DE5930", VA = "0x3DE5930")]
		get
		{
			return null;
		}
		[Token(Token = "0x600299C")]
		[Address(RVA = "0x3DE59E0", Offset = "0x3DE59E0", VA = "0x3DE59E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000870")]
	public object HighValue
	{
		[Token(Token = "0x600299D")]
		[Address(RVA = "0x3DE5AF0", Offset = "0x3DE5AF0", VA = "0x3DE5AF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600299E")]
		[Address(RVA = "0x3DE5BA0", Offset = "0x3DE5BA0", VA = "0x3DE5BA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000871")]
	public float PageSize
	{
		[Token(Token = "0x600299F")]
		[Address(RVA = "0x3DE5CB0", Offset = "0x3DE5CB0", VA = "0x3DE5CB0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60029A0")]
		[Address(RVA = "0x3DE5CF0", Offset = "0x3DE5CF0", VA = "0x3DE5CF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000872")]
	public int Direction
	{
		[Token(Token = "0x60029A1")]
		[Address(RVA = "0x3DE5D30", Offset = "0x3DE5D30", VA = "0x3DE5D30")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60029A2")]
		[Address(RVA = "0x3DE5DA0", Offset = "0x3DE5DA0", VA = "0x3DE5DA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000873")]
	public bool ShowInputField
	{
		[Token(Token = "0x60029A3")]
		[Address(RVA = "0x3DE5F20", Offset = "0x3DE5F20", VA = "0x3DE5F20")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60029A4")]
		[Address(RVA = "0x3DE5F60", Offset = "0x3DE5F60", VA = "0x3DE5F60")]
		set
		{
		}
	}

	[Token(Token = "0x17000874")]
	public bool IsIntSlider
	{
		[Token(Token = "0x60029A5")]
		[Address(RVA = "0x3DE5FA0", Offset = "0x3DE5FA0", VA = "0x3DE5FA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000875")]
	public override string ClassName
	{
		[Token(Token = "0x60029A8")]
		[Address(RVA = "0x3DE60A0", Offset = "0x3DE60A0", VA = "0x3DE60A0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000876")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60029A9")]
		[Address(RVA = "0x3DE60D0", Offset = "0x3DE60D0", VA = "0x3DE60D0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000877")]
	public override bool IsStatic
	{
		[Token(Token = "0x60029AA")]
		[Address(RVA = "0x3DE60E0", Offset = "0x3DE60E0", VA = "0x3DE60E0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000878")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60029AB")]
		[Address(RVA = "0x3DE60F0", Offset = "0x3DE60F0", VA = "0x3DE60F0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002993")]
	[Address(RVA = "0x3DE5340", Offset = "0x3DE5340", VA = "0x3DE5340")]
	public CustomLogicSliderBuiltin(Slider slider)
	{
	}

	[Token(Token = "0x6002994")]
	[Address(RVA = "0x3DE53F0", Offset = "0x3DE53F0", VA = "0x3DE53F0")]
	public CustomLogicSliderBuiltin(SliderInt sliderInt)
	{
	}

	[Token(Token = "0x6002995")]
	[Address(RVA = "0x3DE54A0", Offset = "0x3DE54A0", VA = "0x3DE54A0")]
	private void OnValueChanged(float value)
	{
	}

	[Token(Token = "0x6002996")]
	[Address(RVA = "0x3DE55C0", Offset = "0x3DE55C0", VA = "0x3DE55C0")]
	private void OnValueChanged(int value)
	{
	}

	[Token(Token = "0x60029A6")]
	[Address(RVA = "0x3DE5FB0", Offset = "0x3DE5FB0", VA = "0x3DE5FB0")]
	public CustomLogicSliderBuiltin OnValueChanged(UserMethod valueChangedEvent)
	{
		return null;
	}

	[Token(Token = "0x60029A7")]
	[Address(RVA = "0x3DE5FD0", Offset = "0x3DE5FD0", VA = "0x3DE5FD0")]
	public void SetValueWithoutNotify(object value)
	{
	}
}
