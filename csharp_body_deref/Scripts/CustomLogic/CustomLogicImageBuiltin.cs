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

[Token(Token = "0x20005EE")]
[CompilerGenerated]
internal class CustomLogicImageBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x20005EF")]
	public static class Factory
	{
		[Token(Token = "0x6003714")]
		[Address(RVA = "0x59FFF30", Offset = "0x59FEF30", VA = "0x59FFF30")]
		public static CustomLogicImageBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x20005F0")]
	public static class Bindings
	{
		[Token(Token = "0x4001984")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6003715")]
		[Address(RVA = "0x5A00090", Offset = "0x59FF090", VA = "0x5A00090")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6003716")]
		[Address(RVA = "0x5A001D0", Offset = "0x59FF1D0", VA = "0x5A001D0")]
		public static CLPropertyBinding<CustomLogicImageBuiltin> __CreatePropertyBinding__ImagePath()
		{
			return null;
		}

		[Token(Token = "0x6003717")]
		[Address(RVA = "0x5A002B0", Offset = "0x59FF2B0", VA = "0x5A002B0")]
		public static CLMethodBinding<CustomLogicImageBuiltin> __CreateMethodBinding__SetImage()
		{
			return null;
		}
	}

	[Token(Token = "0x4001982")]
	[FieldOffset(Offset = "0x30")]
	private string _currentImagePath;

	[Token(Token = "0x4001983")]
	[FieldOffset(Offset = "0x38")]
	private Texture2D _currentTexture;

	[Token(Token = "0x170009F7")]
	public string ImagePath
	{
		[Token(Token = "0x600370D")]
		[Address(RVA = "0x59FFEA0", Offset = "0x59FEEA0", VA = "0x59FFEA0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600370E")]
		[Address(RVA = "0x59FFEB0", Offset = "0x59FEEB0", VA = "0x59FFEB0")]
		set
		{
		}
	}

	[Token(Token = "0x170009F8")]
	public override string ClassName
	{
		[Token(Token = "0x6003710")]
		[Address(RVA = "0x59FFED0", Offset = "0x59FEED0", VA = "0x59FFED0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009F9")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6003711")]
		[Address(RVA = "0x59FFF00", Offset = "0x59FEF00", VA = "0x59FFF00", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009FA")]
	public override bool IsStatic
	{
		[Token(Token = "0x6003712")]
		[Address(RVA = "0x59FFF10", Offset = "0x59FEF10", VA = "0x59FFF10", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009FB")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6003713")]
		[Address(RVA = "0x59FFF20", Offset = "0x59FEF20", VA = "0x59FFF20", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600370B")]
	[Address(RVA = "0x59FFBE0", Offset = "0x59FEBE0", VA = "0x59FFBE0")]
	public CustomLogicImageBuiltin()
	{
	}

	[Token(Token = "0x600370C")]
	[Address(RVA = "0x59FFC60", Offset = "0x59FEC60", VA = "0x59FFC60")]
	public CustomLogicImageBuiltin SetImage(string imagePath)
	{
		return null;
	}

	[Token(Token = "0x600370F")]
	[Address(RVA = "0x59FFEC0", Offset = "0x59FEEC0", VA = "0x59FFEC0")]
	internal Texture2D GetTexture()
	{
		return null;
	}
}
