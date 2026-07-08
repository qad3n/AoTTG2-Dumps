using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace CustomLogic;

[Token(Token = "0x2000424")]
[CompilerGenerated]
internal class CustomLogicJsonBuiltin : BuiltinClassInstance
{
	[Token(Token = "0x2000425")]
	public static class Factory
	{
		[Token(Token = "0x6002C04")]
		[Address(RVA = "0x3E3B700", Offset = "0x3E3B700", VA = "0x3E3B700")]
		public static CustomLogicJsonBuiltin CreateInstance(object[] args)
		{
			return null;
		}
	}

	[Token(Token = "0x2000426")]
	public static class Bindings
	{
		[Token(Token = "0x4001168")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6002C05")]
		[Address(RVA = "0x3E3B820", Offset = "0x3E3B820", VA = "0x3E3B820")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			return null;
		}

		[Token(Token = "0x6002C06")]
		[Address(RVA = "0x3E3B960", Offset = "0x3E3B960", VA = "0x3E3B960")]
		public static CLMethodBinding<CustomLogicJsonBuiltin> __CreateMethodBinding__LoadFromString()
		{
			return null;
		}

		[Token(Token = "0x6002C07")]
		[Address(RVA = "0x3E3BAB0", Offset = "0x3E3BAB0", VA = "0x3E3BAB0")]
		public static CLMethodBinding<CustomLogicJsonBuiltin> __CreateMethodBinding__SaveToString()
		{
			return null;
		}
	}

	[Token(Token = "0x1700089A")]
	public override string ClassName
	{
		[Token(Token = "0x6002C00")]
		[Address(RVA = "0x3E3B6A0", Offset = "0x3E3B6A0", VA = "0x3E3B6A0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700089B")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6002C01")]
		[Address(RVA = "0x3E3B6D0", Offset = "0x3E3B6D0", VA = "0x3E3B6D0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700089C")]
	public override bool IsStatic
	{
		[Token(Token = "0x6002C02")]
		[Address(RVA = "0x3E3B6E0", Offset = "0x3E3B6E0", VA = "0x3E3B6E0", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700089D")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6002C03")]
		[Address(RVA = "0x3E3B6F0", Offset = "0x3E3B6F0", VA = "0x3E3B6F0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002BFB")]
	[Address(RVA = "0x3E39FB0", Offset = "0x3E39FB0", VA = "0x3E39FB0")]
	public CustomLogicJsonBuiltin()
	{
	}

	[Token(Token = "0x6002BFC")]
	[Address(RVA = "0x3E3A010", Offset = "0x3E3A010", VA = "0x3E3A010")]
	public static object LoadFromString(string json)
	{
		return null;
	}

	[Token(Token = "0x6002BFD")]
	[Address(RVA = "0x3E3AAD0", Offset = "0x3E3AAD0", VA = "0x3E3AAD0")]
	public static string SaveToString(object obj)
	{
		return null;
	}

	[Token(Token = "0x6002BFE")]
	[Address(RVA = "0x3E3A150", Offset = "0x3E3A150", VA = "0x3E3A150")]
	protected static object LoadJSON(JSONNode json)
	{
		return null;
	}

	[Token(Token = "0x6002BFF")]
	[Address(RVA = "0x3E3AB00", Offset = "0x3E3AB00", VA = "0x3E3AB00")]
	protected static JSONNode SaveJSON(object obj)
	{
		return null;
	}
}
