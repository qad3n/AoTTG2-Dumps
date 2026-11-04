// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicDropdownBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicDropdownBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.UIElements;

namespace CustomLogic;

[Token(Token = "0x2000587")]
[CompilerGenerated]
internal class CustomLogicDropdownBuiltin : CustomLogicVisualElementBuiltin
{
	[Token(Token = "0x2000588")]
	public new static class Factory
	{
		[Token(Token = "0x6003448")]
		[Address(RVA = "0x20746C0", Offset = "0x2072CC0", VA = "0x1820746C0")]
		public static CustomLogicDropdownBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000589")]
	public new static class Bindings
	{
		[Token(Token = "0x40017D4")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6003449")]
		[Address(RVA = "0x204A5A0", Offset = "0x2048BA0", VA = "0x18204A5A0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x600344A")]
		[Address(RVA = "0x2062870", Offset = "0x2060E70", VA = "0x182062870")]
		public static CLPropertyBinding<CustomLogicDropdownBuiltin> __CreatePropertyBinding__Label()
		{
			return null;
		}

		[Token(Token = "0x600344B")]
		[Address(RVA = "0x2063D60", Offset = "0x2062360", VA = "0x182063D60")]
		public static CLPropertyBinding<CustomLogicDropdownBuiltin> __CreatePropertyBinding__Value()
		{
			return null;
		}

		[Token(Token = "0x600344C")]
		[Address(RVA = "0x2062500", Offset = "0x2060B00", VA = "0x182062500")]
		public static CLPropertyBinding<CustomLogicDropdownBuiltin> __CreatePropertyBinding__Index()
		{
			return null;
		}

		[Token(Token = "0x600344D")]
		[Address(RVA = "0x2061830", Offset = "0x205FE30", VA = "0x182061830")]
		public static CLPropertyBinding<CustomLogicDropdownBuiltin> __CreatePropertyBinding__Choices()
		{
			return null;
		}

		[Token(Token = "0x600344E")]
		[Address(RVA = "0x205B640", Offset = "0x2059C40", VA = "0x18205B640")]
		public static CLMethodBinding<CustomLogicDropdownBuiltin> __CreateMethodBinding__OnValueChanged()
		{
			return null;
		}

		[Token(Token = "0x600344F")]
		[Address(RVA = "0x205F330", Offset = "0x205D930", VA = "0x18205F330")]
		public static CLMethodBinding<CustomLogicDropdownBuiltin> __CreateMethodBinding__SetValueWithoutNotify()
		{
			return null;
		}

		[Token(Token = "0x6003450")]
		[Address(RVA = "0x205DD60", Offset = "0x205C360", VA = "0x18205DD60")]
		public static CLMethodBinding<CustomLogicDropdownBuiltin> __CreateMethodBinding__SetIndexWithoutNotify()
		{
			return null;
		}

		[Token(Token = "0x6003451")]
		[Address(RVA = "0x2056D90", Offset = "0x2055390", VA = "0x182056D90")]
		public static CLMethodBinding<CustomLogicDropdownBuiltin> __CreateMethodBinding__AddChoice()
		{
			return null;
		}

		[Token(Token = "0x6003452")]
		[Address(RVA = "0x205CE60", Offset = "0x205B460", VA = "0x18205CE60")]
		public static CLMethodBinding<CustomLogicDropdownBuiltin> __CreateMethodBinding__RemoveChoice()
		{
			return null;
		}

		[Token(Token = "0x6003453")]
		[Address(RVA = "0x2058D40", Offset = "0x2057340", VA = "0x182058D40")]
		public static CLMethodBinding<CustomLogicDropdownBuiltin> __CreateMethodBinding__ClearChoices()
		{
			return null;
		}
	}

	[Token(Token = "0x40017D2")]
	[FieldOffset(Offset = "0x60")]
	private readonly DropdownField _dropdown;

	[Token(Token = "0x40017D3")]
	[FieldOffset(Offset = "0x68")]
	private UserMethod _valueChangedEvent;

	[Token(Token = "0x170009A1")]
	public string Label
	{
		[Token(Token = "0x6003435")]
		[Address(RVA = "0x2066EB0", Offset = "0x20654B0", VA = "0x182066EB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6003436")]
		[Address(RVA = "0x2067160", Offset = "0x2065760", VA = "0x182067160")]
		set
		{
		}
	}

	[Token(Token = "0x170009A2")]
	public string Value
	{
		[Token(Token = "0x6003437")]
		[Address(RVA = "0x2066F00", Offset = "0x2065500", VA = "0x182066F00")]
		get
		{
			return null;
		}
		[Token(Token = "0x6003438")]
		[Address(RVA = "0x20671C0", Offset = "0x20657C0", VA = "0x1820671C0")]
		set
		{
		}
	}

	[Token(Token = "0x170009A3")]
	public int Index
	{
		[Token(Token = "0x6003439")]
		[Address(RVA = "0x2066E60", Offset = "0x2065460", VA = "0x182066E60")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600343A")]
		[Address(RVA = "0x2067100", Offset = "0x2065700", VA = "0x182067100")]
		set
		{
		}
	}

	[Token(Token = "0x170009A4")]
	public CustomLogicListBuiltin Choices
	{
		[Token(Token = "0x600343B")]
		[Address(RVA = "0x2066C40", Offset = "0x2065240", VA = "0x182066C40")]
		get
		{
			return null;
		}
		[Token(Token = "0x600343C")]
		[Address(RVA = "0x2066F30", Offset = "0x2065530", VA = "0x182066F30")]
		set
		{
		}
	}

	[Token(Token = "0x170009A5")]
	public override string ClassName
	{
		[Token(Token = "0x6003443")]
		[Address(RVA = "0x2066E30", Offset = "0x2065430", VA = "0x182066E30", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009A6")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6003444")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009A7")]
	public override bool IsStatic
	{
		[Token(Token = "0x6003445")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009A8")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6003446")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003433")]
	[Address(RVA = "0x2066B90", Offset = "0x2065190", VA = "0x182066B90")]
	public CustomLogicDropdownBuiltin(DropdownField dropdown)
	{
	}

	[Token(Token = "0x6003434")]
	[Address(RVA = "0x2066770", Offset = "0x2064D70", VA = "0x182066770")]
	private void OnValueChanged(string value)
	{
	}

	[Token(Token = "0x600343D")]
	[Address(RVA = "0x55DEB0", Offset = "0x55C4B0", VA = "0x18055DEB0")]
	public CustomLogicDropdownBuiltin OnValueChanged(UserMethod valueChangedEvent)
	{
		return null;
	}

	[Token(Token = "0x600343E")]
	[Address(RVA = "0x2066A20", Offset = "0x2065020", VA = "0x182066A20")]
	public void SetValueWithoutNotify(string value)
	{
	}

	[Token(Token = "0x600343F")]
	[Address(RVA = "0x2066960", Offset = "0x2064F60", VA = "0x182066960")]
	public void SetIndexWithoutNotify(int index)
	{
	}

	[Token(Token = "0x6003440")]
	[Address(RVA = "0x20665A0", Offset = "0x2064BA0", VA = "0x1820665A0")]
	public CustomLogicDropdownBuiltin AddChoice(string choice)
	{
		return null;
	}

	[Token(Token = "0x6003441")]
	[Address(RVA = "0x2066880", Offset = "0x2064E80", VA = "0x182066880")]
	public CustomLogicDropdownBuiltin RemoveChoice(string choice)
	{
		return null;
	}

	[Token(Token = "0x6003442")]
	[Address(RVA = "0x20666D0", Offset = "0x2064CD0", VA = "0x1820666D0")]
	public CustomLogicDropdownBuiltin ClearChoices()
	{
		return null;
	}
}
