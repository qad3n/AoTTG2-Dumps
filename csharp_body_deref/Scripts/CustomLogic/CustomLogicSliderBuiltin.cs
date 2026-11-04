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

[Token(Token = "0x200059E")]
[CompilerGenerated]
internal class CustomLogicSliderBuiltin : CustomLogicVisualElementBuiltin
{
	[Token(Token = "0x200059F")]
	public new static class Factory
	{
		[Token(Token = "0x600351D")]
		[Address(RVA = "0x20748A0", Offset = "0x2072EA0", VA = "0x1820748A0")]
		public static CustomLogicSliderBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20005A0")]
	public new static class Bindings
	{
		[Token(Token = "0x40017FD")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x600351E")]
		[Address(RVA = "0x2049B20", Offset = "0x2048120", VA = "0x182049B20")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x600351F")]
		[Address(RVA = "0x2062780", Offset = "0x2060D80", VA = "0x182062780")]
		public static CLPropertyBinding<CustomLogicSliderBuiltin> __CreatePropertyBinding__Label()
		{
			return null;
		}

		[Token(Token = "0x6003520")]
		[Address(RVA = "0x2063B80", Offset = "0x2062180", VA = "0x182063B80")]
		public static CLPropertyBinding<CustomLogicSliderBuiltin> __CreatePropertyBinding__Value()
		{
			return null;
		}

		[Token(Token = "0x6003521")]
		[Address(RVA = "0x2062C30", Offset = "0x2061230", VA = "0x182062C30")]
		public static CLPropertyBinding<CustomLogicSliderBuiltin> __CreatePropertyBinding__LowValue()
		{
			return null;
		}

		[Token(Token = "0x6003522")]
		[Address(RVA = "0x2062140", Offset = "0x2060740", VA = "0x182062140")]
		public static CLPropertyBinding<CustomLogicSliderBuiltin> __CreatePropertyBinding__HighValue()
		{
			return null;
		}

		[Token(Token = "0x6003523")]
		[Address(RVA = "0x2062FF0", Offset = "0x20615F0", VA = "0x182062FF0")]
		public static CLPropertyBinding<CustomLogicSliderBuiltin> __CreatePropertyBinding__PageSize()
		{
			return null;
		}

		[Token(Token = "0x6003524")]
		[Address(RVA = "0x2061A10", Offset = "0x2060010", VA = "0x182061A10")]
		public static CLPropertyBinding<CustomLogicSliderBuiltin> __CreatePropertyBinding__Direction()
		{
			return null;
		}

		[Token(Token = "0x6003525")]
		[Address(RVA = "0x20634A0", Offset = "0x2061AA0", VA = "0x1820634A0")]
		public static CLPropertyBinding<CustomLogicSliderBuiltin> __CreatePropertyBinding__ShowInputField()
		{
			return null;
		}

		[Token(Token = "0x6003526")]
		[Address(RVA = "0x20626E0", Offset = "0x2060CE0", VA = "0x1820626E0")]
		public static CLPropertyBinding<CustomLogicSliderBuiltin> __CreatePropertyBinding__IsIntSlider()
		{
			return null;
		}

		[Token(Token = "0x6003527")]
		[Address(RVA = "0x205B760", Offset = "0x2059D60", VA = "0x18205B760")]
		public static CLMethodBinding<CustomLogicSliderBuiltin> __CreateMethodBinding__OnValueChanged()
		{
			return null;
		}

		[Token(Token = "0x6003528")]
		[Address(RVA = "0x205F570", Offset = "0x205DB70", VA = "0x18205F570")]
		public static CLMethodBinding<CustomLogicSliderBuiltin> __CreateMethodBinding__SetValueWithoutNotify()
		{
			return null;
		}
	}

	[Token(Token = "0x40017F9")]
	[FieldOffset(Offset = "0x60")]
	private readonly Slider _floatSlider;

	[Token(Token = "0x40017FA")]
	[FieldOffset(Offset = "0x68")]
	private readonly SliderInt _intSlider;

	[Token(Token = "0x40017FB")]
	[FieldOffset(Offset = "0x70")]
	private readonly bool _isIntSlider;

	[Token(Token = "0x40017FC")]
	[FieldOffset(Offset = "0x78")]
	private UserMethod _valueChangedEvent;

	[Token(Token = "0x170009CB")]
	public string Label
	{
		[Token(Token = "0x6003506")]
		[Address(RVA = "0x2068F10", Offset = "0x2067510", VA = "0x182068F10")]
		get
		{
			return null;
		}
		[Token(Token = "0x6003507")]
		[Address(RVA = "0x2069460", Offset = "0x2067A60", VA = "0x182069460")]
		set
		{
		}
	}

	[Token(Token = "0x170009CC")]
	public object Value
	{
		[Token(Token = "0x6003508")]
		[Address(RVA = "0x20690C0", Offset = "0x20676C0", VA = "0x1820690C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6003509")]
		[Address(RVA = "0x2069720", Offset = "0x2067D20", VA = "0x182069720")]
		set
		{
		}
	}

	[Token(Token = "0x170009CD")]
	public object LowValue
	{
		[Token(Token = "0x600350A")]
		[Address(RVA = "0x2068F90", Offset = "0x2067590", VA = "0x182068F90")]
		get
		{
			return null;
		}
		[Token(Token = "0x600350B")]
		[Address(RVA = "0x20694F0", Offset = "0x2067AF0", VA = "0x1820694F0")]
		set
		{
		}
	}

	[Token(Token = "0x170009CE")]
	public object HighValue
	{
		[Token(Token = "0x600350C")]
		[Address(RVA = "0x2068E60", Offset = "0x2067460", VA = "0x182068E60")]
		get
		{
			return null;
		}
		[Token(Token = "0x600350D")]
		[Address(RVA = "0x20692B0", Offset = "0x20678B0", VA = "0x1820692B0")]
		set
		{
		}
	}

	[Token(Token = "0x170009CF")]
	public float PageSize
	{
		[Token(Token = "0x600350E")]
		[Address(RVA = "0x2069040", Offset = "0x2067640", VA = "0x182069040")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x600350F")]
		[Address(RVA = "0x20696A0", Offset = "0x2067CA0", VA = "0x1820696A0")]
		set
		{
		}
	}

	[Token(Token = "0x170009D0")]
	public int Direction
	{
		[Token(Token = "0x6003510")]
		[Address(RVA = "0x2068DE0", Offset = "0x20673E0", VA = "0x182068DE0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6003511")]
		[Address(RVA = "0x2069140", Offset = "0x2067740", VA = "0x182069140")]
		set
		{
		}
	}

	[Token(Token = "0x170009D1")]
	public bool ShowInputField
	{
		[Token(Token = "0x6003512")]
		[Address(RVA = "0x2069080", Offset = "0x2067680", VA = "0x182069080")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6003513")]
		[Address(RVA = "0x20696E0", Offset = "0x2067CE0", VA = "0x1820696E0")]
		set
		{
		}
	}

	[Token(Token = "0x170009D2")]
	public bool IsIntSlider
	{
		[Token(Token = "0x6003514")]
		[Address(RVA = "0xABD390", Offset = "0xABB990", VA = "0x180ABD390")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009D3")]
	public override string ClassName
	{
		[Token(Token = "0x6003517")]
		[Address(RVA = "0x2068DB0", Offset = "0x20673B0", VA = "0x182068DB0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009D4")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6003518")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009D5")]
	public override bool IsStatic
	{
		[Token(Token = "0x6003519")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009D6")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x600351A")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003502")]
	[Address(RVA = "0x2068CF0", Offset = "0x20672F0", VA = "0x182068CF0")]
	public CustomLogicSliderBuiltin(Slider slider)
	{
	}

	[Token(Token = "0x6003503")]
	[Address(RVA = "0x2068C30", Offset = "0x2067230", VA = "0x182068C30")]
	public CustomLogicSliderBuiltin(SliderInt sliderInt)
	{
	}

	[Token(Token = "0x6003504")]
	[Address(RVA = "0x2068570", Offset = "0x2066B70", VA = "0x182068570")]
	private void OnValueChanged(float value)
	{
	}

	[Token(Token = "0x6003505")]
	[Address(RVA = "0x20686A0", Offset = "0x2066CA0", VA = "0x1820686A0")]
	private void OnValueChanged(int value)
	{
	}

	[Token(Token = "0x6003515")]
	[Address(RVA = "0x2068550", Offset = "0x2066B50", VA = "0x182068550")]
	public CustomLogicSliderBuiltin OnValueChanged(UserMethod valueChangedEvent)
	{
		return null;
	}

	[Token(Token = "0x6003516")]
	[Address(RVA = "0x20687D0", Offset = "0x2066DD0", VA = "0x1820687D0")]
	public void SetValueWithoutNotify(object value)
	{
	}
}
