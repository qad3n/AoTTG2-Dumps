// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicButtonBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicButtonBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.UIElements;

namespace CustomLogic;

[Token(Token = "0x2000583")]
[CompilerGenerated]
internal class CustomLogicButtonBuiltin : CustomLogicVisualElementBuiltin
{
	[Token(Token = "0x2000584")]
	public new static class Factory
	{
		[Token(Token = "0x6003426")]
		[Address(RVA = "0x2074760", Offset = "0x2072D60", VA = "0x182074760")]
		public static CustomLogicButtonBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000585")]
	public new static class Bindings
	{
		[Token(Token = "0x40017CF")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6003427")]
		[Address(RVA = "0x20494D0", Offset = "0x2047AD0", VA = "0x1820494D0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6003428")]
		[Address(RVA = "0x2063590", Offset = "0x2061B90", VA = "0x182063590")]
		public static CLPropertyBinding<CustomLogicButtonBuiltin> __CreatePropertyBinding__Text()
		{
			return null;
		}

		[Token(Token = "0x6003429")]
		[Address(RVA = "0x2061BF0", Offset = "0x20601F0", VA = "0x182061BF0")]
		public static CLPropertyBinding<CustomLogicButtonBuiltin> __CreatePropertyBinding__EnableRichText()
		{
			return null;
		}

		[Token(Token = "0x600342A")]
		[Address(RVA = "0x205B520", Offset = "0x2059B20", VA = "0x18205B520")]
		public static CLMethodBinding<CustomLogicButtonBuiltin> __CreateMethodBinding__OnClick()
		{
			return null;
		}
	}

	[Token(Token = "0x40017CD")]
	[FieldOffset(Offset = "0x60")]
	private readonly Button _button;

	[Token(Token = "0x40017CE")]
	[FieldOffset(Offset = "0x68")]
	private UserMethod _clickEvent;

	[Token(Token = "0x1700099B")]
	public string Text
	{
		[Token(Token = "0x600341D")]
		[Address(RVA = "0x2066520", Offset = "0x2064B20", VA = "0x182066520")]
		get
		{
			return null;
		}
		[Token(Token = "0x600341E")]
		[Address(RVA = "0x2066570", Offset = "0x2064B70", VA = "0x182066570")]
		set
		{
		}
	}

	[Token(Token = "0x1700099C")]
	public bool EnableRichText
	{
		[Token(Token = "0x600341F")]
		[Address(RVA = "0x2066500", Offset = "0x2064B00", VA = "0x182066500")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6003420")]
		[Address(RVA = "0x2066550", Offset = "0x2064B50", VA = "0x182066550")]
		set
		{
		}
	}

	[Token(Token = "0x1700099D")]
	public override string ClassName
	{
		[Token(Token = "0x6003422")]
		[Address(RVA = "0x20664D0", Offset = "0x2064AD0", VA = "0x1820664D0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700099E")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6003423")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700099F")]
	public override bool IsStatic
	{
		[Token(Token = "0x6003424")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009A0")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6003425")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600341B")]
	[Address(RVA = "0x2066410", Offset = "0x2064A10", VA = "0x182066410")]
	public CustomLogicButtonBuiltin(Button button)
	{
	}

	[Token(Token = "0x600341C")]
	[Address(RVA = "0x2066390", Offset = "0x2064990", VA = "0x182066390")]
	private void OnClick()
	{
	}

	[Token(Token = "0x6003421")]
	[Address(RVA = "0x55DEB0", Offset = "0x55C4B0", VA = "0x18055DEB0")]
	public CustomLogicButtonBuiltin OnClick(UserMethod clickEvent)
	{
		return null;
	}
}
