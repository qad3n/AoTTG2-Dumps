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

[Token(Token = "0x200030D")]
[DebuggerStepThrough]
public static class Assert
{
	[Token(Token = "0x40007B7")]
	[FieldOffset(Offset = "0x0")]
	[Obsolete("Future versions of Unity are expected to always throw exceptions and not have this field.")]
	public static bool raiseExceptions;

	[Token(Token = "0x6001267")]
	[Address(RVA = "0x693B7A0", Offset = "0x693A7A0", VA = "0x693B7A0")]
	private static void Fail(string message, string userMessage)
	{
	}

	[Token(Token = "0x6001268")]
	[Address(RVA = "0x693B950", Offset = "0x693A950", VA = "0x693B950")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void IsTrue(bool condition)
	{
	}

	[Token(Token = "0x6001269")]
	[Address(RVA = "0x693B9F0", Offset = "0x693A9F0", VA = "0x693B9F0")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void IsTrue(bool condition, string message)
	{
	}

	[Token(Token = "0x600126A")]
	[Address(RVA = "0x693BAF0", Offset = "0x693AAF0", VA = "0x693BAF0")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void IsFalse(bool condition)
	{
	}

	[Token(Token = "0x600126B")]
	[Address(RVA = "0x693BB90", Offset = "0x693AB90", VA = "0x693BB90")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void IsFalse(bool condition, string message)
	{
	}

	[Token(Token = "0x600126C")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void AreEqual<T>(T expected, T actual)
	{
	}

	[Token(Token = "0x600126D")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void AreEqual<T>(T expected, T actual, string message)
	{
	}

	[Token(Token = "0x600126E")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void AreEqual<T>(T expected, T actual, string message, IEqualityComparer<T> comparer)
	{
	}

	[Token(Token = "0x600126F")]
	[Address(RVA = "0x693BC00", Offset = "0x693AC00", VA = "0x693BC00")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void AreEqual(Object expected, Object actual, string message)
	{
	}

	[Token(Token = "0x6001270")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void IsNull<T>(T value) where T : class
	{
	}

	[Token(Token = "0x6001271")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void IsNull<T>(T value, string message) where T : class
	{
	}

	[Token(Token = "0x6001272")]
	[Address(RVA = "0x693BD70", Offset = "0x693AD70", VA = "0x693BD70")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void IsNull(Object value, string message)
	{
	}

	[Token(Token = "0x6001273")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void IsNotNull<T>(T value) where T : class
	{
	}

	[Token(Token = "0x6001274")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void IsNotNull<T>(T value, string message) where T : class
	{
	}

	[Token(Token = "0x6001275")]
	[Address(RVA = "0x693BF10", Offset = "0x693AF10", VA = "0x693BF10")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void IsNotNull(Object value, string message)
	{
	}

	[Token(Token = "0x6001276")]
	[Address(RVA = "0x693C020", Offset = "0x693B020", VA = "0x693C020")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void AreEqual(int expected, int actual)
	{
	}

	[Token(Token = "0x6001277")]
	[Address(RVA = "0x693C0A0", Offset = "0x693B0A0", VA = "0x693C0A0")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void AreEqual(int expected, int actual, string message)
	{
	}
}
