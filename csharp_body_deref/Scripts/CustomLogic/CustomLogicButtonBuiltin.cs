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

[Token(Token = "0x200042D")]
[CompilerGenerated]
internal class CustomLogicButtonBuiltin : CustomLogicVisualElementBuiltin
{
	[Token(Token = "0x200042E")]
	public new static class Factory
	{
		[Token(Token = "0x6002ABF")]
		[Address(RVA = "0x40E75A0", Offset = "0x40E75A0", VA = "0x40E75A0")]
		public static CustomLogicButtonBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x200042F")]
	public new static class Bindings
	{
		[Token(Token = "0x4001192")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002AC0")]
		[Address(RVA = "0x40E7630", Offset = "0x40E7630", VA = "0x40E7630")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6002AC1")]
		[Address(RVA = "0x40E77C0", Offset = "0x40E77C0", VA = "0x40E77C0")]
		public static CLPropertyBinding<CustomLogicButtonBuiltin> __CreatePropertyBinding__Text()
		{
			return null;
		}

		[Token(Token = "0x6002AC2")]
		[Address(RVA = "0x40E78A0", Offset = "0x40E78A0", VA = "0x40E78A0")]
		public static CLPropertyBinding<CustomLogicButtonBuiltin> __CreatePropertyBinding__EnableRichText()
		{
			return null;
		}

		[Token(Token = "0x6002AC3")]
		[Address(RVA = "0x40E7980", Offset = "0x40E7980", VA = "0x40E7980")]
		public static CLMethodBinding<CustomLogicButtonBuiltin> __CreateMethodBinding__OnClick()
		{
			return null;
		}
	}

	[Token(Token = "0x4001190")]
	[FieldOffset(Offset = "0x60")]
	private readonly Button _button;

	[Token(Token = "0x4001191")]
	[FieldOffset(Offset = "0x68")]
	private UserMethod _clickEvent;

	[Token(Token = "0x170008A7")]
	public string Text
	{
		[Token(Token = "0x6002AB6")]
		[Address(RVA = "0x40E7480", Offset = "0x40E7480", VA = "0x40E7480")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002AB7")]
		[Address(RVA = "0x40E74B0", Offset = "0x40E74B0", VA = "0x40E74B0")]
		set
		{
		}
	}

	[Token(Token = "0x170008A8")]
	public bool EnableRichText
	{
		[Token(Token = "0x6002AB8")]
		[Address(RVA = "0x40E74E0", Offset = "0x40E74E0", VA = "0x40E74E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002AB9")]
		[Address(RVA = "0x40E7500", Offset = "0x40E7500", VA = "0x40E7500")]
		set
		{
		}
	}

	[Token(Token = "0x170008A9")]
	public override string ClassName
	{
		[Token(Token = "0x6002ABB")]
		[Address(RVA = "0x40E7540", Offset = "0x40E7540", VA = "0x40E7540", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170008AA")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002ABC")]
		[Address(RVA = "0x40E7570", Offset = "0x40E7570", VA = "0x40E7570", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170008AB")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002ABD")]
		[Address(RVA = "0x40E7580", Offset = "0x40E7580", VA = "0x40E7580", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170008AC")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002ABE")]
		[Address(RVA = "0x40E7590", Offset = "0x40E7590", VA = "0x40E7590", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002AB4")]
	[Address(RVA = "0x40E7350", Offset = "0x40E7350", VA = "0x40E7350")]
	public CustomLogicButtonBuiltin(Button button)
	{
	}

	[Token(Token = "0x6002AB5")]
	[Address(RVA = "0x40E7400", Offset = "0x40E7400", VA = "0x40E7400")]
	private void OnClick()
	{
	}

	[Token(Token = "0x6002ABA")]
	[Address(RVA = "0x40E7520", Offset = "0x40E7520", VA = "0x40E7520")]
	public CustomLogicButtonBuiltin OnClick(UserMethod clickEvent)
	{
		return null;
	}
}
