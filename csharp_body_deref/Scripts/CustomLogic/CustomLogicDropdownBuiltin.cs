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

[Token(Token = "0x2000431")]
[CompilerGenerated]
internal class CustomLogicDropdownBuiltin : CustomLogicVisualElementBuiltin
{
	[Token(Token = "0x2000432")]
	public new static class Factory
	{
		[Token(Token = "0x6002AE1")]
		[Address(RVA = "0x40E8AD0", Offset = "0x40E8AD0", VA = "0x40E8AD0")]
		public static CustomLogicDropdownBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000433")]
	public new static class Bindings
	{
		[Token(Token = "0x4001197")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002AE2")]
		[Address(RVA = "0x40E8B60", Offset = "0x40E8B60", VA = "0x40E8B60")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6002AE3")]
		[Address(RVA = "0x40E9020", Offset = "0x40E9020", VA = "0x40E9020")]
		public static CLPropertyBinding<CustomLogicDropdownBuiltin> __CreatePropertyBinding__Label()
		{
			return null;
		}

		[Token(Token = "0x6002AE4")]
		[Address(RVA = "0x40E9100", Offset = "0x40E9100", VA = "0x40E9100")]
		public static CLPropertyBinding<CustomLogicDropdownBuiltin> __CreatePropertyBinding__Value()
		{
			return null;
		}

		[Token(Token = "0x6002AE5")]
		[Address(RVA = "0x40E91E0", Offset = "0x40E91E0", VA = "0x40E91E0")]
		public static CLPropertyBinding<CustomLogicDropdownBuiltin> __CreatePropertyBinding__Index()
		{
			return null;
		}

		[Token(Token = "0x6002AE6")]
		[Address(RVA = "0x40E92C0", Offset = "0x40E92C0", VA = "0x40E92C0")]
		public static CLPropertyBinding<CustomLogicDropdownBuiltin> __CreatePropertyBinding__Choices()
		{
			return null;
		}

		[Token(Token = "0x6002AE7")]
		[Address(RVA = "0x40E93A0", Offset = "0x40E93A0", VA = "0x40E93A0")]
		public static CLMethodBinding<CustomLogicDropdownBuiltin> __CreateMethodBinding__OnValueChanged()
		{
			return null;
		}

		[Token(Token = "0x6002AE8")]
		[Address(RVA = "0x40E94F0", Offset = "0x40E94F0", VA = "0x40E94F0")]
		public static CLMethodBinding<CustomLogicDropdownBuiltin> __CreateMethodBinding__SetValueWithoutNotify()
		{
			return null;
		}

		[Token(Token = "0x6002AE9")]
		[Address(RVA = "0x40E9640", Offset = "0x40E9640", VA = "0x40E9640")]
		public static CLMethodBinding<CustomLogicDropdownBuiltin> __CreateMethodBinding__SetIndexWithoutNotify()
		{
			return null;
		}

		[Token(Token = "0x6002AEA")]
		[Address(RVA = "0x40E9790", Offset = "0x40E9790", VA = "0x40E9790")]
		public static CLMethodBinding<CustomLogicDropdownBuiltin> __CreateMethodBinding__AddChoice()
		{
			return null;
		}

		[Token(Token = "0x6002AEB")]
		[Address(RVA = "0x40E98E0", Offset = "0x40E98E0", VA = "0x40E98E0")]
		public static CLMethodBinding<CustomLogicDropdownBuiltin> __CreateMethodBinding__RemoveChoice()
		{
			return null;
		}

		[Token(Token = "0x6002AEC")]
		[Address(RVA = "0x40E9A30", Offset = "0x40E9A30", VA = "0x40E9A30")]
		public static CLMethodBinding<CustomLogicDropdownBuiltin> __CreateMethodBinding__ClearChoices()
		{
			return null;
		}
	}

	[Token(Token = "0x4001195")]
	[FieldOffset(Offset = "0x60")]
	private readonly DropdownField _dropdown;

	[Token(Token = "0x4001196")]
	[FieldOffset(Offset = "0x68")]
	private UserMethod _valueChangedEvent;

	[Token(Token = "0x170008AD")]
	public string Label
	{
		[Token(Token = "0x6002ACE")]
		[Address(RVA = "0x40E8030", Offset = "0x40E8030", VA = "0x40E8030")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002ACF")]
		[Address(RVA = "0x40E8070", Offset = "0x40E8070", VA = "0x40E8070")]
		set
		{
		}
	}

	[Token(Token = "0x170008AE")]
	public string Value
	{
		[Token(Token = "0x6002AD0")]
		[Address(RVA = "0x40E80C0", Offset = "0x40E80C0", VA = "0x40E80C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002AD1")]
		[Address(RVA = "0x40E80F0", Offset = "0x40E80F0", VA = "0x40E80F0")]
		set
		{
		}
	}

	[Token(Token = "0x170008AF")]
	public int Index
	{
		[Token(Token = "0x6002AD2")]
		[Address(RVA = "0x40E8120", Offset = "0x40E8120", VA = "0x40E8120")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002AD3")]
		[Address(RVA = "0x40E8160", Offset = "0x40E8160", VA = "0x40E8160")]
		set
		{
		}
	}

	[Token(Token = "0x170008B0")]
	public CustomLogicListBuiltin Choices
	{
		[Token(Token = "0x6002AD4")]
		[Address(RVA = "0x40E81B0", Offset = "0x40E81B0", VA = "0x40E81B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002AD5")]
		[Address(RVA = "0x40E83F0", Offset = "0x40E83F0", VA = "0x40E83F0")]
		set
		{
		}
	}

	[Token(Token = "0x170008B1")]
	public override string ClassName
	{
		[Token(Token = "0x6002ADC")]
		[Address(RVA = "0x40E8A20", Offset = "0x40E8A20", VA = "0x40E8A20", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170008B2")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002ADD")]
		[Address(RVA = "0x40E8A50", Offset = "0x40E8A50", VA = "0x40E8A50", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170008B3")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002ADE")]
		[Address(RVA = "0x40E8A60", Offset = "0x40E8A60", VA = "0x40E8A60", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170008B4")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002ADF")]
		[Address(RVA = "0x40E8A70", Offset = "0x40E8A70", VA = "0x40E8A70", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002ACC")]
	[Address(RVA = "0x40E7E80", Offset = "0x40E7E80", VA = "0x40E7E80")]
	public CustomLogicDropdownBuiltin(DropdownField dropdown)
	{
	}

	[Token(Token = "0x6002ACD")]
	[Address(RVA = "0x40E7F30", Offset = "0x40E7F30", VA = "0x40E7F30")]
	private void OnValueChanged(string value)
	{
	}

	[Token(Token = "0x6002AD6")]
	[Address(RVA = "0x40E8680", Offset = "0x40E8680", VA = "0x40E8680")]
	public CustomLogicDropdownBuiltin OnValueChanged(UserMethod valueChangedEvent)
	{
		return null;
	}

	[Token(Token = "0x6002AD7")]
	[Address(RVA = "0x40E86A0", Offset = "0x40E86A0", VA = "0x40E86A0")]
	public void SetValueWithoutNotify(string value)
	{
	}

	[Token(Token = "0x6002AD8")]
	[Address(RVA = "0x40E86D0", Offset = "0x40E86D0", VA = "0x40E86D0")]
	public void SetIndexWithoutNotify(int index)
	{
	}

	[Token(Token = "0x6002AD9")]
	[Address(RVA = "0x40E8790", Offset = "0x40E8790", VA = "0x40E8790")]
	public CustomLogicDropdownBuiltin AddChoice(string choice)
	{
		return null;
	}

	[Token(Token = "0x6002ADA")]
	[Address(RVA = "0x40E88C0", Offset = "0x40E88C0", VA = "0x40E88C0")]
	public CustomLogicDropdownBuiltin RemoveChoice(string choice)
	{
		return null;
	}

	[Token(Token = "0x6002ADB")]
	[Address(RVA = "0x40E8990", Offset = "0x40E8990", VA = "0x40E8990")]
	public CustomLogicDropdownBuiltin ClearChoices()
	{
		return null;
	}
}
