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

[Token(Token = "0x20005DA")]
[CompilerGenerated]
internal class CustomLogicBuiltinTypes
{
	[Token(Token = "0x4001928")]
	[FieldOffset(Offset = "0x0")]
	private static CustomLogicBuiltinTypes __selfForEasyReferencing;

	[Token(Token = "0x4001929")]
	[FieldOffset(Offset = "0x8")]
	public static readonly HashSet<string> TypeNames;

	[Token(Token = "0x400192A")]
	[FieldOffset(Offset = "0x10")]
	public static readonly Dictionary<string, string> BaseTypeNames;

	[Token(Token = "0x400192B")]
	[FieldOffset(Offset = "0x18")]
	public static readonly Dictionary<string, HashSet<string>> MemberNames;

	[Token(Token = "0x400192C")]
	[FieldOffset(Offset = "0x20")]
	public static readonly HashSet<string> StaticTypeNames;

	[Token(Token = "0x400192D")]
	[FieldOffset(Offset = "0x28")]
	public static readonly HashSet<string> AbstractTypeNames;

	[Token(Token = "0x60038DD")]
	[Address(RVA = "0x20882B0", Offset = "0x20868B0", VA = "0x1820882B0")]
	public static bool IsBuiltinType(string typeName)
	{
		return default(bool);
	}

	[Token(Token = "0x60038DE")]
	[Address(RVA = "0x2088230", Offset = "0x2086830", VA = "0x182088230")]
	public static bool IsAbstract(string typeName)
	{
		return default(bool);
	}

	[Token(Token = "0x60038DF")]
	[Address(RVA = "0x207B6D0", Offset = "0x2079CD0", VA = "0x18207B6D0")]
	public static ICLMemberBinding CreateBinding(string typeName, string varName)
	{
		return null;
	}

	[Token(Token = "0x60038E0")]
	[Address(RVA = "0x207EBB0", Offset = "0x207D1B0", VA = "0x18207EBB0")]
	public static BuiltinClassInstance CreateClassInstance(string typeName, object[] args)
	{
		return null;
	}

	[Token(Token = "0x60038E1")]
	[Address(RVA = "0x2080FB0", Offset = "0x207F5B0", VA = "0x182080FB0")]
	public static Func<object[], BuiltinClassInstance> CreateFactory(string typeName)
	{
		return null;
	}

	[Token(Token = "0x60038E2")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public CustomLogicBuiltinTypes()
	{
	}
}
