// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Styling.GisketchRtlLayout
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Styling/GisketchRtlLayout.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using TMPro;
using UnityEngine;

namespace Gisketch.Aottg2UI.Styling;

[Token(Token = "0x200002B")]
public static class GisketchRtlLayout
{
	[Token(Token = "0x6000162")]
	[Address(RVA = "0x5231010", Offset = "0x5230010", VA = "0x5231010")]
	[RuntimeInitializeOnLoadMethod(RuntimeInitializeLoadType.SubsystemRegistration)]
	private static void Install()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchRtlLayout.c (Gisketch.Aottg2UI.Styling.GisketchRtlLayout$$Install): 4 lines keep C-only constructs
		FastAction<Object> pTVar1;
		Action<Object> pSVar2;

		pTVar1 = TMPro_EventManager.TEXT_CHANGED_EVENT;
		pSVar2 = new Action<Object>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Styling_GisketchRtlLayout_OnTextChanged);
		if (pTVar1 != null) {
			pTVar1.Remove((System_Action_A__o)pSVar2);
			pTVar1 = TMPro_EventManager.TEXT_CHANGED_EVENT;
			pSVar2 = new Action<Object>(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Styling_GisketchRtlLayout_OnTextChanged);
			if (pTVar1 != null) {
				pTVar1.Add((System_Action_A__o)pSVar2);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000163")]
	[Address(RVA = "0x5231130", Offset = "0x5230130", VA = "0x5231130")]
	private static void OnTextChanged(Object changed)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchRtlLayout.c (Gisketch.Aottg2UI.Styling.GisketchRtlLayout$$OnTextChanged): 3 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		int iVar3;
		uint uVar4;
		TMP_LineInfo[] pTVar5;
		TMP_CharacterInfo[] pTVar6;
		bool bVar7;
		bool bVar8;
		int iVar9;
		TMP_TextInfo pTVar10;
		String text;
		TMP_InputField x;
		MethodInfo pMVar11;
		long lVar12;
		ulong uVar13;
		int firstLine;
		TMP_Text __this;

		if (changed == null) {
	label_053311a3: ;
			__this = null;
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			bVar1 = (typeof(TMP_Text)._2).typeHierarchyDepth;
			if ((changed.klass._2).typeHierarchyDepth < bVar1) goto label_053311a3;
			__this = null;
			if ((changed.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(TMP_Text)) {
				__this = (TMP_Text)changed;
			}
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		bVar7 = ((Object)__this == null);
		if (!bVar7) {
			if (__this == null) {
	label_0533141a: ;
				throw new NullReferenceException();
			}
			pTVar10 = __this.textInfo;
			if (pTVar10 != null) {
				pTVar10 = __this.textInfo;
				if (pTVar10 == null) goto label_0533141a;
				if (1 < pTVar10.lineCount) {
					pMVar11 = (__this.klass.vtable)._65_get_text.method;
					text = __this.get_text();
					if ((typeof(GisketchArabicText)._2).cctor_finished_or_no_cctor == 0) {
						bVar7 = GisketchArabicText.HasPresentationForms(text);
					}
					else {
						bVar7 = GisketchArabicText.HasPresentationForms(text);
					}
					if (bVar7) {
						x = __this.GetComponentInParent<TMP_InputField>();
						bVar7 = ((Object)x != null);
						if (bVar7) {
							if (x == null) goto label_0533141a;
							if (x.m_ReadOnly == false) {
								return;
							}
						}
						pTVar10 = __this.textInfo;
						if (pTVar10 == null) goto label_0533141a;
						iVar9 = pTVar10.lineCount;
						if (0 < iVar9) {
							iVar3 = __this.m_HorizontalAlignment;
							uVar13 = 0;
							lVar12 = 0x40;
							firstLine = 0;
							bVar7 = false;
							do {
								pMVar11 = (MethodInfo)(long)(iVar9 + -1);
								if ((long)uVar13 < (long)pMVar11) {
									pTVar5 = pTVar10.lineInfo;
									if (pTVar5 == null) goto label_0533141a;
									if ((uint)pTVar5.Length <= uVar13) {
	label_0533141f: ;
										throw new IndexOutOfRangeException();
									}
									uVar4 = *(uint)((long)pTVar5.m_Items + lVar12 + -0x20);
									if ((-1 < (int)uVar4) && ((int)uVar4 < pTVar10.characterCount)) {
										pTVar6 = pTVar10.characterInfo;
										if (pTVar6 == null) goto label_0533141a;
										if ((uint)pTVar6.Length <= uVar4) goto label_0533141f;
										pMVar11 = (MethodInfo)((ulong)uVar4 * 0x178);
										if (pTVar6[uVar4].character == 10) goto label_053313a0;
									}
								}
								else {
	label_053313a0: ;
									iVar9 = (int)uVar13;
									if (((long)firstLine < (long)uVar13) &&(bVar8 = GisketchRtlLayout.EndsRightToLeft(pTVar10, firstLine, iVar9))) {
										GisketchRtlLayout.ReverseLines(pTVar10, firstLine, iVar9, (bool)((byte)iVar3 & 1));
										bVar7 = true;
									}
									firstLine = iVar9 + 1;
									iVar9 = pTVar10.lineCount;
								}
								uVar13 = uVar13 + 1;
								lVar12 = lVar12 + 0x60;
							} while ((long)uVar13 < (long)iVar9);
							if (bVar7) {
								__this.UpdateVertexData(1);
								return;
							}
						}
					}
				}
			}
		}
		return;
	}

	[Token(Token = "0x6000164")]
	[Address(RVA = "0x5231430", Offset = "0x5230430", VA = "0x5231430")]
	private static bool EndsParagraph(TMP_TextInfo info, int line)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchRtlLayout.c (Gisketch.Aottg2UI.Styling.GisketchRtlLayout$$EndsParagraph): clean
		uint uVar1;
		TMP_LineInfo[] pTVar2;
		TMP_CharacterInfo[] pTVar3;

		if ((info == null) ||(pTVar2 = info.lineInfo, pTVar2 == null)) {
	label_05331480: ;
			throw new NullReferenceException();
		}
		if ((uint)line < (uint)pTVar2.Length) {
			uVar1 = pTVar2[line].lastCharacterIndex;
			if (((int)uVar1 < 0) || (info.characterCount <= (int)uVar1)) {
				return false;
			}
			pTVar3 = info.characterInfo;
			if (pTVar3 == null) goto label_05331480;
			if (uVar1 < (uint)pTVar3.Length) {
				return pTVar3[uVar1].character == 10;
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6000165")]
	[Address(RVA = "0x5231490", Offset = "0x5230490", VA = "0x5231490")]
	private static bool EndsRightToLeft(TMP_TextInfo info, int firstLine, int lastLine)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchRtlLayout.c (Gisketch.Aottg2UI.Styling.GisketchRtlLayout$$EndsRightToLeft): 2 lines keep C-only constructs
		ushort character;
		int iVar1;
		uint uVar2;
		TMP_LineInfo[] pTVar3;
		TMP_CharacterInfo[] pTVar4;
		bool bVar5;
		uint uVar6;
		uint in_register_00000034;
		MethodInfo method_00;

		method_00 = (MethodInfo)CONCAT44(in_register_00000034, firstLine);
		if ((info != null) &&(pTVar3 = info.lineInfo, pTVar3 != null)) {
			uVar6 = (uint)pTVar3.Length;
			if ((uVar6 <= (uint)firstLine) || (uVar6 <= (uint)lastLine)) {
	label_0533161d: ;
				throw new IndexOutOfRangeException();
			}
			iVar1 = pTVar3[firstLine].firstCharacterIndex;
			uVar6 = pTVar3[lastLine].lastCharacterIndex;
			while(true) {
				if ((int)uVar6 < iVar1) {
					return false;
				}
				pTVar4 = info.characterInfo;
				if (pTVar4 == null) break;
				if ((uint)pTVar4.Length <= uVar6) goto label_0533161d;
				character = pTVar4[(int)uVar6].character;
				if (((typeof(GisketchArabicText))._2). cctor_finished_or_no_cctor == 0) {
					if (g_data_0754283f != false) goto label_0533156b;
	label_053315ce: ;
					g_data_0754283f = true;
					uVar2 = (typeof(GisketchArabicText)._2).cctor_finished_or_no_cctor;
				}
				else {
					if (g_data_0754283f == false) goto label_053315ce;
	label_0533156b: ;
					uVar2 = (typeof(GisketchArabicText)._2).cctor_finished_or_no_cctor;
				}
				if (uVar2 == 0) {
				}
				bVar5 = GisketchArabicText.IsRightToLeft(character);
				if (bVar5) {
	label_053315f1: ;
					bVar5 = GisketchArabicText.IsRightToLeft(character);
					return bVar5;
				}
				bVar5 = Char.IsLetter(character);
				if (bVar5) goto label_053315f1;
				uVar6 = uVar6 - 1;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000166")]
	[Address(RVA = "0x5231630", Offset = "0x5230630", VA = "0x5231630")]
	private static void ReverseLines(TMP_TextInfo info, int firstLine, int lastLine, bool rightAlign)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchRtlLayout.c (Gisketch.Aottg2UI.Styling.GisketchRtlLayout$$ReverseLines): clean
		float fVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		uint uVar8;
		uint uVar9;
		int iVar10;
		TMP_LineInfo[] pTVar11;
		TMP_CharacterInfo[] pTVar12;
		TMP_MeshInfo[] pTVar13;
		Vector3[] pUVar14;
		uint uVar15;
		int iVar16;
		uint uVar17;
		int iVar18;
		ulong uVar19;
		float fVar20;
		float fVar21;
		float fVar22;

		if (firstLine <= lastLine) {
			if ((info == null) ||(pTVar11 = info.lineInfo, pTVar11 == null)) {
	label_053318ce: ;
				throw new NullReferenceException();
			}
			uVar17 = (uint)pTVar11.Length;
			if (uVar17 < (uint)firstLine) {
				uVar17 = firstLine;
			}
			fVar20 = -3.4028235e+38;
			uVar15 = firstLine;
			do {
				if (uVar17 == uVar15) {
					throw new IndexOutOfRangeException();
				}
				fVar21 = pTVar11[(int)uVar15].lineExtents.max.x;
				if (fVar20 <= fVar21) {
					fVar20 = fVar21;
				}
				uVar15 = uVar15 + 1;
			} while ((int)uVar15 <= lastLine);
			if (firstLine <= lastLine) {
				iVar16 = lastLine + firstLine;
				do {
					pTVar11 = info.lineInfo;
					if (pTVar11 == null) goto label_053318ce;
					uVar17 = (uint)pTVar11.Length;
					if ((uVar17 <= (uint)firstLine) || (uVar15 = iVar16 - firstLine, uVar17 <= uVar15)) {
						throw new IndexOutOfRangeException();
					}
					if (rightAlign) {
						fVar21 = fVar20 - pTVar11[firstLine].lineExtents.max.x;
					}
					else {
						fVar21 = 0.0;
					}
					iVar10 = pTVar11[firstLine].lastCharacterIndex;
					fVar22 = pTVar11[(int)uVar15].baseline - pTVar11[firstLine].baseline;
					for (uVar17 = pTVar11[firstLine].firstCharacterIndex; (int)uVar17 <= iVar10; uVar17 = uVar17 + 1) {
						pTVar12 = info.characterInfo;
						if (pTVar12 == null) goto label_053318ab;
						if ((uint)pTVar12.Length <= uVar17) goto label_0533189e;
						if ((pTVar12[(int)uVar17].isVisible & 1U) != 0) {
							pTVar13 = info.meshInfo;
							if (pTVar13 == null) {
	label_053318ab: ;
								throw new NullReferenceException();
							}
							uVar15 = pTVar12[(int)uVar17].materialReferenceIndex;
							if ((uint)pTVar13.Length <= uVar15) goto label_0533189e;
							pUVar14 = pTVar13[(int)uVar15].vertices;
							if (pUVar14 == null) goto label_053318ab;
							uVar15 = pTVar12[(int)uVar17].vertexIndex;
							uVar19 = (ulong)uVar15;
							if ((uint)pUVar14.Length <= uVar19) {
	label_0533189e: ;
								throw new IndexOutOfRangeException();
							}
							uVar2 = pUVar14[(int)uVar15].x;
							uVar6 = pUVar14[(int)uVar15].y;
							fVar1 = pUVar14[(int)uVar15].z;
							pUVar14[(int)uVar15].x = (float)uVar2 + fVar21;
							pUVar14[(int)uVar15].y = (float)uVar6 + fVar22;
							pUVar14[(int)uVar15].z = fVar1 + 0.0;
							if ((ulong)(uint)pUVar14.Length <= uVar19 + 1) goto label_0533189e;
							iVar18 = (int)(uVar19 + 1);
							uVar3 = pUVar14[iVar18].x;
							uVar7 = pUVar14[iVar18].y;
							fVar1 = pUVar14[iVar18].z;
							pUVar14[iVar18].x = (float)uVar3 + fVar21;
							pUVar14[iVar18].y = (float)uVar7 + fVar22;
							pUVar14[iVar18].z = fVar1 + 0.0;
							if ((ulong)(uint)pUVar14.Length <= uVar19 + 2) goto label_0533189e;
							iVar18 = (int)(uVar19 + 2);
							uVar4 = pUVar14[iVar18].x;
							uVar8 = pUVar14[iVar18].y;
							fVar1 = pUVar14[iVar18].z;
							pUVar14[iVar18].x = (float)uVar4 + fVar21;
							pUVar14[iVar18].y = (float)uVar8 + fVar22;
							pUVar14[iVar18].z = fVar1 + 0.0;
							if ((ulong)(uint)pUVar14.Length <= uVar19 + 3) goto label_0533189e;
							iVar18 = (int)(uVar19 + 3);
							uVar5 = pUVar14[iVar18].x;
							uVar9 = pUVar14[iVar18].y;
							fVar1 = pUVar14[iVar18].z;
							pUVar14[iVar18].x = (float)uVar5 + fVar21;
							pUVar14[iVar18].y = (float)uVar9 + fVar22;
							pUVar14[iVar18].z = fVar1 + 0.0;
						}
					}
					firstLine = firstLine + 1;
				} while (firstLine <= lastLine);
			}
		}
		return;
	}
}
