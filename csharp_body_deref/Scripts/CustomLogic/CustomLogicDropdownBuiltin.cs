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

[Token(Token = "0x20005E6")]
[CompilerGenerated]
internal class CustomLogicDropdownBuiltin : CustomLogicVisualElementBuiltin
{
	[Token(Token = "0x20005E7")]
	public new static class Factory
	{
		[Token(Token = "0x60036D4")]
		[Address(RVA = "0x59FD260", Offset = "0x59FC260", VA = "0x59FD260")]
		public static CustomLogicDropdownBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20005E8")]
	public new static class Bindings
	{
		[Token(Token = "0x4001974")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60036D5")]
		[Address(RVA = "0x59FD2F0", Offset = "0x59FC2F0", VA = "0x59FD2F0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x60036D6")]
		[Address(RVA = "0x59FD7B0", Offset = "0x59FC7B0", VA = "0x59FD7B0")]
		public static CLPropertyBinding<CustomLogicDropdownBuiltin> __CreatePropertyBinding__Label()
		{
			return null;
		}

		[Token(Token = "0x60036D7")]
		[Address(RVA = "0x59FD890", Offset = "0x59FC890", VA = "0x59FD890")]
		public static CLPropertyBinding<CustomLogicDropdownBuiltin> __CreatePropertyBinding__Value()
		{
			return null;
		}

		[Token(Token = "0x60036D8")]
		[Address(RVA = "0x59FD970", Offset = "0x59FC970", VA = "0x59FD970")]
		public static CLPropertyBinding<CustomLogicDropdownBuiltin> __CreatePropertyBinding__Index()
		{
			return null;
		}

		[Token(Token = "0x60036D9")]
		[Address(RVA = "0x59FDA50", Offset = "0x59FCA50", VA = "0x59FDA50")]
		public static CLPropertyBinding<CustomLogicDropdownBuiltin> __CreatePropertyBinding__Choices()
		{
			return null;
		}

		[Token(Token = "0x60036DA")]
		[Address(RVA = "0x59FDB30", Offset = "0x59FCB30", VA = "0x59FDB30")]
		public static CLMethodBinding<CustomLogicDropdownBuiltin> __CreateMethodBinding__OnValueChanged()
		{
			return null;
		}

		[Token(Token = "0x60036DB")]
		[Address(RVA = "0x59FDC70", Offset = "0x59FCC70", VA = "0x59FDC70")]
		public static CLMethodBinding<CustomLogicDropdownBuiltin> __CreateMethodBinding__SetValueWithoutNotify()
		{
			return null;
		}

		[Token(Token = "0x60036DC")]
		[Address(RVA = "0x59FDDB0", Offset = "0x59FCDB0", VA = "0x59FDDB0")]
		public static CLMethodBinding<CustomLogicDropdownBuiltin> __CreateMethodBinding__SetIndexWithoutNotify()
		{
			return null;
		}

		[Token(Token = "0x60036DD")]
		[Address(RVA = "0x59FDEF0", Offset = "0x59FCEF0", VA = "0x59FDEF0")]
		public static CLMethodBinding<CustomLogicDropdownBuiltin> __CreateMethodBinding__AddChoice()
		{
			return null;
		}

		[Token(Token = "0x60036DE")]
		[Address(RVA = "0x59FE030", Offset = "0x59FD030", VA = "0x59FE030")]
		public static CLMethodBinding<CustomLogicDropdownBuiltin> __CreateMethodBinding__RemoveChoice()
		{
			return null;
		}

		[Token(Token = "0x60036DF")]
		[Address(RVA = "0x59FE170", Offset = "0x59FD170", VA = "0x59FE170")]
		public static CLMethodBinding<CustomLogicDropdownBuiltin> __CreateMethodBinding__ClearChoices()
		{
			return null;
		}
	}

	[Token(Token = "0x4001972")]
	[FieldOffset(Offset = "0x60")]
	private readonly DropdownField _dropdown;

	[Token(Token = "0x4001973")]
	[FieldOffset(Offset = "0x68")]
	private UserMethod _valueChangedEvent;

	[Token(Token = "0x170009E9")]
	public string Label
	{
		[Token(Token = "0x60036C1")]
		[Address(RVA = "0x59FC820", Offset = "0x59FB820", VA = "0x59FC820")]
		get
		{
			return null;
		}
		[Token(Token = "0x60036C2")]
		[Address(RVA = "0x59FC860", Offset = "0x59FB860", VA = "0x59FC860")]
		set
		{
		}
	}

	[Token(Token = "0x170009EA")]
	public string Value
	{
		[Token(Token = "0x60036C3")]
		[Address(RVA = "0x59FC8B0", Offset = "0x59FB8B0", VA = "0x59FC8B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60036C4")]
		[Address(RVA = "0x59FC8E0", Offset = "0x59FB8E0", VA = "0x59FC8E0")]
		set
		{
		}
	}

	[Token(Token = "0x170009EB")]
	public int Index
	{
		[Token(Token = "0x60036C5")]
		[Address(RVA = "0x59FC910", Offset = "0x59FB910", VA = "0x59FC910")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60036C6")]
		[Address(RVA = "0x59FC950", Offset = "0x59FB950", VA = "0x59FC950")]
		set
		{
		}
	}

	[Token(Token = "0x170009EC")]
	public CustomLogicListBuiltin Choices
	{
		[Token(Token = "0x60036C7")]
		[Address(RVA = "0x59FC9A0", Offset = "0x59FB9A0", VA = "0x59FC9A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60036C8")]
		[Address(RVA = "0x59FCBB0", Offset = "0x59FBBB0", VA = "0x59FCBB0")]
		set
		{
		}
	}

	[Token(Token = "0x170009ED")]
	public override string ClassName
	{
		[Token(Token = "0x60036CF")]
		[Address(RVA = "0x59FD1B0", Offset = "0x59FC1B0", VA = "0x59FD1B0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009EE")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60036D0")]
		[Address(RVA = "0x59FD1E0", Offset = "0x59FC1E0", VA = "0x59FD1E0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009EF")]
	public override bool IsStatic
	{
		[Token(Token = "0x60036D1")]
		[Address(RVA = "0x59FD1F0", Offset = "0x59FC1F0", VA = "0x59FD1F0", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009F0")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60036D2")]
		[Address(RVA = "0x59FD200", Offset = "0x59FC200", VA = "0x59FD200", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60036BF")]
	[Address(RVA = "0x59FC670", Offset = "0x59FB670", VA = "0x59FC670")]
	public CustomLogicDropdownBuiltin(DropdownField dropdown)
	{
	}

	[Token(Token = "0x60036C0")]
	[Address(RVA = "0x59FC720", Offset = "0x59FB720", VA = "0x59FC720")]
	private void OnValueChanged(string value)
	{
	}

	[Token(Token = "0x60036C9")]
	[Address(RVA = "0x59FCE20", Offset = "0x59FBE20", VA = "0x59FCE20")]
	public CustomLogicDropdownBuiltin OnValueChanged(UserMethod valueChangedEvent)
	{
		return null;
	}

	[Token(Token = "0x60036CA")]
	[Address(RVA = "0x59FCE40", Offset = "0x59FBE40", VA = "0x59FCE40")]
	public void SetValueWithoutNotify(string value)
	{
	}

	[Token(Token = "0x60036CB")]
	[Address(RVA = "0x59FCE70", Offset = "0x59FBE70", VA = "0x59FCE70")]
	public void SetIndexWithoutNotify(int index)
	{
	}

	[Token(Token = "0x60036CC")]
	[Address(RVA = "0x59FCF30", Offset = "0x59FBF30", VA = "0x59FCF30")]
	public CustomLogicDropdownBuiltin AddChoice(string choice)
	{
		return null;
	}

	[Token(Token = "0x60036CD")]
	[Address(RVA = "0x59FD050", Offset = "0x59FC050", VA = "0x59FD050")]
	public CustomLogicDropdownBuiltin RemoveChoice(string choice)
	{
		return null;
	}

	[Token(Token = "0x60036CE")]
	[Address(RVA = "0x59FD120", Offset = "0x59FC120", VA = "0x59FD120")]
	public CustomLogicDropdownBuiltin ClearChoices()
	{
		return null;
	}
}
