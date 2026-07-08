using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x200043E")]
[CompilerGenerated]
internal class CustomLogicBuiltinTypes
{
	[Token(Token = "0x40011DB")]
	[FieldOffset(Offset = "0x0")]
	private static CustomLogicBuiltinTypes __selfForEasyReferencing;

	[Token(Token = "0x40011DC")]
	[FieldOffset(Offset = "0x8")]
	public static readonly HashSet<string> TypeNames;

	[Token(Token = "0x40011DD")]
	[FieldOffset(Offset = "0x10")]
	public static readonly Dictionary<string, string> BaseTypeNames;

	[Token(Token = "0x40011DE")]
	[FieldOffset(Offset = "0x18")]
	public static readonly Dictionary<string, HashSet<string>> MemberNames;

	[Token(Token = "0x40011DF")]
	[FieldOffset(Offset = "0x20")]
	public static readonly HashSet<string> StaticTypeNames;

	[Token(Token = "0x40011E0")]
	[FieldOffset(Offset = "0x28")]
	public static readonly HashSet<string> AbstractTypeNames;

	[Token(Token = "0x6002D5B")]
	[Address(RVA = "0x3E224E0", Offset = "0x3E224E0", VA = "0x3E224E0")]
	public static bool IsBuiltinType(string typeName)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D5C")]
	[Address(RVA = "0x3E22580", Offset = "0x3E22580", VA = "0x3E22580")]
	public static bool IsAbstract(string typeName)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D5D")]
	[Address(RVA = "0x3E22620", Offset = "0x3E22620", VA = "0x3E22620")]
	public static ICLMemberBinding CreateBinding(string typeName, string varName)
	{
		return null;
	}

	[Token(Token = "0x6002D5E")]
	[Address(RVA = "0x3E25AB0", Offset = "0x3E25AB0", VA = "0x3E25AB0")]
	public static BuiltinClassInstance CreateClassInstance(string typeName, object[] args)
	{
		return null;
	}

	[Token(Token = "0x6002D5F")]
	[Address(RVA = "0x3E27E10", Offset = "0x3E27E10", VA = "0x3E27E10")]
	public static Func<object[], BuiltinClassInstance> CreateFactory(string typeName)
	{
		return null;
	}

	[Token(Token = "0x6002D60")]
	[Address(RVA = "0x3E2E510", Offset = "0x3E2E510", VA = "0x3E2E510")]
	public CustomLogicBuiltinTypes()
	{
	}
}
