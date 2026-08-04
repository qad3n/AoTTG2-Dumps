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

[Token(Token = "0x2000483")]
[CompilerGenerated]
internal class CustomLogicBuiltinTypes
{
	[Token(Token = "0x40012E5")]
	[FieldOffset(Offset = "0x0")]
	private static CustomLogicBuiltinTypes __selfForEasyReferencing;

	[Token(Token = "0x40012E6")]
	[FieldOffset(Offset = "0x8")]
	public static readonly HashSet<string> TypeNames;

	[Token(Token = "0x40012E7")]
	[FieldOffset(Offset = "0x10")]
	public static readonly Dictionary<string, string> BaseTypeNames;

	[Token(Token = "0x40012E8")]
	[FieldOffset(Offset = "0x18")]
	public static readonly Dictionary<string, HashSet<string>> MemberNames;

	[Token(Token = "0x40012E9")]
	[FieldOffset(Offset = "0x20")]
	public static readonly HashSet<string> StaticTypeNames;

	[Token(Token = "0x40012EA")]
	[FieldOffset(Offset = "0x28")]
	public static readonly HashSet<string> AbstractTypeNames;

	[Token(Token = "0x6002F63")]
	[Address(RVA = "0x4136580", Offset = "0x4136580", VA = "0x4136580")]
	public static bool IsBuiltinType(string typeName)
	{
		return default(bool);
	}

	[Token(Token = "0x6002F64")]
	[Address(RVA = "0x4136620", Offset = "0x4136620", VA = "0x4136620")]
	public static bool IsAbstract(string typeName)
	{
		return default(bool);
	}

	[Token(Token = "0x6002F65")]
	[Address(RVA = "0x41366C0", Offset = "0x41366C0", VA = "0x41366C0")]
	public static ICLMemberBinding CreateBinding(string typeName, string varName)
	{
		return null;
	}

	[Token(Token = "0x6002F66")]
	[Address(RVA = "0x4139C40", Offset = "0x4139C40", VA = "0x4139C40")]
	public static BuiltinClassInstance CreateClassInstance(string typeName, object[] args)
	{
		return null;
	}

	[Token(Token = "0x6002F67")]
	[Address(RVA = "0x413C040", Offset = "0x413C040", VA = "0x413C040")]
	public static Func<object[], BuiltinClassInstance> CreateFactory(string typeName)
	{
		return null;
	}

	[Token(Token = "0x6002F68")]
	[Address(RVA = "0x4142900", Offset = "0x4142900", VA = "0x4142900")]
	public CustomLogicBuiltinTypes()
	{
	}
}
