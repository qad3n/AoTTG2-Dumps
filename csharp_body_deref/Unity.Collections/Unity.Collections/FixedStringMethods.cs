// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.FixedStringMethods
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections.LowLevel.Unsafe;

namespace Unity.Collections;

[Token(Token = "0x2000077")]
[GenerateTestsForBurstCompatibility]
[GenerateTestsForBurstCompatibility]
[GenerateTestsForBurstCompatibility]
[GenerateTestsForBurstCompatibility]
public static class FixedStringMethods
{
	[Token(Token = "0x600051C")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	public static FormatError Append<T>(this ref T fs, Unicode.Rune rune) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(FormatError);
	}

	[Token(Token = "0x600051D")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	public static FormatError Append<T>(this ref T fs, char ch) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(FormatError);
	}

	[Token(Token = "0x600051E")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	public static FormatError AppendRawByte<T>(this ref T fs, byte a) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(FormatError);
	}

	[Token(Token = "0x600051F")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	public static FormatError Append<T>(this ref T fs, Unicode.Rune rune, int count) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(FormatError);
	}

	[Token(Token = "0x6000520")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	public static FormatError Append<T>(this ref T fs, long input) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(FormatError);
	}

	[Token(Token = "0x6000521")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	public static FormatError Append<T>(this ref T fs, int input) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(FormatError);
	}

	[Token(Token = "0x6000522")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	public static FormatError Append<T>(this ref T fs, ulong input) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(FormatError);
	}

	[Token(Token = "0x6000523")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	public static FormatError Append<T>(this ref T fs, uint input) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(FormatError);
	}

	[Token(Token = "0x6000524")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	public static FormatError Append<T>(this ref T fs, float input, char decimalSeparator = '.') where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(FormatError);
	}

	[Token(Token = "0x6000525")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes)
	})]
	public static FormatError Append<T, T2>(this ref T fs, in T2 input) where T : struct, INativeList<byte>, IUTF8Bytes where T2 : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(FormatError);
	}

	[Token(Token = "0x6000526")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes)
	})]
	public static CopyError CopyFrom<T, T2>(this ref T fs, in T2 input) where T : struct, INativeList<byte>, IUTF8Bytes where T2 : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(CopyError);
	}

	[Token(Token = "0x6000527")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	public unsafe static FormatError Append<T>(this ref T fs, byte* utf8Bytes, int utf8BytesLength) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(FormatError);
	}

	[Token(Token = "0x6000528")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public static FormatError Append<T>(this ref T fs, string s) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(FormatError);
	}

	[Token(Token = "0x6000529")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public static CopyError CopyFrom<T>(this ref T fs, string s) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(CopyError);
	}

	[Token(Token = "0x600052A")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public static CopyError CopyFromTruncated<T>(this ref T fs, string s) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(CopyError);
	}

	[Token(Token = "0x600052B")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes)
	})]
	public static CopyError CopyFromTruncated<T, T2>(this ref T fs, in T2 input) where T : struct, INativeList<byte>, IUTF8Bytes where T2 : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(CopyError);
	}

	[Token(Token = "0x600052C")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes)
	})]
	public static FormatError AppendFormat<T, U, T0>(this ref T dest, in U format, in T0 arg0) where T : struct, INativeList<byte>, IUTF8Bytes where U : struct, INativeList<byte>, IUTF8Bytes where T0 : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(FormatError);
	}

	[Token(Token = "0x600052D")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes)
	})]
	public static FormatError AppendFormat<T, U, T0, T1>(this ref T dest, in U format, in T0 arg0, in T1 arg1) where T : struct, INativeList<byte>, IUTF8Bytes where U : struct, INativeList<byte>, IUTF8Bytes where T0 : struct, INativeList<byte>, IUTF8Bytes where T1 : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(FormatError);
	}

	[Token(Token = "0x600052E")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes)
	})]
	public static FormatError AppendFormat<T, U, T0, T1, T2>(this ref T dest, in U format, in T0 arg0, in T1 arg1, in T2 arg2) where T : struct, INativeList<byte>, IUTF8Bytes where U : struct, INativeList<byte>, IUTF8Bytes where T0 : struct, INativeList<byte>, IUTF8Bytes where T1 : struct, INativeList<byte>, IUTF8Bytes where T2 : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(FormatError);
	}

	[Token(Token = "0x600052F")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes)
	})]
	public static FormatError AppendFormat<T, U, T0, T1, T2, T3>(this ref T dest, in U format, in T0 arg0, in T1 arg1, in T2 arg2, in T3 arg3) where T : struct, INativeList<byte>, IUTF8Bytes where U : struct, INativeList<byte>, IUTF8Bytes where T0 : struct, INativeList<byte>, IUTF8Bytes where T1 : struct, INativeList<byte>, IUTF8Bytes where T2 : struct, INativeList<byte>, IUTF8Bytes where T3 : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(FormatError);
	}

	[Token(Token = "0x6000530")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes)
	})]
	public static FormatError AppendFormat<T, U, T0, T1, T2, T3, T4>(this ref T dest, in U format, in T0 arg0, in T1 arg1, in T2 arg2, in T3 arg3, in T4 arg4) where T : struct, INativeList<byte>, IUTF8Bytes where U : struct, INativeList<byte>, IUTF8Bytes where T0 : struct, INativeList<byte>, IUTF8Bytes where T1 : struct, INativeList<byte>, IUTF8Bytes where T2 : struct, INativeList<byte>, IUTF8Bytes where T3 : struct, INativeList<byte>, IUTF8Bytes where T4 : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(FormatError);
	}

	[Token(Token = "0x6000531")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes)
	})]
	public static FormatError AppendFormat<T, U, T0, T1, T2, T3, T4, T5>(this ref T dest, in U format, in T0 arg0, in T1 arg1, in T2 arg2, in T3 arg3, in T4 arg4, in T5 arg5) where T : struct, INativeList<byte>, IUTF8Bytes where U : struct, INativeList<byte>, IUTF8Bytes where T0 : struct, INativeList<byte>, IUTF8Bytes where T1 : struct, INativeList<byte>, IUTF8Bytes where T2 : struct, INativeList<byte>, IUTF8Bytes where T3 : struct, INativeList<byte>, IUTF8Bytes where T4 : struct, INativeList<byte>, IUTF8Bytes where T5 : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(FormatError);
	}

	[Token(Token = "0x6000532")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes)
	})]
	public static FormatError AppendFormat<T, U, T0, T1, T2, T3, T4, T5, T6>(this ref T dest, in U format, in T0 arg0, in T1 arg1, in T2 arg2, in T3 arg3, in T4 arg4, in T5 arg5, in T6 arg6) where T : struct, INativeList<byte>, IUTF8Bytes where U : struct, INativeList<byte>, IUTF8Bytes where T0 : struct, INativeList<byte>, IUTF8Bytes where T1 : struct, INativeList<byte>, IUTF8Bytes where T2 : struct, INativeList<byte>, IUTF8Bytes where T3 : struct, INativeList<byte>, IUTF8Bytes where T4 : struct, INativeList<byte>, IUTF8Bytes where T5 : struct, INativeList<byte>, IUTF8Bytes where T6 : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(FormatError);
	}

	[Token(Token = "0x6000533")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes)
	})]
	public static FormatError AppendFormat<T, U, T0, T1, T2, T3, T4, T5, T6, T7>(this ref T dest, in U format, in T0 arg0, in T1 arg1, in T2 arg2, in T3 arg3, in T4 arg4, in T5 arg5, in T6 arg6, in T7 arg7) where T : struct, INativeList<byte>, IUTF8Bytes where U : struct, INativeList<byte>, IUTF8Bytes where T0 : struct, INativeList<byte>, IUTF8Bytes where T1 : struct, INativeList<byte>, IUTF8Bytes where T2 : struct, INativeList<byte>, IUTF8Bytes where T3 : struct, INativeList<byte>, IUTF8Bytes where T4 : struct, INativeList<byte>, IUTF8Bytes where T5 : struct, INativeList<byte>, IUTF8Bytes where T6 : struct, INativeList<byte>, IUTF8Bytes where T7 : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(FormatError);
	}

	[Token(Token = "0x6000534")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes)
	})]
	public static FormatError AppendFormat<T, U, T0, T1, T2, T3, T4, T5, T6, T7, T8>(this ref T dest, in U format, in T0 arg0, in T1 arg1, in T2 arg2, in T3 arg3, in T4 arg4, in T5 arg5, in T6 arg6, in T7 arg7, in T8 arg8) where T : struct, INativeList<byte>, IUTF8Bytes where U : struct, INativeList<byte>, IUTF8Bytes where T0 : struct, INativeList<byte>, IUTF8Bytes where T1 : struct, INativeList<byte>, IUTF8Bytes where T2 : struct, INativeList<byte>, IUTF8Bytes where T3 : struct, INativeList<byte>, IUTF8Bytes where T4 : struct, INativeList<byte>, IUTF8Bytes where T5 : struct, INativeList<byte>, IUTF8Bytes where T6 : struct, INativeList<byte>, IUTF8Bytes where T7 : struct, INativeList<byte>, IUTF8Bytes where T8 : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(FormatError);
	}

	[Token(Token = "0x6000535")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes)
	})]
	public static FormatError AppendFormat<T, U, T0, T1, T2, T3, T4, T5, T6, T7, T8, T9>(this ref T dest, in U format, in T0 arg0, in T1 arg1, in T2 arg2, in T3 arg3, in T4 arg4, in T5 arg5, in T6 arg6, in T7 arg7, in T8 arg8, in T9 arg9) where T : struct, INativeList<byte>, IUTF8Bytes where U : struct, INativeList<byte>, IUTF8Bytes where T0 : struct, INativeList<byte>, IUTF8Bytes where T1 : struct, INativeList<byte>, IUTF8Bytes where T2 : struct, INativeList<byte>, IUTF8Bytes where T3 : struct, INativeList<byte>, IUTF8Bytes where T4 : struct, INativeList<byte>, IUTF8Bytes where T5 : struct, INativeList<byte>, IUTF8Bytes where T6 : struct, INativeList<byte>, IUTF8Bytes where T7 : struct, INativeList<byte>, IUTF8Bytes where T8 : struct, INativeList<byte>, IUTF8Bytes where T9 : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(FormatError);
	}

	[Token(Token = "0x6000536")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	internal static FormatError Append<T>(this ref T fs, char a, char b) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(FormatError);
	}

	[Token(Token = "0x6000537")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	internal static FormatError Append<T>(this ref T fs, char a, char b, char c) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(FormatError);
	}

	[Token(Token = "0x6000538")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	internal static FormatError Append<T>(this ref T fs, char a, char b, char c, char d, char e, char f, char g, char h) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(FormatError);
	}

	[Token(Token = "0x6000539")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	internal unsafe static FormatError AppendScientific<T>(this ref T fs, char* source, int sourceLength, int decimalExponent, char decimalSeparator = '.') where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(FormatError);
	}

	[Token(Token = "0x600053A")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	internal static bool Found<T>(this ref T fs, ref int offset, char a, char b, char c) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(bool);
	}

	[Token(Token = "0x600053B")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	internal static bool Found<T>(this ref T fs, ref int offset, char a, char b, char c, char d, char e, char f, char g, char h) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(bool);
	}

	[Token(Token = "0x600053C")]
	[Address(RVA = "0x636F970", Offset = "0x636E970", VA = "0x636F970")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	internal static void CheckSubstringInRange(int strLength, int startIndex, int length)
	{
	}

	[Token(Token = "0x600053D")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	public static T Substring<T>(this ref T str, int startIndex, int length) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return (T)null;
	}

	[Token(Token = "0x600053E")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	public static T Substring<T>(this ref T str, int startIndex) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return (T)null;
	}

	[Token(Token = "0x600053F")]
	[Address(RVA = "0x636FA80", Offset = "0x636EA80", VA = "0x636FA80")]
	public static NativeText Substring(this ref NativeText str, int startIndex, int length, AllocatorManager.AllocatorHandle allocator)
	{
		return default(NativeText);
	}

	[Token(Token = "0x6000540")]
	[Address(RVA = "0x636FB90", Offset = "0x636EB90", VA = "0x636FB90")]
	public static NativeText Substring(this ref NativeText str, int startIndex, AllocatorManager.AllocatorHandle allocator)
	{
		return default(NativeText);
	}

	[Token(Token = "0x6000541")]
	[Address(RVA = "0x636FC20", Offset = "0x636EC20", VA = "0x636FC20")]
	public static NativeText Substring(this ref NativeText str, int startIndex, int length)
	{
		return default(NativeText);
	}

	[Token(Token = "0x6000542")]
	[Address(RVA = "0x636FC40", Offset = "0x636EC40", VA = "0x636FC40")]
	public static NativeText Substring(this ref NativeText str, int startIndex)
	{
		return default(NativeText);
	}

	[Token(Token = "0x6000543")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	public static int IndexOf<T>(this ref T fs, Unicode.Rune rune) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(int);
	}

	[Token(Token = "0x6000544")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	public unsafe static int IndexOf<T>(this ref T fs, byte* bytes, int bytesLen) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(int);
	}

	[Token(Token = "0x6000545")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	public unsafe static int IndexOf<T>(this ref T fs, byte* bytes, int bytesLen, int startIndex, int distance = 2147483647) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(int);
	}

	[Token(Token = "0x6000546")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes)
	})]
	public static int IndexOf<T, T2>(this ref T fs, in T2 other) where T : struct, INativeList<byte>, IUTF8Bytes where T2 : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(int);
	}

	[Token(Token = "0x6000547")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes)
	})]
	public static int IndexOf<T, T2>(this ref T fs, in T2 other, int startIndex, int distance = 2147483647) where T : struct, INativeList<byte>, IUTF8Bytes where T2 : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(int);
	}

	[Token(Token = "0x6000548")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes)
	})]
	public static bool Contains<T, T2>(this ref T fs, in T2 other) where T : struct, INativeList<byte>, IUTF8Bytes where T2 : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(bool);
	}

	[Token(Token = "0x6000549")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	public static int LastIndexOf<T>(this ref T fs, Unicode.Rune rune) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(int);
	}

	[Token(Token = "0x600054A")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	public unsafe static int LastIndexOf<T>(this ref T fs, byte* bytes, int bytesLen) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(int);
	}

	[Token(Token = "0x600054B")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	public unsafe static int LastIndexOf<T>(this ref T fs, byte* bytes, int bytesLen, int startIndex, int distance = 2147483647) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(int);
	}

	[Token(Token = "0x600054C")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes)
	})]
	public static int LastIndexOf<T, T2>(this ref T fs, in T2 other) where T : struct, INativeList<byte>, IUTF8Bytes where T2 : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(int);
	}

	[Token(Token = "0x600054D")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes)
	})]
	public static int LastIndexOf<T, T2>(this ref T fs, in T2 other, int startIndex, int distance = 2147483647) where T : struct, INativeList<byte>, IUTF8Bytes where T2 : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(int);
	}

	[Token(Token = "0x600054E")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	public unsafe static int CompareTo<T>(this ref T fs, byte* bytes, int bytesLen) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(int);
	}

	[Token(Token = "0x600054F")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes)
	})]
	public static int CompareTo<T, T2>(this ref T fs, in T2 other) where T : struct, INativeList<byte>, IUTF8Bytes where T2 : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(int);
	}

	[Token(Token = "0x6000550")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	public unsafe static bool Equals<T>(this ref T fs, byte* bytes, int bytesLen) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(bool);
	}

	[Token(Token = "0x6000551")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes)
	})]
	public static bool Equals<T, T2>(this ref T fs, in T2 other) where T : struct, INativeList<byte>, IUTF8Bytes where T2 : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(bool);
	}

	[Token(Token = "0x6000552")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	public static Unicode.Rune Peek<T>(this ref T fs, int index) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(Unicode.Rune);
	}

	[Token(Token = "0x6000553")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	public static Unicode.Rune Read<T>(this ref T fs, ref int index) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(Unicode.Rune);
	}

	[Token(Token = "0x6000554")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	public static FormatError Write<T>(this ref T fs, ref int index, Unicode.Rune rune) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(FormatError);
	}

	[Token(Token = "0x6000555")]
	[ExcludeFromBurstCompatTesting("Returns managed string")]
	public static string ConvertToString<T>(this ref T fs) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return null;
	}

	[Token(Token = "0x6000556")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	public static int ComputeHashCode<T>(this ref T fs) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(int);
	}

	[Token(Token = "0x6000557")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	public static int EffectiveSizeOf<T>(this ref T fs) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(int);
	}

	[Token(Token = "0x6000558")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	public static bool StartsWith<T>(this ref T fs, Unicode.Rune rune) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(bool);
	}

	[Token(Token = "0x6000559")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes)
	})]
	public static bool StartsWith<T, U>(this ref T fs, in U other) where T : struct, INativeList<byte>, IUTF8Bytes where U : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(bool);
	}

	[Token(Token = "0x600055A")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	public static bool EndsWith<T>(this ref T fs, Unicode.Rune rune) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(bool);
	}

	[Token(Token = "0x600055B")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[]
	{
		typeof(FixedString128Bytes),
		typeof(FixedString128Bytes)
	})]
	public static bool EndsWith<T, U>(this ref T fs, in U other) where T : struct, INativeList<byte>, IUTF8Bytes where U : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(bool);
	}

	[Token(Token = "0x600055C")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	internal static int TrimStartIndex<T>(this ref T fs) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(int);
	}

	[Token(Token = "0x600055D")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	internal static int TrimStartIndex<T>(this ref T fs, ReadOnlySpan<Unicode.Rune> trimRunes) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(int);
	}

	[Token(Token = "0x600055E")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	internal static int TrimEndIndex<T>(this ref T fs) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(int);
	}

	[Token(Token = "0x600055F")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	internal static int TrimEndIndex<T>(this ref T fs, ReadOnlySpan<Unicode.Rune> trimRunes) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(int);
	}

	[Token(Token = "0x6000560")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	public static T TrimStart<T>(this ref T fs) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return (T)null;
	}

	[Token(Token = "0x6000561")]
	[Address(RVA = "0x636FCD0", Offset = "0x636ECD0", VA = "0x636FCD0")]
	public static UnsafeText TrimStart(this ref UnsafeText fs, AllocatorManager.AllocatorHandle allocator)
	{
		return default(UnsafeText);
	}

	[Token(Token = "0x6000562")]
	[Address(RVA = "0x636FDE0", Offset = "0x636EDE0", VA = "0x636FDE0")]
	public static NativeText TrimStart(this ref NativeText fs, AllocatorManager.AllocatorHandle allocator)
	{
		return default(NativeText);
	}

	[Token(Token = "0x6000563")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	public static T TrimStart<T>(this ref T fs, ReadOnlySpan<Unicode.Rune> trimRunes) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return (T)null;
	}

	[Token(Token = "0x6000564")]
	[Address(RVA = "0x636FEE0", Offset = "0x636EEE0", VA = "0x636FEE0")]
	public static UnsafeText TrimStart(this ref UnsafeText fs, AllocatorManager.AllocatorHandle allocator, ReadOnlySpan<Unicode.Rune> trimRunes)
	{
		return default(UnsafeText);
	}

	[Token(Token = "0x6000565")]
	[Address(RVA = "0x6370010", Offset = "0x636F010", VA = "0x6370010")]
	public static NativeText TrimStart(this ref NativeText fs, AllocatorManager.AllocatorHandle allocator, ReadOnlySpan<Unicode.Rune> trimRunes)
	{
		return default(NativeText);
	}

	[Token(Token = "0x6000566")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	public static T TrimEnd<T>(this ref T fs) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return (T)null;
	}

	[Token(Token = "0x6000567")]
	[Address(RVA = "0x6370120", Offset = "0x636F120", VA = "0x6370120")]
	public static UnsafeText TrimEnd(this ref UnsafeText fs, AllocatorManager.AllocatorHandle allocator)
	{
		return default(UnsafeText);
	}

	[Token(Token = "0x6000568")]
	[Address(RVA = "0x63701E0", Offset = "0x636F1E0", VA = "0x63701E0")]
	public static NativeText TrimEnd(this ref NativeText fs, AllocatorManager.AllocatorHandle allocator)
	{
		return default(NativeText);
	}

	[Token(Token = "0x6000569")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	public static T TrimEnd<T>(this ref T fs, ReadOnlySpan<Unicode.Rune> trimRunes) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return (T)null;
	}

	[Token(Token = "0x600056A")]
	[Address(RVA = "0x6370280", Offset = "0x636F280", VA = "0x6370280")]
	public static UnsafeText TrimEnd(this ref UnsafeText fs, AllocatorManager.AllocatorHandle allocator, ReadOnlySpan<Unicode.Rune> trimRunes)
	{
		return default(UnsafeText);
	}

	[Token(Token = "0x600056B")]
	[Address(RVA = "0x6370340", Offset = "0x636F340", VA = "0x6370340")]
	public static NativeText TrimEnd(this ref NativeText fs, AllocatorManager.AllocatorHandle allocator, ReadOnlySpan<Unicode.Rune> trimRunes)
	{
		return default(NativeText);
	}

	[Token(Token = "0x600056C")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	public static T Trim<T>(this ref T fs) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return (T)null;
	}

	[Token(Token = "0x600056D")]
	[Address(RVA = "0x63703E0", Offset = "0x636F3E0", VA = "0x63703E0")]
	public static UnsafeText Trim(this ref UnsafeText fs, AllocatorManager.AllocatorHandle allocator)
	{
		return default(UnsafeText);
	}

	[Token(Token = "0x600056E")]
	[Address(RVA = "0x6370540", Offset = "0x636F540", VA = "0x6370540")]
	public static NativeText Trim(this ref NativeText fs, AllocatorManager.AllocatorHandle allocator)
	{
		return default(NativeText);
	}

	[Token(Token = "0x600056F")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	public static T Trim<T>(this ref T fs, ReadOnlySpan<Unicode.Rune> trimRunes) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return (T)null;
	}

	[Token(Token = "0x6000570")]
	[Address(RVA = "0x6370690", Offset = "0x636F690", VA = "0x6370690")]
	public static UnsafeText Trim(this ref UnsafeText fs, AllocatorManager.AllocatorHandle allocator, ReadOnlySpan<Unicode.Rune> trimRunes)
	{
		return default(UnsafeText);
	}

	[Token(Token = "0x6000571")]
	[Address(RVA = "0x6370800", Offset = "0x636F800", VA = "0x6370800")]
	public static NativeText Trim(this ref NativeText fs, AllocatorManager.AllocatorHandle allocator, ReadOnlySpan<Unicode.Rune> trimRunes)
	{
		return default(NativeText);
	}

	[Token(Token = "0x6000572")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	public static T ToLowerAscii<T>(this ref T fs) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return (T)null;
	}

	[Token(Token = "0x6000573")]
	[Address(RVA = "0x6370950", Offset = "0x636F950", VA = "0x6370950")]
	public static UnsafeText ToLowerAscii(this ref UnsafeText fs, AllocatorManager.AllocatorHandle allocator)
	{
		return default(UnsafeText);
	}

	[Token(Token = "0x6000574")]
	[Address(RVA = "0x6370AA0", Offset = "0x636FAA0", VA = "0x6370AA0")]
	public static NativeText ToLowerAscii(this ref NativeText fs, AllocatorManager.AllocatorHandle allocator)
	{
		return default(NativeText);
	}

	[Token(Token = "0x6000575")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	public static T ToUpperAscii<T>(this ref T fs) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return (T)null;
	}

	[Token(Token = "0x6000576")]
	[Address(RVA = "0x6370BD0", Offset = "0x636FBD0", VA = "0x6370BD0")]
	public static UnsafeText ToUpperAscii(this ref UnsafeText fs, AllocatorManager.AllocatorHandle allocator)
	{
		return default(UnsafeText);
	}

	[Token(Token = "0x6000577")]
	[Address(RVA = "0x6370D20", Offset = "0x636FD20", VA = "0x6370D20")]
	public static NativeText ToUpperAscii(this ref NativeText fs, AllocatorManager.AllocatorHandle allocator)
	{
		return default(NativeText);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000578")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	internal static bool ParseLongInternal<T>(ref T fs, ref int offset, out long value) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(bool);
	}

	[Token(Token = "0x6000579")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	public static ParseError Parse<T>(this ref T fs, ref int offset, ref int output) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(ParseError);
	}

	[Token(Token = "0x600057A")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	public static ParseError Parse<T>(this ref T fs, ref int offset, ref uint output) where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(ParseError);
	}

	[Token(Token = "0x600057B")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(FixedString128Bytes) })]
	public static ParseError Parse<T>(this ref T fs, ref int offset, ref float output, char decimalSeparator = '.') where T : struct, INativeList<byte>, IUTF8Bytes
	{
		return default(ParseError);
	}
}
