using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.UIElements;

namespace CustomLogic;

[Token(Token = "0x200040C")]
[CompilerGenerated]
internal class CustomLogicToggleBuiltin : CustomLogicVisualElementBuiltin
{
	[Token(Token = "0x200040D")]
	public new static class Factory
	{
		[Token(Token = "0x6002A0D")]
		[Address(RVA = "0x3DE9BD0", Offset = "0x3DE9BD0", VA = "0x3DE9BD0")]
		public static CustomLogicToggleBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x200040E")]
	public new static class Bindings
	{
		[Token(Token = "0x40010C2")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002A0E")]
		[Address(RVA = "0x3DE9C60", Offset = "0x3DE9C60", VA = "0x3DE9C60")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6002A0F")]
		[Address(RVA = "0x3DE9E90", Offset = "0x3DE9E90", VA = "0x3DE9E90")]
		public static CLPropertyBinding<CustomLogicToggleBuiltin> __CreatePropertyBinding__Label()
		{
			return null;
		}

		[Token(Token = "0x6002A10")]
		[Address(RVA = "0x3DE9F70", Offset = "0x3DE9F70", VA = "0x3DE9F70")]
		public static CLPropertyBinding<CustomLogicToggleBuiltin> __CreatePropertyBinding__Text()
		{
			return null;
		}

		[Token(Token = "0x6002A11")]
		[Address(RVA = "0x3DEA050", Offset = "0x3DEA050", VA = "0x3DEA050")]
		public static CLPropertyBinding<CustomLogicToggleBuiltin> __CreatePropertyBinding__Value()
		{
			return null;
		}

		[Token(Token = "0x6002A12")]
		[Address(RVA = "0x3DEA130", Offset = "0x3DEA130", VA = "0x3DEA130")]
		public static CLMethodBinding<CustomLogicToggleBuiltin> __CreateMethodBinding__OnValueChanged()
		{
			return null;
		}

		[Token(Token = "0x6002A13")]
		[Address(RVA = "0x3DEA280", Offset = "0x3DEA280", VA = "0x3DEA280")]
		public static CLMethodBinding<CustomLogicToggleBuiltin> __CreateMethodBinding__SetValueWithoutNotify()
		{
			return null;
		}
	}

	[Token(Token = "0x40010C0")]
	[FieldOffset(Offset = "0x60")]
	private readonly Toggle _toggle;

	[Token(Token = "0x40010C1")]
	[FieldOffset(Offset = "0x68")]
	private UserMethod _valueChangedEvent;

	[Token(Token = "0x17000883")]
	public string Label
	{
		[Token(Token = "0x6002A00")]
		[Address(RVA = "0x3DE99A0", Offset = "0x3DE99A0", VA = "0x3DE99A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002A01")]
		[Address(RVA = "0x3DE99E0", Offset = "0x3DE99E0", VA = "0x3DE99E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000884")]
	public string Text
	{
		[Token(Token = "0x6002A02")]
		[Address(RVA = "0x3DE9A30", Offset = "0x3DE9A30", VA = "0x3DE9A30")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002A03")]
		[Address(RVA = "0x3DE9A50", Offset = "0x3DE9A50", VA = "0x3DE9A50")]
		set
		{
		}
	}

	[Token(Token = "0x17000885")]
	public bool Value
	{
		[Token(Token = "0x6002A04")]
		[Address(RVA = "0x3DE9A70", Offset = "0x3DE9A70", VA = "0x3DE9A70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002A05")]
		[Address(RVA = "0x3DE9AA0", Offset = "0x3DE9AA0", VA = "0x3DE9AA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000886")]
	public override string ClassName
	{
		[Token(Token = "0x6002A08")]
		[Address(RVA = "0x3DE9B20", Offset = "0x3DE9B20", VA = "0x3DE9B20", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000887")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002A09")]
		[Address(RVA = "0x3DE9B50", Offset = "0x3DE9B50", VA = "0x3DE9B50", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000888")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002A0A")]
		[Address(RVA = "0x3DE9B60", Offset = "0x3DE9B60", VA = "0x3DE9B60", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000889")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002A0B")]
		[Address(RVA = "0x3DE9B70", Offset = "0x3DE9B70", VA = "0x3DE9B70", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60029FE")]
	[Address(RVA = "0x3DE97D0", Offset = "0x3DE97D0", VA = "0x3DE97D0")]
	public CustomLogicToggleBuiltin(Toggle toggle)
	{
	}

	[Token(Token = "0x60029FF")]
	[Address(RVA = "0x3DE9880", Offset = "0x3DE9880", VA = "0x3DE9880")]
	private void OnValueChanged(bool value)
	{
	}

	[Token(Token = "0x6002A06")]
	[Address(RVA = "0x3DE9AD0", Offset = "0x3DE9AD0", VA = "0x3DE9AD0")]
	public CustomLogicToggleBuiltin OnValueChanged(UserMethod valueChangedEvent)
	{
		return null;
	}

	[Token(Token = "0x6002A07")]
	[Address(RVA = "0x3DE9AF0", Offset = "0x3DE9AF0", VA = "0x3DE9AF0")]
	public void SetValueWithoutNotify(bool value)
	{
	}
}
