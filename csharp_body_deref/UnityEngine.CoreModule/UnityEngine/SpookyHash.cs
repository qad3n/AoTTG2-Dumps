using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000109")]
internal static class SpookyHash
{
	[StructLayout((LayoutKind)2)]
	[Token(Token = "0x200010A")]
	private struct U
	{
		[Token(Token = "0x4000359")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public unsafe byte* p8;

		[Token(Token = "0x400035A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public unsafe uint* p32;

		[Token(Token = "0x400035B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public unsafe ulong* p64;

		[Token(Token = "0x400035C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public ulong i;

		[Token(Token = "0x600074C")]
		[Address(RVA = "0x4ABBDF0", Offset = "0x4ABBDF0", VA = "0x4ABBDF0")]
		public unsafe U(ushort* p8)
		{
		}
	}

	[Token(Token = "0x4000358")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly bool AllowUnalignedRead;

	[Token(Token = "0x6000741")]
	[Address(RVA = "0x4ABB980", Offset = "0x4ABB980", VA = "0x4ABB980")]
	private static bool AttemptDetectAllowUnalignedRead()
	{
		return default(bool);
	}

	[Token(Token = "0x6000742")]
	[Address(RVA = "0x4ABB610", Offset = "0x4ABB610", VA = "0x4ABB610")]
	public unsafe static void Hash(void* message, ulong length, ulong* hash1, ulong* hash2)
	{
	}

	[Token(Token = "0x6000743")]
	[Address(RVA = "0x4ABC1A0", Offset = "0x4ABC1A0", VA = "0x4ABC1A0")]
	private unsafe static void End(ulong* data, ref ulong h0, ref ulong h1, ref ulong h2, ref ulong h3, ref ulong h4, ref ulong h5, ref ulong h6, ref ulong h7, ref ulong h8, ref ulong h9, ref ulong h10, ref ulong h11)
	{
	}

	[Token(Token = "0x6000744")]
	[Address(RVA = "0x4ABC3C0", Offset = "0x4ABC3C0", VA = "0x4ABC3C0")]
	private static void EndPartial(ref ulong h0, ref ulong h1, ref ulong h2, ref ulong h3, ref ulong h4, ref ulong h5, ref ulong h6, ref ulong h7, ref ulong h8, ref ulong h9, ref ulong h10, ref ulong h11)
	{
	}

	[Token(Token = "0x6000745")]
	[Address(RVA = "0x4ABC550", Offset = "0x4ABC550", VA = "0x4ABC550")]
	private static void Rot64(ref ulong x, int k)
	{
	}

	[Token(Token = "0x6000746")]
	[Address(RVA = "0x4ABB9F0", Offset = "0x4ABB9F0", VA = "0x4ABB9F0")]
	private unsafe static void Short(void* message, ulong length, ulong* hash1, ulong* hash2)
	{
	}

	[Token(Token = "0x6000747")]
	[Address(RVA = "0x4ABC560", Offset = "0x4ABC560", VA = "0x4ABC560")]
	private static void ShortMix(ref ulong h0, ref ulong h1, ref ulong h2, ref ulong h3)
	{
	}

	[Token(Token = "0x6000748")]
	[Address(RVA = "0x4ABC6B0", Offset = "0x4ABC6B0", VA = "0x4ABC6B0")]
	private static void ShortEnd(ref ulong h0, ref ulong h1, ref ulong h2, ref ulong h3)
	{
	}

	[Token(Token = "0x6000749")]
	[Address(RVA = "0x4ABBE00", Offset = "0x4ABBE00", VA = "0x4ABBE00")]
	private unsafe static void Mix(ulong* data, ref ulong s0, ref ulong s1, ref ulong s2, ref ulong s3, ref ulong s4, ref ulong s5, ref ulong s6, ref ulong s7, ref ulong s8, ref ulong s9, ref ulong s10, ref ulong s11)
	{
	}

	[Token(Token = "0x600074A")]
	[Address(RVA = "0x4ABC040", Offset = "0x4ABC040", VA = "0x4ABC040")]
	private unsafe static void memset(void* dst, int value, ulong numberOfBytes)
	{
	}
}
