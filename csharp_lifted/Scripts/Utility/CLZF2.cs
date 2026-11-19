// ==================== AoTTG2 cross-reference ====================
// Type: Utility.CLZF2
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/CLZF2.c
// Prior real C# source (older reference): Assets/Scripts/Utility/Compression/CLZF2.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Utility;

[Token(Token = "0x200091C")]
internal static class CLZF2
{
	[Token(Token = "0x4002DED")]
	[FieldOffset(Offset = "0x0")]
	private static readonly uint HLOG;

	[Token(Token = "0x4002DEE")]
	[FieldOffset(Offset = "0x4")]
	private static readonly uint HSIZE;

	[Token(Token = "0x4002DEF")]
	[FieldOffset(Offset = "0x8")]
	private static readonly uint MAX_LIT;

	[Token(Token = "0x4002DF0")]
	[FieldOffset(Offset = "0xC")]
	private static readonly uint MAX_OFF;

	[Token(Token = "0x4002DF1")]
	[FieldOffset(Offset = "0x10")]
	private static readonly uint MAX_REF;

	[Token(Token = "0x4002DF2")]
	[FieldOffset(Offset = "0x18")]
	private static readonly long[] HashTable;

	[Token(Token = "0x6005649")]
	[Address(RVA = "0x5CE7A80", Offset = "0x5CE6A80", VA = "0x5CE7A80")]
	public static byte[] Compress(byte[] inputBytes)
	{
		// Lifted from source/cpp/Utility/CLZF2.c (Utility.CLZF2$$Compress): clean
		uint length;
		uint length_00;
		Byte[] src;
		Byte[] dst;
		Byte[] local_38;

		if (inputBytes == null) {
			throw new NullReferenceException();
		}
		length = (int)inputBytes.Length * 2;
		src = (Byte[])new byte[length];
		local_38 = src;
		if ((typeof(CLZF2)._2).cctor_finished_or_no_cctor == 0) {
		}
		length_00 = CLZF2.lzf_compress(inputBytes, ref local_38);
		while (length_00 == 0) {
			length = length * 2;
			src = (Byte[])new byte[length];
			local_38 = src;
			if ((typeof(CLZF2)._2).cctor_finished_or_no_cctor == 0) {
			}
			length_00 = CLZF2.lzf_compress(inputBytes, ref local_38);
		}
		dst = (Byte[])new byte[length_00];
		Buffer.BlockCopy((Array)src, 0, (Array)dst, 0, length_00);
		return dst;
	}

	[Token(Token = "0x600564A")]
	[Address(RVA = "0x5CE8370", Offset = "0x5CE7370", VA = "0x5CE8370")]
	public static byte[] Decompress(byte[] inputBytes)
	{
		// Lifted from source/cpp/Utility/CLZF2.c (Utility.CLZF2$$Decompress): clean
		uint length;
		uint length_00;
		Byte[] src;
		Byte[] dst;
		Byte[] pSStack_38;

		if (inputBytes == null) {
			throw new NullReferenceException();
		}
		length = (int)inputBytes.Length * 2;
		src = (Byte[])new byte[length];
		pSStack_38 = src;
		if ((typeof(CLZF2)._2).cctor_finished_or_no_cctor == 0) {
		}
		length_00 = CLZF2.lzf_decompress(inputBytes, ref pSStack_38);
		while (length_00 == 0) {
			length = length * 2;
			src = (Byte[])new byte[length];
			pSStack_38 = src;
			if ((typeof(CLZF2)._2).cctor_finished_or_no_cctor == 0) {
			}
			length_00 = CLZF2.lzf_decompress(inputBytes, ref pSStack_38);
		}
		dst = (Byte[])new byte[length_00];
		Buffer.BlockCopy((Array)src, 0, (Array)dst, 0, length_00);
		return dst;
	}

	[Token(Token = "0x600564B")]
	[Address(RVA = "0x5CE7BA0", Offset = "0x5CE6BA0", VA = "0x5CE7BA0")]
	public static int lzf_compress(byte[] input, ref byte[] output)
	{
		// Lifted from source/cpp/Utility/CLZF2.c (Utility.CLZF2$$lzf_compress): 24 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		byte bVar3;
		il2cpp_array_size_t iVar4;
		il2cpp_array_size_t iVar5;
		Int64[] pSVar6;
		ulong uVar7;
		long lVar8;
		Utility_CLZF2_StaticFields pUVar9;
		Byte[] pSVar10;
		sbyte cVar11;
		byte uVar12;
		int iVar13;
		ulong uVar14;
		uint uVar15;
		uint uVar16;
		uint uVar17;
		uint uVar18;
		int iVar19;
		long lVar20;
		uint uVar21;
		uint uVar22;
		ulong uVar23;
		ulong uVar24;
		Il2CppClass klass;
		uint uVar25;
		uint uVar26;
		int iVar27;
		long lVar28;
		uint uVar29;
		ulong local_70;

		if ((input == null) || (*output == null)) {
	label_05de8362: ;
			throw new NullReferenceException();
		}
		iVar4 = input.Length;
		iVar5 = (*output).Length;
		Array.Clear((Array)CLZF2.HashTable, 0, CLZF2.HSIZE);
		iVar19 = (int)input.Length;
		if ((iVar19 != 1) && (iVar19 != 0)) {
			uVar25 = (uint)(ushort)(*(ushort)input.m_Items << 8 | *(ushort)input.m_Items >> 8);
			iVar19 = (int)iVar4;
			uVar7 = (ulong)iVar19;
			lVar8 = (long)(int)iVar5;
			local_70 = 0;
			uVar24 = 0;
	label_05de7c8a: ;
			while(true) {
				uVar16 = 0;
				do {
					uVar17 = uVar16;
					uVar16 = (uint)uVar24;
					if ((long)uVar24 < (long)(iVar19 + -2)) {
						uVar21 = uVar16 + 2;
						if ((uint)input.Length <= uVar21) goto label_05de835d;
						bVar1 = input[(int)uVar21];
						uVar25 = uVar25 << 8 | (uint)bVar1;
						klass = typeof(CLZF2);
						pUVar9 = typeof(CLZF2).static_fields;
						pSVar6 = pUVar9.HashTable;
						if (pSVar6 == null) goto label_05de8362;
						uVar15 = (uVar25 << 5 ^ uVar25) >> ((bVar1 * '\x1b' - (char)pUVar9.HLOG) + 0x18 & 0x1f) & pUVar9.HSIZE - 1;
						if ((uint)pSVar6.Length <= uVar15) goto label_05de835d;
						uVar23 = pSVar6[uVar15];
						pSVar6[uVar15] = uVar24;
						lVar28 = ~uVar23 + uVar24;
						if (((lVar28 < (long)(ulong)pUVar9.MAX_OFF) && ((long)(ulong)(uVar16 + 4) < (long)uVar7)) &&(0 < (long)uVar23)) {
							uVar15 = (uint)input.Length;
							uVar18 = (uint)uVar23;
							if ((uVar15 <= uVar18) || (uVar15 <= uVar16)) goto label_05de835d;
							if (input[uVar23] == input[uVar24]) {
								if ((uVar15 <= uVar18 + 1) || (uVar29 = uVar16 + 1, uVar15 <= uVar29)) goto label_05de835d;
								if (input[uVar23 + 1] == input[(int)uVar29]) {
									if ((uVar15 <= uVar18 + 2) || (uVar15 <= uVar21)) goto label_05de835d;
									if (input[uVar23 + 2] == input[(int)uVar21]) {
										uVar22 = (iVar19 - uVar16) - 2;
										if ((((CLZF2)klass)._2).cctor_finished_or_no_cctor == 0) {
											pUVar9 = typeof(CLZF2).static_fields;
											klass = typeof(CLZF2);
										}
										if ((pUVar9.MAX_REF < uVar22) &&(uVar22 = pUVar9.MAX_REF, (klass._2).cctor_finished_or_no_cctor == 0)) {
											uVar22 = CLZF2.MAX_REF;
										}
										if (lVar8 <= (long)((long)(int)uVar17 + local_70 + 4)) {
											return 0;
										}
										uVar14 = 3;
										if (uVar22 < 4) {
											uVar22 = 3;
										}
										goto label_05de8030;
									}
								}
							}
						}
						uVar22 = (((CLZF2)klass)._2).cctor_finished_or_no_cctor;
					}
					else {
						if (uVar7 == uVar24) {
							if (uVar17 == 0) {
								return (uint)local_70;
							}
							if (lVar8 <= (long)((long)(int)uVar17 + local_70 + 1)) {
								return 0;
							}
							pSVar10 = *output;
							if (pSVar10 == null) goto label_05de8362;
							if ((uint)pSVar10.Length <= (uint)local_70) goto label_05de835d;
							pSVar10[local_70] = (char)uVar17 - 1;
							iVar19 = -uVar17;
							uVar24 = local_70;
							goto label_05de8310;
						}
						uVar22 = (typeof(CLZF2)._2).cctor_finished_or_no_cctor;
						klass = typeof(CLZF2);
					}
					if (uVar22 == 0) {
						klass = typeof(CLZF2);
					}
					uVar24 = (ulong)(uVar16 + 1);
					uVar21 = *(uint)((long)klass.static_fields + 8);
					uVar16 = uVar17 + 1;
				} while ((long)(int)(uVar17 + 1) != (ulong)uVar21);
				if ((klass._2).cctor_finished_or_no_cctor == 0) {
					uVar21 = CLZF2.MAX_LIT;
					klass = typeof(CLZF2);
				}
				if (lVar8 <= (long)(ulong)(uVar21 + (uint)local_70 + 1)) {
					return 0;
				}
				pSVar10 = *output;
				if (pSVar10 == null) goto label_05de8362;
				if ((uint)pSVar10.Length <= (uint)local_70) break;
				pSVar10[local_70] = (char)CLZF2.MAX_LIT - 1;
				uVar16 = ~uVar17;
				uVar23 = local_70;
				do {
					if ((uint)input.Length <= (uint)((long)(int)uVar16 + uVar24)) goto label_05de835d;
					pSVar10 = *output;
					if (pSVar10 == null) goto label_05de8362;
					if ((ulong)(uint)pSVar10.Length <= uVar23 + 1) goto label_05de835d;
					pSVar10[uVar23 + 1] = input[(long)(int)uVar16 + uVar24];
					uVar16 = uVar16 + 1;
					uVar23 = uVar23 + 1;
				} while (uVar16 != 0);
				local_70 = (ulong)((uint)local_70 + uVar17 + 2);
			}
		}
	label_05de835d: ;
		throw new IndexOutOfRangeException();
	label_05de8310: ;
		if ((uint)input.Length <= (uint)((long)iVar19 + uVar7)) goto label_05de835d;
		pSVar10 = *output;
		if (pSVar10 == null) goto label_05de8362;
		if ((ulong)(uint)pSVar10.Length <= uVar24 + 1) goto label_05de835d;
		pSVar10[uVar24 + 1] = input[(long)iVar19 + uVar7];
		iVar19 = iVar19 + 1;
		uVar24 = uVar24 + 1;
		if (iVar19 == 0) {
			return uVar17 + (uint)local_70 + 1;
		}
		goto label_05de8310;
		while(true) {
			lVar20 = uVar14 + uVar23;
			uVar25 = (uint)input.Length;
			if ((uVar25 <= (uint)lVar20) || (uVar25 <= uVar21 + uVar16)) goto label_05de835d;
			uVar14 = (ulong)(uVar21 + 1);
			uVar25 = uVar21;
			if (input[lVar20] != input[(int)(uVar21 + uVar16)]) break;
	label_05de8030: ;
			uVar21 = (uint)uVar14;
			uVar25 = uVar22;
			if (uVar22 == uVar21) break;
		}
		iVar27 = uVar25 - 1;
		uVar23 = local_70;
		if (uVar17 != 0) {
			pSVar10 = *output;
			if (pSVar10 == null) goto label_05de8362;
			if ((uint)pSVar10.Length <= (uint)local_70) goto label_05de835d;
			pSVar10[local_70] = (char)uVar17 - 1;
			iVar13 = -uVar17;
			uVar23 = (ulong)((uint)local_70 + uVar17 + 1);
			do {
				if ((uint)input.Length <= (uint)((long)iVar13 + uVar24)) goto label_05de835d;
				pSVar10 = *output;
				if (pSVar10 == null) goto label_05de8362;
				if ((ulong)(uint)pSVar10.Length <= local_70 + 1) goto label_05de835d;
				pSVar10[local_70 + 1] = input[(long)iVar13 + uVar24];
				iVar13 = iVar13 + 1;
				local_70 = local_70 + 1;
			} while (iVar13 != 0);
		}
		uVar17 = (uint)uVar23;
		uVar21 = uVar17 + 1;
		pSVar10 = *output;
		cVar11 = (char)((ulong)lVar28 >> 8);
		if (uVar25 - 2 < 7) {
			if (pSVar10 == null) goto label_05de8362;
			if ((uint)pSVar10.Length <= uVar17) goto label_05de835d;
			uVar12 = cVar11 + (char)(uVar25 - 2) * ' ';
			uVar17 = uVar21;
		}
		else {
			if (pSVar10 == null) goto label_05de8362;
			if ((uint)pSVar10.Length <= uVar17) goto label_05de835d;
			pSVar10[uVar23] = cVar11 - 0x20;
			pSVar10 = *output;
			if (pSVar10 == null) goto label_05de8362;
			if ((uint)pSVar10.Length <= uVar21) goto label_05de835d;
			uVar17 = uVar17 + 2;
			uVar12 = (char)uVar25 - 9;
			uVar23 = (ulong)uVar21;
		}
		pSVar10[uVar23] = uVar12;
		pSVar10 = *output;
		if (pSVar10 == null) goto label_05de8362;
		if ((uint)pSVar10.Length <= uVar17) goto label_05de835d;
		pSVar10[uVar17] = (uint8_t)lVar28;
		uVar21 = (iVar27 + uVar29) - 2;
		uVar25 = (uint)input.Length;
		if ((uVar25 <= uVar21) || (uVar16 = uVar16 + iVar27, uVar25 <= uVar16)) goto label_05de835d;
		uVar29 = iVar27 + uVar29;
		uVar24 = (ulong)uVar29;
		if (uVar25 <= uVar29) goto label_05de835d;
		bVar1 = input[(int)uVar16];
		bVar2 = input[uVar21];
		bVar3 = input[(int)uVar29];
		pUVar9 = typeof(CLZF2).static_fields;
		pSVar6 = pUVar9.HashTable;
		if (pSVar6 == null) goto label_05de8362;
		uVar26 = (uint)bVar1 << 8 | (uint)bVar2 << 0x10 | (uint)bVar3;
		cVar11 = '\x18' - (char)pUVar9.HLOG;
		uVar18 = pUVar9.HSIZE - 1;
		uVar25 = (uVar26 << 5 ^ uVar26) >> (bVar3 * '\x1b' + cVar11 & 0x1f) & uVar18;
		uVar15 = (uint)pSVar6.Length;
		if (uVar15 <= uVar25) goto label_05de835d;
		pSVar6[uVar25] = (ulong)uVar21;
		if ((uint)input.Length <= uVar29 + 1) goto label_05de835d;
		uVar25 = uVar26 << 8 | (uint)input[(int)(uVar29 + 1)];
		uVar18 = (uVar25 << 5 ^ uVar25) >> (input[(int)(uVar29 + 1)] * '\x1b' + cVar11 & 0x1f) & uVar18;
		if (uVar15 <= uVar18) goto label_05de835d;
		pSVar6[(int)uVar18] = (ulong)uVar16;
		local_70 = (ulong)(uVar17 + 1);
		goto label_05de7c8a;
	}

	[Token(Token = "0x600564C")]
	[Address(RVA = "0x5CE8490", Offset = "0x5CE7490", VA = "0x5CE8490")]
	public static int lzf_decompress(byte[] input, ref byte[] output)
	{
		// Lifted from source/cpp/Utility/CLZF2.c (Utility.CLZF2$$lzf_decompress): 7 lines keep C-only constructs
		byte bVar1;
		Byte[] pSVar2;
		il2cpp_array_size_t iVar3;
		ulong uVar4;
		uint uVar5;
		uint uVar6;
		long lVar7;
		uint uVar8;
		long lVar9;
		uint uVar10;
		uint uVar11;
		ulong uVar12;
		uint uVar13;

		if ((input == null) || (*output == null)) {
	label_05de8688: ;
			throw new NullReferenceException();
		}
		iVar3 = input.Length;
		lVar9 = (long)(int)(*output).Length;
		uVar4 = 0;
		uVar12 = 0;
		do {
			uVar10 = (uint)input.Length;
			uVar5 = (uint)uVar12;
			if (uVar10 <= uVar5) goto label_05de8683;
			uVar11 = uVar5 + 1;
			bVar1 = input[uVar12];
			uVar13 = (uint)uVar4;
			if (bVar1 < 0x20) {
				uVar10 = bVar1 + uVar13 + 1;
				if (lVar9 < (long)(ulong)uVar10) {
					return 0;
				}
				lVar7 = 0;
				do {
					if ((uint)input.Length <= uVar11 + (int)lVar7) goto label_05de8683;
					pSVar2 = *output;
					if (pSVar2 == null) goto label_05de8688;
					if ((uint)pSVar2.Length <= uVar4) goto label_05de8683;
					pSVar2[uVar4] = input[lVar7 + uVar12 + 1];
					lVar7 = lVar7 + 1;
					uVar4 = uVar4 + 1;
				} while (bVar1 + 1 != (int)lVar7);
				uVar11 = uVar11 + (int)lVar7;
			}
			else {
				uVar8 = (uint)(bVar1 >> 5);
				if (uVar8 == 7) {
					if (uVar10 <= uVar11) goto label_05de8683;
					uVar12 = (ulong)uVar11;
					uVar11 = uVar5 + 2;
					uVar8 = input[uVar12] + 7;
				}
				if (uVar10 <= uVar11) {
	label_05de8683: ;
					throw new IndexOutOfRangeException();
				}
				uVar10 = uVar13 + uVar8 + 2;
				if (lVar9 < (long)(ulong)uVar10) {
					return 0;
				}
				uVar5 = ((~(uint)bVar1 << 8 | 0xffffe0ff) + uVar13) - (uint)input[uVar11];
				if ((int)uVar5 < 0) {
					return 0;
				}
				pSVar2 = *output;
				if (pSVar2 == null) goto label_05de8688;
				uVar6 = (uint)pSVar2.Length;
				if ((uVar6 <= uVar5) || (uVar6 <= uVar13)) goto label_05de8683;
				pSVar2[uVar4] = pSVar2[uVar5];
				pSVar2 = *output;
				if (pSVar2 == null) goto label_05de8688;
				uVar6 = (uint)pSVar2.Length;
				if ((uVar6 <= uVar5 + 1) || (uVar6 <= uVar13 + 1)) goto label_05de8683;
				uVar11 = uVar11 + 1;
				uVar6 = uVar5 + 2;
				pSVar2[uVar13 + 1] = pSVar2[(int)(uVar5 + 1)];
				uVar4 = (ulong)(uVar13 + 2);
				do {
					pSVar2 = *output;
					if (pSVar2 == null) goto label_05de8688;
					if (((uint)pSVar2.Length <= uVar6) || ((pSVar2.Length & 0xffffffff) <= uVar4)) goto label_05de8683;
					pSVar2[uVar4] = pSVar2[(int)uVar6];
					uVar4 = uVar4 + 1;
					uVar6 = uVar6 + 1;
					uVar8 = uVar8 - 1;
				} while (uVar8 != 0);
			}
			uVar12 = (ulong)uVar11;
			uVar4 = (ulong)uVar10;
			if ((long)(int)iVar3 <= (long)uVar12) {
				return uVar10;
			}
		} while(true);
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Utility/CLZF2.c.

	// Utility.CLZF2$$.cctor: clean
	static CLZF2()
	{
		Utility_CLZF2_StaticFields pUVar1;
		Int64[] pSVar2;

		pUVar1 = typeof(CLZF2).static_fields;
		pUVar1.HLOG = 0xe;
		pUVar1.HSIZE = 0x4000;
		pUVar1.MAX_LIT = 0x20;
		pUVar1.MAX_OFF = 0x2000;
		pUVar1.MAX_REF = 0x108;
		pSVar2 = (Int64[])new long[0x4000];
		pUVar1 = typeof(CLZF2).static_fields;
		pUVar1.HashTable = pSVar2;
		return;
	}
}
