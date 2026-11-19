// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicSliderBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicSliderBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.UIElements;

namespace CustomLogic;

[Token(Token = "0x20005FD")]
[CompilerGenerated]
internal class CustomLogicSliderBuiltin : CustomLogicVisualElementBuiltin
{
	[Token(Token = "0x20005FE")]
	public new static class Factory
	{
		[Token(Token = "0x60037A9")]
		[Address(RVA = "0x5A053E0", Offset = "0x5A043E0", VA = "0x5A053E0")]
		public static CustomLogicSliderBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20005FF")]
	public new static class Bindings
	{
		[Token(Token = "0x400199D")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60037AA")]
		[Address(RVA = "0x5A05470", Offset = "0x5A04470", VA = "0x5A05470")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x60037AB")]
		[Address(RVA = "0x5A05930", Offset = "0x5A04930", VA = "0x5A05930")]
		public static CLPropertyBinding<CustomLogicSliderBuiltin> __CreatePropertyBinding__Label()
		{
			return null;
		}

		[Token(Token = "0x60037AC")]
		[Address(RVA = "0x5A05A10", Offset = "0x5A04A10", VA = "0x5A05A10")]
		public static CLPropertyBinding<CustomLogicSliderBuiltin> __CreatePropertyBinding__Value()
		{
			return null;
		}

		[Token(Token = "0x60037AD")]
		[Address(RVA = "0x5A05AF0", Offset = "0x5A04AF0", VA = "0x5A05AF0")]
		public static CLPropertyBinding<CustomLogicSliderBuiltin> __CreatePropertyBinding__LowValue()
		{
			return null;
		}

		[Token(Token = "0x60037AE")]
		[Address(RVA = "0x5A05BD0", Offset = "0x5A04BD0", VA = "0x5A05BD0")]
		public static CLPropertyBinding<CustomLogicSliderBuiltin> __CreatePropertyBinding__HighValue()
		{
			return null;
		}

		[Token(Token = "0x60037AF")]
		[Address(RVA = "0x5A05CB0", Offset = "0x5A04CB0", VA = "0x5A05CB0")]
		public static CLPropertyBinding<CustomLogicSliderBuiltin> __CreatePropertyBinding__PageSize()
		{
			return null;
		}

		[Token(Token = "0x60037B0")]
		[Address(RVA = "0x5A05D90", Offset = "0x5A04D90", VA = "0x5A05D90")]
		public static CLPropertyBinding<CustomLogicSliderBuiltin> __CreatePropertyBinding__Direction()
		{
			return null;
		}

		[Token(Token = "0x60037B1")]
		[Address(RVA = "0x5A05E70", Offset = "0x5A04E70", VA = "0x5A05E70")]
		public static CLPropertyBinding<CustomLogicSliderBuiltin> __CreatePropertyBinding__ShowInputField()
		{
			return null;
		}

		[Token(Token = "0x60037B2")]
		[Address(RVA = "0x5A05F50", Offset = "0x5A04F50", VA = "0x5A05F50")]
		public static CLPropertyBinding<CustomLogicSliderBuiltin> __CreatePropertyBinding__IsIntSlider()
		{
			return null;
		}

		[Token(Token = "0x60037B3")]
		[Address(RVA = "0x5A05FF0", Offset = "0x5A04FF0", VA = "0x5A05FF0")]
		public static CLMethodBinding<CustomLogicSliderBuiltin> __CreateMethodBinding__OnValueChanged()
		{
			return null;
		}

		[Token(Token = "0x60037B4")]
		[Address(RVA = "0x5A06130", Offset = "0x5A05130", VA = "0x5A06130")]
		public static CLMethodBinding<CustomLogicSliderBuiltin> __CreateMethodBinding__SetValueWithoutNotify()
		{
			return null;
		}
	}

	[Token(Token = "0x4001999")]
	[FieldOffset(Offset = "0x60")]
	private readonly Slider _floatSlider;

	[Token(Token = "0x400199A")]
	[FieldOffset(Offset = "0x68")]
	private readonly SliderInt _intSlider;

	[Token(Token = "0x400199B")]
	[FieldOffset(Offset = "0x70")]
	private readonly bool _isIntSlider;

	[Token(Token = "0x400199C")]
	[FieldOffset(Offset = "0x78")]
	private UserMethod _valueChangedEvent;

	[Token(Token = "0x17000A13")]
	public string Label
	{
		[Token(Token = "0x6003792")]
		[Address(RVA = "0x5A04920", Offset = "0x5A03920", VA = "0x5A04920")]
		get
		{
			return null;
		}
		[Token(Token = "0x6003793")]
		[Address(RVA = "0x5A04990", Offset = "0x5A03990", VA = "0x5A04990")]
		set
		{
		}
	}

	[Token(Token = "0x17000A14")]
	public object Value
	{
		[Token(Token = "0x6003794")]
		[Address(RVA = "0x5A04A20", Offset = "0x5A03A20", VA = "0x5A04A20")]
		get
		{
			return null;
		}
		[Token(Token = "0x6003795")]
		[Address(RVA = "0x5A04AA0", Offset = "0x5A03AA0", VA = "0x5A04AA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000A15")]
	public object LowValue
	{
		[Token(Token = "0x6003796")]
		[Address(RVA = "0x5A04B70", Offset = "0x5A03B70", VA = "0x5A04B70")]
		get
		{
			return null;
		}
		[Token(Token = "0x6003797")]
		[Address(RVA = "0x5A04C20", Offset = "0x5A03C20", VA = "0x5A04C20")]
		set
		{
		}
	}

	[Token(Token = "0x17000A16")]
	public object HighValue
	{
		[Token(Token = "0x6003798")]
		[Address(RVA = "0x5A04D30", Offset = "0x5A03D30", VA = "0x5A04D30")]
		get
		{
			return null;
		}
		[Token(Token = "0x6003799")]
		[Address(RVA = "0x5A04DE0", Offset = "0x5A03DE0", VA = "0x5A04DE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000A17")]
	public float PageSize
	{
		[Token(Token = "0x600379A")]
		[Address(RVA = "0x5A04EF0", Offset = "0x5A03EF0", VA = "0x5A04EF0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600379B")]
		[Address(RVA = "0x5A04F30", Offset = "0x5A03F30", VA = "0x5A04F30")]
		set
		{
		}
	}

	[Token(Token = "0x17000A18")]
	public int Direction
	{
		[Token(Token = "0x600379C")]
		[Address(RVA = "0x5A04F70", Offset = "0x5A03F70", VA = "0x5A04F70")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600379D")]
		[Address(RVA = "0x5A04FE0", Offset = "0x5A03FE0", VA = "0x5A04FE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000A19")]
	public bool ShowInputField
	{
		[Token(Token = "0x600379E")]
		[Address(RVA = "0x5A05160", Offset = "0x5A04160", VA = "0x5A05160")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600379F")]
		[Address(RVA = "0x5A051A0", Offset = "0x5A041A0", VA = "0x5A051A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000A1A")]
	public bool IsIntSlider
	{
		[Token(Token = "0x60037A0")]
		[Address(RVA = "0x5A051E0", Offset = "0x5A041E0", VA = "0x5A051E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A1B")]
	public override string ClassName
	{
		[Token(Token = "0x60037A3")]
		[Address(RVA = "0x5A052E0", Offset = "0x5A042E0", VA = "0x5A052E0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A1C")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60037A4")]
		[Address(RVA = "0x5A05310", Offset = "0x5A04310", VA = "0x5A05310", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A1D")]
	public override bool IsStatic
	{
		[Token(Token = "0x60037A5")]
		[Address(RVA = "0x5A05320", Offset = "0x5A04320", VA = "0x5A05320", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A1E")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60037A6")]
		[Address(RVA = "0x5A05330", Offset = "0x5A04330", VA = "0x5A05330", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600378E")]
	[Address(RVA = "0x5A04580", Offset = "0x5A03580", VA = "0x5A04580")]
	public CustomLogicSliderBuiltin(Slider slider)
	{
	}

	[Token(Token = "0x600378F")]
	[Address(RVA = "0x5A04630", Offset = "0x5A03630", VA = "0x5A04630")]
	public CustomLogicSliderBuiltin(SliderInt sliderInt)
	{
	}

	[Token(Token = "0x6003790")]
	[Address(RVA = "0x5A046E0", Offset = "0x5A036E0", VA = "0x5A046E0")]
	private void OnValueChanged(float value)
	{
	}

	[Token(Token = "0x6003791")]
	[Address(RVA = "0x5A04800", Offset = "0x5A03800", VA = "0x5A04800")]
	private void OnValueChanged(int value)
	{
	}

	[Token(Token = "0x60037A1")]
	[Address(RVA = "0x5A051F0", Offset = "0x5A041F0", VA = "0x5A051F0")]
	public CustomLogicSliderBuiltin OnValueChanged(UserMethod valueChangedEvent)
	{
		return null;
	}

	[Token(Token = "0x60037A2")]
	[Address(RVA = "0x5A05210", Offset = "0x5A04210", VA = "0x5A05210")]
	public void SetValueWithoutNotify(object value)
	{
	}
}
