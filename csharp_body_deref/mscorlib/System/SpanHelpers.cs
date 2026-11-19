// ==================== AoTTG2 cross-reference ====================
// Type: System.SpanHelpers
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Globalization;
using System.Numerics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x200010B")]
internal static class SpanHelpers
{
	[Token(Token = "0x6000A07")]
	[Address(RVA = "0x54D1900", Offset = "0x54D0900", VA = "0x54D1900")]
	public static int IndexOf(ref byte searchSpace, int searchSpaceLength, ref byte value, int valueLength)
	{
		return default(int);
	}

	[Token(Token = "0x6000A08")]
	[Address(RVA = "0x54D1C60", Offset = "0x54D0C60", VA = "0x54D1C60")]
	public static int IndexOfAny(ref byte searchSpace, int searchSpaceLength, ref byte value, int valueLength)
	{
		return default(int);
	}

	[Token(Token = "0x6000A09")]
	[Address(RVA = "0x54D19F0", Offset = "0x54D09F0", VA = "0x54D19F0")]
	public static int IndexOf(ref byte searchSpace, byte value, int length)
	{
		return default(int);
	}

	[Token(Token = "0x6000A0A")]
	[Address(RVA = "0x54D1CD0", Offset = "0x54D0CD0", VA = "0x54D1CD0")]
	public static bool SequenceEqual(ref byte first, ref byte second, ulong length)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A0B")]
	[Address(RVA = "0x54D1DF0", Offset = "0x54D0DF0", VA = "0x54D1DF0")]
	public static int SequenceCompareTo(ref char first, int firstLength, ref char second, int secondLength)
	{
		return default(int);
	}

	[Token(Token = "0x6000A0C")]
	[Address(RVA = "0x54D2370", Offset = "0x54D1370", VA = "0x54D2370")]
	public static int IndexOf(ref char searchSpace, char value, int length)
	{
		return default(int);
	}

	[Token(Token = "0x6000A0D")]
	[Address(RVA = "0x54D2CF0", Offset = "0x54D1CF0", VA = "0x54D2CF0")]
	public static int LastIndexOf(ref char searchSpace, char value, int length)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A0E")]
	[Address(RVA = "0x54D35E0", Offset = "0x54D25E0", VA = "0x54D35E0")]
	private static int LocateFirstFoundChar(Vector<ushort> match)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A0F")]
	[Address(RVA = "0x54D3860", Offset = "0x54D2860", VA = "0x54D3860")]
	private static int LocateFirstFoundChar(ulong match)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A10")]
	[Address(RVA = "0x54D3880", Offset = "0x54D2880", VA = "0x54D3880")]
	private static int LocateLastFoundChar(Vector<ushort> match)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000A11")]
	[Address(RVA = "0x54D3AF0", Offset = "0x54D2AF0", VA = "0x54D3AF0")]
	private static int LocateLastFoundChar(ulong match)
	{
		return default(int);
	}

	[Token(Token = "0x6000A12")]
	public static int IndexOf<T>(ref T searchSpace, int searchSpaceLength, ref T value, int valueLength) where T : IEquatable<T>
	{
		return default(int);
	}

	[Token(Token = "0x6000A13")]
	public static int IndexOf<T>(ref T searchSpace, T value, int length) where T : IEquatable<T>
	{
		return default(int);
	}

	[Token(Token = "0x6000A14")]
	public static int IndexOfAny<T>(ref T searchSpace, int searchSpaceLength, ref T value, int valueLength) where T : IEquatable<T>
	{
		return default(int);
	}

	[Token(Token = "0x6000A15")]
	public static bool SequenceEqual<T>(ref T first, ref T second, int length) where T : IEquatable<T>
	{
		return default(bool);
	}

	[Token(Token = "0x6000A16")]
	[Address(RVA = "0x54D3B10", Offset = "0x54D2B10", VA = "0x54D3B10")]
	public static int IndexOfCultureHelper(ReadOnlySpan<char> span, ReadOnlySpan<char> value, CompareInfo compareInfo)
	{
		return default(int);
	}

	[Token(Token = "0x6000A17")]
	[Address(RVA = "0x54D3C80", Offset = "0x54D2C80", VA = "0x54D3C80")]
	public static int IndexOfCultureIgnoreCaseHelper(ReadOnlySpan<char> span, ReadOnlySpan<char> value, CompareInfo compareInfo)
	{
		return default(int);
	}

	[Token(Token = "0x6000A18")]
	[Address(RVA = "0x54D3DF0", Offset = "0x54D2DF0", VA = "0x54D3DF0")]
	public static int IndexOfOrdinalHelper(ReadOnlySpan<char> span, ReadOnlySpan<char> value, bool ignoreCase)
	{
		return default(int);
	}

	[Token(Token = "0x6000A19")]
	[Address(RVA = "0x54D3F60", Offset = "0x54D2F60", VA = "0x54D3F60")]
	public static bool StartsWithCultureHelper(ReadOnlySpan<char> span, ReadOnlySpan<char> value, CompareInfo compareInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A1A")]
	[Address(RVA = "0x54D40C0", Offset = "0x54D30C0", VA = "0x54D40C0")]
	public static bool StartsWithCultureIgnoreCaseHelper(ReadOnlySpan<char> span, ReadOnlySpan<char> value, CompareInfo compareInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A1B")]
	[Address(RVA = "0x54D4200", Offset = "0x54D3200", VA = "0x54D4200")]
	public static bool StartsWithOrdinalIgnoreCaseHelper(ReadOnlySpan<char> span, ReadOnlySpan<char> value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A1C")]
	[Address(RVA = "0x54D42D0", Offset = "0x54D32D0", VA = "0x54D42D0")]
	public static bool EndsWithCultureHelper(ReadOnlySpan<char> span, ReadOnlySpan<char> value, CompareInfo compareInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A1D")]
	[Address(RVA = "0x54D4430", Offset = "0x54D3430", VA = "0x54D4430")]
	public static bool EndsWithCultureIgnoreCaseHelper(ReadOnlySpan<char> span, ReadOnlySpan<char> value, CompareInfo compareInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A1E")]
	[Address(RVA = "0x54D4570", Offset = "0x54D3570", VA = "0x54D4570")]
	public static bool EndsWithOrdinalIgnoreCaseHelper(ReadOnlySpan<char> span, ReadOnlySpan<char> value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000A1F")]
	[Address(RVA = "0x54D4640", Offset = "0x54D3640", VA = "0x54D4640")]
	public static void ClearWithoutReferences(ref byte b, ulong byteLength)
	{
	}

	[Token(Token = "0x6000A20")]
	[Address(RVA = "0x54D48F0", Offset = "0x54D38F0", VA = "0x54D48F0")]
	public static void ClearWithReferences(ref IntPtr ip, ulong pointerSizeLength)
	{
	}
}
