// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicBuiltinTypes
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicBuiltinTypes.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000639")]
[CompilerGenerated]
internal class CustomLogicBuiltinTypes
{
	[Token(Token = "0x4001AC9")]
	[FieldOffset(Offset = "0x0")]
	private static CustomLogicBuiltinTypes __selfForEasyReferencing;

	[Token(Token = "0x4001ACA")]
	[FieldOffset(Offset = "0x8")]
	public static readonly HashSet<string> TypeNames;

	[Token(Token = "0x4001ACB")]
	[FieldOffset(Offset = "0x10")]
	public static readonly Dictionary<string, string> BaseTypeNames;

	[Token(Token = "0x4001ACC")]
	[FieldOffset(Offset = "0x18")]
	public static readonly Dictionary<string, HashSet<string>> MemberNames;

	[Token(Token = "0x4001ACD")]
	[FieldOffset(Offset = "0x20")]
	public static readonly HashSet<string> StaticTypeNames;

	[Token(Token = "0x4001ACE")]
	[FieldOffset(Offset = "0x28")]
	public static readonly HashSet<string> AbstractTypeNames;

	[Token(Token = "0x6003B6B")]
	[Address(RVA = "0x5A58370", Offset = "0x5A57370", VA = "0x5A58370")]
	public static bool IsBuiltinType(string typeName)
	{
		return default(bool);
	}

	[Token(Token = "0x6003B6C")]
	[Address(RVA = "0x5A58410", Offset = "0x5A57410", VA = "0x5A58410")]
	public static bool IsAbstract(string typeName)
	{
		return default(bool);
	}

	[Token(Token = "0x6003B6D")]
	[Address(RVA = "0x5A584B0", Offset = "0x5A574B0", VA = "0x5A584B0")]
	public static ICLMemberBinding CreateBinding(string typeName, string varName)
	{
		return null;
	}

	[Token(Token = "0x6003B6E")]
	[Address(RVA = "0x5A5BB80", Offset = "0x5A5AB80", VA = "0x5A5BB80")]
	public static BuiltinClassInstance CreateClassInstance(string typeName, object[] args)
	{
		return null;
	}

	[Token(Token = "0x6003B6F")]
	[Address(RVA = "0x5A5E070", Offset = "0x5A5D070", VA = "0x5A5E070")]
	public static Func<object[], BuiltinClassInstance> CreateFactory(string typeName)
	{
		return null;
	}

	[Token(Token = "0x6003B70")]
	[Address(RVA = "0x5A64BC0", Offset = "0x5A63BC0", VA = "0x5A64BC0")]
	public CustomLogicBuiltinTypes()
	{
	}
}
