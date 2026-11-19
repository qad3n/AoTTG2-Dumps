// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Styling.GisketchRtlTextLines
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Styling/GisketchRtlTextLines.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Styling;

[Token(Token = "0x200002C")]
[RequireComponent(typeof(Text))]
public sealed class GisketchRtlTextLines : BaseMeshEffect
{
	[Token(Token = "0x40000BB")]
	[FieldOffset(Offset = "0x0")]
	private static readonly List<float> LineShift;

	[Token(Token = "0x40000BC")]
	[FieldOffset(Offset = "0x8")]
	private static readonly List<float> LineRight;

	[Token(Token = "0x40000BD")]
	[FieldOffset(Offset = "0x10")]
	private static readonly List<bool> LineReversed;

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x52318E0", Offset = "0x52308E0", VA = "0x52318E0", Slot = "20")]
	public override void ModifyMesh(VertexHelper helper)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchRtlTextLines.c (Gisketch.Aottg2UI.Styling.GisketchRtlTextLines$$ModifyMesh): 121 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		uint uVar3;
		Il2CppClass pIVar4;
		Il2CppRuntimeInterfaceOffsetPair pIVar5;
		List<float> pSVar6;
		List<bool> pSVar7;
		Single[] pSVar8;
		Boolean[] pSVar9;
		UIVertex vertex;
		UIVertex vertex_00;
		UIVertex vertex_01;
		UIVertex vertex_02;
		uint uVar10;
		uint uVar11;
		uint uVar12;
		uint uVar13;
		bool bVar14;
		bool bVar15;
		ushort uVar16;
		int iVar17;
		Text pUVar18;
		TextGenerator __this_00;
		object obj;
		String text;
		VirtualInvokeData pVVar19;
		Gisketch_Aottg2UI_Styling_GisketchRtlTextLines_StaticFields pGVar20;
		MethodInfo pMVar21;
		object pIVar22;
		int iVar23;
		uint uVar24;
		int end;
		Text pUVar25;
		uint uVar26;
		uint length;
		long lVar27;
		ulong uVar28;
		uint uVar29;
		float fVar30;
		float fVar31;
		float fVar32;
		float fVar33;
		float fStack_15c;
		byte[] auStack_118 = new byte[8];
		Il2CppMethodPointer pIStack_110;
		InvokerMethod pIStack_108;
		sbyte pcStack_100;
		ulong uStack_f8;
		ulong uStack_f0;
		Il2CppType* ppIStack_e8;
		_union_13 _Stack_e0;
		_union_14 _Stack_d8;
		ulong uStack_d0;
		ulong uStack_c8;
		float fStack_c0;
		float fStack_bc;
		float fStack_b8;
		ulong uStack_b4;
		ulong uStack_a0;
		float fStack_94;
		byte[] auStack_90 = new byte[16];
		object pIStack_80;
		float fStack_78;
		byte[] auStack_68 = new byte[8];
		object pIStack_58;
		ulong uStack_48;
		Text pUStack_40;
		ulong uStack_38;

		fStack_b8 = 0.0;
		uStack_b4._0_4_ = 0.0;
		uStack_b4._4_4_ = 0.0;
		uStack_c8._0_4_ = 0.0;
		uStack_c8._4_4_ = 0.0;
		fStack_c0 = 0.0;
		fStack_bc = 0.0;
		_Stack_d8.genericMethod = null;
		uStack_d0._0_4_ = 0.0;
		uStack_d0._4_4_ = 0.0;
		ppIStack_e8 = null;
		_Stack_e0.rgctx_data = null;
		uStack_f8 = null;
		uStack_f0 = null;
		pIStack_108 = (InvokerMethod)0x0;
		pcStack_100 = null;
		auStack_118 = (byte[])0x0;
		pIStack_110 = (Il2CppMethodPointer)0x0;
		auStack_68 = (byte[])0x0;
		pIStack_58 = null;
		pUVar18 = (Text)this.graphic;
		pUVar25 = null;
		if (pUVar18 != null) {
			bVar2 = (typeof(Text)._2).typeHierarchyDepth;
			if ((pUVar18.klass._2).typeHierarchyDepth < bVar2) {
				pUVar25 = null;
			}
			else {
				pUVar25 = null;
				if ((pUVar18.klass._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(Text)) {
					pUVar25 = pUVar18;
				}
			}
		}
		bVar14 = this.IsActive() ;
		if (!bVar14) {
			return;
		}
		bVar14 = ((Object)pUVar25 == null);
		if (bVar14) {
			return;
		}
		if (pUVar25 != null) {
			__this_00 = pUVar25.cachedTextGenerator;
			if (__this_00 != null) {
				obj = (object)__this_00.lines;
				text = pUVar25.get_text();
				if (obj != null) {
					pIVar4 = obj.klass;
					uVar28 = (ulong)(pIVar4._2).interface_offsets_count;
					pMVar21 = pVVar19.method;
					iVar17 = obj.get_Item();
					if (iVar17 < 2) {
						return;
					}
					if ((typeof(GisketchArabicText)._2).cctor_finished_or_no_cctor == 0) {
						bVar14 = GisketchArabicText.HasPresentationForms(text);
					}
					else {
						bVar14 = GisketchArabicText.HasPresentationForms(text);
					}
					if (!bVar14) {
						return;
					}
					fVar30 = pUVar25.pixelsPerUnit;
					pGVar20 = typeof(GisketchRtlTextLines).static_fields;
					pSVar6 = pGVar20.LineShift;
					if (pSVar6 != null) {
						piVar1 = &pSVar6._version;
						*piVar1 = *piVar1 + 1;
						pSVar6._size = 0;
						pSVar6 = pGVar20.LineRight;
						if (pSVar6 != null) {
							piVar1 = &pSVar6._version;
							*piVar1 = *piVar1 + 1;
							pSVar6._size = 0;
							pSVar7 = pGVar20.LineReversed;
							pUStack_40 = pUVar25;
							if (pSVar7 != null) {
								fVar30 = 1.0 / fVar30;
								piVar1 = &pSVar7._version;
								*piVar1 = *piVar1 + 1;
								pSVar7._size = 0;
								iVar23 = 0;
								fStack_15c = -3.4028235e+38;
								do {
									pIVar4 = obj.klass;
									uVar28 = (ulong)(pIVar4._2).interface_offsets_count;
									iVar17 = obj.get_Item();
									if (iVar17 <= iVar23) {
										uVar29 = 0;
										bVar14 = false;
										uVar26 = uVar29;
										goto label_05331e60;
									}
									pMVar21 = MethodInfo_System_Collections_Generic_List_float_Add;
									pGVar20 = typeof(GisketchRtlTextLines).static_fields;
									pSVar6 = pGVar20.LineShift;
									if (pSVar6 == null) break;
									piVar1 = &pSVar6._version;
									*piVar1 = *piVar1 + 1;
									pSVar8 = pSVar6._items;
									if (pSVar8 == null) break;
									uVar26 = pSVar6._size;
									if (uVar26 < (uint)pSVar8.Length) {
										pSVar6._size = uVar26 + 1;
										pSVar8[(int)uVar26] = 0.0;
									}
									else {
										pSVar6.AddWithResize(0.0);
										pGVar20 = typeof(GisketchRtlTextLines).static_fields;
									}
									pMVar21 = MethodInfo_System_Collections_Generic_List_float_Add;
									pSVar6 = pGVar20.LineRight;
									if (pSVar6 == null) break;
									piVar1 = &pSVar6._version;
									*piVar1 = *piVar1 + 1;
									pSVar8 = pSVar6._items;
									if (pSVar8 == null) break;
									uVar26 = pSVar6._size;
									if (uVar26 < (uint)pSVar8.Length) {
										pSVar6._size = uVar26 + 1;
										pSVar8[(int)uVar26] = -3.4028235e+38;
									}
									else {
										pSVar6.AddWithResize(-3.4028235e+38);
										pGVar20 = typeof(GisketchRtlTextLines).static_fields;
									}
									pMVar21 = MethodInfo_System_Collections_Generic_List_bool_Add;
									pSVar7 = pGVar20.LineReversed;
									if (pSVar7 == null) break;
									piVar1 = &pSVar7._version;
									*piVar1 = *piVar1 + 1;
									pSVar9 = pSVar7._items;
									if (pSVar9 == null) break;
									uVar26 = pSVar7._size;
									if (uVar26 < (uint)pSVar9.Length) {
										pSVar7._size = uVar26 + 1;
										pSVar9[(int)uVar26] = false;
									}
									else {
										pSVar7.AddWithResize(false);
									}
									iVar23 = iVar23 + 1;
								} while(true);
							}
						}
					}
				}
			}
		}
		goto label_05332d27;
	label_05331e60: ;
		uVar24 = uVar26;
		pIVar4 = obj.klass;
		uVar28 = (ulong)(pIVar4._2).interface_offsets_count;
		iVar17 = obj.get_Item();
		if ((int)uVar24 < iVar17) {
			pIVar4 = obj.klass;
			uVar28 = (ulong)(pIVar4._2).interface_offsets_count;
			iVar17 = obj.get_Item();
			if ((int)uVar24 < iVar17 + -1) goto code_r0x05331f47;
			goto label_05332018;
		}
		if (!bVar14) {
			return;
		}
		fStack_b8 = 0.0;
		uStack_b4._0_4_ = 0.0;
		uStack_b4._4_4_ = 0.0;
		uStack_c8._0_4_ = 0.0;
		uStack_c8._4_4_ = 0.0;
		fStack_c0 = 0.0;
		fStack_bc = 0.0;
		_Stack_d8.genericMethod = null;
		uStack_d0._0_4_ = 0.0;
		uStack_d0._4_4_ = 0.0;
		ppIStack_e8 = null;
		_Stack_e0.rgctx_data = null;
		uStack_f8 = null;
		uStack_f0 = null;
		pIStack_108 = (InvokerMethod)0x0;
		pcStack_100 = null;
		auStack_118 = (byte[])0x0;
		pIStack_110 = (Il2CppMethodPointer)0x0;
		if (helper != null) {
			uVar29 = helper.currentVertCount;
			uStack_48 = (ulong)uVar29;
			uVar26 = uVar29 + 3;
			if (-1 < (int)uVar29) {
				uVar26 = uVar29;
			}
			length = (int)uVar26 >> 2;
			pIVar22 = new int[length];
			if ((int)uVar29 < 4) goto label_0533265a;
			if (pIVar22 == null) {
				pMVar21 = (MethodInfo)auStack_118;
				helper.PopulateUIVertex((UIVertex)pMVar21, 0);
				uVar10 = auStack_118._4_4_;
				helper.PopulateUIVertex((UIVertex)pMVar21, 1);
				uVar11 = auStack_118._4_4_;
				helper.PopulateUIVertex((UIVertex)pMVar21, 2);
				uVar12 = auStack_118._4_4_;
				helper.PopulateUIVertex((UIVertex)pMVar21, 3);
				uVar13 = auStack_118._4_4_;
				GisketchRtlTextLines.LineAt((IList<UILineInfo>)obj, ((float)uVar13 * 0.25 +(float)uVar12 * 0.25 + (float)uVar11 * 0.25 + (float)uVar10 * 0.25 + 0.0) / fVar30);
				throw new NullReferenceException();
			}
			uStack_38 = (ulong)length;
			iVar23 = 3;
			uVar28 = 0;
			goto label_05332460;
		}
		goto label_05332d27;
	code_r0x05331f47: ;
		uVar26 = uVar24 + 1;
		pIVar4 = obj.klass;
		uVar28 = (ulong)(pIVar4._2).interface_offsets_count;
		iVar23 = obj.get_Item((ulong)uVar26);
		if (0 < iVar23) {
			if (text == null) goto label_05332d27;
			if (iVar23 <= text._stringLength) {
				uVar16 = text.get_Chars(iVar23 + -1);
				if (uVar16 == 10) {
	label_05332018: ;
					pIVar4 = obj.klass;
					uVar28 = (ulong)(pIVar4._2).interface_offsets_count;
					iVar17 = obj.get_Item();
					if ((int)uVar24 < iVar17 + -1) {
						pIVar4 = obj.klass;
						uVar28 = (ulong)(pIVar4._2).interface_offsets_count;
						iVar23 = obj.get_Item((ulong)(uVar24 + 1));
					}
					else {
						if (text == null) goto label_05332d27;
						iVar23 = text._stringLength;
					}
					if ((int)uVar29 < (int)uVar24) {
						pIVar4 = obj.klass;
						uVar28 = (ulong)(pIVar4._2).interface_offsets_count;
						if (uVar28 != 0) {
							pIVar5 = (pIVar4._1).interfaceOffsets;
							lVar27 = 0;
							do {
								if (*(Il2CppClass*)((long)&pIVar5.interfaceType + lVar27) ==typeof(IList<UILineInfo>)) {
									pMVar21 = (MethodInfo)&pIVar4.vtable[*(int)((long)&pIVar5.offset + lVar27)].methodPtr;
									goto label_05332171;
								}
								lVar27 = lVar27 + 0x10;
							} while (uVar28 * 0x10 != lVar27);
						}
						pMVar21 = (MethodInfo)GetInterfaceInvokeDataFromVTableSlowPath(obj, typeof(IList<UILineInfo>), 0);
	label_05332171: ;
						iVar17 = (*pMVar21.methodPointer)(obj,(ulong)uVar29,(MethodInfo)pMVar21.virtualMethodPointer);
						if (text == null) goto label_05332d27;
						end = text._stringLength;
						if (iVar23 < end) {
							end = iVar23;
						}
						bVar15 = GisketchArabicText.EndsRightToLeft(text, iVar17, end);
						if ((bVar15) && (bVar14 = true, (int)uVar29 <= (int)uVar24)) {
							iVar23 = uVar29 + uVar24;
							do {
								pSVar6 = GisketchRtlTextLines.LineShift;
								pIVar4 = obj.klass;
								uVar28 = (ulong)(pIVar4._2).interface_offsets_count;
								fVar31 = (float)obj.get_Item((ulong)(iVar23 - uVar29));
								pIVar4 = obj.klass;
								uVar28 = (ulong)(pIVar4._2).interface_offsets_count;
								fVar32 = (float)obj.get_Item((ulong)uVar29);
								if (pSVar6 == null) goto label_05332d27;
								pSVar6.set_Item(uVar29, (fVar31 - fVar32) * fVar30);
								pSVar7 = GisketchRtlTextLines.LineReversed;
								if (pSVar7 == null) goto label_05332d27;
								pSVar7.set_Item(uVar29, true);
								uVar29 = uVar29 + 1;
							} while ((int)uVar29 <= (int)uVar24);
						}
					}
					uVar29 = uVar24 + 1;
					uVar26 = uVar29;
				}
			}
		}
		goto label_05331e60;
		while(true) {
			*(int)((long)&pIVar22[2].klass + uVar28 * 4) = iVar17;
			pSVar6 = GisketchRtlTextLines.LineRight;
			if (pSVar6 == null) goto label_05332d27;
			fVar32 = pSVar6.get_Item(iVar17);
			if (fVar32 <= fVar31) {
				fVar32 = fVar31;
			}
			pSVar6.set_Item(iVar17, fVar32);
			uVar28 = uVar28 + 1;
			iVar23 = iVar23 + 4;
			if (uStack_38 == uVar28) break;
	label_05332460: ;
			helper.PopulateUIVertex((UIVertex)auStack_118, iVar23 + -3);
			fVar31 = -3.4028235e+38;
			if (-3.4028235e+38 <= (float)auStack_118._0_4_) {
				fVar31 = (float)auStack_118._0_4_;
			}
			fVar32 = (float)auStack_118._4_4_ * 0.25;
			helper.PopulateUIVertex((UIVertex)auStack_118, iVar23 + -2);
			if (fVar31 <= (float)auStack_118._0_4_) {
				fVar31 = (float)auStack_118._0_4_;
			}
			fStack_78 = (float)auStack_118._4_4_ * 0.25;
			helper.PopulateUIVertex((UIVertex)auStack_118, iVar23 + -1);
			if (fVar31 <= (float)auStack_118._0_4_) {
				fVar31 = (float)auStack_118._0_4_;
			}
			uStack_a0 = CONCAT44(uStack_a0._4_4_, (float)auStack_118._4_4_ * 0.25);
			pMVar21 = (MethodInfo)auStack_118;
			helper.PopulateUIVertex((UIVertex)auStack_118, iVar23);
			if (fVar31 <= (float)auStack_118._0_4_) {
				fVar31 = (float)auStack_118._0_4_;
			}
			fVar33 = (float)auStack_118._4_4_ * 0.25;
			if ((typeof(GisketchRtlTextLines)._2).cctor_finished_or_no_cctor == 0) {
				fStack_94 = (float)auStack_118._4_4_ * 0.25;
				fVar33 = fStack_94;
			}
			iVar17 = GisketchRtlTextLines.LineAt((IList<UILineInfo>)obj, (fVar32 + 0.0 + fStack_78 + (float)uStack_a0 + fVar33) / fVar30);
			if (*(uint)&pIVar22[1].monitor <= uVar28) goto label_05332d2c;
		}
	label_0533265a: ;
		pUVar25 = pUStack_40;
		uVar28 = 0;
		iVar17 = pUStack_40.alignment;
		if (iVar17 == 0) {
			uVar3 = (typeof(GisketchRtlTextLines)._2).cctor_finished_or_no_cctor;
	joined_r0x053326ce: ;
			if (uVar3 != 0) goto label_053326a0;
	label_053326ef: ;
			pSVar6 = GisketchRtlTextLines.LineRight;
		}
		else {
			uVar28 = 0;
			iVar17 = pUVar25.alignment;
			if (iVar17 != 3) {
				iVar17 = pUVar25.alignment;
				uVar28 = (ulong)(iVar17 != 6);
				uVar3 = (typeof(GisketchRtlTextLines)._2).cctor_finished_or_no_cctor;
				goto joined_r0x053326ce;
			}
			if ((typeof(GisketchRtlTextLines)._2).cctor_finished_or_no_cctor == 0) goto label_053326ef;
	label_053326a0: ;
			pSVar6 = GisketchRtlTextLines.LineRight;
		}
		if (pSVar6 == null) {
	label_05332d27: ;
			throw new NullReferenceException();
		}
		auStack_90.GetEnumerator(pSVar6);
		pIStack_58 = pIStack_80;
		auStack_68 = (byte[])auStack_90._0_8_;
		auStack_90._0_8_ = null;
		auStack_90._8_8_ = (System_Collections_Generic_List_Enumerator_T__o)auStack_68;
		while (bVar14 = auStack_68.MoveNext()) {
			if (fStack_15c <= pIStack_58._0_4_) {
				fStack_15c = pIStack_58._0_4_;
			}
		}
		uStack_a0 = uVar28;
		il2cpp_runtime_helper_02d4a2a0(auStack_90);
		if (3 < (int)uStack_48) {
			if (pIVar22 == null) goto label_05332d27;
			iVar23 = 3;
			uVar28 = 0;
			do {
				if (*(uint)&pIVar22[1].monitor <= uVar28) {
	label_05332d2c: ;
					throw new IndexOutOfRangeException();
				}
				iVar17 = *(int)((long)&pIVar22[2].klass + uVar28 * 4);
				pSVar7 = GisketchRtlTextLines.LineReversed;
				if (pSVar7 == null) goto label_05332d27;
				bVar14 = pSVar7.get_Item(iVar17);
				if (bVar14) {
					fVar30 = 0.0;
					if ((char)uStack_a0 == false) {
						pSVar6 = GisketchRtlTextLines.LineRight;
						if (pSVar6 == null) goto label_05332d27;
						fVar30 = pSVar6.get_Item(iVar17) ;
						fVar30 = fStack_15c - fVar30;
					}
					pSVar6 = GisketchRtlTextLines.LineShift;
					if (pSVar6 == null) goto label_05332d27;
					fStack_78 = pSVar6.get_Item(iVar17);
					helper.PopulateUIVertex((UIVertex)auStack_118, iVar23 + -3);
					fVar31 = fStack_78;
					auStack_118 = (byte[])CONCAT44(auStack_118._4_4_ + fStack_78, auStack_118._0_4_ + fVar30);
					pIStack_110 = (Il2CppMethodPointer)CONCAT44(pIStack_110._4_4_, pIStack_110._0_4_ + 0.0);
					vertex._8_8_ = pIStack_110;
					vertex.position._0_8_ = auStack_118;
					vertex.normal._4_8_ = pIStack_108;
					vertex.tangent._0_8_ = pcStack_100;
					vertex.tangent.z = (float)(int)uStack_f8;
					vertex.tangent.w = (float)(int)((ulong)uStack_f8 >> 0x20);
					vertex.color._overlap_0 =(Color32)(Color32)(int)uStack_f0;
					vertex.uv0.x = (float)(int)((ulong)uStack_f0 >> 0x20);
					vertex.uv0._4_8_ = ppIStack_e8;
					vertex._56_8_ = _Stack_e0.rgctx_data;
					vertex.uv1._4_8_ = _Stack_d8.genericMethod;
					vertex.uv1.w = (float)uStack_d0;
					vertex.uv2.x = uStack_d0._4_4_;
					vertex.uv2.y = (float)uStack_c8;
					vertex.uv2.z = uStack_c8._4_4_;
					vertex.uv2.w = fStack_c0;
					vertex.uv3.x = fStack_bc;
					vertex.uv3.y = fStack_b8;
					vertex.uv3.z = (float)uStack_b4;
					vertex.uv3.w = uStack_b4._4_4_;
					helper.SetUIVertex(vertex, iVar23 + -3);
					helper.PopulateUIVertex((UIVertex)auStack_118, iVar23 + -2);
					auStack_118 = (byte[])CONCAT44(auStack_118._4_4_ + fVar31, auStack_118._0_4_ + fVar30);
					pIStack_110 = (Il2CppMethodPointer)CONCAT44(pIStack_110._4_4_, pIStack_110._0_4_ + 0.0);
					vertex_00._8_8_ = pIStack_110;
					vertex_00.position._0_8_ = auStack_118;
					vertex_00.normal._4_8_ = pIStack_108;
					vertex_00.tangent._0_8_ = pcStack_100;
					vertex_00.tangent.z = (float)(int)uStack_f8;
					vertex_00.tangent.w = (float)(int)((ulong)uStack_f8 >> 0x20);
					vertex_00.color._overlap_0 =(Color32)(Color32)(int)uStack_f0;
					vertex_00.uv0.x = (float)(int)((ulong)uStack_f0 >> 0x20);
					vertex_00.uv0._4_8_ = ppIStack_e8;
					vertex_00._56_8_ = _Stack_e0.rgctx_data;
					vertex_00.uv1._4_8_ = _Stack_d8.genericMethod;
					vertex_00.uv1.w = (float)uStack_d0;
					vertex_00.uv2.x = uStack_d0._4_4_;
					vertex_00.uv2.y = (float)uStack_c8;
					vertex_00.uv2.z = uStack_c8._4_4_;
					vertex_00.uv2.w = fStack_c0;
					vertex_00.uv3.x = fStack_bc;
					vertex_00.uv3.y = fStack_b8;
					vertex_00.uv3.z = (float)uStack_b4;
					vertex_00.uv3.w = uStack_b4._4_4_;
					helper.SetUIVertex(vertex_00, iVar23 + -2);
					helper.PopulateUIVertex((UIVertex)auStack_118, iVar23 + -1);
					auStack_118 = (byte[])CONCAT44(auStack_118._4_4_ + fVar31, auStack_118._0_4_ + fVar30);
					pIStack_110 = (Il2CppMethodPointer)CONCAT44(pIStack_110._4_4_, pIStack_110._0_4_ + 0.0);
					vertex_01._8_8_ = pIStack_110;
					vertex_01.position._0_8_ = auStack_118;
					vertex_01.normal._4_8_ = pIStack_108;
					vertex_01.tangent._0_8_ = pcStack_100;
					vertex_01.tangent.z = (float)(int)uStack_f8;
					vertex_01.tangent.w = (float)(int)((ulong)uStack_f8 >> 0x20);
					vertex_01.color._overlap_0 =(Color32)(Color32)(int)uStack_f0;
					vertex_01.uv0.x = (float)(int)((ulong)uStack_f0 >> 0x20);
					vertex_01.uv0._4_8_ = ppIStack_e8;
					vertex_01._56_8_ = _Stack_e0.rgctx_data;
					vertex_01.uv1._4_8_ = _Stack_d8.genericMethod;
					vertex_01.uv1.w = (float)uStack_d0;
					vertex_01.uv2.x = uStack_d0._4_4_;
					vertex_01.uv2.y = (float)uStack_c8;
					vertex_01.uv2.z = uStack_c8._4_4_;
					vertex_01.uv2.w = fStack_c0;
					vertex_01.uv3.x = fStack_bc;
					vertex_01.uv3.y = fStack_b8;
					vertex_01.uv3.z = (float)uStack_b4;
					vertex_01.uv3.w = uStack_b4._4_4_;
					helper.SetUIVertex(vertex_01, iVar23 + -1);
					helper.PopulateUIVertex((UIVertex)auStack_118, iVar23);
					auStack_118 = (byte[])CONCAT44(auStack_118._4_4_ + fVar31, auStack_118._0_4_ + fVar30);
					pIStack_110 = (Il2CppMethodPointer)CONCAT44(pIStack_110._4_4_, pIStack_110._0_4_ + 0.0);
					vertex_02._8_8_ = pIStack_110;
					vertex_02.position._0_8_ = auStack_118;
					vertex_02.normal._4_8_ = pIStack_108;
					vertex_02.tangent._0_8_ = pcStack_100;
					vertex_02.tangent.z = (float)uStack_f8;
					vertex_02.tangent.w = uStack_f8._4_4_;
					vertex_02.color._overlap_0 = uStack_f0._0_4_;
					vertex_02.uv0.x = uStack_f0._4_4_;
					vertex_02.uv0._4_8_ = ppIStack_e8;
					vertex_02._56_8_ = _Stack_e0.rgctx_data;
					vertex_02.uv1._4_8_ = _Stack_d8.genericMethod;
					vertex_02.uv1.w = (float)uStack_d0;
					vertex_02.uv2.x = uStack_d0._4_4_;
					vertex_02.uv2.y = (float)uStack_c8;
					vertex_02.uv2.z = uStack_c8._4_4_;
					vertex_02.uv2.w = fStack_c0;
					vertex_02.uv3.x = fStack_bc;
					vertex_02.uv3.y = fStack_b8;
					vertex_02.uv3.z = (float)uStack_b4;
					vertex_02.uv3.w = uStack_b4._4_4_;
					helper.SetUIVertex(vertex_02, iVar23);
				}
				uVar28 = uVar28 + 1;
				iVar23 = iVar23 + 4;
			} while (length != uVar28);
		}
		return;
	}

	[Token(Token = "0x6000168")]
	[Address(RVA = "0x5232D60", Offset = "0x5231D60", VA = "0x5232D60")]
	private static bool EndsParagraph(string value, int nextLineStart)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchRtlTextLines.c (Gisketch.Aottg2UI.Styling.GisketchRtlTextLines$$EndsParagraph): clean
		ushort uVar1;

		if (0 < nextLineStart) {
			if (value == null) {
				throw new NullReferenceException();
			}
			if (nextLineStart <= value._stringLength) {
				uVar1 = value.get_Chars(nextLineStart + -1);
				return uVar1 == 10;
			}
		}
		return false;
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x5232D90", Offset = "0x5231D90", VA = "0x5232D90")]
	private static int LineAt(IList<UILineInfo> lines, float y)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchRtlTextLines.c (Gisketch.Aottg2UI.Styling.GisketchRtlTextLines$$LineAt): 8 lines keep C-only constructs
		IList<UILineInfo> pSVar1;
		Il2CppRuntimeInterfaceOffsetPair pIVar2;
		int iVar3;
		VirtualInvokeData pVVar4;
		int extraout_var;
		ulong uVar5;
		long lVar6;
		uint uVar7;
		float fVar8;

		if (lines == null) {
			throw new NullReferenceException();
		}
		uVar7 = 0;
		do {
			pSVar1 = lines.klass;
			uVar5 = (ulong)(pSVar1._2).interface_offsets_count;
			iVar3 = lines.CopyTo();
			if (iVar3 <= (int)uVar7) {
				pSVar1 = lines.klass;
				uVar5 = (ulong)(pSVar1._2).interface_offsets_count;
				if (uVar5 == 0) goto label_05332f8f;
				pIVar2 = (pSVar1._1).interfaceOffsets;
				lVar6 = 0;
				break;
			}
			pSVar1 = lines.klass;
			uVar5 = (ulong)(pSVar1._2).interface_offsets_count;
			fVar8 = (float)lines.CopyTo((ulong)uVar7);
			pSVar1 = lines.klass;
			uVar5 = (ulong)(pSVar1._2).interface_offsets_count;
			lines.CopyTo((ulong)uVar7);
			if (fVar8 - (float)extraout_var < y) {
				return uVar7;
			}
			uVar7 = uVar7 + 1;
		} while(true);
		while (true) {
			lVar6 = lVar6 + 0x10;
			if (!(uVar5 * 0x10 != lVar6)) break;
			if (*(ICollection<UILineInfo>*)((long)&pIVar2.interfaceType + lVar6) == typeof(ICollection<UILineInfo>)) {
				pVVar4 = pSVar1.vtable + *(int)((long)&pIVar2.offset + lVar6);
				goto label_05332fb1;
			}
		}
	label_05332f8f: ;
	label_05332fb1: ;
		iVar3 = lines.CopyTo();
		return iVar3 + -1;
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x5232FE0", Offset = "0x5231FE0", VA = "0x5232FE0")]
	public GisketchRtlTextLines()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchRtlTextLines.c (Gisketch.Aottg2UI.Styling.GisketchRtlTextLines$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Styling/GisketchRtlTextLines.c.

	// Gisketch.Aottg2UI.Styling.GisketchRtlTextLines$$.cctor: clean
	static GisketchRtlTextLines()
	{
		Gisketch_Aottg2UI_Styling_GisketchRtlTextLines_StaticFields pGVar1;
		List<float> pSVar2;
		List<bool> __this;

		pSVar2 = new List<float>();
		GisketchRtlTextLines.LineShift = pSVar2;
		pSVar2 = new List<float>();
		pGVar1 = typeof(GisketchRtlTextLines).static_fields;
		pGVar1.LineRight = pSVar2;
		__this = new List<bool>();
		pGVar1 = typeof(GisketchRtlTextLines).static_fields;
		pGVar1.LineReversed = __this;
		return;
	}
}
