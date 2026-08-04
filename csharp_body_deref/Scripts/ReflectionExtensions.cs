// ==================== AoTTG2 cross-reference ====================
// Type: ReflectionExtensions
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ReflectionExtensions.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Reflection;
using Il2CppDummyDll;

[Token(Token = "0x2000027")]
public static class ReflectionExtensions
{
	[Token(Token = "0x40000CD")]
	[FieldOffset(Offset = "0x0")]
	public static readonly Type IntType;

	[Token(Token = "0x40000CE")]
	[FieldOffset(Offset = "0x8")]
	public static readonly Type FloatType;

	[Token(Token = "0x6000108")]
	public static bool HasAttribute<T>(this Type member) where T : Attribute
	{
		return default(bool);
	}

	[Token(Token = "0x6000109")]
	public static bool HasAttribute<T>(this MemberInfo member) where T : Attribute
	{
		return default(bool);
	}
}
