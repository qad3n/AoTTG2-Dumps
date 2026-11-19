// ==================== AoTTG2 cross-reference ====================
// Type: Utility.QuaternionCompression
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/QuaternionCompression.c
// Prior real C# source (older reference): Assets/Scripts/Utility/Compression/QuaternionCompression.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Utility;

[Token(Token = "0x2000920")]
public static class QuaternionCompression
{
	[Token(Token = "0x4002DFA")]
	private const ushort k_PrecisionMask = 511;

	[Token(Token = "0x4002DFB")]
	private const float k_SqrtTwoOverTwoEncoding = 0.70710677f;

	[Token(Token = "0x4002DFC")]
	private const float k_CompressionEcodingMask = 722.66315f;

	[Token(Token = "0x4002DFD")]
	private const ushort k_ShiftNegativeBit = 9;

	[Token(Token = "0x4002DFE")]
	private const float k_DcompressionDecodingMask = 0.0013837706f;

	[Token(Token = "0x4002DFF")]
	private const ushort k_NegShortBit = 512;

	[Token(Token = "0x4002E00")]
	private const ushort k_True = 1;

	[Token(Token = "0x4002E01")]
	private const ushort k_False = 0;

	[Token(Token = "0x4002E02")]
	[FieldOffset(Offset = "0x0")]
	private static Quaternion s_QuatAbsValues;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600565B")]
	[Address(RVA = "0x5CEA980", Offset = "0x5CE9980", VA = "0x5CEA980")]
	public static int CompressQuaternion(ref Quaternion quaternion)
	{
		// Lifted from source/cpp/Utility/QuaternionCompression.c (Utility.QuaternionCompression$$CompressQuaternion): 43 lines keep C-only constructs
		float pfVar1;
		float pfVar2;
		IntPtr pvVar3;
		object pIVar4;
		float pfVar5;
		Utility_QuaternionCompression_StaticFields pUVar6;
		ulong uVar7;
		uint uVar8;
		ulong uVar9;
		MethodInfo method_00;
		ulong uVar10;
		ulong uVar11;
		Il2CppClass klass;
		int iVar12;
		bool bVar13;
		float fVar14;
		float fVar15;
		double dVar16;
		float fVar17;
		float fVar18;
		double dStack_50;
		float pfStack_48;
		float pfStack_40;
		float fStack_38;
		float fStack_34;

		pUVar6 = typeof(QuaternionCompression).static_fields;
		(pUVar6.s_QuatAbsValues).x = ABS(quaternion.x);
		(pUVar6.s_QuatAbsValues).y = ABS(quaternion.y);
		(pUVar6.s_QuatAbsValues).z = ABS(quaternion.z);
		(pUVar6.s_QuatAbsValues).w = ABS(quaternion.w);
		method_00 = (MethodInfo)0x4;
		pIVar4 = new float[4];
		klass = typeof(QuaternionCompression);
		if (pIVar4 == null) {
			throw new NullReferenceException();
		}
		pvVar3 = pIVar4[1].monitor;
		uVar8 = (uint)pvVar3;
		if (uVar8 == 0) {
	label_05deb002: ;
			throw new IndexOutOfRangeException();
		}
		pUVar6 = typeof(QuaternionCompression).static_fields;
		fVar18 = (pUVar6.s_QuatAbsValues).x;
		*(float)&pIVar4[2].klass = fVar18;
		if (((uVar8 == 1) ||(*(float)((long)&pIVar4[2].klass + 4) = (pUVar6.s_QuatAbsValues).y, uVar8 < 3)) ||(*(float)&pIVar4[2].monitor = (pUVar6.s_QuatAbsValues).z, uVar8 == 3)) goto label_05deb002;
		*(float)((long)&pIVar4[2].monitor + 4) = (pUVar6.s_QuatAbsValues).w;
		if (1 < (int)uVar8) {
			uVar10 = (ulong)pvVar3 & 0xffffffff;
			uVar7 = uVar10 - 1;
			uVar9 = (ulong)((uint)uVar7 & 3);
			if (uVar10 - 2 < 3) {
				method_00 = (MethodInfo)0x1;
			}
			else {
				uVar10 = 0;
				do {
					uVar11 = uVar10;
					fVar17 = *(float)((long)&pIVar4[2].klass + uVar11 * 4 + 4);
					if (fVar17 <= fVar18) {
						fVar17 = fVar18;
					}
					fVar18 = *(float)((long)&pIVar4[2].monitor + uVar11 * 4);
					if (fVar18 <= fVar17) {
						fVar18 = fVar17;
					}
					fVar17 = *(float)((long)&pIVar4[2].monitor + uVar11 * 4 + 4);
					if (fVar17 <= fVar18) {
						fVar17 = fVar18;
					}
					fVar18 = *(float)((long)&pIVar4[3].klass + uVar11 * 4);
					if (fVar18 <= fVar17) {
						fVar18 = fVar17;
					}
					uVar10 = uVar11 + 4;
				} while ((uVar7 & 0xfffffffffffffffc) != uVar11 + 4);
				method_00 = (MethodInfo)(uVar11 + 5);
			}
			if (uVar9 != 0) {
				uVar7 = 0;
				fVar17 = fVar18;
				do {
					fVar18 = *(float)((long)&pIVar4[2].klass + uVar7 * 4 + (long)method_00 * 4);
					if (fVar18 <= fVar17) {
						fVar18 = fVar17;
					}
					uVar7 = uVar7 + 1;
					fVar17 = fVar18;
				} while (uVar9 != uVar7);
			}
		}
		pfVar1 = &quaternion.y;
		pfVar2 = &quaternion.z;
		pfVar5 = &quaternion.w;
		fVar17 = (pUVar6.s_QuatAbsValues).x;
		pfStack_48 = pfVar2;
		pfStack_40 = pfVar5;
		if ((fVar17 != fVar18) || (NAN(fVar17) || NAN(fVar18))) {
			if ((((QuaternionCompression)klass)._2).cctor_finished_or_no_cctor == 0) {
				pUVar6 = typeof(QuaternionCompression).static_fields;
				klass = typeof(QuaternionCompression);
			}
			fStack_34 = (pUVar6.s_QuatAbsValues).y;
			iVar12 = 1;
			if ((fStack_34 != fVar18) || (NAN(fStack_34) || NAN(fVar18))) {
				if ((klass._2).cctor_finished_or_no_cctor == 0) {
					pUVar6 = typeof(QuaternionCompression).static_fields;
					klass = typeof(QuaternionCompression);
				}
				fVar17 = (pUVar6.s_QuatAbsValues).z;
				iVar12 = 2;
				if ((fVar17 != fVar18) || (NAN(fVar17) || NAN(fVar18))) {
					iVar12 = 3;
				}
				else {
					pfVar5 = pfVar2;
				}
			}
			else {
				pfVar5 = pfVar1;
			}
			bVar13 = *pfVar5 <= 0.0 && *pfVar5 != 0.0;
			fVar14 = quaternion.x;
			fVar17 = quaternion.x;
			if ((klass._2).cctor_finished_or_no_cctor == 0) {
				klass = typeof(QuaternionCompression);
			}
			fStack_38 = (klass.static_fields.s_QuatAbsValues).x * 722.66315;
			dVar16 = modf((double)fStack_38, &dStack_50, method_00);
			if (0.0 <= fStack_38) {
				if ((dVar16 != 0.5) || (NAN(dVar16))) {
					fVar15 = floorf(fStack_38 + 0.5);
				}
				else {
					fVar15 = (float)dStack_50;
					if (((long)dStack_50 & 1U) != 0) {
						fVar15 = fVar15 + 1.0;
					}
				}
			}
			else if ((dVar16 != -0.5) || (NAN(dVar16))) {
				fVar15 = ceilf(fStack_38 + -0.5);
			}
			else {
				fVar15 = (float)dStack_50;
				if (((long)dStack_50 & 1U) != 0) {
					fVar15 = fVar15 + -1.0;
				}
			}
			uVar8 = (int)fVar15 & 0xffffU | (uint)((0.0 < fVar17 || fVar14 == 0.0) == bVar13) << 9 | iVar12 << 10;
			if ((fStack_34 != fVar18) || (NAN(fStack_34) || NAN(fVar18))) {
				uVar8 = uVar8 << 10;
				klass = typeof(QuaternionCompression);
				goto label_05deab5f;
			}
			iVar12 = 1;
		}
		else {
			bVar13 = quaternion.x <= 0.0 && quaternion.x != 0.0;
			uVar8 = 0;
			iVar12 = 0;
	label_05deab5f: ;
			fVar17 = *pfVar1;
			fVar18 = *pfVar1;
			if ((klass._2).cctor_finished_or_no_cctor == 0) {
				klass = typeof(QuaternionCompression);
			}
			fVar14 = (klass.static_fields.s_QuatAbsValues).y * 722.66315;
			dVar16 = modf((double)fVar14, &dStack_50, method_00);
			if (0.0 <= fVar14) {
				if ((dVar16 != 0.5) || (NAN(dVar16))) {
					fVar14 = floorf(fVar14 + 0.5);
				}
				else {
					fVar14 = (float)dStack_50;
					if (((long)dStack_50 & 1U) != 0) {
						fVar14 = fVar14 + 1.0;
					}
				}
			}
			else if ((dVar16 != -0.5) || (NAN(dVar16))) {
				fVar14 = ceilf(fVar14 + -0.5);
			}
			else {
				fVar14 = (float)dStack_50;
				if (((long)dStack_50 & 1U) != 0) {
					fVar14 = fVar14 + -1.0;
				}
			}
			uVar8 = (int)fVar14 & 0xffffU | (uint)(bVar13 != (fVar18 <= 0.0 && fVar17 != 0.0)) << 9 | uVar8;
			if (iVar12 == 2) goto label_05deaf06;
		}
		fVar18 = *pfStack_48;
		fVar17 = *pfStack_48;
		fVar14 = (QuaternionCompression.s_QuatAbsValues).z * 722.66315;
		pfStack_48 = (float)CONCAT44(pfStack_48._4_4_, fVar14);
		dVar16 = modf((double)fVar14, &dStack_50, method_00);
		if (0.0 <= pfStack_48._0_4_) {
			if ((dVar16 != 0.5) || (NAN(dVar16))) {
				fVar14 = floorf(pfStack_48._0_4_ + 0.5);
			}
			else {
				fVar14 = (float)dStack_50;
				if (((long)dStack_50 & 1U) != 0) {
					fVar14 = fVar14 + 1.0;
				}
			}
		}
		else if ((dVar16 != -0.5) || (NAN(dVar16))) {
			fVar14 = ceilf(pfStack_48._0_4_ + -0.5);
		}
		else {
			fVar14 = (float)dStack_50;
			if (((long)dStack_50 & 1U) != 0) {
				fVar14 = fVar14 + -1.0;
			}
		}
		uVar8 = (int)fVar14 & 0xffffU | (uint)(bVar13 != (fVar17 <= 0.0 && fVar18 != 0.0)) << 9 | uVar8 << 10;
		if (iVar12 == 3) {
			return uVar8;
		}
	label_05deaf06: ;
		fVar18 = *pfStack_40;
		fVar17 = *pfStack_40;
		fVar14 = (QuaternionCompression.s_QuatAbsValues).w * 722.66315;
		pfStack_40 = (float)CONCAT44(pfStack_40._4_4_, fVar14);
		dVar16 = modf((double)fVar14, &dStack_50, method_00);
		if (0.0 <= pfStack_40._0_4_) {
			if ((dVar16 != 0.5) || (NAN(dVar16))) {
				fVar14 = floorf(pfStack_40._0_4_ + 0.5);
			}
			else {
				fVar14 = (float)dStack_50;
				if (((long)dStack_50 & 1U) != 0) {
					fVar14 = fVar14 + 1.0;
				}
			}
		}
		else if ((dVar16 != -0.5) || (NAN(dVar16))) {
			fVar14 = ceilf(pfStack_40._0_4_ + -0.5);
		}
		else {
			fVar14 = (float)dStack_50;
			if (((long)dStack_50 & 1U) != 0) {
				fVar14 = fVar14 + -1.0;
			}
		}
		return (int)fVar14 & 0xffffU | (uint)(bVar13 != (fVar17 <= 0.0 && fVar18 != 0.0)) << 9 | uVar8 << 10;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600565C")]
	[Address(RVA = "0x5CEB010", Offset = "0x5CEA010", VA = "0x5CEB010")]
	public static void DecompressQuaternion(ref Quaternion quaternion, int rawCompressed)
	{
		// Lifted from source/cpp/Utility/QuaternionCompression.c (Utility.QuaternionCompression$$DecompressQuaternion): 3 lines keep C-only constructs
		float pfVar1;
		float pfVar2;
		float pfVar3;
		uint uVar4;
		uint uVar5;
		float fVar6;
		float fVar7;

		uVar5 = (uint)rawCompressed >> 0x1e;
		pfVar1 = &quaternion.w;
		pfVar2 = &quaternion.z;
		pfVar3 = &quaternion.y;
		fVar7 = 0.0;
		uVar4 = rawCompressed;
		if (uVar5 == 3) {
	label_05deb072: ;
			fVar6 = (float)(uVar4 & 0x1ff) * 0.0013837706;
			if ((uVar4 & 0x200) != 0) {
				fVar6 = -fVar6;
			}
			*pfVar2 = fVar6;
			fVar7 = fVar7 + fVar6 * fVar6;
			uVar4 = uVar4 >> 10;
			if (uVar5 == 1) goto label_05deb0e2;
		}
		else {
			fVar7 = (float)(rawCompressed & 0x1ff) * 0.0013837706;
			if ((rawCompressed & 0x200U) != 0) {
				fVar7 = -fVar7;
			}
			*pfVar1 = fVar7;
			fVar7 = fVar7 * fVar7 + 0.0;
			uVar4 = (uint)rawCompressed >> 10;
			if (uVar5 != 2) goto label_05deb072;
		}
		fVar6 = (float)(uVar4 & 0x1ff) * 0.0013837706;
		if ((uVar4 & 0x200) != 0) {
			fVar6 = -fVar6;
		}
		*pfVar3 = fVar6;
		fVar7 = fVar7 + fVar6 * fVar6;
		uVar4 = uVar4 >> 10;
	label_05deb0e2: ;
		if (0x3fffffff < (uint)rawCompressed) {
			fVar6 = (float)(uVar4 & 0x1ff) * 0.0013837706;
			if ((uVar4 & 0x200) != 0) {
				fVar6 = -fVar6;
			}
			quaternion.x = fVar6;
			fVar7 = fVar7 + fVar6 * fVar6;
		}
		fVar7 = 1.0 - fVar7;
		if (fVar7 < 0.0) {
			fVar7 = sqrtf(fVar7);
		}
		else {
			fVar7 = SQRT(fVar7);
		}
		switch(uVar5) {
		case 1:
			quaternion = (Quaternion)pfVar3;
			break;
		case 2:
			quaternion = (Quaternion)pfVar2;
			break;
		case 3:
			quaternion = (Quaternion)pfVar1;
		}
		*(float)quaternion = fVar7;
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Utility/QuaternionCompression.c.

	// Utility.QuaternionCompression$$.cctor: clean
	static QuaternionCompression()
	{
		float fVar3;
		float fVar4;
		float fVar5;

		fVar3 = (Quaternion.identityQuaternion).y;
		fVar4 = (Quaternion.identityQuaternion).z;
		fVar5 = (Quaternion.identityQuaternion).w;
		(QuaternionCompression.s_QuatAbsValues).x = (Quaternion.identityQuaternion).x;
		(QuaternionCompression.s_QuatAbsValues).y = fVar3;
		(QuaternionCompression.s_QuatAbsValues).z = fVar4;
		(QuaternionCompression.s_QuatAbsValues).w = fVar5;
		return;
	}
}
