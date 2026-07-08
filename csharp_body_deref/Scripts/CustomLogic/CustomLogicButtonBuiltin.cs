using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.UIElements;

namespace CustomLogic;

[Token(Token = "0x20003E8")]
[CompilerGenerated]
internal class CustomLogicButtonBuiltin : CustomLogicVisualElementBuiltin
{
	[Token(Token = "0x20003E9")]
	public new static class Factory
	{
		[Token(Token = "0x60028B7")]
		[Address(RVA = "0x3DDCA30", Offset = "0x3DDCA30", VA = "0x3DDCA30")]
		public static CustomLogicButtonBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20003EA")]
	public new static class Bindings
	{
		[Token(Token = "0x4001088")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60028B8")]
		[Address(RVA = "0x3DDCAC0", Offset = "0x3DDCAC0", VA = "0x3DDCAC0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x60028B9")]
		[Address(RVA = "0x3DDCC50", Offset = "0x3DDCC50", VA = "0x3DDCC50")]
		public static CLPropertyBinding<CustomLogicButtonBuiltin> __CreatePropertyBinding__Text()
		{
			return null;
		}

		[Token(Token = "0x60028BA")]
		[Address(RVA = "0x3DDCD30", Offset = "0x3DDCD30", VA = "0x3DDCD30")]
		public static CLPropertyBinding<CustomLogicButtonBuiltin> __CreatePropertyBinding__EnableRichText()
		{
			return null;
		}

		[Token(Token = "0x60028BB")]
		[Address(RVA = "0x3DDCE10", Offset = "0x3DDCE10", VA = "0x3DDCE10")]
		public static CLMethodBinding<CustomLogicButtonBuiltin> __CreateMethodBinding__OnClick()
		{
			return null;
		}
	}

	[Token(Token = "0x4001086")]
	[FieldOffset(Offset = "0x60")]
	private readonly Button _button;

	[Token(Token = "0x4001087")]
	[FieldOffset(Offset = "0x68")]
	private UserMethod _clickEvent;

	[Token(Token = "0x1700083D")]
	public string Text
	{
		[Token(Token = "0x60028AE")]
		[Address(RVA = "0x3DDC910", Offset = "0x3DDC910", VA = "0x3DDC910")]
		get
		{
			return null;
		}
		[Token(Token = "0x60028AF")]
		[Address(RVA = "0x3DDC940", Offset = "0x3DDC940", VA = "0x3DDC940")]
		set
		{
		}
	}

	[Token(Token = "0x1700083E")]
	public bool EnableRichText
	{
		[Token(Token = "0x60028B0")]
		[Address(RVA = "0x3DDC970", Offset = "0x3DDC970", VA = "0x3DDC970")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60028B1")]
		[Address(RVA = "0x3DDC990", Offset = "0x3DDC990", VA = "0x3DDC990")]
		set
		{
		}
	}

	[Token(Token = "0x1700083F")]
	public override string ClassName
	{
		[Token(Token = "0x60028B3")]
		[Address(RVA = "0x3DDC9D0", Offset = "0x3DDC9D0", VA = "0x3DDC9D0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000840")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60028B4")]
		[Address(RVA = "0x3DDCA00", Offset = "0x3DDCA00", VA = "0x3DDCA00", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000841")]
	public override bool IsStatic
	{
		[Token(Token = "0x60028B5")]
		[Address(RVA = "0x3DDCA10", Offset = "0x3DDCA10", VA = "0x3DDCA10", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000842")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60028B6")]
		[Address(RVA = "0x3DDCA20", Offset = "0x3DDCA20", VA = "0x3DDCA20", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60028AC")]
	[Address(RVA = "0x3DDC730", Offset = "0x3DDC730", VA = "0x3DDC730")]
	public CustomLogicButtonBuiltin(Button button)
	{
	}

	[Token(Token = "0x60028AD")]
	[Address(RVA = "0x3DDC890", Offset = "0x3DDC890", VA = "0x3DDC890")]
	private void OnClick()
	{
	}

	[Token(Token = "0x60028B2")]
	[Address(RVA = "0x3DDC9B0", Offset = "0x3DDC9B0", VA = "0x3DDC9B0")]
	public CustomLogicButtonBuiltin OnClick(UserMethod clickEvent)
	{
		return null;
	}
}
