// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Assertions.Assert
// Update status: CHANGED in this game update
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
	[Token(Token = "0x40007B9")]
	[FieldOffset(Offset = "0x0")]
	[Obsolete("Future versions of Unity are expected to always throw exceptions and not have this field.")]
	public static bool raiseExceptions;

	[Token(Token = "0x6001253")]
	[Address(RVA = "0x2F2E020", Offset = "0x2F2C620", VA = "0x182F2E020")]
	private static void Fail(string message, string userMessage)
	{
	}

	[Token(Token = "0x6001254")]
	[Address(RVA = "0x2F2E650", Offset = "0x2F2CC50", VA = "0x182F2E650")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void IsTrue(bool condition)
	{
	}

	[Token(Token = "0x6001255")]
	[Address(RVA = "0x2F2E560", Offset = "0x2F2CB60", VA = "0x182F2E560")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void IsTrue(bool condition, string message)
	{
	}

	[Token(Token = "0x6001256")]
	[Address(RVA = "0x2F2E140", Offset = "0x2F2C740", VA = "0x182F2E140")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void IsFalse(bool condition)
	{
	}

	[Token(Token = "0x6001257")]
	[Address(RVA = "0x2F2E250", Offset = "0x2F2C850", VA = "0x182F2E250")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void IsFalse(bool condition, string message)
	{
	}

	[Token(Token = "0x6001258")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void AreEqual<T>(T expected, T actual)
	{
	}

	[Token(Token = "0x6001259")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void AreEqual<T>(T expected, T actual, string message)
	{
	}

	[Token(Token = "0x600125A")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void AreEqual<T>(T expected, T actual, string message, IEqualityComparer<T> comparer)
	{
	}

	[Token(Token = "0x600125B")]
	[Address(RVA = "0x2F2DE50", Offset = "0x2F2C450", VA = "0x182F2DE50")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void AreEqual(Object expected, Object actual, string message)
	{
	}

	[Token(Token = "0x600125C")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void IsNull<T>(T value) where T : class
	{
	}

	[Token(Token = "0x600125D")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void IsNull<T>(T value, string message) where T : class
	{
	}

	[Token(Token = "0x600125E")]
	[Address(RVA = "0x2F2E450", Offset = "0x2F2CA50", VA = "0x182F2E450")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void IsNull(Object value, string message)
	{
	}

	[Token(Token = "0x600125F")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void IsNotNull<T>(T value) where T : class
	{
	}

	[Token(Token = "0x6001260")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void IsNotNull<T>(T value, string message) where T : class
	{
	}

	[Token(Token = "0x6001261")]
	[Address(RVA = "0x2F2E340", Offset = "0x2F2C940", VA = "0x182F2E340")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void IsNotNull(Object value, string message)
	{
	}

	[Token(Token = "0x6001262")]
	[Address(RVA = "0x2F2DDE0", Offset = "0x2F2C3E0", VA = "0x182F2DDE0")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void AreEqual(int expected, int actual)
	{
	}

	[Token(Token = "0x6001263")]
	[Address(RVA = "0x2F2DFA0", Offset = "0x2F2C5A0", VA = "0x182F2DFA0")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void AreEqual(int expected, int actual, string message)
	{
	}
}
