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

[Token(Token = "0x2000448")]
[CompilerGenerated]
internal class CustomLogicSliderBuiltin : CustomLogicVisualElementBuiltin
{
	[Token(Token = "0x2000449")]
	public new static class Factory
	{
		[Token(Token = "0x6002BB6")]
		[Address(RVA = "0x40F0D10", Offset = "0x40F0D10", VA = "0x40F0D10")]
		public static CustomLogicSliderBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x200044A")]
	public new static class Bindings
	{
		[Token(Token = "0x40011C0")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002BB7")]
		[Address(RVA = "0x40F0DA0", Offset = "0x40F0DA0", VA = "0x40F0DA0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6002BB8")]
		[Address(RVA = "0x40F1260", Offset = "0x40F1260", VA = "0x40F1260")]
		public static CLPropertyBinding<CustomLogicSliderBuiltin> __CreatePropertyBinding__Label()
		{
			return null;
		}

		[Token(Token = "0x6002BB9")]
		[Address(RVA = "0x40F1340", Offset = "0x40F1340", VA = "0x40F1340")]
		public static CLPropertyBinding<CustomLogicSliderBuiltin> __CreatePropertyBinding__Value()
		{
			return null;
		}

		[Token(Token = "0x6002BBA")]
		[Address(RVA = "0x40F1420", Offset = "0x40F1420", VA = "0x40F1420")]
		public static CLPropertyBinding<CustomLogicSliderBuiltin> __CreatePropertyBinding__LowValue()
		{
			return null;
		}

		[Token(Token = "0x6002BBB")]
		[Address(RVA = "0x40F1500", Offset = "0x40F1500", VA = "0x40F1500")]
		public static CLPropertyBinding<CustomLogicSliderBuiltin> __CreatePropertyBinding__HighValue()
		{
			return null;
		}

		[Token(Token = "0x6002BBC")]
		[Address(RVA = "0x40F15E0", Offset = "0x40F15E0", VA = "0x40F15E0")]
		public static CLPropertyBinding<CustomLogicSliderBuiltin> __CreatePropertyBinding__PageSize()
		{
			return null;
		}

		[Token(Token = "0x6002BBD")]
		[Address(RVA = "0x40F16C0", Offset = "0x40F16C0", VA = "0x40F16C0")]
		public static CLPropertyBinding<CustomLogicSliderBuiltin> __CreatePropertyBinding__Direction()
		{
			return null;
		}

		[Token(Token = "0x6002BBE")]
		[Address(RVA = "0x40F17A0", Offset = "0x40F17A0", VA = "0x40F17A0")]
		public static CLPropertyBinding<CustomLogicSliderBuiltin> __CreatePropertyBinding__ShowInputField()
		{
			return null;
		}

		[Token(Token = "0x6002BBF")]
		[Address(RVA = "0x40F1880", Offset = "0x40F1880", VA = "0x40F1880")]
		public static CLPropertyBinding<CustomLogicSliderBuiltin> __CreatePropertyBinding__IsIntSlider()
		{
			return null;
		}

		[Token(Token = "0x6002BC0")]
		[Address(RVA = "0x40F1920", Offset = "0x40F1920", VA = "0x40F1920")]
		public static CLMethodBinding<CustomLogicSliderBuiltin> __CreateMethodBinding__OnValueChanged()
		{
			return null;
		}

		[Token(Token = "0x6002BC1")]
		[Address(RVA = "0x40F1A70", Offset = "0x40F1A70", VA = "0x40F1A70")]
		public static CLMethodBinding<CustomLogicSliderBuiltin> __CreateMethodBinding__SetValueWithoutNotify()
		{
			return null;
		}
	}

	[Token(Token = "0x40011BC")]
	[FieldOffset(Offset = "0x60")]
	private readonly Slider _floatSlider;

	[Token(Token = "0x40011BD")]
	[FieldOffset(Offset = "0x68")]
	private readonly SliderInt _intSlider;

	[Token(Token = "0x40011BE")]
	[FieldOffset(Offset = "0x70")]
	private readonly bool _isIntSlider;

	[Token(Token = "0x40011BF")]
	[FieldOffset(Offset = "0x78")]
	private UserMethod _valueChangedEvent;

	[Token(Token = "0x170008D7")]
	public string Label
	{
		[Token(Token = "0x6002B9F")]
		[Address(RVA = "0x40F0250", Offset = "0x40F0250", VA = "0x40F0250")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002BA0")]
		[Address(RVA = "0x40F02C0", Offset = "0x40F02C0", VA = "0x40F02C0")]
		set
		{
		}
	}

	[Token(Token = "0x170008D8")]
	public object Value
	{
		[Token(Token = "0x6002BA1")]
		[Address(RVA = "0x40F0350", Offset = "0x40F0350", VA = "0x40F0350")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002BA2")]
		[Address(RVA = "0x40F03D0", Offset = "0x40F03D0", VA = "0x40F03D0")]
		set
		{
		}
	}

	[Token(Token = "0x170008D9")]
	public object LowValue
	{
		[Token(Token = "0x6002BA3")]
		[Address(RVA = "0x40F04A0", Offset = "0x40F04A0", VA = "0x40F04A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002BA4")]
		[Address(RVA = "0x40F0550", Offset = "0x40F0550", VA = "0x40F0550")]
		set
		{
		}
	}

	[Token(Token = "0x170008DA")]
	public object HighValue
	{
		[Token(Token = "0x6002BA5")]
		[Address(RVA = "0x40F0660", Offset = "0x40F0660", VA = "0x40F0660")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002BA6")]
		[Address(RVA = "0x40F0710", Offset = "0x40F0710", VA = "0x40F0710")]
		set
		{
		}
	}

	[Token(Token = "0x170008DB")]
	public float PageSize
	{
		[Token(Token = "0x6002BA7")]
		[Address(RVA = "0x40F0820", Offset = "0x40F0820", VA = "0x40F0820")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6002BA8")]
		[Address(RVA = "0x40F0860", Offset = "0x40F0860", VA = "0x40F0860")]
		set
		{
		}
	}

	[Token(Token = "0x170008DC")]
	public int Direction
	{
		[Token(Token = "0x6002BA9")]
		[Address(RVA = "0x40F08A0", Offset = "0x40F08A0", VA = "0x40F08A0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002BAA")]
		[Address(RVA = "0x40F0910", Offset = "0x40F0910", VA = "0x40F0910")]
		set
		{
		}
	}

	[Token(Token = "0x170008DD")]
	public bool ShowInputField
	{
		[Token(Token = "0x6002BAB")]
		[Address(RVA = "0x40F0A90", Offset = "0x40F0A90", VA = "0x40F0A90")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002BAC")]
		[Address(RVA = "0x40F0AD0", Offset = "0x40F0AD0", VA = "0x40F0AD0")]
		set
		{
		}
	}

	[Token(Token = "0x170008DE")]
	public bool IsIntSlider
	{
		[Token(Token = "0x6002BAD")]
		[Address(RVA = "0x40F0B10", Offset = "0x40F0B10", VA = "0x40F0B10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170008DF")]
	public override string ClassName
	{
		[Token(Token = "0x6002BB0")]
		[Address(RVA = "0x40F0C10", Offset = "0x40F0C10", VA = "0x40F0C10", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170008E0")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002BB1")]
		[Address(RVA = "0x40F0C40", Offset = "0x40F0C40", VA = "0x40F0C40", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170008E1")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002BB2")]
		[Address(RVA = "0x40F0C50", Offset = "0x40F0C50", VA = "0x40F0C50", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170008E2")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002BB3")]
		[Address(RVA = "0x40F0C60", Offset = "0x40F0C60", VA = "0x40F0C60", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002B9B")]
	[Address(RVA = "0x40EFEB0", Offset = "0x40EFEB0", VA = "0x40EFEB0")]
	public CustomLogicSliderBuiltin(Slider slider)
	{
	}

	[Token(Token = "0x6002B9C")]
	[Address(RVA = "0x40EFF60", Offset = "0x40EFF60", VA = "0x40EFF60")]
	public CustomLogicSliderBuiltin(SliderInt sliderInt)
	{
	}

	[Token(Token = "0x6002B9D")]
	[Address(RVA = "0x40F0010", Offset = "0x40F0010", VA = "0x40F0010")]
	private void OnValueChanged(float value)
	{
	}

	[Token(Token = "0x6002B9E")]
	[Address(RVA = "0x40F0130", Offset = "0x40F0130", VA = "0x40F0130")]
	private void OnValueChanged(int value)
	{
	}

	[Token(Token = "0x6002BAE")]
	[Address(RVA = "0x40F0B20", Offset = "0x40F0B20", VA = "0x40F0B20")]
	public CustomLogicSliderBuiltin OnValueChanged(UserMethod valueChangedEvent)
	{
		return null;
	}

	[Token(Token = "0x6002BAF")]
	[Address(RVA = "0x40F0B40", Offset = "0x40F0B40", VA = "0x40F0B40")]
	public void SetValueWithoutNotify(object value)
	{
	}
}
