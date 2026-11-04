// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicTextFieldBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicTextFieldBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.UIElements;

namespace CustomLogic;

[Token(Token = "0x20005A2")]
[CompilerGenerated]
internal class CustomLogicTextFieldBuiltin : CustomLogicVisualElementBuiltin
{
	[Token(Token = "0x20005A3")]
	public new static class Factory
	{
		[Token(Token = "0x6003550")]
		[Address(RVA = "0x2074A70", Offset = "0x2073070", VA = "0x182074A70")]
		public static CustomLogicTextFieldBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20005A4")]
	public new static class Bindings
	{
		[Token(Token = "0x4001802")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6003551")]
		[Address(RVA = "0x2052B80", Offset = "0x2051180", VA = "0x182052B80")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6003552")]
		[Address(RVA = "0x20625F0", Offset = "0x2060BF0", VA = "0x1820625F0")]
		public static CLPropertyBinding<CustomLogicTextFieldBuiltin> __CreatePropertyBinding__IsDelayed()
		{
			return null;
		}

		[Token(Token = "0x6003553")]
		[Address(RVA = "0x2062F00", Offset = "0x2061500", VA = "0x182062F00")]
		public static CLPropertyBinding<CustomLogicTextFieldBuiltin> __CreatePropertyBinding__Multiline()
		{
			return null;
		}

		[Token(Token = "0x6003554")]
		[Address(RVA = "0x2062960", Offset = "0x2060F60", VA = "0x182062960")]
		public static CLPropertyBinding<CustomLogicTextFieldBuiltin> __CreatePropertyBinding__Label()
		{
			return null;
		}

		[Token(Token = "0x6003555")]
		[Address(RVA = "0x2063E50", Offset = "0x2062450", VA = "0x182063E50")]
		public static CLPropertyBinding<CustomLogicTextFieldBuiltin> __CreatePropertyBinding__Value()
		{
			return null;
		}

		[Token(Token = "0x6003556")]
		[Address(RVA = "0x20633B0", Offset = "0x20619B0", VA = "0x1820633B0")]
		public static CLPropertyBinding<CustomLogicTextFieldBuiltin> __CreatePropertyBinding__SelectionColor()
		{
			return null;
		}

		[Token(Token = "0x6003557")]
		[Address(RVA = "0x2061920", Offset = "0x205FF20", VA = "0x182061920")]
		public static CLPropertyBinding<CustomLogicTextFieldBuiltin> __CreatePropertyBinding__CursorColor()
		{
			return null;
		}

		[Token(Token = "0x6003558")]
		[Address(RVA = "0x205CD40", Offset = "0x205B340", VA = "0x18205CD40")]
		public static CLMethodBinding<CustomLogicTextFieldBuiltin> __CreateMethodBinding__RegisterValueChangedEventCallback()
		{
			return null;
		}

		[Token(Token = "0x6003559")]
		[Address(RVA = "0x205F210", Offset = "0x205D810", VA = "0x18205F210")]
		public static CLMethodBinding<CustomLogicTextFieldBuiltin> __CreateMethodBinding__SetValueWithoutNotify()
		{
			return null;
		}
	}

	[Token(Token = "0x4001801")]
	[FieldOffset(Offset = "0x60")]
	private readonly TextField _textField;

	[Token(Token = "0x170009D7")]
	public bool IsDelayed
	{
		[Token(Token = "0x600353E")]
		[Address(RVA = "0x2069A60", Offset = "0x2068060", VA = "0x182069A60")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600353F")]
		[Address(RVA = "0x2069CD0", Offset = "0x20682D0", VA = "0x182069CD0")]
		set
		{
		}
	}

	[Token(Token = "0x170009D8")]
	public bool Multiline
	{
		[Token(Token = "0x6003540")]
		[Address(RVA = "0x2069B00", Offset = "0x2068100", VA = "0x182069B00")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6003541")]
		[Address(RVA = "0x2069D90", Offset = "0x2068390", VA = "0x182069D90")]
		set
		{
		}
	}

	[Token(Token = "0x170009D9")]
	public string Label
	{
		[Token(Token = "0x6003542")]
		[Address(RVA = "0x2069AB0", Offset = "0x20680B0", VA = "0x182069AB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6003543")]
		[Address(RVA = "0x2069D30", Offset = "0x2068330", VA = "0x182069D30")]
		set
		{
		}
	}

	[Token(Token = "0x170009DA")]
	public string Value
	{
		[Token(Token = "0x6003544")]
		[Address(RVA = "0x2066F00", Offset = "0x2065500", VA = "0x182066F00")]
		get
		{
			return null;
		}
		[Token(Token = "0x6003545")]
		[Address(RVA = "0x20671C0", Offset = "0x20657C0", VA = "0x1820671C0")]
		set
		{
		}
	}

	[Token(Token = "0x170009DB")]
	public CustomLogicColorBuiltin SelectionColor
	{
		[Token(Token = "0x6003546")]
		[Address(RVA = "0x2069B20", Offset = "0x2068120", VA = "0x182069B20")]
		get
		{
			return null;
		}
		[Token(Token = "0x6003547")]
		[Address(RVA = "0x2069DB0", Offset = "0x20683B0", VA = "0x182069DB0")]
		set
		{
		}
	}

	[Token(Token = "0x170009DC")]
	public CustomLogicColorBuiltin CursorColor
	{
		[Token(Token = "0x6003548")]
		[Address(RVA = "0x20699D0", Offset = "0x2067FD0", VA = "0x1820699D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6003549")]
		[Address(RVA = "0x2069BB0", Offset = "0x20681B0", VA = "0x182069BB0")]
		set
		{
		}
	}

	[Token(Token = "0x170009DD")]
	public override string ClassName
	{
		[Token(Token = "0x600354C")]
		[Address(RVA = "0x20699A0", Offset = "0x2067FA0", VA = "0x1820699A0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009DE")]
	public override bool IsAbstract
	{
		[Token(Token = "0x600354D")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009DF")]
	public override bool IsStatic
	{
		[Token(Token = "0x600354E")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009E0")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x600354F")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600353D")]
	[Address(RVA = "0x2067970", Offset = "0x2065F70", VA = "0x182067970")]
	public CustomLogicTextFieldBuiltin(TextField textField)
	{
	}

	[Token(Token = "0x600354A")]
	[Address(RVA = "0x20698C0", Offset = "0x2067EC0", VA = "0x1820698C0")]
	public CustomLogicTextFieldBuiltin RegisterValueChangedEventCallback(UserMethod changeEvent)
	{
		return null;
	}

	[Token(Token = "0x600354B")]
	[Address(RVA = "0x2066A20", Offset = "0x2065020", VA = "0x182066A20")]
	public void SetValueWithoutNotify(string value)
	{
	}
}
