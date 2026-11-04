// ==================== AoTTG2 cross-reference ====================
// Type: System.SpanHelpers
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using System.Numerics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x2000133")]
internal static class SpanHelpers
{
	[Token(Token = "0x6000A2B")]
	[Address(RVA = "0x1B4B730", Offset = "0x1B49D30", VA = "0x181B4B730")]
	public static int IndexOf(ref byte searchSpace, int searchSpaceLength, ref byte value, int valueLength)
	{
		return default(int);
	}

	[Token(Token = "0x6000A2C")]
	[Address(RVA = "0x1B4AEE0", Offset = "0x1B494E0", VA = "0x181B4AEE0")]
	public static int IndexOfAny(ref byte searchSpace, int searchSpaceLength, ref byte value, int valueLength)
	{
		return default(int);
	}

	[Token(Token = "0x6000A2D")]
	[Address(RVA = "0x1B4B810", Offset = "0x1B49E10", VA = "0x181B4B810")]
	public static int IndexOf(ref byte searchSpace, byte value, int length)
	{
		return default(int);
	}

	[Token(Token = "0x6000A2E")]
	[Address(RVA = "0x1B4C560", Offset = "0x1B4AB60", VA = "0x181B4C560")]
	public static bool SequenceEqual(ref byte first, ref byte second, ulong length)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A2F")]
	[Address(RVA = "0x1B4C150", Offset = "0x1B4A750", VA = "0x181B4C150")]
	public static int SequenceCompareTo(ref char first, int firstLength, ref char second, int secondLength)
	{
		return default(int);
	}

	[Token(Token = "0x6000A30")]
	[Address(RVA = "0x1B4B350", Offset = "0x1B49950", VA = "0x181B4B350")]
	public static int IndexOf(ref char searchSpace, char value, int length)
	{
		return default(int);
	}

	[Token(Token = "0x6000A31")]
	[Address(RVA = "0x1B4BA90", Offset = "0x1B4A090", VA = "0x181B4BA90")]
	public static int LastIndexOf(ref char searchSpace, char value, int length)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A32")]
	[Address(RVA = "0x1B4BE80", Offset = "0x1B4A480", VA = "0x181B4BE80")]
	private static int LocateFirstFoundChar(Vector<ushort> match)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A33")]
	[Address(RVA = "0x1B4BE60", Offset = "0x1B4A460", VA = "0x181B4BE60")]
	private static int LocateFirstFoundChar(ulong match)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A34")]
	[Address(RVA = "0x1B4BFE0", Offset = "0x1B4A5E0", VA = "0x181B4BFE0")]
	private static int LocateLastFoundChar(Vector<ushort> match)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A35")]
	[Address(RVA = "0x1B4C130", Offset = "0x1B4A730", VA = "0x181B4C130")]
	private static int LocateLastFoundChar(ulong match)
	{
		return default(int);
	}

	[Token(Token = "0x6000A36")]
	public static int IndexOf<T>(ref T searchSpace, int searchSpaceLength, ref T value, int valueLength) where T : IEquatable<T>
	{
		return default(int);
	}

	[Token(Token = "0x6000A37")]
	public static int IndexOf<T>(ref T searchSpace, T value, int length) where T : IEquatable<T>
	{
		return default(int);
	}

	[Token(Token = "0x6000A38")]
	public static int IndexOfAny<T>(ref T searchSpace, int searchSpaceLength, ref T value, int valueLength) where T : IEquatable<T>
	{
		return default(int);
	}

	[Token(Token = "0x6000A39")]
	public static bool SequenceEqual<T>(ref T first, ref T second, int length) where T : IEquatable<T>
	{
		return default(bool);
	}

	[Token(Token = "0x6000A3A")]
	[Address(RVA = "0x1B4AF80", Offset = "0x1B49580", VA = "0x181B4AF80")]
	public static int IndexOfCultureHelper(ReadOnlySpan<char> span, ReadOnlySpan<char> value, CompareInfo compareInfo)
	{
		return default(int);
	}

	[Token(Token = "0x6000A3B")]
	[Address(RVA = "0x1B4B0B0", Offset = "0x1B496B0", VA = "0x181B4B0B0")]
	public static int IndexOfCultureIgnoreCaseHelper(ReadOnlySpan<char> span, ReadOnlySpan<char> value, CompareInfo compareInfo)
	{
		return default(int);
	}

	[Token(Token = "0x6000A3C")]
	[Address(RVA = "0x1B4B1F0", Offset = "0x1B497F0", VA = "0x181B4B1F0")]
	public static int IndexOfOrdinalHelper(ReadOnlySpan<char> span, ReadOnlySpan<char> value, bool ignoreCase)
	{
		return default(int);
	}

	[Token(Token = "0x6000A3D")]
	[Address(RVA = "0x1B4C6B0", Offset = "0x1B4ACB0", VA = "0x181B4C6B0")]
	public static bool StartsWithCultureHelper(ReadOnlySpan<char> span, ReadOnlySpan<char> value, CompareInfo compareInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A3E")]
	[Address(RVA = "0x1B4C8F0", Offset = "0x1B4AEF0", VA = "0x181B4C8F0")]
	public static bool StartsWithCultureIgnoreCaseHelper(ReadOnlySpan<char> span, ReadOnlySpan<char> value, CompareInfo compareInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A3F")]
	[Address(RVA = "0x1B4CAF0", Offset = "0x1B4B0F0", VA = "0x181B4CAF0")]
	public static bool StartsWithOrdinalIgnoreCaseHelper(ReadOnlySpan<char> span, ReadOnlySpan<char> value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A40")]
	[Address(RVA = "0x1B4A980", Offset = "0x1B48F80", VA = "0x181B4A980")]
	public static bool EndsWithCultureHelper(ReadOnlySpan<char> span, ReadOnlySpan<char> value, CompareInfo compareInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A41")]
	[Address(RVA = "0x1B4ABD0", Offset = "0x1B491D0", VA = "0x181B4ABD0")]
	public static bool EndsWithCultureIgnoreCaseHelper(ReadOnlySpan<char> span, ReadOnlySpan<char> value, CompareInfo compareInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A42")]
	[Address(RVA = "0x1B4ADE0", Offset = "0x1B493E0", VA = "0x181B4ADE0")]
	public static bool EndsWithOrdinalIgnoreCaseHelper(ReadOnlySpan<char> span, ReadOnlySpan<char> value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A43")]
	[Address(RVA = "0x1B4A720", Offset = "0x1B48D20", VA = "0x181B4A720")]
	public static void ClearWithoutReferences(ref byte b, ulong byteLength)
	{
	}

	[Token(Token = "0x6000A44")]
	[Address(RVA = "0x1B4A5F0", Offset = "0x1B48BF0", VA = "0x181B4A5F0")]
	public static void ClearWithReferences(ref IntPtr ip, ulong pointerSizeLength)
	{
	}
}
