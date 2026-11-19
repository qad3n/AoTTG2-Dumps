// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicToggleBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicToggleBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.UIElements;

namespace CustomLogic;

[Token(Token = "0x2000606")]
[CompilerGenerated]
internal class CustomLogicToggleBuiltin : CustomLogicVisualElementBuiltin
{
	[Token(Token = "0x2000607")]
	public new static class Factory
	{
		[Token(Token = "0x6003808")]
		[Address(RVA = "0x5A08DB0", Offset = "0x5A07DB0", VA = "0x5A08DB0")]
		public static CustomLogicToggleBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000608")]
	public new static class Bindings
	{
		[Token(Token = "0x40019A9")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6003809")]
		[Address(RVA = "0x5A08E40", Offset = "0x5A07E40", VA = "0x5A08E40")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x600380A")]
		[Address(RVA = "0x5A09070", Offset = "0x5A08070", VA = "0x5A09070")]
		public static CLPropertyBinding<CustomLogicToggleBuiltin> __CreatePropertyBinding__Label()
		{
			return null;
		}

		[Token(Token = "0x600380B")]
		[Address(RVA = "0x5A09150", Offset = "0x5A08150", VA = "0x5A09150")]
		public static CLPropertyBinding<CustomLogicToggleBuiltin> __CreatePropertyBinding__Text()
		{
			return null;
		}

		[Token(Token = "0x600380C")]
		[Address(RVA = "0x5A09230", Offset = "0x5A08230", VA = "0x5A09230")]
		public static CLPropertyBinding<CustomLogicToggleBuiltin> __CreatePropertyBinding__Value()
		{
			return null;
		}

		[Token(Token = "0x600380D")]
		[Address(RVA = "0x5A09310", Offset = "0x5A08310", VA = "0x5A09310")]
		public static CLMethodBinding<CustomLogicToggleBuiltin> __CreateMethodBinding__OnValueChanged()
		{
			return null;
		}

		[Token(Token = "0x600380E")]
		[Address(RVA = "0x5A09450", Offset = "0x5A08450", VA = "0x5A09450")]
		public static CLMethodBinding<CustomLogicToggleBuiltin> __CreateMethodBinding__SetValueWithoutNotify()
		{
			return null;
		}
	}

	[Token(Token = "0x40019A7")]
	[FieldOffset(Offset = "0x60")]
	private readonly Toggle _toggle;

	[Token(Token = "0x40019A8")]
	[FieldOffset(Offset = "0x68")]
	private UserMethod _valueChangedEvent;

	[Token(Token = "0x17000A29")]
	public string Label
	{
		[Token(Token = "0x60037FB")]
		[Address(RVA = "0x5A08B80", Offset = "0x5A07B80", VA = "0x5A08B80")]
		get
		{
			return null;
		}
		[Token(Token = "0x60037FC")]
		[Address(RVA = "0x5A08BC0", Offset = "0x5A07BC0", VA = "0x5A08BC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000A2A")]
	public string Text
	{
		[Token(Token = "0x60037FD")]
		[Address(RVA = "0x5A08C10", Offset = "0x5A07C10", VA = "0x5A08C10")]
		get
		{
			return null;
		}
		[Token(Token = "0x60037FE")]
		[Address(RVA = "0x5A08C30", Offset = "0x5A07C30", VA = "0x5A08C30")]
		set
		{
		}
	}

	[Token(Token = "0x17000A2B")]
	public bool Value
	{
		[Token(Token = "0x60037FF")]
		[Address(RVA = "0x5A08C50", Offset = "0x5A07C50", VA = "0x5A08C50")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6003800")]
		[Address(RVA = "0x5A08C80", Offset = "0x5A07C80", VA = "0x5A08C80")]
		set
		{
		}
	}

	[Token(Token = "0x17000A2C")]
	public override string ClassName
	{
		[Token(Token = "0x6003803")]
		[Address(RVA = "0x5A08D00", Offset = "0x5A07D00", VA = "0x5A08D00", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A2D")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6003804")]
		[Address(RVA = "0x5A08D30", Offset = "0x5A07D30", VA = "0x5A08D30", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A2E")]
	public override bool IsStatic
	{
		[Token(Token = "0x6003805")]
		[Address(RVA = "0x5A08D40", Offset = "0x5A07D40", VA = "0x5A08D40", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A2F")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6003806")]
		[Address(RVA = "0x5A08D50", Offset = "0x5A07D50", VA = "0x5A08D50", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60037F9")]
	[Address(RVA = "0x5A089B0", Offset = "0x5A079B0", VA = "0x5A089B0")]
	public CustomLogicToggleBuiltin(Toggle toggle)
	{
	}

	[Token(Token = "0x60037FA")]
	[Address(RVA = "0x5A08A60", Offset = "0x5A07A60", VA = "0x5A08A60")]
	private void OnValueChanged(bool value)
	{
	}

	[Token(Token = "0x6003801")]
	[Address(RVA = "0x5A08CB0", Offset = "0x5A07CB0", VA = "0x5A08CB0")]
	public CustomLogicToggleBuiltin OnValueChanged(UserMethod valueChangedEvent)
	{
		return null;
	}

	[Token(Token = "0x6003802")]
	[Address(RVA = "0x5A08CD0", Offset = "0x5A07CD0", VA = "0x5A08CD0")]
	public void SetValueWithoutNotify(bool value)
	{
	}
}
