using System.Globalization;
using System.Numerics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x200010B")]
internal static class SpanHelpers
{
	[Token(Token = "0x60009EB")]
	[Address(RVA = "0x4FE8280", Offset = "0x4FE8280", VA = "0x4FE8280")]
	public static int IndexOfAny(ref byte searchSpace, int searchSpaceLength, ref byte value, int valueLength)
	{
		return default(int);
	}

	[Token(Token = "0x60009EC")]
	[Address(RVA = "0x4FE82F0", Offset = "0x4FE82F0", VA = "0x4FE82F0")]
	public static int IndexOf(ref byte searchSpace, byte value, int length)
	{
		return default(int);
	}

	[Token(Token = "0x60009ED")]
	[Address(RVA = "0x4FE8580", Offset = "0x4FE8580", VA = "0x4FE8580")]
	public static bool SequenceEqual(ref byte first, ref byte second, ulong length)
	{
		return default(bool);
	}

	[Token(Token = "0x60009EE")]
	[Address(RVA = "0x4FE86A0", Offset = "0x4FE86A0", VA = "0x4FE86A0")]
	public static int SequenceCompareTo(ref char first, int firstLength, ref char second, int secondLength)
	{
		return default(int);
	}

	[Token(Token = "0x60009EF")]
	[Address(RVA = "0x4FE8DB0", Offset = "0x4FE8DB0", VA = "0x4FE8DB0")]
	public static int IndexOf(ref char searchSpace, char value, int length)
	{
		return default(int);
	}

	[Token(Token = "0x60009F0")]
	[Address(RVA = "0x4FE9740", Offset = "0x4FE9740", VA = "0x4FE9740")]
	public static int LastIndexOf(ref char searchSpace, char value, int length)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009F1")]
	[Address(RVA = "0x4FEA050", Offset = "0x4FEA050", VA = "0x4FEA050")]
	private static int LocateFirstFoundChar(Vector<ushort> match)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009F2")]
	[Address(RVA = "0x4FEA2F0", Offset = "0x4FEA2F0", VA = "0x4FEA2F0")]
	private static int LocateFirstFoundChar(ulong match)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009F3")]
	[Address(RVA = "0x4FEA310", Offset = "0x4FEA310", VA = "0x4FEA310")]
	private static int LocateLastFoundChar(Vector<ushort> match)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60009F4")]
	[Address(RVA = "0x4FEA590", Offset = "0x4FEA590", VA = "0x4FEA590")]
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
	[Address(RVA = "0x4FEA5B0", Offset = "0x4FEA5B0", VA = "0x4FEA5B0")]
	public static bool StartsWithCultureHelper(ReadOnlySpan<char> span, ReadOnlySpan<char> value, CompareInfo compareInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x60009F9")]
	[Address(RVA = "0x4FEA710", Offset = "0x4FEA710", VA = "0x4FEA710")]
	public static bool StartsWithCultureIgnoreCaseHelper(ReadOnlySpan<char> span, ReadOnlySpan<char> value, CompareInfo compareInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x60009FA")]
	[Address(RVA = "0x4FEA850", Offset = "0x4FEA850", VA = "0x4FEA850")]
	public static bool StartsWithOrdinalIgnoreCaseHelper(ReadOnlySpan<char> span, ReadOnlySpan<char> value)
	{
		return default(bool);
	}

	[Token(Token = "0x60009FB")]
	[Address(RVA = "0x4FEA900", Offset = "0x4FEA900", VA = "0x4FEA900")]
	public static bool EndsWithCultureHelper(ReadOnlySpan<char> span, ReadOnlySpan<char> value, CompareInfo compareInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x60009FC")]
	[Address(RVA = "0x4FEAA60", Offset = "0x4FEAA60", VA = "0x4FEAA60")]
	public static bool EndsWithCultureIgnoreCaseHelper(ReadOnlySpan<char> span, ReadOnlySpan<char> value, CompareInfo compareInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x60009FD")]
	[Address(RVA = "0x4FEABA0", Offset = "0x4FEABA0", VA = "0x4FEABA0")]
	public static bool EndsWithOrdinalIgnoreCaseHelper(ReadOnlySpan<char> span, ReadOnlySpan<char> value)
	{
		return default(bool);
	}

	[Token(Token = "0x60009FE")]
	[Address(RVA = "0x4FEAC60", Offset = "0x4FEAC60", VA = "0x4FEAC60")]
	public static void ClearWithoutReferences(ref byte b, ulong byteLength)
	{
	}

	[Token(Token = "0x60009FF")]
	[Address(RVA = "0x4FEAE70", Offset = "0x4FEAE70", VA = "0x4FEAE70")]
	public static void ClearWithReferences(ref IntPtr ip, ulong pointerSizeLength)
	{
	}
}
