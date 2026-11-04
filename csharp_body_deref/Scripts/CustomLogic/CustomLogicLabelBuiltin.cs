// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicLabelBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicLabelBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.UIElements;

namespace CustomLogic;

[Token(Token = "0x2000593")]
[CompilerGenerated]
internal class CustomLogicLabelBuiltin : CustomLogicVisualElementBuiltin
{
	[Token(Token = "0x2000594")]
	public new static class Factory
	{
		[Token(Token = "0x600349B")]
		[Address(RVA = "0x2074B10", Offset = "0x2073110", VA = "0x182074B10")]
		public static CustomLogicLabelBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000595")]
	public new static class Bindings
	{
		[Token(Token = "0x40017E8")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x600349C")]
		[Address(RVA = "0x20498A0", Offset = "0x2047EA0", VA = "0x1820498A0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x600349D")]
		[Address(RVA = "0x2063770", Offset = "0x2061D70", VA = "0x182063770")]
		public static CLPropertyBinding<CustomLogicLabelBuiltin> __CreatePropertyBinding__Text()
		{
			return null;
		}

		[Token(Token = "0x600349E")]
		[Address(RVA = "0x2061B00", Offset = "0x2060100", VA = "0x182061B00")]
		public static CLPropertyBinding<CustomLogicLabelBuiltin> __CreatePropertyBinding__EnableRichText()
		{
			return null;
		}
	}

	[Token(Token = "0x40017E7")]
	[FieldOffset(Offset = "0x60")]
	private readonly Label _label;

	[Token(Token = "0x170009B4")]
	public string Text
	{
		[Token(Token = "0x6003493")]
		[Address(RVA = "0x2066520", Offset = "0x2064B20", VA = "0x182066520")]
		get
		{
			return null;
		}
		[Token(Token = "0x6003494")]
		[Address(RVA = "0x2066570", Offset = "0x2064B70", VA = "0x182066570")]
		set
		{
		}
	}

	[Token(Token = "0x170009B5")]
	public bool EnableRichText
	{
		[Token(Token = "0x6003495")]
		[Address(RVA = "0x2066500", Offset = "0x2064B00", VA = "0x182066500")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6003496")]
		[Address(RVA = "0x2066550", Offset = "0x2064B50", VA = "0x182066550")]
		set
		{
		}
	}

	[Token(Token = "0x170009B6")]
	public override string ClassName
	{
		[Token(Token = "0x6003497")]
		[Address(RVA = "0x20679B0", Offset = "0x2065FB0", VA = "0x1820679B0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009B7")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6003498")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009B8")]
	public override bool IsStatic
	{
		[Token(Token = "0x6003499")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009B9")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x600349A")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003492")]
	[Address(RVA = "0x2067970", Offset = "0x2065F70", VA = "0x182067970")]
	public CustomLogicLabelBuiltin(Label label)
	{
	}
}
