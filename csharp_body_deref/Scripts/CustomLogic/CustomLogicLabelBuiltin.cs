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

[Token(Token = "0x200043D")]
[CompilerGenerated]
internal class CustomLogicLabelBuiltin : CustomLogicVisualElementBuiltin
{
	[Token(Token = "0x200043E")]
	public new static class Factory
	{
		[Token(Token = "0x6002B34")]
		[Address(RVA = "0x40EC060", Offset = "0x40EC060", VA = "0x40EC060")]
		public static CustomLogicLabelBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x200043F")]
	public new static class Bindings
	{
		[Token(Token = "0x40011AB")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002B35")]
		[Address(RVA = "0x40EC0F0", Offset = "0x40EC0F0", VA = "0x40EC0F0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6002B36")]
		[Address(RVA = "0x40EC230", Offset = "0x40EC230", VA = "0x40EC230")]
		public static CLPropertyBinding<CustomLogicLabelBuiltin> __CreatePropertyBinding__Text()
		{
			return null;
		}

		[Token(Token = "0x6002B37")]
		[Address(RVA = "0x40EC310", Offset = "0x40EC310", VA = "0x40EC310")]
		public static CLPropertyBinding<CustomLogicLabelBuiltin> __CreatePropertyBinding__EnableRichText()
		{
			return null;
		}
	}

	[Token(Token = "0x40011AA")]
	[FieldOffset(Offset = "0x60")]
	private readonly Label _label;

	[Token(Token = "0x170008C0")]
	public string Text
	{
		[Token(Token = "0x6002B2C")]
		[Address(RVA = "0x40EBF60", Offset = "0x40EBF60", VA = "0x40EBF60")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002B2D")]
		[Address(RVA = "0x40EBF90", Offset = "0x40EBF90", VA = "0x40EBF90")]
		set
		{
		}
	}

	[Token(Token = "0x170008C1")]
	public bool EnableRichText
	{
		[Token(Token = "0x6002B2E")]
		[Address(RVA = "0x40EBFC0", Offset = "0x40EBFC0", VA = "0x40EBFC0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002B2F")]
		[Address(RVA = "0x40EBFE0", Offset = "0x40EBFE0", VA = "0x40EBFE0")]
		set
		{
		}
	}

	[Token(Token = "0x170008C2")]
	public override string ClassName
	{
		[Token(Token = "0x6002B30")]
		[Address(RVA = "0x40EC000", Offset = "0x40EC000", VA = "0x40EC000", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170008C3")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002B31")]
		[Address(RVA = "0x40EC030", Offset = "0x40EC030", VA = "0x40EC030", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170008C4")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002B32")]
		[Address(RVA = "0x40EC040", Offset = "0x40EC040", VA = "0x40EC040", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170008C5")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002B33")]
		[Address(RVA = "0x40EC050", Offset = "0x40EC050", VA = "0x40EC050", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002B2B")]
	[Address(RVA = "0x40EBF30", Offset = "0x40EBF30", VA = "0x40EBF30")]
	public CustomLogicLabelBuiltin(Label label)
	{
	}
}
