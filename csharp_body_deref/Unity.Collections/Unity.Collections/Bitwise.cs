// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.Bitwise
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.Collections;

[Token(Token = "0x2000035")]
[GenerateTestsForBurstCompatibility]
internal struct Bitwise
{
	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x29960E0", Offset = "0x29946E0", VA = "0x1829960E0")]
	internal static int AlignDown(int value, int alignPow2)
	{
		return default(int);
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x29960D0", Offset = "0x29946D0", VA = "0x1829960D0")]
	internal static long AlignDown(long value, int alignPow2)
	{
		return default(long);
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x2996110", Offset = "0x2994710", VA = "0x182996110")]
	internal static int AlignUp(int value, int alignPow2)
	{
		return default(int);
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x29960F0", Offset = "0x29946F0", VA = "0x1829960F0")]
	internal static long AlignUp(long value, int alignPow2)
	{
		return default(long);
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x1A82F60", Offset = "0x1A81560", VA = "0x181A82F60")]
	internal static int FromBool(bool value)
	{
		return default(int);
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x29963A0", Offset = "0x29949A0", VA = "0x1829963A0")]
	internal static uint ExtractBits(uint input, int pos, uint mask)
	{
		return default(uint);
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x29973F0", Offset = "0x29959F0", VA = "0x1829973F0")]
	internal static uint ReplaceBits(uint input, int pos, uint mask, uint value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x2997410", Offset = "0x2995A10", VA = "0x182997410")]
	internal static uint SetBits(uint input, int pos, uint mask, bool value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x2996390", Offset = "0x2994990", VA = "0x182996390")]
	internal static ulong ExtractBits(ulong input, int pos, ulong mask)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x29973C0", Offset = "0x29959C0", VA = "0x1829973C0")]
	internal static ulong ReplaceBits(ulong input, int pos, ulong mask, ulong value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x2997440", Offset = "0x2995A40", VA = "0x182997440")]
	internal static ulong SetBits(ulong input, int pos, ulong mask, bool value)
	{
		return default(ulong);
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x2997680", Offset = "0x2995C80", VA = "0x182997680")]
	internal static int lzcnt(byte value)
	{
		return default(int);
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x2997730", Offset = "0x2995D30", VA = "0x182997730")]
	internal static int tzcnt(byte value)
	{
		return default(int);
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x29976D0", Offset = "0x2995CD0", VA = "0x1829976D0")]
	internal static int lzcnt(ushort value)
	{
		return default(int);
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x2997780", Offset = "0x2995D80", VA = "0x182997780")]
	internal static int tzcnt(ushort value)
	{
		return default(int);
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x2996650", Offset = "0x2994C50", VA = "0x182996650")]
	private unsafe static int FindUlong(ulong* ptr, int beginBit, int endBit, int numBits)
	{
		return default(int);
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x29964D0", Offset = "0x2994AD0", VA = "0x1829964D0")]
	private unsafe static int FindUint(ulong* ptr, int beginBit, int endBit, int numBits)
	{
		return default(int);
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x2996A60", Offset = "0x2995060", VA = "0x182996A60")]
	private unsafe static int FindUshort(ulong* ptr, int beginBit, int endBit, int numBits)
	{
		return default(int);
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x29963B0", Offset = "0x29949B0", VA = "0x1829963B0")]
	private unsafe static int FindByte(ulong* ptr, int beginBit, int endBit, int numBits)
	{
		return default(int);
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x29967F0", Offset = "0x2994DF0", VA = "0x1829967F0")]
	private unsafe static int FindUpto14bits(ulong* ptr, int beginBit, int endBit, int numBits)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000113")]
	[Address(RVA = "0x2997720", Offset = "0x2995D20", VA = "0x182997720")]
	private static ushort sar(ushort val, int shift)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x2996910", Offset = "0x2994F10", VA = "0x182996910")]
	private unsafe static int FindUpto6bits(ulong* ptr, int beginBit, int endBit, int numBits)
	{
		return default(int);
	}

	[Token(Token = "0x6000115")]
	[Address(RVA = "0x2996B70", Offset = "0x2995170", VA = "0x182996B70")]
	internal unsafe static int FindWithBeginEnd(ulong* ptr, int beginBit, int endBit, int numBits)
	{
		return default(int);
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x29972C0", Offset = "0x29958C0", VA = "0x1829972C0")]
	internal unsafe static int Find(ulong* ptr, int pos, int count, int numBits)
	{
		return default(int);
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x29975D0", Offset = "0x2995BD0", VA = "0x1829975D0")]
	internal unsafe static bool TestNone(ulong* ptr, int length, int pos, int numBits = 1)
	{
		return default(bool);
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x2997520", Offset = "0x2995B20", VA = "0x182997520")]
	internal unsafe static bool TestAny(ulong* ptr, int length, int pos, int numBits = 1)
	{
		return default(bool);
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x2997470", Offset = "0x2995A70", VA = "0x182997470")]
	internal unsafe static bool TestAll(ulong* ptr, int length, int pos, int numBits = 1)
	{
		return default(bool);
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x2996120", Offset = "0x2994720", VA = "0x182996120")]
	internal unsafe static int CountBits(ulong* ptr, int length, int pos, int numBits = 1)
	{
		return default(int);
	}

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x29973A0", Offset = "0x29959A0", VA = "0x1829973A0")]
	internal unsafe static bool IsSet(ulong* ptr, int pos)
	{
		return default(bool);
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x29972E0", Offset = "0x29958E0", VA = "0x1829972E0")]
	internal unsafe static ulong GetBits(ulong* ptr, int length, int pos, int numBits = 1)
	{
		return default(ulong);
	}
}
