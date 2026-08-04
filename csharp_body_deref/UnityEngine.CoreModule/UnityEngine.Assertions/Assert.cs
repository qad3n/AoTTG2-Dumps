// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Assertions.Assert
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Assertions;

[Token(Token = "0x2000355")]
[DebuggerStepThrough]
public static class Assert
{
	[Token(Token = "0x4000B5C")]
	[FieldOffset(Offset = "0x0")]
	[Obsolete("Future versions of Unity are expected to always throw exceptions and not have this field.")]
	public static bool raiseExceptions;

	[Token(Token = "0x60011CB")]
	[Address(RVA = "0x4E3BAB0", Offset = "0x4E3BAB0", VA = "0x4E3BAB0")]
	private static void Fail(string message, string userMessage)
	{
	}

	[Token(Token = "0x60011CC")]
	[Address(RVA = "0x4E3BC60", Offset = "0x4E3BC60", VA = "0x4E3BC60")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void IsTrue(bool condition)
	{
	}

	[Token(Token = "0x60011CD")]
	[Address(RVA = "0x4E365D0", Offset = "0x4E365D0", VA = "0x4E365D0")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void IsTrue(bool condition, string message)
	{
	}

	[Token(Token = "0x60011CE")]
	[Address(RVA = "0x4E3BD90", Offset = "0x4E3BD90", VA = "0x4E3BD90")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void IsFalse(bool condition, string message)
	{
	}

	[Token(Token = "0x60011CF")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void AreEqual<T>(T expected, T actual)
	{
	}

	[Token(Token = "0x60011D0")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void AreEqual<T>(T expected, T actual, string message)
	{
	}

	[Token(Token = "0x60011D1")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void AreEqual<T>(T expected, T actual, string message, IEqualityComparer<T> comparer)
	{
	}

	[Token(Token = "0x60011D2")]
	[Address(RVA = "0x4E3BE00", Offset = "0x4E3BE00", VA = "0x4E3BE00")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void AreEqual(Object expected, Object actual, string message)
	{
	}

	[Token(Token = "0x60011D3")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void IsNull<T>(T value) where T : class
	{
	}

	[Token(Token = "0x60011D4")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void IsNull<T>(T value, string message) where T : class
	{
	}

	[Token(Token = "0x60011D5")]
	[Address(RVA = "0x4E3C0E0", Offset = "0x4E3C0E0", VA = "0x4E3C0E0")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void IsNull(Object value, string message)
	{
	}

	[Token(Token = "0x60011D6")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void IsNotNull<T>(T value) where T : class
	{
	}

	[Token(Token = "0x60011D7")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void IsNotNull<T>(T value, string message) where T : class
	{
	}

	[Token(Token = "0x60011D8")]
	[Address(RVA = "0x4E3C310", Offset = "0x4E3C310", VA = "0x4E3C310")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void IsNotNull(Object value, string message)
	{
	}

	[Token(Token = "0x60011D9")]
	[Address(RVA = "0x4E3C3B0", Offset = "0x4E3C3B0", VA = "0x4E3C3B0")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void AreEqual(int expected, int actual)
	{
	}
}
