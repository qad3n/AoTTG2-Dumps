// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.Bitwise
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x635DBE0", Offset = "0x635CBE0", VA = "0x635DBE0")]
	internal static int AlignDown(int value, int alignPow2)
	{
		return default(int);
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x635DBF0", Offset = "0x635CBF0", VA = "0x635DBF0")]
	internal static long AlignDown(long value, int alignPow2)
	{
		return default(long);
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x635DC00", Offset = "0x635CC00", VA = "0x635DC00")]
	internal static int AlignUp(int value, int alignPow2)
	{
		return default(int);
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x635DC10", Offset = "0x635CC10", VA = "0x635DC10")]
	internal static long AlignUp(long value, int alignPow2)
	{
		return default(long);
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x635DC30", Offset = "0x635CC30", VA = "0x635DC30")]
	internal static int FromBool(bool value)
	{
		return default(int);
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x635DC40", Offset = "0x635CC40", VA = "0x635DC40")]
	internal static uint ExtractBits(uint input, int pos, uint mask)
	{
		return default(uint);
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x635DC50", Offset = "0x635CC50", VA = "0x635DC50")]
	internal static uint ReplaceBits(uint input, int pos, uint mask, uint value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x635DC70", Offset = "0x635CC70", VA = "0x635DC70")]
	internal static uint SetBits(uint input, int pos, uint mask, bool value)
	{
		return default(uint);
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x635DC90", Offset = "0x635CC90", VA = "0x635DC90")]
	internal static ulong ExtractBits(ulong input, int pos, ulong mask)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000108")]
	[Address(RVA = "0x635DCA0", Offset = "0x635CCA0", VA = "0x635DCA0")]
	internal static ulong ReplaceBits(ulong input, int pos, ulong mask, ulong value)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000109")]
	[Address(RVA = "0x635DCC0", Offset = "0x635CCC0", VA = "0x635DCC0")]
	internal static ulong SetBits(ulong input, int pos, ulong mask, bool value)
	{
		return default(ulong);
	}

	[Token(Token = "0x600010A")]
	[Address(RVA = "0x635DCF0", Offset = "0x635CCF0", VA = "0x635DCF0")]
	internal static int lzcnt(byte value)
	{
		return default(int);
	}

	[Token(Token = "0x600010B")]
	[Address(RVA = "0x635DD30", Offset = "0x635CD30", VA = "0x635DD30")]
	internal static int tzcnt(byte value)
	{
		return default(int);
	}

	[Token(Token = "0x600010C")]
	[Address(RVA = "0x635DD90", Offset = "0x635CD90", VA = "0x635DD90")]
	internal static int lzcnt(ushort value)
	{
		return default(int);
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x635DDD0", Offset = "0x635CDD0", VA = "0x635DDD0")]
	internal static int tzcnt(ushort value)
	{
		return default(int);
	}

	[Token(Token = "0x600010E")]
	[Address(RVA = "0x635DE30", Offset = "0x635CE30", VA = "0x635DE30")]
	private unsafe static int FindUlong(ulong* ptr, int beginBit, int endBit, int numBits)
	{
		return default(int);
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x635DFD0", Offset = "0x635CFD0", VA = "0x635DFD0")]
	private unsafe static int FindUint(ulong* ptr, int beginBit, int endBit, int numBits)
	{
		return default(int);
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x635E160", Offset = "0x635D160", VA = "0x635E160")]
	private unsafe static int FindUshort(ulong* ptr, int beginBit, int endBit, int numBits)
	{
		return default(int);
	}

	[Token(Token = "0x6000111")]
	[Address(RVA = "0x635E350", Offset = "0x635D350", VA = "0x635E350")]
	private unsafe static int FindByte(ulong* ptr, int beginBit, int endBit, int numBits)
	{
		return default(int);
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x635E550", Offset = "0x635D550", VA = "0x635E550")]
	private unsafe static int FindUpto14bits(ulong* ptr, int beginBit, int endBit, int numBits)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000113")]
	[Address(RVA = "0x635E6E0", Offset = "0x635D6E0", VA = "0x635E6E0")]
	private static ushort sar(ushort val, int shift)
	{
		return default(ushort);
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x635E6F0", Offset = "0x635D6F0", VA = "0x635E6F0")]
	private unsafe static int FindUpto6bits(ulong* ptr, int beginBit, int endBit, int numBits)
	{
		return default(int);
	}

	[Token(Token = "0x6000115")]
	[Address(RVA = "0x635E850", Offset = "0x635D850", VA = "0x635E850")]
	internal unsafe static int FindWithBeginEnd(ulong* ptr, int beginBit, int endBit, int numBits)
	{
		return default(int);
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x635EAB0", Offset = "0x635DAB0", VA = "0x635EAB0")]
	internal unsafe static int Find(ulong* ptr, int pos, int count, int numBits)
	{
		return default(int);
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x635EAC0", Offset = "0x635DAC0", VA = "0x635EAC0")]
	internal unsafe static bool TestNone(ulong* ptr, int length, int pos, int numBits = 1)
	{
		return default(bool);
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x635EB40", Offset = "0x635DB40", VA = "0x635EB40")]
	internal unsafe static bool TestAny(ulong* ptr, int length, int pos, int numBits = 1)
	{
		return default(bool);
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x635EBC0", Offset = "0x635DBC0", VA = "0x635EBC0")]
	internal unsafe static bool TestAll(ulong* ptr, int length, int pos, int numBits = 1)
	{
		return default(bool);
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x635EC50", Offset = "0x635DC50", VA = "0x635EC50")]
	internal unsafe static int CountBits(ulong* ptr, int length, int pos, int numBits = 1)
	{
		return default(int);
	}

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x635EE00", Offset = "0x635DE00", VA = "0x635EE00")]
	internal unsafe static bool IsSet(ulong* ptr, int pos)
	{
		return default(bool);
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x635EE20", Offset = "0x635DE20", VA = "0x635EE20")]
	internal unsafe static ulong GetBits(ulong* ptr, int length, int pos, int numBits = 1)
	{
		return default(ulong);
	}
}
