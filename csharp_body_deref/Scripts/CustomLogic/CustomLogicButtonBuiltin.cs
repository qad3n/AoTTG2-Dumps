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

[Token(Token = "0x20005E2")]
[CompilerGenerated]
internal class CustomLogicButtonBuiltin : CustomLogicVisualElementBuiltin
{
	[Token(Token = "0x20005E3")]
	public new static class Factory
	{
		[Token(Token = "0x60036B2")]
		[Address(RVA = "0x59FBDA0", Offset = "0x59FADA0", VA = "0x59FBDA0")]
		public static CustomLogicButtonBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20005E4")]
	public new static class Bindings
	{
		[Token(Token = "0x400196F")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60036B3")]
		[Address(RVA = "0x59FBE30", Offset = "0x59FAE30", VA = "0x59FBE30")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x60036B4")]
		[Address(RVA = "0x59FBFC0", Offset = "0x59FAFC0", VA = "0x59FBFC0")]
		public static CLPropertyBinding<CustomLogicButtonBuiltin> __CreatePropertyBinding__Text()
		{
			return null;
		}

		[Token(Token = "0x60036B5")]
		[Address(RVA = "0x59FC0A0", Offset = "0x59FB0A0", VA = "0x59FC0A0")]
		public static CLPropertyBinding<CustomLogicButtonBuiltin> __CreatePropertyBinding__EnableRichText()
		{
			return null;
		}

		[Token(Token = "0x60036B6")]
		[Address(RVA = "0x59FC180", Offset = "0x59FB180", VA = "0x59FC180")]
		public static CLMethodBinding<CustomLogicButtonBuiltin> __CreateMethodBinding__OnClick()
		{
			return null;
		}
	}

	[Token(Token = "0x400196D")]
	[FieldOffset(Offset = "0x60")]
	private readonly Button _button;

	[Token(Token = "0x400196E")]
	[FieldOffset(Offset = "0x68")]
	private UserMethod _clickEvent;

	[Token(Token = "0x170009E3")]
	public string Text
	{
		[Token(Token = "0x60036A9")]
		[Address(RVA = "0x59FBC80", Offset = "0x59FAC80", VA = "0x59FBC80")]
		get
		{
			return null;
		}
		[Token(Token = "0x60036AA")]
		[Address(RVA = "0x59FBCB0", Offset = "0x59FACB0", VA = "0x59FBCB0")]
		set
		{
		}
	}

	[Token(Token = "0x170009E4")]
	public bool EnableRichText
	{
		[Token(Token = "0x60036AB")]
		[Address(RVA = "0x59FBCE0", Offset = "0x59FACE0", VA = "0x59FBCE0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60036AC")]
		[Address(RVA = "0x59FBD00", Offset = "0x59FAD00", VA = "0x59FBD00")]
		set
		{
		}
	}

	[Token(Token = "0x170009E5")]
	public override string ClassName
	{
		[Token(Token = "0x60036AE")]
		[Address(RVA = "0x59FBD40", Offset = "0x59FAD40", VA = "0x59FBD40", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009E6")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60036AF")]
		[Address(RVA = "0x59FBD70", Offset = "0x59FAD70", VA = "0x59FBD70", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009E7")]
	public override bool IsStatic
	{
		[Token(Token = "0x60036B0")]
		[Address(RVA = "0x59FBD80", Offset = "0x59FAD80", VA = "0x59FBD80", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009E8")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60036B1")]
		[Address(RVA = "0x59FBD90", Offset = "0x59FAD90", VA = "0x59FBD90", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60036A7")]
	[Address(RVA = "0x59FBB50", Offset = "0x59FAB50", VA = "0x59FBB50")]
	public CustomLogicButtonBuiltin(Button button)
	{
	}

	[Token(Token = "0x60036A8")]
	[Address(RVA = "0x59FBC00", Offset = "0x59FAC00", VA = "0x59FBC00")]
	private void OnClick()
	{
	}

	[Token(Token = "0x60036AD")]
	[Address(RVA = "0x59FBD20", Offset = "0x59FAD20", VA = "0x59FBD20")]
	public CustomLogicButtonBuiltin OnClick(UserMethod clickEvent)
	{
		return null;
	}
}
