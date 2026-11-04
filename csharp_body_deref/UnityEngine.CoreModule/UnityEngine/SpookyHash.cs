// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.SpookyHash
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000131")]
internal static class SpookyHash
{
	[StructLayout((LayoutKind)2)]
	[Token(Token = "0x2000132")]
	private struct U
	{
		[Token(Token = "0x40003B7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public unsafe byte* p8;

		[Token(Token = "0x40003B8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public unsafe uint* p32;

		[Token(Token = "0x40003B9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public unsafe ulong* p64;

		[Token(Token = "0x40003BA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public ulong i;

		[Token(Token = "0x60009DC")]
		[Address(RVA = "0xB546E0", Offset = "0xB52CE0", VA = "0x180B546E0")]
		public unsafe U(ushort* p8)
		{
		}
	}

	[Token(Token = "0x60009D4")]
	[Address(RVA = "0x2F091F0", Offset = "0x2F077F0", VA = "0x182F091F0")]
	public unsafe static void Hash(void* message, ulong length, ulong* hash1, ulong* hash2)
	{
	}

	[Token(Token = "0x60009D5")]
	[Address(RVA = "0x2F09000", Offset = "0x2F07600", VA = "0x182F09000")]
	private unsafe static void End(ulong* data, ref ulong h0, ref ulong h1, ref ulong h2, ref ulong h3, ref ulong h4, ref ulong h5, ref ulong h6, ref ulong h7, ref ulong h8, ref ulong h9, ref ulong h10, ref ulong h11)
	{
	}

	[Token(Token = "0x60009D6")]
	[Address(RVA = "0x2F08E30", Offset = "0x2F07430", VA = "0x182F08E30")]
	private static void EndPartial(ref ulong h0, ref ulong h1, ref ulong h2, ref ulong h3, ref ulong h4, ref ulong h5, ref ulong h6, ref ulong h7, ref ulong h8, ref ulong h9, ref ulong h10, ref ulong h11)
	{
	}

	[Token(Token = "0x60009D7")]
	[Address(RVA = "0x2EDB320", Offset = "0x2ED9920", VA = "0x182EDB320")]
	private static void Rot64(ref ulong x, int k)
	{
	}

	[Token(Token = "0x60009D8")]
	[Address(RVA = "0x2F09C90", Offset = "0x2F08290", VA = "0x182F09C90")]
	private unsafe static void Short(void* message, ulong length, ulong* hash1, ulong* hash2)
	{
	}

	[Token(Token = "0x60009D9")]
	[Address(RVA = "0x2F09B20", Offset = "0x2F08120", VA = "0x182F09B20")]
	private static void ShortMix(ref ulong h0, ref ulong h1, ref ulong h2, ref ulong h3)
	{
	}

	[Token(Token = "0x60009DA")]
	[Address(RVA = "0x2EDB350", Offset = "0x2ED9950", VA = "0x182EDB350")]
	private static void ShortEnd(ref ulong h0, ref ulong h1, ref ulong h2, ref ulong h3)
	{
	}

	[Token(Token = "0x60009DB")]
	[Address(RVA = "0x2F098B0", Offset = "0x2F07EB0", VA = "0x182F098B0")]
	private unsafe static void Mix(ulong* data, ref ulong s0, ref ulong s1, ref ulong s2, ref ulong s3, ref ulong s4, ref ulong s5, ref ulong s6, ref ulong s7, ref ulong s8, ref ulong s9, ref ulong s10, ref ulong s11)
	{
	}
}
