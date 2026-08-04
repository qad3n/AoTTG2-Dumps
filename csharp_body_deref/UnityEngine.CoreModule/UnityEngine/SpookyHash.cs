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

[Token(Token = "0x200010C")]
internal static class SpookyHash
{
	[StructLayout((LayoutKind)2)]
	[Token(Token = "0x200010D")]
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

		[Token(Token = "0x600074E")]
		[Address(RVA = "0x4DE3720", Offset = "0x4DE3720", VA = "0x4DE3720")]
		public unsafe U(ushort* p8)
		{
		}
	}

	[Token(Token = "0x4000358")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly bool AllowUnalignedRead;

	[Token(Token = "0x6000743")]
	[Address(RVA = "0x4DE32B0", Offset = "0x4DE32B0", VA = "0x4DE32B0")]
	private static bool AttemptDetectAllowUnalignedRead()
	{
		return default(bool);
	}

	[Token(Token = "0x6000744")]
	[Address(RVA = "0x4DE2F40", Offset = "0x4DE2F40", VA = "0x4DE2F40")]
	public unsafe static void Hash(void* message, ulong length, ulong* hash1, ulong* hash2)
	{
	}

	[Token(Token = "0x6000745")]
	[Address(RVA = "0x4DE3AD0", Offset = "0x4DE3AD0", VA = "0x4DE3AD0")]
	private unsafe static void End(ulong* data, ref ulong h0, ref ulong h1, ref ulong h2, ref ulong h3, ref ulong h4, ref ulong h5, ref ulong h6, ref ulong h7, ref ulong h8, ref ulong h9, ref ulong h10, ref ulong h11)
	{
	}

	[Token(Token = "0x6000746")]
	[Address(RVA = "0x4DE3CF0", Offset = "0x4DE3CF0", VA = "0x4DE3CF0")]
	private static void EndPartial(ref ulong h0, ref ulong h1, ref ulong h2, ref ulong h3, ref ulong h4, ref ulong h5, ref ulong h6, ref ulong h7, ref ulong h8, ref ulong h9, ref ulong h10, ref ulong h11)
	{
	}

	[Token(Token = "0x6000747")]
	[Address(RVA = "0x4DE3E80", Offset = "0x4DE3E80", VA = "0x4DE3E80")]
	private static void Rot64(ref ulong x, int k)
	{
	}

	[Token(Token = "0x6000748")]
	[Address(RVA = "0x4DE3320", Offset = "0x4DE3320", VA = "0x4DE3320")]
	private unsafe static void Short(void* message, ulong length, ulong* hash1, ulong* hash2)
	{
	}

	[Token(Token = "0x6000749")]
	[Address(RVA = "0x4DE3E90", Offset = "0x4DE3E90", VA = "0x4DE3E90")]
	private static void ShortMix(ref ulong h0, ref ulong h1, ref ulong h2, ref ulong h3)
	{
	}

	[Token(Token = "0x600074A")]
	[Address(RVA = "0x4DE3FE0", Offset = "0x4DE3FE0", VA = "0x4DE3FE0")]
	private static void ShortEnd(ref ulong h0, ref ulong h1, ref ulong h2, ref ulong h3)
	{
	}

	[Token(Token = "0x600074B")]
	[Address(RVA = "0x4DE3730", Offset = "0x4DE3730", VA = "0x4DE3730")]
	private unsafe static void Mix(ulong* data, ref ulong s0, ref ulong s1, ref ulong s2, ref ulong s3, ref ulong s4, ref ulong s5, ref ulong s6, ref ulong s7, ref ulong s8, ref ulong s9, ref ulong s10, ref ulong s11)
	{
	}

	[Token(Token = "0x600074C")]
	[Address(RVA = "0x4DE3970", Offset = "0x4DE3970", VA = "0x4DE3970")]
	private unsafe static void memset(void* dst, int value, ulong numberOfBytes)
	{
	}
}
