// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicImageBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicImageBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x200058F")]
[CompilerGenerated]
internal class CustomLogicImageBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x2000590")]
	public static class Factory
	{
		[Token(Token = "0x6003488")]
		[Address(RVA = "0x2074480", Offset = "0x2072A80", VA = "0x182074480")]
		public static CustomLogicImageBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000591")]
	public static class Bindings
	{
		[Token(Token = "0x40017E4")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6003489")]
		[Address(RVA = "0x204B650", Offset = "0x2049C50", VA = "0x18204B650")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x600348A")]
		[Address(RVA = "0x2062410", Offset = "0x2060A10", VA = "0x182062410")]
		public static CLPropertyBinding<CustomLogicImageBuiltin> __CreatePropertyBinding__ImagePath()
		{
			return null;
		}

		[Token(Token = "0x600348B")]
		[Address(RVA = "0x205DC40", Offset = "0x205C240", VA = "0x18205DC40")]
		public static CLMethodBinding<CustomLogicImageBuiltin> __CreateMethodBinding__SetImage()
		{
			return null;
		}
	}

	[Token(Token = "0x40017E2")]
	[FieldOffset(Offset = "0x30")]
	private string _currentImagePath;

	[Token(Token = "0x40017E3")]
	[FieldOffset(Offset = "0x38")]
	private Texture2D _currentTexture;

	[Token(Token = "0x170009AF")]
	public string ImagePath
	{
		[Token(Token = "0x6003481")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6003482")]
		[Address(RVA = "0x2067960", Offset = "0x2065F60", VA = "0x182067960")]
		set
		{
		}
	}

	[Token(Token = "0x170009B0")]
	public override string ClassName
	{
		[Token(Token = "0x6003484")]
		[Address(RVA = "0x2067930", Offset = "0x2065F30", VA = "0x182067930", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009B1")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6003485")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009B2")]
	public override bool IsStatic
	{
		[Token(Token = "0x6003486")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009B3")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6003487")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600347F")]
	[Address(RVA = "0x20678B0", Offset = "0x2065EB0", VA = "0x1820678B0")]
	public CustomLogicImageBuiltin()
	{
	}

	[Token(Token = "0x6003480")]
	[Address(RVA = "0x2067650", Offset = "0x2065C50", VA = "0x182067650")]
	public CustomLogicImageBuiltin SetImage(string imagePath)
	{
		return null;
	}

	[Token(Token = "0x6003483")]
	[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
	internal Texture2D GetTexture()
	{
		return null;
	}
}
