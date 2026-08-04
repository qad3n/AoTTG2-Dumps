// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicTextFieldBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicTextFieldBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.UIElements;

namespace CustomLogic;

[Token(Token = "0x200044C")]
[CompilerGenerated]
internal class CustomLogicTextFieldBuiltin : CustomLogicVisualElementBuiltin
{
	[Token(Token = "0x200044D")]
	public new static class Factory
	{
		[Token(Token = "0x6002BE9")]
		[Address(RVA = "0x4110CA0", Offset = "0x4110CA0", VA = "0x4110CA0")]
		public static CustomLogicTextFieldBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x200044E")]
	public new static class Bindings
	{
		[Token(Token = "0x40011C5")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002BEA")]
		[Address(RVA = "0x4110D30", Offset = "0x4110D30", VA = "0x4110D30")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6002BEB")]
		[Address(RVA = "0x4111120", Offset = "0x4111120", VA = "0x4111120")]
		public static CLPropertyBinding<CustomLogicTextFieldBuiltin> __CreatePropertyBinding__IsDelayed()
		{
			return null;
		}

		[Token(Token = "0x6002BEC")]
		[Address(RVA = "0x4111200", Offset = "0x4111200", VA = "0x4111200")]
		public static CLPropertyBinding<CustomLogicTextFieldBuiltin> __CreatePropertyBinding__Multiline()
		{
			return null;
		}

		[Token(Token = "0x6002BED")]
		[Address(RVA = "0x41112E0", Offset = "0x41112E0", VA = "0x41112E0")]
		public static CLPropertyBinding<CustomLogicTextFieldBuiltin> __CreatePropertyBinding__Label()
		{
			return null;
		}

		[Token(Token = "0x6002BEE")]
		[Address(RVA = "0x41113C0", Offset = "0x41113C0", VA = "0x41113C0")]
		public static CLPropertyBinding<CustomLogicTextFieldBuiltin> __CreatePropertyBinding__Value()
		{
			return null;
		}

		[Token(Token = "0x6002BEF")]
		[Address(RVA = "0x41114A0", Offset = "0x41114A0", VA = "0x41114A0")]
		public static CLPropertyBinding<CustomLogicTextFieldBuiltin> __CreatePropertyBinding__SelectionColor()
		{
			return null;
		}

		[Token(Token = "0x6002BF0")]
		[Address(RVA = "0x4111580", Offset = "0x4111580", VA = "0x4111580")]
		public static CLPropertyBinding<CustomLogicTextFieldBuiltin> __CreatePropertyBinding__CursorColor()
		{
			return null;
		}

		[Token(Token = "0x6002BF1")]
		[Address(RVA = "0x4111660", Offset = "0x4111660", VA = "0x4111660")]
		public static CLMethodBinding<CustomLogicTextFieldBuiltin> __CreateMethodBinding__RegisterValueChangedEventCallback()
		{
			return null;
		}

		[Token(Token = "0x6002BF2")]
		[Address(RVA = "0x41117B0", Offset = "0x41117B0", VA = "0x41117B0")]
		public static CLMethodBinding<CustomLogicTextFieldBuiltin> __CreateMethodBinding__SetValueWithoutNotify()
		{
			return null;
		}
	}

	[Token(Token = "0x40011C4")]
	[FieldOffset(Offset = "0x60")]
	private readonly TextField _textField;

	[Token(Token = "0x170008E3")]
	public bool IsDelayed
	{
		[Token(Token = "0x6002BD7")]
		[Address(RVA = "0x40F2600", Offset = "0x40F2600", VA = "0x40F2600")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002BD8")]
		[Address(RVA = "0x40F2640", Offset = "0x40F2640", VA = "0x40F2640")]
		set
		{
		}
	}

	[Token(Token = "0x170008E4")]
	public bool Multiline
	{
		[Token(Token = "0x6002BD9")]
		[Address(RVA = "0x40F2690", Offset = "0x40F2690", VA = "0x40F2690")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6002BDA")]
		[Address(RVA = "0x40F26B0", Offset = "0x40F26B0", VA = "0x40F26B0")]
		set
		{
		}
	}

	[Token(Token = "0x170008E5")]
	public string Label
	{
		[Token(Token = "0x6002BDB")]
		[Address(RVA = "0x40F26D0", Offset = "0x40F26D0", VA = "0x40F26D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002BDC")]
		[Address(RVA = "0x40F2710", Offset = "0x40F2710", VA = "0x40F2710")]
		set
		{
		}
	}

	[Token(Token = "0x170008E6")]
	public string Value
	{
		[Token(Token = "0x6002BDD")]
		[Address(RVA = "0x40F2760", Offset = "0x40F2760", VA = "0x40F2760")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002BDE")]
		[Address(RVA = "0x40F2790", Offset = "0x40F2790", VA = "0x40F2790")]
		set
		{
		}
	}

	[Token(Token = "0x170008E7")]
	public CustomLogicColorBuiltin SelectionColor
	{
		[Token(Token = "0x6002BDF")]
		[Address(RVA = "0x40F27C0", Offset = "0x40F27C0", VA = "0x40F27C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002BE0")]
		[Address(RVA = "0x40F2850", Offset = "0x40F2850", VA = "0x40F2850")]
		set
		{
		}
	}

	[Token(Token = "0x170008E8")]
	public CustomLogicColorBuiltin CursorColor
	{
		[Token(Token = "0x6002BE1")]
		[Address(RVA = "0x40F2950", Offset = "0x40F2950", VA = "0x40F2950")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002BE2")]
		[Address(RVA = "0x40F29E0", Offset = "0x40F29E0", VA = "0x40F29E0")]
		set
		{
		}
	}

	[Token(Token = "0x170008E9")]
	public override string ClassName
	{
		[Token(Token = "0x6002BE5")]
		[Address(RVA = "0x40F2BF0", Offset = "0x40F2BF0", VA = "0x40F2BF0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170008EA")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002BE6")]
		[Address(RVA = "0x40F2C20", Offset = "0x40F2C20", VA = "0x40F2C20", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170008EB")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002BE7")]
		[Address(RVA = "0x40F2C30", Offset = "0x40F2C30", VA = "0x40F2C30", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170008EC")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002BE8")]
		[Address(RVA = "0x40F2C40", Offset = "0x40F2C40", VA = "0x40F2C40", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002BD6")]
	[Address(RVA = "0x40F25D0", Offset = "0x40F25D0", VA = "0x40F25D0")]
	public CustomLogicTextFieldBuiltin(TextField textField)
	{
	}

	[Token(Token = "0x6002BE3")]
	[Address(RVA = "0x40F2AE0", Offset = "0x40F2AE0", VA = "0x40F2AE0")]
	public CustomLogicTextFieldBuiltin RegisterValueChangedEventCallback(UserMethod changeEvent)
	{
		return null;
	}

	[Token(Token = "0x6002BE4")]
	[Address(RVA = "0x40F2BC0", Offset = "0x40F2BC0", VA = "0x40F2BC0")]
	public void SetValueWithoutNotify(string value)
	{
	}
}
