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
	[Token(Token = "0x60009EB")]
	[Address(RVA = "0x3CCDDA0", Offset = "0x3CCDDA0", VA = "0x3CCDDA0")]
	public static int IndexOfAny(ref byte searchSpace, int searchSpaceLength, ref byte value, int valueLength)
	{
		return default(int);
	}

	[Token(Token = "0x60009EC")]
	[Address(RVA = "0x3CCDE10", Offset = "0x3CCDE10", VA = "0x3CCDE10")]
	public static int IndexOf(ref byte searchSpace, byte value, int length)
	{
		return default(int);
	}

	[Token(Token = "0x60009ED")]
	[Address(RVA = "0x3CCE0A0", Offset = "0x3CCE0A0", VA = "0x3CCE0A0")]
	public static bool SequenceEqual(ref byte first, ref byte second, ulong length)
	{
		return default(bool);
	}

	[Token(Token = "0x60009EE")]
	[Address(RVA = "0x3CCE1C0", Offset = "0x3CCE1C0", VA = "0x3CCE1C0")]
	public static int SequenceCompareTo(ref char first, int firstLength, ref char second, int secondLength)
	{
		return default(int);
	}

	[Token(Token = "0x60009EF")]
	[Address(RVA = "0x3CCE8D0", Offset = "0x3CCE8D0", VA = "0x3CCE8D0")]
	public static int IndexOf(ref char searchSpace, char value, int length)
	{
		return default(int);
	}

	[Token(Token = "0x60009F0")]
	[Address(RVA = "0x3CCF260", Offset = "0x3CCF260", VA = "0x3CCF260")]
	public static int LastIndexOf(ref char searchSpace, char value, int length)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009F1")]
	[Address(RVA = "0x3CCFB70", Offset = "0x3CCFB70", VA = "0x3CCFB70")]
	private static int LocateFirstFoundChar(Vector<ushort> match)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009F2")]
	[Address(RVA = "0x3CCFE10", Offset = "0x3CCFE10", VA = "0x3CCFE10")]
	private static int LocateFirstFoundChar(ulong match)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009F3")]
	[Address(RVA = "0x3CCFE30", Offset = "0x3CCFE30", VA = "0x3CCFE30")]
	private static int LocateLastFoundChar(Vector<ushort> match)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009F4")]
	[Address(RVA = "0x3CD00B0", Offset = "0x3CD00B0", VA = "0x3CD00B0")]
	private static int LocateLastFoundChar(ulong match)
	{
		return default(int);
	}

	[Token(Token = "0x60009F5")]
	public static int IndexOf<T>(ref T searchSpace, T value, int length) where T : IEquatable<T>
	{
		return default(int);
	}

	[Token(Token = "0x60009F6")]
	public static int IndexOfAny<T>(ref T searchSpace, int searchSpaceLength, ref T value, int valueLength) where T : IEquatable<T>
	{
		return default(int);
	}

	[Token(Token = "0x60009F7")]
	public static bool SequenceEqual<T>(ref T first, ref T second, int length) where T : IEquatable<T>
	{
		return default(bool);
	}

	[Token(Token = "0x60009F8")]
	[Address(RVA = "0x3CD00D0", Offset = "0x3CD00D0", VA = "0x3CD00D0")]
	public static bool StartsWithCultureHelper(ReadOnlySpan<char> span, ReadOnlySpan<char> value, CompareInfo compareInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x60009F9")]
	[Address(RVA = "0x3CD0230", Offset = "0x3CD0230", VA = "0x3CD0230")]
	public static bool StartsWithCultureIgnoreCaseHelper(ReadOnlySpan<char> span, ReadOnlySpan<char> value, CompareInfo compareInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x60009FA")]
	[Address(RVA = "0x3CD0370", Offset = "0x3CD0370", VA = "0x3CD0370")]
	public static bool StartsWithOrdinalIgnoreCaseHelper(ReadOnlySpan<char> span, ReadOnlySpan<char> value)
	{
		return default(bool);
	}

	[Token(Token = "0x60009FB")]
	[Address(RVA = "0x3CD0420", Offset = "0x3CD0420", VA = "0x3CD0420")]
	public static bool EndsWithCultureHelper(ReadOnlySpan<char> span, ReadOnlySpan<char> value, CompareInfo compareInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x60009FC")]
	[Address(RVA = "0x3CD0580", Offset = "0x3CD0580", VA = "0x3CD0580")]
	public static bool EndsWithCultureIgnoreCaseHelper(ReadOnlySpan<char> span, ReadOnlySpan<char> value, CompareInfo compareInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x60009FD")]
	[Address(RVA = "0x3CD06C0", Offset = "0x3CD06C0", VA = "0x3CD06C0")]
	public static bool EndsWithOrdinalIgnoreCaseHelper(ReadOnlySpan<char> span, ReadOnlySpan<char> value)
	{
		return default(bool);
	}

	[Token(Token = "0x60009FE")]
	[Address(RVA = "0x3CD0780", Offset = "0x3CD0780", VA = "0x3CD0780")]
	public static void ClearWithoutReferences(ref byte b, ulong byteLength)
	{
	}

	[Token(Token = "0x60009FF")]
	[Address(RVA = "0x3CD0990", Offset = "0x3CD0990", VA = "0x3CD0990")]
	public static void ClearWithReferences(ref IntPtr ip, ulong pointerSizeLength)
	{
	}
}
