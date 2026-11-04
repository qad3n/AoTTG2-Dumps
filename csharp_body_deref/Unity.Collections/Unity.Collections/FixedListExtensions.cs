// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.FixedListExtensions
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.Collections;

[Token(Token = "0x2000060")]
public static class FixedListExtensions
{
	[Token(Token = "0x60003A0")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public static void Sort<T>(this ref FixedList32Bytes<T> list) where T : struct, IComparable<T>
	{
	}

	[Token(Token = "0x60003A1")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(NativeSortExtension.DefaultComparer<int>)
	})]
	public static void Sort<T, U>(this ref FixedList32Bytes<T> list, U comp) where T : struct, IComparable<T> where U : IComparer<T>
	{
	}

	[Token(Token = "0x60003A2")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public static void Sort<T>(this ref FixedList64Bytes<T> list) where T : struct, IComparable<T>
	{
	}

	[Token(Token = "0x60003A3")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(NativeSortExtension.DefaultComparer<int>)
	})]
	public static void Sort<T, U>(this ref FixedList64Bytes<T> list, U comp) where T : struct, IComparable<T> where U : IComparer<T>
	{
	}

	[Token(Token = "0x60003A4")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public static void Sort<T>(this ref FixedList128Bytes<T> list) where T : struct, IComparable<T>
	{
	}

	[Token(Token = "0x60003A5")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(NativeSortExtension.DefaultComparer<int>)
	})]
	public static void Sort<T, U>(this ref FixedList128Bytes<T> list, U comp) where T : struct, IComparable<T> where U : IComparer<T>
	{
	}

	[Token(Token = "0x60003A6")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public static void Sort<T>(this ref FixedList512Bytes<T> list) where T : struct, IComparable<T>
	{
	}

	[Token(Token = "0x60003A7")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(NativeSortExtension.DefaultComparer<int>)
	})]
	public static void Sort<T, U>(this ref FixedList512Bytes<T> list, U comp) where T : struct, IComparable<T> where U : IComparer<T>
	{
	}

	[Token(Token = "0x60003A8")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public static void Sort<T>(this ref FixedList4096Bytes<T> list) where T : struct, IComparable<T>
	{
	}

	[Token(Token = "0x60003A9")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(int),
		typeof(NativeSortExtension.DefaultComparer<int>)
	})]
	public static void Sort<T, U>(this ref FixedList4096Bytes<T> list, U comp) where T : struct, IComparable<T> where U : IComparer<T>
	{
	}
}
