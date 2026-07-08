using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x20003F4")]
[CompilerGenerated]
internal class CustomLogicImageBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x20003F5")]
	public static class Factory
	{
		[Token(Token = "0x6002919")]
		[Address(RVA = "0x3DE0C40", Offset = "0x3DE0C40", VA = "0x3DE0C40")]
		public static CustomLogicImageBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20003F6")]
	public static class Bindings
	{
		[Token(Token = "0x400109D")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x600291A")]
		[Address(RVA = "0x3DE0DB0", Offset = "0x3DE0DB0", VA = "0x3DE0DB0")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x600291B")]
		[Address(RVA = "0x3DE0EF0", Offset = "0x3DE0EF0", VA = "0x3DE0EF0")]
		public static CLPropertyBinding<CustomLogicImageBuiltin> __CreatePropertyBinding__ImagePath()
		{
			return null;
		}

		[Token(Token = "0x600291C")]
		[Address(RVA = "0x3DE0FD0", Offset = "0x3DE0FD0", VA = "0x3DE0FD0")]
		public static CLMethodBinding<CustomLogicImageBuiltin> __CreateMethodBinding__SetImage()
		{
			return null;
		}
	}

	[Token(Token = "0x400109B")]
	[FieldOffset(Offset = "0x30")]
	private string _currentImagePath;

	[Token(Token = "0x400109C")]
	[FieldOffset(Offset = "0x38")]
	private Texture2D _currentTexture;

	[Token(Token = "0x17000851")]
	public string ImagePath
	{
		[Token(Token = "0x6002912")]
		[Address(RVA = "0x3DE0BB0", Offset = "0x3DE0BB0", VA = "0x3DE0BB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6002913")]
		[Address(RVA = "0x3DE0BC0", Offset = "0x3DE0BC0", VA = "0x3DE0BC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000852")]
	public override string ClassName
	{
		[Token(Token = "0x6002915")]
		[Address(RVA = "0x3DE0BE0", Offset = "0x3DE0BE0", VA = "0x3DE0BE0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000853")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002916")]
		[Address(RVA = "0x3DE0C10", Offset = "0x3DE0C10", VA = "0x3DE0C10", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000854")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002917")]
		[Address(RVA = "0x3DE0C20", Offset = "0x3DE0C20", VA = "0x3DE0C20", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000855")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002918")]
		[Address(RVA = "0x3DE0C30", Offset = "0x3DE0C30", VA = "0x3DE0C30", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002910")]
	[Address(RVA = "0x3DE0930", Offset = "0x3DE0930", VA = "0x3DE0930")]
	public CustomLogicImageBuiltin()
	{
	}

	[Token(Token = "0x6002911")]
	[Address(RVA = "0x3DE09B0", Offset = "0x3DE09B0", VA = "0x3DE09B0")]
	public CustomLogicImageBuiltin SetImage(string imagePath)
	{
		return null;
	}

	[Token(Token = "0x6002914")]
	[Address(RVA = "0x3DE0BD0", Offset = "0x3DE0BD0", VA = "0x3DE0BD0")]
	internal Texture2D GetTexture()
	{
		return null;
	}
}
