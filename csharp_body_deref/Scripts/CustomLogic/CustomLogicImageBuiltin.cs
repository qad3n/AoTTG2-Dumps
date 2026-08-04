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

[Token(Token = "0x2000439")]
[CompilerGenerated]
internal class CustomLogicImageBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x200043A")]
	public static class Factory
	{
		[Token(Token = "0x6002B21")]
		[Address(RVA = "0x40EB7B0", Offset = "0x40EB7B0", VA = "0x40EB7B0")]
		public static CustomLogicImageBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x200043B")]
	public static class Bindings
	{
		[Token(Token = "0x40011A7")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002B22")]
		[Address(RVA = "0x40EB920", Offset = "0x40EB920", VA = "0x40EB920")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6002B23")]
		[Address(RVA = "0x40EBA60", Offset = "0x40EBA60", VA = "0x40EBA60")]
		public static CLPropertyBinding<CustomLogicImageBuiltin> __CreatePropertyBinding__ImagePath()
		{
			return null;
		}

		[Token(Token = "0x6002B24")]
		[Address(RVA = "0x40EBB40", Offset = "0x40EBB40", VA = "0x40EBB40")]
		public static CLMethodBinding<CustomLogicImageBuiltin> __CreateMethodBinding__SetImage()
		{
			return null;
		}
	}

	[Token(Token = "0x40011A5")]
	[FieldOffset(Offset = "0x30")]
	private string _currentImagePath;

	[Token(Token = "0x40011A6")]
	[FieldOffset(Offset = "0x38")]
	private Texture2D _currentTexture;

	[Token(Token = "0x170008BB")]
	public string ImagePath
	{
		[Token(Token = "0x6002B1A")]
		[Address(RVA = "0x40EB720", Offset = "0x40EB720", VA = "0x40EB720")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002B1B")]
		[Address(RVA = "0x40EB730", Offset = "0x40EB730", VA = "0x40EB730")]
		set
		{
		}
	}

	[Token(Token = "0x170008BC")]
	public override string ClassName
	{
		[Token(Token = "0x6002B1D")]
		[Address(RVA = "0x40EB750", Offset = "0x40EB750", VA = "0x40EB750", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170008BD")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002B1E")]
		[Address(RVA = "0x40EB780", Offset = "0x40EB780", VA = "0x40EB780", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170008BE")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002B1F")]
		[Address(RVA = "0x40EB790", Offset = "0x40EB790", VA = "0x40EB790", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170008BF")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002B20")]
		[Address(RVA = "0x40EB7A0", Offset = "0x40EB7A0", VA = "0x40EB7A0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002B18")]
	[Address(RVA = "0x40EB4A0", Offset = "0x40EB4A0", VA = "0x40EB4A0")]
	public CustomLogicImageBuiltin()
	{
	}

	[Token(Token = "0x6002B19")]
	[Address(RVA = "0x40EB520", Offset = "0x40EB520", VA = "0x40EB520")]
	public CustomLogicImageBuiltin SetImage(string imagePath)
	{
		return null;
	}

	[Token(Token = "0x6002B1C")]
	[Address(RVA = "0x40EB740", Offset = "0x40EB740", VA = "0x40EB740")]
	internal Texture2D GetTexture()
	{
		return null;
	}
}
