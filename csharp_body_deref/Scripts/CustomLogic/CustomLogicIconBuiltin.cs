// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicIconBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicIconBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.UIElements;

namespace CustomLogic;

[Token(Token = "0x200058B")]
[CompilerGenerated]
internal class CustomLogicIconBuiltin : CustomLogicVisualElementBuiltin
{
	[Token(Token = "0x200058C")]
	public new static class Factory
	{
		[Token(Token = "0x6003470")]
		[Address(RVA = "0x2074BB0", Offset = "0x20731B0", VA = "0x182074BB0")]
		public static CustomLogicIconBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x200058D")]
	public new static class Bindings
	{
		[Token(Token = "0x40017DE")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6003471")]
		[Address(RVA = "0x204B160", Offset = "0x2049760", VA = "0x18204B160")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6003472")]
		[Address(RVA = "0x2062320", Offset = "0x2060920", VA = "0x182062320")]
		public static CLPropertyBinding<CustomLogicIconBuiltin> __CreatePropertyBinding__IconPath()
		{
			return null;
		}

		[Token(Token = "0x6003473")]
		[Address(RVA = "0x20630E0", Offset = "0x20616E0", VA = "0x1820630E0")]
		public static CLPropertyBinding<CustomLogicIconBuiltin> __CreatePropertyBinding__ScaleMode()
		{
			return null;
		}

		[Token(Token = "0x6003474")]
		[Address(RVA = "0x205DB20", Offset = "0x205C120", VA = "0x18205DB20")]
		public static CLMethodBinding<CustomLogicIconBuiltin> __CreateMethodBinding__SetIcon()
		{
			return null;
		}

		[Token(Token = "0x6003475")]
		[Address(RVA = "0x205EEA0", Offset = "0x205D4A0", VA = "0x18205EEA0")]
		public static CLMethodBinding<CustomLogicIconBuiltin> __CreateMethodBinding__SetTintColor()
		{
			return null;
		}
	}

	[Token(Token = "0x40017DC")]
	[FieldOffset(Offset = "0x60")]
	private readonly Image _image;

	[Token(Token = "0x40017DD")]
	[FieldOffset(Offset = "0x68")]
	private string _currentIconPath;

	[Token(Token = "0x170009A9")]
	public string IconPath
	{
		[Token(Token = "0x6003467")]
		[Address(RVA = "0x58A6F0", Offset = "0x588CF0", VA = "0x18058A6F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6003468")]
		[Address(RVA = "0x2067510", Offset = "0x2065B10", VA = "0x182067510")]
		set
		{
		}
	}

	[Token(Token = "0x170009AA")]
	public int ScaleMode
	{
		[Token(Token = "0x600346A")]
		[Address(RVA = "0x20674F0", Offset = "0x2065AF0", VA = "0x1820674F0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600346B")]
		[Address(RVA = "0x2067520", Offset = "0x2065B20", VA = "0x182067520")]
		set
		{
		}
	}

	[Token(Token = "0x170009AB")]
	public override string ClassName
	{
		[Token(Token = "0x600346C")]
		[Address(RVA = "0x20674C0", Offset = "0x2065AC0", VA = "0x1820674C0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009AC")]
	public override bool IsAbstract
	{
		[Token(Token = "0x600346D")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009AD")]
	public override bool IsStatic
	{
		[Token(Token = "0x600346E")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009AE")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x600346F")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003465")]
	[Address(RVA = "0x2067470", Offset = "0x2065A70", VA = "0x182067470")]
	public CustomLogicIconBuiltin(Image image)
	{
	}

	[Token(Token = "0x6003466")]
	[Address(RVA = "0x20671F0", Offset = "0x20657F0", VA = "0x1820671F0")]
	public CustomLogicIconBuiltin SetIcon(string iconPath)
	{
		return null;
	}

	[Token(Token = "0x6003469")]
	[Address(RVA = "0x2067410", Offset = "0x2065A10", VA = "0x182067410")]
	public CustomLogicIconBuiltin SetTintColor(CustomLogicColorBuiltin color)
	{
		return null;
	}
}
