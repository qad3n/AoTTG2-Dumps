// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.SpookyHash
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000132")]
internal static class SpookyHash
{
	[StructLayout((LayoutKind)2)]
	[Token(Token = "0x2000133")]
	private struct U
	{
		[Token(Token = "0x40003BC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public unsafe byte* p8;

		[Token(Token = "0x40003BD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public unsafe uint* p32;

		[Token(Token = "0x40003BE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public unsafe ulong* p64;

		[Token(Token = "0x40003BF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public ulong i;

		[Token(Token = "0x60009ED")]
		[Address(RVA = "0x68FAB60", Offset = "0x68F9B60", VA = "0x68FAB60")]
		public unsafe U(ushort* p8)
		{
		}
	}

	[Token(Token = "0x60009E5")]
	[Address(RVA = "0x68FA380", Offset = "0x68F9380", VA = "0x68FA380")]
	public unsafe static void Hash(void* message, ulong length, ulong* hash1, ulong* hash2)
	{
	}

	[Token(Token = "0x60009E6")]
	[Address(RVA = "0x68FAD00", Offset = "0x68F9D00", VA = "0x68FAD00")]
	private unsafe static void End(ulong* data, ref ulong h0, ref ulong h1, ref ulong h2, ref ulong h3, ref ulong h4, ref ulong h5, ref ulong h6, ref ulong h7, ref ulong h8, ref ulong h9, ref ulong h10, ref ulong h11)
	{
	}

	[Token(Token = "0x60009E7")]
	[Address(RVA = "0x68FAE60", Offset = "0x68F9E60", VA = "0x68FAE60")]
	private static void EndPartial(ref ulong h0, ref ulong h1, ref ulong h2, ref ulong h3, ref ulong h4, ref ulong h5, ref ulong h6, ref ulong h7, ref ulong h8, ref ulong h9, ref ulong h10, ref ulong h11)
	{
	}

	[Token(Token = "0x60009E8")]
	[Address(RVA = "0x68FAF60", Offset = "0x68F9F60", VA = "0x68FAF60")]
	private static void Rot64(ref ulong x, int k)
	{
	}

	[Token(Token = "0x60009E9")]
	[Address(RVA = "0x68FA800", Offset = "0x68F9800", VA = "0x68FA800")]
	private unsafe static void Short(void* message, ulong length, ulong* hash1, ulong* hash2)
	{
	}

	[Token(Token = "0x60009EA")]
	[Address(RVA = "0x68FAF70", Offset = "0x68F9F70", VA = "0x68FAF70")]
	private static void ShortMix(ref ulong h0, ref ulong h1, ref ulong h2, ref ulong h3)
	{
	}

	[Token(Token = "0x60009EB")]
	[Address(RVA = "0x68FB060", Offset = "0x68FA060", VA = "0x68FB060")]
	private static void ShortEnd(ref ulong h0, ref ulong h1, ref ulong h2, ref ulong h3)
	{
	}

	[Token(Token = "0x60009EC")]
	[Address(RVA = "0x68FAB70", Offset = "0x68F9B70", VA = "0x68FAB70")]
	private unsafe static void Mix(ulong* data, ref ulong s0, ref ulong s1, ref ulong s2, ref ulong s3, ref ulong s4, ref ulong s5, ref ulong s6, ref ulong s7, ref ulong s8, ref ulong s9, ref ulong s10, ref ulong s11)
	{
	}
}
