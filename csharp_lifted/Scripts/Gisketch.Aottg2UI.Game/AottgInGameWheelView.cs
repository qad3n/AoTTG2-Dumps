// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgInGameWheelView
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgInGameWheelView.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000288")]
internal sealed class AottgInGameWheelView
{
	[Token(Token = "0x4000CFD")]
	public const int SlotCount = 8;

	[Token(Token = "0x4000CFE")]
	[FieldOffset(Offset = "0x10")]
	private readonly Button[] _buttons;

	[Token(Token = "0x4000CFF")]
	[FieldOffset(Offset = "0x18")]
	private readonly TMP_Text[] _shortcuts;

	[Token(Token = "0x4000D00")]
	[FieldOffset(Offset = "0x20")]
	private readonly TMP_Text[] _labels;

	[Token(Token = "0x4000D01")]
	[FieldOffset(Offset = "0x28")]
	private readonly TMP_FontAsset[] _labelFonts;

	[Token(Token = "0x4000D02")]
	[FieldOffset(Offset = "0x30")]
	private readonly TMP_Text _title;

	[Token(Token = "0x4000D03")]
	[FieldOffset(Offset = "0x38")]
	private readonly TMP_Text _hint;

	[Token(Token = "0x6000F76")]
	[Address(RVA = "0x57B2850", Offset = "0x57B1850", VA = "0x57B2850")]
	public AottgInGameWheelView(Transform parent)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgInGameWheelView.c (Gisketch.Aottg2UI.Game.AottgInGameWheelView$$.ctor): 18 lines keep C-only constructs
		TMP_FontAsset obj;
		Vector2 position;
		Vector2 position_00;
		bool bVar1;
		uint uVar2;
		Button[] pUVar3;
		TMP_Text[] pTVar4;
		TMP_FontAsset[] pTVar5;
		AottgInGameView pGVar6;
		Transform pUVar7;
		Transform parent_00;
		TMP_Text pTVar8;
		object pIVar9;
		String pSVar10;
		GisketchNodeDefinition __this_00;
		String pSVar11;
		GisketchLength pGVar12;
		GisketchLength pGVar13;
		GisketchLayoutDefinition pGVar14;
		GisketchNodeDefinition[] pGVar15;
		GisketchNodeDefinition pGVar16;
		Vector2 UVar17;
		Button obj_00;
		Object[] pSVar18;
		TMP_Text* ppTVar20;
		long lVar21;
		uint uVar22;
		float fVar23;
		float fVar24;
		uint local_9c;
		Vector2 local_98;
		AottgInGameView local_80;
		MethodInfo local_78;
		TMP_Text[]* local_70;
		object local_68;
		TMP_FontAsset[]* local_60;
		AottgInGameWheelView local_58;
		TMP_Text[]* local_50;
		Enum local_48;

		local_78 = (MethodInfo)parent;
		local_9c = 0;
		pUVar3 = (Button[])new Button[8];
		local_58 = &this.fields;
		this._buttons = pUVar3;
		pTVar4 = (TMP_Text[])new TMP_Text[8];
		local_50 = &this._shortcuts;
		this._shortcuts = pTVar4;
		pTVar4 = (TMP_Text[])new TMP_Text[8];
		local_70 = &this._labels;
		this._labels = pTVar4;
		pTVar5 = (TMP_FontAsset[])new TMP_FontAsset[8];
		local_60 = &this._labelFonts;
		this._labelFonts = pTVar5;
		base();
		pGVar6 = new AottgInGameView();
		if (pGVar6 != null) {
			local_80 = pGVar6;
			pUVar7 = pGVar6.Panel((Transform)local_78, "inGameSurface", 250.0, 150.0, false, (Nullable<float>)0x0);
			UVar17 = (Vector2.zeroVector);
			fVar23 = UVar17.x;
			fVar24 = UVar17.y;
			if ((typeof(AottgInGameView)._2).cctor_finished_or_no_cctor == 0) {
				local_98 = UVar17;
				fVar23 = local_98.x;
				fVar24 = local_98.y;
			}
			position.y = fVar24;
			position.x = fVar23;
			AottgInGameView.Position(pUVar7, position);
			pGVar6 = local_80;
			parent_00 = local_80.Panel(pUVar7, "inGameWheelHeader", 250.0, 48.0, false, (Nullable<float>)0x0);
			pTVar8 = pGVar6.Text(parent_00, (String)**(ulong*)(g_data_07556758 + 0xb8), 230.0, 42.0, "inGameTitle");
			this._title = pTVar8;
			pTVar8 = pGVar6.Text(pUVar7, (String)**(ulong*)(g_data_07556758 + 0xb8), 230.0, 102.0, "inGameWheelHint");
			this._hint = pTVar8;
			pIVar9 = new Vector2[8];
			if (pIVar9 != null) {
				uVar2 = *(uint)&pIVar9[1].monitor;
				if (((((uVar2 == 0) || (pIVar9[2].klass = (Il2CppClass)0x4361000000000000, uVar2 == 1)) ||(pIVar9[2].monitor = (IntPtr)0x43070000437a0000, uVar2 < 3)) ||((pIVar9[3].klass = (Il2CppClass)0x43938000, uVar2 == 3 ||(pIVar9[3].monitor = (IntPtr)0xc3070000437a0000, uVar2 < 5)))) ||((pIVar9[4].klass = (Il2CppClass)0xc361000000000000, uVar2 == 5 ||((pIVar9[4].monitor = (IntPtr)0xc3070000c37a0000, uVar2 < 7 ||(pIVar9[5].klass = (Il2CppClass)0xc3938000, uVar2 == 7)))))) {
	label_058b346f: ;
					throw new IndexOutOfRangeException();
				}
				pIVar9[5].monitor = (IntPtr)0x43070000c37a0000;
				local_9c = 0;
				local_68 = pIVar9;
				while(true) {
					pSVar10 = local_9c.ToString();
					pSVar10 = String.Concat("AoTTG Wheel Shortcut ", pSVar10);
					__this_00 = new GisketchNodeDefinition();
					if (__this_00 == null) break;
					__this_00.type = "Button";
					local_48.klass = (Enum)typeof(AottgButtonVariant);
					local_48.monitor = (IntPtr)0xffffffffffffffff;
					pSVar11 = local_48.ToString();
					pSVar11 = String.Concat("button", pSVar11);
					__this_00.style = pSVar11;
					__this_00.action = "ingame.wheel.select";
					pSVar11 = local_9c.ToString();
					__this_00.value = pSVar11;
					pGVar12 = AottgUi.Points(220.0);
					pGVar13 = AottgUi.Points(76.0);
					pGVar14 = AottgUi.Layout("Column", "Center", "Center", null, null, 2.0, pGVar12, pGVar13, null, null, null, null, 6.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
					__this_00.layout = pGVar14;
					pGVar15 = (GisketchNodeDefinition[])new GisketchNodeDefinition[2];
					pGVar16 = new GisketchNodeDefinition();
					if (pGVar16 == null) break;
					pGVar16.type = "Text";
					pGVar16.id = pSVar10;
					pGVar16.style = "inGameWheelShortcut";
					pGVar16.text = " ";
					pGVar12 = AottgUi.Points(200.0);
					pGVar13 = AottgUi.Points(20.0);
					pGVar14 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar12, pGVar13, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
					pGVar16.layout = pGVar14;
					if (pGVar15 == null) break;
					if ((int)pGVar15.Length == 0) goto label_058b346f;
					pGVar15[0] = pGVar16;
					pGVar16 = new GisketchNodeDefinition();
					if (pGVar16 == null) break;
					pGVar16.type = "Text";
					pSVar11 = local_9c.ToString();
					pSVar11 = String.Concat("AoTTG Wheel Action ", pSVar11);
					pGVar16.id = pSVar11;
					pGVar16.style = "inGameWheelText";
					pGVar16.text = " ";
					pGVar12 = AottgUi.Points(200.0);
					pGVar13 = AottgUi.Points(38.0);
					pGVar14 = AottgUi.Layout("Column", null, null, null, null, 0.0, pGVar12, pGVar13, null, null, null, null, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0, 0.0);
					pGVar16.layout = pGVar14;
					if ((pGVar15.Length & 0xfffffffe) == 0) goto label_058b346f;
					pGVar15[1] = pGVar16;
					__this_00.children = pGVar15;
					UVar17 = (Vector2)local_80.Build((Transform)local_78, __this_00);
					uVar2 = local_9c;
					if (UVar17 == (Vector2)0x0) break;
					pUVar3 = local_58._buttons;
					lVar21 = (long)(int)local_9c;
					obj_00 = UVar17.GetComponent<Button>();
					if (pUVar3 == null) break;
					if (obj_00 != null) {
						pIVar9 = il2cpp_vm_Object_IsInst((object)obj_00, (((pUVar3.obj).klass)._1).element_class);
						if (pIVar9 == null) goto label_058b3474;
					}
					if ((uint)pUVar3.Length <= uVar2) goto label_058b346f;
					pUVar3[lVar21] = obj_00;
					local_98 = UVar17;
					pSVar18 = UVar17.GetComponentsInChildren<TMP_Text>(true);
					if (pSVar18 == null) break;
					uVar2 = (uint)pSVar18.Length;
					if (0 < (int)uVar2) {
						uVar22 = 0;
						do {
							if (uVar2 <= uVar22) goto label_058b346f;
							pTVar8 = (TMP_Text)pSVar18[(int)uVar22];
							if (pTVar8 == null) goto label_058b346a;
							pSVar11 = pTVar8.name;
							bVar1 = (pSVar11 == pSVar10);
							uVar2 = local_9c;
							if (bVar1) {
								pTVar4 = *local_50;
								if (pTVar4 == null) goto label_058b346a;
								lVar21 = (long)(int)local_9c;
								pIVar9 = il2cpp_vm_Object_IsInst((object)pTVar8, (((pTVar4.obj).klass)._1).element_class);
								if (pIVar9 == null) goto label_058b3474;
								if ((uint)pTVar4.Length <= uVar2) goto label_058b346f;
								ppTVar20 = pTVar4.m_Items + lVar21 + -4;
								pTVar4[lVar21] = pTVar8;
							}
							else {
								pTVar4 = *local_70;
								if (pTVar4 == null) goto label_058b346a;
								lVar21 = (long)(int)local_9c;
								pIVar9 = il2cpp_vm_Object_IsInst((object)pTVar8, (((pTVar4.obj).klass)._1).element_class);
								if (pIVar9 == null) goto label_058b3474;
								if ((uint)pTVar4.Length <= uVar2) goto label_058b346f;
								ppTVar20 = pTVar4.m_Items + lVar21 + -4;
								pTVar4[lVar21] = pTVar8;
							}
							pTVar8.enableAutoSizing = true;
							pTVar8.fontSizeMin = 14.0;
							pTVar8.fontSizeMax = pTVar8.m_fontSize;
							uVar22 = uVar22 + 1;
							uVar2 = (uint)pSVar18.Length;
						} while ((int)uVar22 < (int)uVar2);
					}
					uVar2 = local_9c;
					pTVar4 = *local_70;
					if (pTVar4 == null) break;
					lVar21 = (long)(int)local_9c;
					if ((uint)pTVar4.Length <= local_9c) goto label_058b346f;
					if ((pTVar4[lVar21] == null) ||(pTVar5 = *local_60, pTVar5 == null)) break;
					obj = pTVar4[lVar21].m_fontAsset;
					if (obj != null) {
						pIVar9 = il2cpp_vm_Object_IsInst((object)obj, (((pTVar5.obj).klass)._1).element_class);
						if (pIVar9 == null) {
	label_058b3474: ;
							pIVar9 = new ArrayTypeMismatchException();
							throw pIVar9;
						}
					}
					if ((uint)pTVar5.Length <= uVar2) goto label_058b346f;
					pTVar5[lVar21] = obj;
					pUVar7 = local_98.transform ;
					if (*(uint)&local_68[1].monitor <= local_9c) goto label_058b346f;
					UVar17 = *(Vector2)(&local_68[2].klass + (int)local_9c);
					fVar23 = UVar17.x;
					fVar24 = UVar17.y;
					if ((typeof(AottgInGameView)._2).cctor_finished_or_no_cctor == 0) {
						local_98 = UVar17;
						fVar23 = local_98.x;
						fVar24 = local_98.y;
					}
					position_00.y = fVar24;
					position_00.x = fVar23;
					AottgInGameView.Position(pUVar7, position_00);
					local_9c = local_9c + 1;
					if (7 < (int)local_9c) {
						return;
					}
				}
			}
		}
	label_058b346a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000F77")]
	[Address(RVA = "0x57B3490", Offset = "0x57B2490", VA = "0x57B3490")]
	public void Show(string title, string hint, IReadOnlyList<string> options, IReadOnlyList<string> shortcuts)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgInGameWheelView.c (Gisketch.Aottg2UI.Game.AottgInGameWheelView$$Show): clean
		TMP_Text pTVar1;
		Button[] pUVar4;
		TMP_Text[] pTVar5;
		TMP_FontAsset[] pTVar6;
		int iVar7;
		GameObject __this_00;
		String pSVar9;
		TMP_FontAsset value;
		uint uVar11;

		pTVar1 = this._title;
		if (pTVar1 != null) {
			pTVar1.set_text(title);
			pTVar1 = this._hint;
			if (pTVar1 != null) {
				pTVar1.set_text(hint);
				if (options != null) {
					uVar11 = 0;
					do {
						iVar7 = options.get_Item();
						pUVar4 = this._buttons;
						if (pUVar4 == null) break;
						if ((uint)pUVar4.Length <= uVar11) goto label_058b37f5;
						if (pUVar4[(int)uVar11] == null) break;
						__this_00 = (pUVar4[(int)uVar11]).gameObject;
						if (__this_00 == null) break;
						__this_00.SetActive((int)uVar11 < iVar7);
						if ((int)uVar11 < iVar7) {
							pTVar5 = this._shortcuts;
							if (pTVar5 == null) break;
							if ((uint)pTVar5.Length <= uVar11) {
	label_058b37f5: ;
								throw new IndexOutOfRangeException();
							}
							if (shortcuts == null) break;
							pTVar1 = pTVar5[(int)uVar11];
							pSVar9 = shortcuts.get_Item(uVar11);
							if (pTVar1 == null) break;
							pTVar1.set_text(pSVar9);
							pSVar9 = options.get_Item(uVar11);
							pSVar9 = GisketchArabicText.ToVisual(pSVar9, false);
							pTVar5 = this._labels;
							if (pTVar5 == null) break;
							if ((uint)pTVar5.Length <= uVar11) goto label_058b37f5;
							pTVar6 = this._labelFonts;
							if (pTVar6 == null) break;
							if ((uint)pTVar6.Length <= uVar11) goto label_058b37f5;
							pTVar1 = pTVar5[(int)uVar11];
							value = GisketchTypography.ForText(pSVar9, pTVar6[(int)uVar11]);
							if (pTVar1 == null) break;
							pTVar1.font = value;
							pTVar5 = this._labels;
							if (pTVar5 == null) break;
							if ((uint)pTVar5.Length <= uVar11) goto label_058b37f5;
							pTVar1 = pTVar5[(int)uVar11];
							if (pTVar1 == null) break;
							pTVar1.set_text(pSVar9);
						}
						uVar11 = uVar11 + 1;
						if (uVar11 == 8) {
							return;
						}
					} while(true);
				}
			}
		}
		throw new NullReferenceException();
	}
}
