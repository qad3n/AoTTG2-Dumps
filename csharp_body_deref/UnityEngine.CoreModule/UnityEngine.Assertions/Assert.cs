using System;
using System.Collections.Generic;
using System.Diagnostics;
using Il2CppDummyDll;

namespace UnityEngine.Assertions;

[Token(Token = "0x2000352")]
[DebuggerStepThrough]
public static class Assert
{
	[Token(Token = "0x4000B5C")]
	[FieldOffset(Offset = "0x0")]
	[Obsolete("Future versions of Unity are expected to always throw exceptions and not have this field.")]
	public static bool raiseExceptions;

	[Token(Token = "0x60011C9")]
	[Address(RVA = "0x4B14180", Offset = "0x4B14180", VA = "0x4B14180")]
	private static void Fail(string message, string userMessage)
	{
	}

	[Token(Token = "0x60011CA")]
	[Address(RVA = "0x4B14330", Offset = "0x4B14330", VA = "0x4B14330")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void IsTrue(bool condition)
	{
	}

	[Token(Token = "0x60011CB")]
	[Address(RVA = "0x4B0ECA0", Offset = "0x4B0ECA0", VA = "0x4B0ECA0")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void IsTrue(bool condition, string message)
	{
	}

	[Token(Token = "0x60011CC")]
	[Address(RVA = "0x4B14460", Offset = "0x4B14460", VA = "0x4B14460")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void IsFalse(bool condition, string message)
	{
	}

	[Token(Token = "0x60011CD")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void AreEqual<T>(T expected, T actual)
	{
	}

	[Token(Token = "0x60011CE")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void AreEqual<T>(T expected, T actual, string message)
	{
	}

	[Token(Token = "0x60011CF")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void AreEqual<T>(T expected, T actual, string message, IEqualityComparer<T> comparer)
	{
	}

	[Token(Token = "0x60011D0")]
	[Address(RVA = "0x4B144D0", Offset = "0x4B144D0", VA = "0x4B144D0")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void AreEqual(Object expected, Object actual, string message)
	{
	}

	[Token(Token = "0x60011D1")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void IsNull<T>(T value) where T : class
	{
	}

	[Token(Token = "0x60011D2")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void IsNull<T>(T value, string message) where T : class
	{
	}

	[Token(Token = "0x60011D3")]
	[Address(RVA = "0x4B147B0", Offset = "0x4B147B0", VA = "0x4B147B0")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void IsNull(Object value, string message)
	{
	}

	[Token(Token = "0x60011D4")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void IsNotNull<T>(T value) where T : class
	{
	}

	[Token(Token = "0x60011D5")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void IsNotNull<T>(T value, string message) where T : class
	{
	}

	[Token(Token = "0x60011D6")]
	[Address(RVA = "0x4B149E0", Offset = "0x4B149E0", VA = "0x4B149E0")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void IsNotNull(Object value, string message)
	{
	}

	[Token(Token = "0x60011D7")]
	[Address(RVA = "0x4B14A80", Offset = "0x4B14A80", VA = "0x4B14A80")]
	[Conditional("UNITY_ASSERTIONS")]
	public static void AreEqual(int expected, int actual)
	{
	}
}
