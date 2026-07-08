using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.UIElements;

namespace CustomLogic;

[Token(Token = "0x20003EC")]
[CompilerGenerated]
internal class CustomLogicDropdownBuiltin : CustomLogicVisualElementBuiltin
{
	[Token(Token = "0x20003ED")]
	public new static class Factory
	{
		[Token(Token = "0x60028D9")]
		[Address(RVA = "0x3DDDF60", Offset = "0x3DDDF60", VA = "0x3DDDF60")]
		public static CustomLogicDropdownBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20003EE")]
	public new static class Bindings
	{
		[Token(Token = "0x400108D")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x60028DA")]
		[Address(RVA = "0x3DDDFF0", Offset = "0x3DDDFF0", VA = "0x3DDDFF0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x60028DB")]
		[Address(RVA = "0x3DDE4B0", Offset = "0x3DDE4B0", VA = "0x3DDE4B0")]
		public static CLPropertyBinding<CustomLogicDropdownBuiltin> __CreatePropertyBinding__Label()
		{
			return null;
		}

		[Token(Token = "0x60028DC")]
		[Address(RVA = "0x3DDE590", Offset = "0x3DDE590", VA = "0x3DDE590")]
		public static CLPropertyBinding<CustomLogicDropdownBuiltin> __CreatePropertyBinding__Value()
		{
			return null;
		}

		[Token(Token = "0x60028DD")]
		[Address(RVA = "0x3DDE670", Offset = "0x3DDE670", VA = "0x3DDE670")]
		public static CLPropertyBinding<CustomLogicDropdownBuiltin> __CreatePropertyBinding__Index()
		{
			return null;
		}

		[Token(Token = "0x60028DE")]
		[Address(RVA = "0x3DDE750", Offset = "0x3DDE750", VA = "0x3DDE750")]
		public static CLPropertyBinding<CustomLogicDropdownBuiltin> __CreatePropertyBinding__Choices()
		{
			return null;
		}

		[Token(Token = "0x60028DF")]
		[Address(RVA = "0x3DDE830", Offset = "0x3DDE830", VA = "0x3DDE830")]
		public static CLMethodBinding<CustomLogicDropdownBuiltin> __CreateMethodBinding__OnValueChanged()
		{
			return null;
		}

		[Token(Token = "0x60028E0")]
		[Address(RVA = "0x3DDE980", Offset = "0x3DDE980", VA = "0x3DDE980")]
		public static CLMethodBinding<CustomLogicDropdownBuiltin> __CreateMethodBinding__SetValueWithoutNotify()
		{
			return null;
		}

		[Token(Token = "0x60028E1")]
		[Address(RVA = "0x3DDEAD0", Offset = "0x3DDEAD0", VA = "0x3DDEAD0")]
		public static CLMethodBinding<CustomLogicDropdownBuiltin> __CreateMethodBinding__SetIndexWithoutNotify()
		{
			return null;
		}

		[Token(Token = "0x60028E2")]
		[Address(RVA = "0x3DDEC20", Offset = "0x3DDEC20", VA = "0x3DDEC20")]
		public static CLMethodBinding<CustomLogicDropdownBuiltin> __CreateMethodBinding__AddChoice()
		{
			return null;
		}

		[Token(Token = "0x60028E3")]
		[Address(RVA = "0x3DDED70", Offset = "0x3DDED70", VA = "0x3DDED70")]
		public static CLMethodBinding<CustomLogicDropdownBuiltin> __CreateMethodBinding__RemoveChoice()
		{
			return null;
		}

		[Token(Token = "0x60028E4")]
		[Address(RVA = "0x3DDEEC0", Offset = "0x3DDEEC0", VA = "0x3DDEEC0")]
		public static CLMethodBinding<CustomLogicDropdownBuiltin> __CreateMethodBinding__ClearChoices()
		{
			return null;
		}
	}

	[Token(Token = "0x400108B")]
	[FieldOffset(Offset = "0x60")]
	private readonly DropdownField _dropdown;

	[Token(Token = "0x400108C")]
	[FieldOffset(Offset = "0x68")]
	private UserMethod _valueChangedEvent;

	[Token(Token = "0x17000843")]
	public string Label
	{
		[Token(Token = "0x60028C6")]
		[Address(RVA = "0x3DDD4C0", Offset = "0x3DDD4C0", VA = "0x3DDD4C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60028C7")]
		[Address(RVA = "0x3DDD500", Offset = "0x3DDD500", VA = "0x3DDD500")]
		set
		{
		}
	}

	[Token(Token = "0x17000844")]
	public string Value
	{
		[Token(Token = "0x60028C8")]
		[Address(RVA = "0x3DDD550", Offset = "0x3DDD550", VA = "0x3DDD550")]
		get
		{
			return null;
		}
		[Token(Token = "0x60028C9")]
		[Address(RVA = "0x3DDD580", Offset = "0x3DDD580", VA = "0x3DDD580")]
		set
		{
		}
	}

	[Token(Token = "0x17000845")]
	public int Index
	{
		[Token(Token = "0x60028CA")]
		[Address(RVA = "0x3DDD5B0", Offset = "0x3DDD5B0", VA = "0x3DDD5B0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60028CB")]
		[Address(RVA = "0x3DDD5F0", Offset = "0x3DDD5F0", VA = "0x3DDD5F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000846")]
	public CustomLogicListBuiltin Choices
	{
		[Token(Token = "0x60028CC")]
		[Address(RVA = "0x3DDD640", Offset = "0x3DDD640", VA = "0x3DDD640")]
		get
		{
			return null;
		}
		[Token(Token = "0x60028CD")]
		[Address(RVA = "0x3DDD880", Offset = "0x3DDD880", VA = "0x3DDD880")]
		set
		{
		}
	}

	[Token(Token = "0x17000847")]
	public override string ClassName
	{
		[Token(Token = "0x60028D4")]
		[Address(RVA = "0x3DDDEB0", Offset = "0x3DDDEB0", VA = "0x3DDDEB0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000848")]
	public override bool IsAbstract
	{
		[Token(Token = "0x60028D5")]
		[Address(RVA = "0x3DDDEE0", Offset = "0x3DDDEE0", VA = "0x3DDDEE0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000849")]
	public override bool IsStatic
	{
		[Token(Token = "0x60028D6")]
		[Address(RVA = "0x3DDDEF0", Offset = "0x3DDDEF0", VA = "0x3DDDEF0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700084A")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x60028D7")]
		[Address(RVA = "0x3DDDF00", Offset = "0x3DDDF00", VA = "0x3DDDF00", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60028C4")]
	[Address(RVA = "0x3DDD310", Offset = "0x3DDD310", VA = "0x3DDD310")]
	public CustomLogicDropdownBuiltin(DropdownField dropdown)
	{
	}

	[Token(Token = "0x60028C5")]
	[Address(RVA = "0x3DDD3C0", Offset = "0x3DDD3C0", VA = "0x3DDD3C0")]
	private void OnValueChanged(string value)
	{
	}

	[Token(Token = "0x60028CE")]
	[Address(RVA = "0x3DDDB10", Offset = "0x3DDDB10", VA = "0x3DDDB10")]
	public CustomLogicDropdownBuiltin OnValueChanged(UserMethod valueChangedEvent)
	{
		return null;
	}

	[Token(Token = "0x60028CF")]
	[Address(RVA = "0x3DDDB30", Offset = "0x3DDDB30", VA = "0x3DDDB30")]
	public void SetValueWithoutNotify(string value)
	{
	}

	[Token(Token = "0x60028D0")]
	[Address(RVA = "0x3DDDB60", Offset = "0x3DDDB60", VA = "0x3DDDB60")]
	public void SetIndexWithoutNotify(int index)
	{
	}

	[Token(Token = "0x60028D1")]
	[Address(RVA = "0x3DDDC20", Offset = "0x3DDDC20", VA = "0x3DDDC20")]
	public CustomLogicDropdownBuiltin AddChoice(string choice)
	{
		return null;
	}

	[Token(Token = "0x60028D2")]
	[Address(RVA = "0x3DDDD50", Offset = "0x3DDDD50", VA = "0x3DDDD50")]
	public CustomLogicDropdownBuiltin RemoveChoice(string choice)
	{
		return null;
	}

	[Token(Token = "0x60028D3")]
	[Address(RVA = "0x3DDDE20", Offset = "0x3DDDE20", VA = "0x3DDDE20")]
	public CustomLogicDropdownBuiltin ClearChoices()
	{
		return null;
	}
}
