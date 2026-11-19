// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterInfoHandler
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CharacterInfoHandler.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CharacterInfoHandler.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Assets.Scripts.Utility;
using Characters;
using GameManagers;
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000812")]
internal class CharacterInfoHandler : MonoBehaviour
{
	[Token(Token = "0x4002814")]
	[FieldOffset(Offset = "0x20")]
	protected HashSet<SetItem<BaseCharacter, CharacterInfoPopup>> _characterInfoPopups;

	[Token(Token = "0x4002815")]
	protected const float TitanRange = 250f;

	[Token(Token = "0x4002816")]
	protected const float HumanOffset = 1.75f;

	[Token(Token = "0x4002817")]
	protected const float TitanOffset = 20f;

	[Token(Token = "0x4002818")]
	protected const float CrawlerOffset = 5f;

	[Token(Token = "0x4002819")]
	protected const float ShifterOffset = 57f;

	[Token(Token = "0x400281A")]
	[FieldOffset(Offset = "0x28")]
	protected Color RedColor;

	[Token(Token = "0x400281B")]
	[FieldOffset(Offset = "0x38")]
	protected Color GreenColor;

	[Token(Token = "0x400281C")]
	[FieldOffset(Offset = "0x48")]
	protected LayerMask CullMask;

	[Token(Token = "0x400281D")]
	[FieldOffset(Offset = "0x50")]
	private InGameManager _inGameManager;

	[Token(Token = "0x400281E")]
	[FieldOffset(Offset = "0x58")]
	private SetItem<BaseCharacter, CharacterInfoPopup> mockEntry;

	[Token(Token = "0x6004D1C")]
	[Address(RVA = "0x5C00300", Offset = "0x5BFF300", VA = "0x5C00300")]
	private void Awake()
	{
		// Lifted from source/cpp/UI/CharacterInfoHandler.c (UI.CharacterInfoHandler$$Awake): 2 lines keep C-only constructs
		byte bVar1;
		InGameManager pGVar2;
		InGameManager pGVar3;

		pGVar3 = typeof(InGameManager);
		pGVar2 = (InGameManager)SceneLoader.CurrentGameManager;
		if (pGVar2 == null) {
			this._inGameManager = null;
			return;
		}
		bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
		if ((bVar1 <= (pGVar2.klass._2).typeHierarchyDepth) &&((pGVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(InGameManager))) {
			this._inGameManager = pGVar2;
			if ((bVar1 <= (pGVar2.klass._2).typeHierarchyDepth) &&((pGVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass)pGVar3)) {
				return;
			}
		}
		throw new InvalidCastException();
	}

	[Token(Token = "0x6004D1D")]
	[Address(RVA = "0x5C003C0", Offset = "0x5BFF3C0", VA = "0x5C003C0")]
	protected void LateUpdate()
	{
		// Lifted from source/cpp/UI/CharacterInfoHandler.c (UI.CharacterInfoHandler$$LateUpdate): 64 lines keep C-only constructs
		float pfVar1;
		Color pUVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		uint uVar8;
		uint uVar9;
		uint uVar10;
		byte bVar11;
		sbyte cVar12;
		uint uVar13;
		int iVar14;
		int iVar15;
		int iVar16;
		int iVar17;
		InGameCamera __this_00;
		UISettings pSVar18;
		IntSetting pSVar19;
		IntSetting pSVar20;
		IntSetting pSVar21;
		HashSet<object> __this_01;
		Il2CppClass __this_02;
		CharacterInfoPopup pUVar22;
		BaseCharacter pCVar23;
		InGameManager pGVar24;
		InGameSet pSVar25;
		InGameMiscSettings pSVar26;
		BoolSetting pSVar27;
		BaseComponentCache pUVar28;
		Camera pUVar29;
		byte[] auVar30 = new byte[16];
		double dVar31;
		bool bVar32;
		bool bVar33;
		bool bVar34;
		bool bVar35;
		bool bVar36;
		bool bVar37;
		bool bVar38;
		int layerMask;
		GameObject __this_03;
		UnityEngine_Vector3_StaticFields pUVar39;
		Transform pUVar40;
		Il2CppClass pIVar41;
		InGameCamera pCVar43;
		bool bVar44;
		float fVar45;
		float fVar46;
		float extraout_XMM0_Db;
		float extraout_XMM0_Dc;
		float extraout_XMM0_Dc_00;
		float extraout_XMM0_Dd;
		float extraout_XMM0_Dd_00;
		float in_XMM1_Db;
		float fVar47;
		float fVar48;
		byte[] auVar49 = new byte[16];
		Color color;
		Vector3 UVar50;
		Vector3 UVar51;
		Vector3 origin;
		Vector3 position;
		float fStack_e8;
		float fStack_e4;
		float fStack_c8;
		float fStack_c4;
		float fStack_b4;
		ulong uStack_98;
		System_Collections_Generic_HashSet_Enumerator_T__o SStack_88;
		CharacterInfoPopup pUStack_68;
		byte[] auStack_60 = new byte[12];
		float fStack_54;
		byte[] auStack_48 = new byte[16];
		object pIStack_38;

		SStack_88._set = null;
		SStack_88._index = 0;
		SStack_88._version = 0;
		SStack_88._current = null;
		this.RefreshDict();
		__this_00 = (InGameCamera)SceneLoader.CurrentCamera ;
		if (__this_00 != null) {
			bVar11 = (typeof(InGameCamera)._2).typeHierarchyDepth;
			if (((__this_00.klass._2).typeHierarchyDepth < bVar11) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar11 - 1] !=typeof(InGameCamera))) {
				pCVar43 = __this_00;
				goto label_05d01172;
			}
		}
		bVar33 = InGameMenu.InMenu();
		cVar12 = true;
		if (!bVar33) {
			pCVar43 = (InGameCamera)SceneLoader.CurrentGameManager;
			if (pCVar43 == null) goto label_05d01147;
			bVar11 = (typeof(InGameManager)._2).typeHierarchyDepth;
			if (((pCVar43.klass._2).typeHierarchyDepth < bVar11) ||((pCVar43.klass._2).typeHierarchy[(ulong)bVar11 - 1] !=typeof(InGameManager))) {
	label_05d01172: ;
				throw new InvalidCastException();
			}
			if (pCVar43._heightDistance == 0.0) goto label_05d005b9;
			if ((typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor == 0) {
				if (g_data_07547d1b == false) goto label_05d010a7;
	label_05d00599: ;
				uVar13 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
			}
			else {
				if (g_data_07547d1b != false) goto label_05d00599;
	label_05d010a7: ;
				g_data_07547d1b = true;
				uVar13 = (typeof(CustomLogicUIBuiltin)._2).cctor_finished_or_no_cctor;
			}
			if (uVar13 == 0) {
			}
			cVar12 = CustomLogicUIBuiltin._forceHideCharacterNames;
		}
	label_05d005b9: ;
		pSVar18 = SettingsManager.UISettings;
		if ((((pSVar18 != null) &&(pSVar19 = pSVar18.ShowNames, pSVar19 != null)) &&(pSVar20 = pSVar18.ShowHealthbars, pSVar20 != null)) &&((pSVar21 = pSVar18.NameOverrideTarget, pSVar21 != null &&(__this_01 = (HashSet<object>)this._characterInfoPopups, __this_01 != null)))) {
			iVar14 = pSVar19._value;
			iVar15 = pSVar20._value;
			iVar16 = pSVar21._value;
			auStack_48.GetEnumerator(__this_01);
			SStack_88._current = pIStack_38;
			SStack_88._set = (HashSet<T>)auStack_48._0_8_;
			SStack_88._index = auStack_48._8_4_;
			SStack_88._version = auStack_48._12_4_;
			auStack_48._0_8_ = null;
			auStack_48._8_8_ = &SStack_88;
	label_05d006a0: ;
			do {
				bVar33 = SStack_88.MoveNext();
				if (!bVar33) {
					SStack_88.Dispose();
					return;
				}
				if (SStack_88._current == null) {
					throw new NullReferenceException();
				}
				__this_02 = SStack_88._current[1].klass;
				pUVar22 = SStack_88._current[1].monitor;
				bVar35 = true;
				bVar33 = true;
				if (iVar14 != 0) {
					if (iVar14 == 1) {
						if (__this_02 == null) {
							throw new NullReferenceException();
						}
						bVar34 = __this_02.IsMainCharacter();
						bVar33 = true;
						if (!bVar34) goto label_05d0073c;
					}
					else if (iVar14 == 2) {
						if (__this_02 == null) {
							throw new NullReferenceException();
						}
						bVar33 = __this_02.IsMainCharacter();
						bVar33 = !bVar33;
					}
					else {
	label_05d0073c: ;
						bVar33 = false;
					}
				}
				if (iVar15 == 0) {
	label_05d00772: ;
					if (__this_02 == null) {
						throw new NullReferenceException();
					}
	label_05d0077b: ;
					if (*(bool)&(__this_02._1).events != false) goto label_05d0078d;
	label_05d007eb: ;
					bVar34 = false;
					pUStack_68 = pUVar22;
	label_05d007ed: ;
					pCVar23 = (__this_02._1).image;
					bVar11 = (typeof(BasicTitan)._2).typeHierarchyDepth;
					if ((pCVar23._2).typeHierarchyDepth < bVar11) {
						pIVar41 = null;
					}
					else {
						pIVar41 = null;
						if ((pCVar23._2).typeHierarchy[(ulong)bVar11 - 1] == typeof(BasicTitan)) {
							pIVar41 = __this_02;
						}
					}
					bVar44 = pIVar41 == null;
					fVar47 = in_XMM1_Db;
				}
				else {
					if (iVar15 != 2) {
						if (iVar15 != 1) {
	label_05d0076f: ;
							bVar35 = false;
							goto label_05d00772;
						}
						if (__this_02 == null) {
							throw new NullReferenceException();
						}
						bVar34 = __this_02.IsMainCharacter();
						bVar35 = true;
						if (!bVar34) goto label_05d0076f;
						goto label_05d0077b;
					}
					if (__this_02 == null) {
						throw new NullReferenceException();
					}
					bVar35 = __this_02.IsMainCharacter();
					bVar35 = !bVar35;
					if (*(bool)&(__this_02._1).events == false) goto label_05d007eb;
	label_05d0078d: ;
					bVar44 = false;
					if (*(bool)&(__this_02._1).parent == false) {
						bVar34 = false;
						fVar47 = in_XMM1_Db;
						pUStack_68 = pUVar22;
					}
					else {
						pUStack_68 = pUVar22;
						bVar34 = String.IsNullOrWhiteSpace((String)(__this_02._1).declaringType);
						bVar34 = !bVar34;
						fVar47 = in_XMM1_Db;
						if (*(bool)&(__this_02._1).events == false) goto label_05d007ed;
					}
				}
				if ((bVar35) && (iVar17 = *(int)((long)&(__this_02._1).events + 4), 1 < iVar17)) {
					bVar35 = *(int)&(__this_02._1).properties < iVar17;
				}
				else {
					bVar35 = false;
				}
				bVar37 = true;
				if (iVar16 != 0) {
					bVar37 = true;
					if (iVar16 == 2) {
						pCVar23 = (__this_02._1).image;
						bVar37 = __this_02.IsMine();
						bVar37 = !bVar37;
					}
					else if ((iVar16 != 1) ||(pCVar23 = (__this_02._1).image, bVar36 = __this_02.IsMine(), !bVar36)) {
						bVar37 = false;
					}
				}
				pGVar24 = this._inGameManager;
				if (pGVar24 == null) {
					throw new NullReferenceException();
				}
				bVar36 = true;
				if (pGVar24.Restarting == false) {
					pSVar25 = SettingsManager.InGameCurrent;
					if (pSVar25 == null) {
						throw new NullReferenceException();
					}
					pSVar26 = pSVar25.Misc;
					if (pSVar26 == null) {
						throw new NullReferenceException();
					}
					pSVar27 = pSVar26.RealismMode;
					if (pSVar27 == null) {
						throw new NullReferenceException();
					}
					if (pSVar27._value != false) goto label_05d00942;
					bVar38 = __this_02.IsMainCharacter();
					if (bVar38) {
						if (__this_00 == null) {
							throw new NullReferenceException();
						}
						fVar45 = __this_00.GetCameraDistance();
						fVar47 = 0.0;
						bVar38 = false;
						bVar32 = false;
						if (0.0 < fVar45) goto label_05d00a7c;
					}
					else {
	label_05d00a7c: ;
						bVar38 = bVar33 && (bVar34 || bVar44);
						bVar36 = (bool)(bVar35 ^ 1);
						if (bVar38) {
							bVar36 = false;
						}
						bVar32 = bVar35;
					}
				}
				else {
	label_05d00942: ;
					bVar38 = false;
					bVar32 = false;
				}
				pUVar22 = pUStack_68;
				if (bVar36 || cVar12 != false) {
					if (pUStack_68 == null) {
						throw new NullReferenceException();
					}
					pUStack_68.HideImmediate();
					in_XMM1_Db = fVar47;
					goto label_05d006a0;
				}
				pUVar28 = (__this_02._1);
				if (pUVar28 == null) {
					throw new NullReferenceException();
				}
				pUVar40 = pUVar28.Transform;
				if (pUVar40 == null) {
					throw new NullReferenceException();
				}
				UVar50 = pUVar40.position;
				if (pUVar22 == null) {
					throw new NullReferenceException();
				}
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				pUVar28 = __this_00.Cache;
				if (pUVar28 == null) {
					throw new NullReferenceException();
				}
				pUVar40 = pUVar28.Transform;
				if (pUVar40 == null) {
					throw new NullReferenceException();
				}
				uVar3 = pUVar22.Offset.x;
				uVar7 = pUVar22.Offset.y;
				fVar45 = UVar50.z + pUVar22.Offset.z;
				UVar51 = pUVar40.position;
				if (Il2CppMethodInitialized_0753e7b7 == false) {
					Il2CppMethodInitialized_0753e7b7 = true;
					uVar13 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar13 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				if (uVar13 == 0) {
				}
				uStack_98._0_4_ = UVar50.x;
				uStack_98._4_4_ = UVar50.y;
				uStack_98._0_4_ = (float)uStack_98 + (float)uVar3;
				uStack_98._4_4_ = uStack_98._4_4_ + (float)uVar7;
				fStack_e8 = UVar51.x;
				fStack_e4 = UVar51.y;
				fVar48 = UVar51.z - fVar45;
				fStack_b4 = (fStack_e4 - uStack_98._4_4_) * (fStack_e4 - uStack_98._4_4_) +(fStack_e8 - (float)uStack_98) * (fStack_e8 - (float)uStack_98) + fVar48 * fVar48;
				in_XMM1_Db = uStack_98._4_4_;
				if (fStack_b4 < 0.0) {
					fStack_b4 = sqrtf(fStack_b4);
					pfVar1 = &pUVar22.Range;
					if (*pfVar1 <= fStack_b4 && fStack_b4 != *pfVar1) goto label_05d00bb4;
	label_05d00b2d: ;
					pUVar28 = __this_00.Cache;
					if (pUVar28 == null) {
						throw new NullReferenceException();
					}
					pUVar40 = pUVar28.Transform;
					if (pUVar40 == null) {
						throw new NullReferenceException();
					}
					UVar50 = pUVar40.position;
					if (Il2CppMethodInitialized_0753e72d == false) {
						Il2CppMethodInitialized_0753e72d = true;
						auStack_60._0_4_ = 0.0;
						auStack_60._4_4_ = 0.0;
						if (g_data_0753e729 == false) goto label_05d00c5d;
	label_05d00b80: ;
						auStack_60._0_4_ = 0.0;
						auStack_60._4_4_ = 0.0;
						uVar13 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					}
					else {
						auStack_60._0_4_ = 0.0;
						auStack_60._4_4_ = 0.0;
						if (g_data_0753e729 != false) goto label_05d00b80;
	label_05d00c5d: ;
						auStack_60._0_4_ = 0.0;
						auStack_60._4_4_ = 0.0;
						g_data_0753e729 = true;
						uVar13 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					}
					if (uVar13 == 0) {
					}
					fStack_c8 = UVar50.x;
					fStack_c4 = UVar50.y;
					auVar49._0_4_ = (float)uStack_98 - fStack_c8;
					auVar49._4_4_ = uStack_98._4_4_ - fStack_c4;
					auVar49._8_4_ = (extraout_XMM0_Dc + 0.0) - extraout_XMM0_Dc_00;
					auVar49._12_4_ = (extraout_XMM0_Dd + 0.0) - extraout_XMM0_Dd_00;
					fVar48 = fVar45 - UVar50.z;
					fVar46 = fVar48 * fVar48 + auVar49._4_4_ * auVar49._4_4_ + auVar49._0_4_ * auVar49._0_4_;
					if (fVar46 < 0.0) {
						fVar46 = sqrtf(fVar46);
						fVar47 = extraout_XMM0_Db;
						if (1e-05 < fVar46) goto label_05d00d09;
	label_05d00cd4: ;
						pUVar39 = typeof(Vector3).static_fields;
						fVar48 = (pUVar39.zeroVector).z;
					}
					else {
						fVar46 = SQRT(fVar46);
						if (fVar46 <= 1e-05) goto label_05d00cd4;
	label_05d00d09: ;
						fVar48 = fVar48 / fVar46;
						auVar30._4_4_ = fVar46;
						auVar30._0_4_ = fVar46;
						auVar30._8_4_ = fVar47;
						auVar30._12_4_ = fVar47;
						auVar49 = divps(auVar49, auVar30);
						auStack_60._0_4_ = auVar49._0_4_;
						auStack_60._4_4_ = auVar49._4_4_;
						pUVar39 = (UnityEngine_Vector3_StaticFields)auStack_60;
					}
					pUVar28 = __this_00.Cache;
					if (pUVar28 == null) {
						throw new NullReferenceException();
					}
					pUVar40 = pUVar28.Transform;
					if (pUVar40 == null) {
						throw new NullReferenceException();
					}
					uVar4 = (pUVar39.zeroVector).x;
					uVar8 = (pUVar39.zeroVector).y;
					UVar51.y = (float)uVar8;
					UVar51.x = (float)uVar4;
					UVar50 = pUVar40.forward;
					fVar47 = UVar50.z;
					if (Il2CppMethodInitialized_075450a4 == false) {
						Il2CppMethodInitialized_075450a4 = true;
						uVar13 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					}
					else {
						uVar13 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					}
					if (uVar13 == 0) {
					}
					fVar46 = (fVar48 * fVar48 + (float)uVar8 * (float)uVar8 + (float)uVar4 * (float)uVar4) *(fVar47 * fVar47 + fStack_54 * fStack_54 + (float)auStack_60._8_4_ * (float)auStack_60._8_4_) ;
					if (fVar46 < 0.0) {
						fVar46 = sqrtf(fVar46);
						pIVar41 = typeof(Math);
					}
					else {
						fVar46 = SQRT(fVar46);
						pIVar41 = typeof(Math);
					}
					typeof(Math) = (Math)pIVar41;
					if (1e-15 <= fVar46) {
						fVar46 = (fVar47 * fVar48 + fStack_54 * (float)uVar8 + (float)auStack_60._8_4_ * (float)uVar4) / fVar46;
						fVar47 = 1.0;
						if (fVar46 <= 1.0) {
							fVar47 = fVar46;
						}
						in_XMM1_Db = 0.0;
						dVar31 = acos((double)(float)(~-(uint)(-1.0 <= fVar46) & 0xbf800000 |(uint)fVar47 & -(uint)(-1.0 <= fVar46)), (MethodInfo)pIVar41);
						if (90.0 < (float)dVar31 * 57.29578) {
							pUVar22.HideImmediate();
							goto label_05d006a0;
						}
					}
					bVar33 = __this_02.IsMainCharacter();
					if (!bVar33) {
						pUVar28 = __this_00.Cache;
						if (pUVar28 == null) {
							throw new NullReferenceException();
						}
						pUVar40 = pUVar28.Transform;
						if (pUVar40 == null) {
							throw new NullReferenceException();
						}
						UVar50 = pUVar40.position;
						auStack_60._8_4_ = UVar50.z;
						layerMask = ((LayerMask)(LayerMask)this.CullMask.m_Mask);
						in_XMM1_Db = 0.0;
						origin.z = (float)auStack_60._8_4_;
						origin.x = UVar50.x;
						origin.y = UVar50.y;
						UVar51.z = fVar48;
						bVar33 = Physics.Raycast(origin, UVar51, fStack_b4, layerMask);
						if (bVar33) {
							pUVar22.HideImmediate();
							goto label_05d006a0;
						}
					}
					if (bVar32) {
						pUVar22.ToggleHealthbar(true);
						bVar33 = __this_02.IsMainCharacter();
						pUVar2 = &this.RedColor + bVar33;
						uVar5 = pUVar2.r;
						uVar9 = pUVar2.g;
						color.g = (float)uVar9;
						color.r = (float)uVar5;
						pUVar2 = &this.RedColor + bVar33;
						uVar6 = pUVar2.b;
						uVar10 = pUVar2.a;
						color.a = (float)uVar10;
						color.b = (float)uVar6;
						pUVar22.SetHealthbar(*(int)&(__this_02._1).properties, *(int)((long)&(__this_02._1).events + 4), color);
					}
					else {
						pUVar22.ToggleHealthbar(false);
					}
					if (bVar38) {
						pUVar22.ToggleName(true);
					}
					else {
						pUVar22.ToggleName(false);
					}
					pUVar29 = __this_00.Camera;
					if (pUVar29 == null) {
						throw new NullReferenceException();
					}
					position.z = fVar45;
					position.x = (float)uStack_98;
					position.y = uStack_98._4_4_;
					UVar50 = pUVar29.WorldToScreenPoint(position);
					pUVar40 = pUVar22.transform;
					if (pUVar40 == null) {
						throw new NullReferenceException();
					}
					in_XMM1_Db = 0.0;
					pUVar40.position = UVar50;
					if (bVar37) {
						pUVar22.ShowImmediate();
					}
					else {
						pUVar22.Show();
					}
					goto label_05d006a0;
				}
				fStack_b4 = SQRT(fStack_b4);
				pfVar1 = &pUVar22.Range;
				if (fStack_b4 < *pfVar1 || fStack_b4 == *pfVar1) goto label_05d00b2d;
	label_05d00bb4: ;
				pUVar22.Hide();
				__this_03 = pUVar22.gameObject;
				if (__this_03 == null) {
					throw new NullReferenceException();
				}
				bVar33 = __this_03.activeSelf;
				if (bVar33) {
					pUVar40 = pUVar22.transform;
					pUVar29 = __this_00.Camera;
					if (pUVar29 == null) {
						throw new NullReferenceException();
					}
					UVar50.z = fVar45;
					UVar50.x = (float)uStack_98;
					UVar50.y = uStack_98._4_4_;
					UVar50 = pUVar29.WorldToScreenPoint(UVar50);
					if (pUVar40 == null) {
						throw new NullReferenceException();
					}
					pUVar40.position = UVar50;
					in_XMM1_Db = fVar47;
				}
			} while(true);
		}
	label_05d01147: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D1E")]
	[Address(RVA = "0x5C01A40", Offset = "0x5C00A40", VA = "0x5C01A40")]
	protected CharacterInfoPopup CreateInfoPopup(BaseCharacter character)
	{
		// Lifted from source/cpp/UI/CharacterInfoHandler.c (UI.CharacterInfoHandler$$CreateInfoPopup): 9 lines keep C-only constructs
		float fVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		uint uVar8;
		uint uVar9;
		byte bVar10;
		UISettings pSVar11;
		IntSetting pSVar12;
		UnityEngine_Vector3_StaticFields pUVar13;
		Transform parent;
		GameObject __this_00;
		CharacterInfoPopup __this_01;
		BaseCharacter pCVar14;
		byte bVar15;
		float fVar16;
		float fVar17;
		Vector3 offset;
		float local_40;
		float local_3c;
		ulong local_38;

		pUVar13 = typeof(Vector3).static_fields;
		local_38._0_4_ = (pUVar13.zeroVector).x;
		local_38._4_4_ = (pUVar13.zeroVector).y;
		local_40 = (pUVar13.zeroVector).z;
		if (character == null) {
			local_3c = 250.0;
		}
		else {
			pCVar14 = character.klass;
			bVar10 = (pCVar14._2).typeHierarchyDepth;
			bVar15 = (typeof(Human)._2).typeHierarchyDepth;
			if ((bVar10 < bVar15) ||((pCVar14._2).typeHierarchy[(ulong)bVar15 - 1] != typeof(Human))) {
				bVar15 = (typeof(BasicTitan)._2).typeHierarchyDepth;
				local_3c = 250.0;
				if ((bVar10 < bVar15) ||((pCVar14._2).typeHierarchy[(ulong)bVar15 - 1] != typeof(BasicTitan))) {
					bVar15 = (typeof(BaseShifter)._2).typeHierarchyDepth;
					if ((bVar15 <= bVar10) &&((pCVar14._2).typeHierarchy[(ulong)bVar15 - 1] == typeof(BaseShifter))) {
						if (Il2CppMethodInitialized_0753e72c == false) {
							Il2CppMethodInitialized_0753e72c = true;
							pUVar13 = typeof(Vector3).static_fields;
							pCVar14 = character.klass;
							bVar10 = (pCVar14._2).typeHierarchyDepth;
							bVar15 = (typeof(BaseShifter)._2).typeHierarchyDepth;
						}
						if ((bVar10 < bVar15) ||((pCVar14._2).typeHierarchy[(ulong)bVar15 - 1] != typeof(BaseShifter) )) {
							throw new InvalidCastException();
						}
						uVar4 = (pUVar13.upVector).x;
						uVar8 = (pUVar13.upVector).y;
						fVar16 = *(float)((long)&(*(ulong)((sbyte)character + 0x138)) + 4);
						local_40 = (pUVar13.upVector).z * 57.0 * fVar16;
						local_38 = CONCAT44(fVar16 * (float)uVar8 * 57.0, fVar16 * (float)uVar4 * 57.0);
					}
				}
				else {
					if ((*(byte)((sbyte)character + 0x2b0)) == false) {
						if (Il2CppMethodInitialized_0753e72c == false) {
							Il2CppMethodInitialized_0753e72c = true;
							pUVar13 = typeof(Vector3).static_fields;
						}
						uVar5 = (pUVar13.upVector).x;
						uVar9 = (pUVar13.upVector).y;
						local_40 = (pUVar13.upVector).z * 20.0;
						fVar16 = (float)uVar5 * 20.0;
						fVar17 = (float)uVar9 * 20.0;
					}
					else {
						if (Il2CppMethodInitialized_0753e72c == false) {
							Il2CppMethodInitialized_0753e72c = true;
							pUVar13 = typeof(Vector3).static_fields;
						}
						uVar3 = (pUVar13.upVector).x;
						uVar7 = (pUVar13.upVector).y;
						local_40 = (pUVar13.upVector).z * 5.0;
						fVar16 = (float)uVar3 * 5.0;
						fVar17 = (float)uVar7 * 5.0;
					}
					fVar1 = *(float)((long)&(*(ulong)((sbyte)character + 0x138)) + 4);
					local_40 = local_40 * fVar1;
					local_38 = CONCAT44(fVar1 * fVar17, fVar1 * fVar16);
				}
			}
			else {
				if (Il2CppMethodInitialized_0753e72c == false) {
					Il2CppMethodInitialized_0753e72c = true;
					pUVar13 = typeof(Vector3).static_fields;
				}
				pSVar11 = SettingsManager.UISettings;
				if ((pSVar11 == null) ||(pSVar12 = pSVar11.HumanNameDistance, pSVar12 == null)) goto label_05d01def;
				uVar2 = (pUVar13.upVector).x;
				uVar6 = (pUVar13.upVector).y;
				local_38 = CONCAT44((float)uVar6 * 1.75, (float)uVar2 * 1.75);
				local_40 = (pUVar13.upVector).z * 1.75;
				local_3c = (float)pSVar12._value;
			}
		}
		parent = this.transform;
		__this_00 = ElementFactory.InstantiateAndSetupPanel<CharacterInfoPopup>(parent, "Prefabs/InGame/CharacterInfoPopup", false);
		if ((__this_00 != null) &&(__this_01 = __this_00.GetComponent<CharacterInfoPopup>(), __this_01 != null)) {
			offset.z = local_40;
			offset.x = (float)(undefined4)local_38;
			offset.y = (float)local_38._4_4_;
			__this_01.Load(character, offset, local_3c);
			return __this_01;
		}
	label_05d01def: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004D1F")]
	[Address(RVA = "0x5C01280", Offset = "0x5C00280", VA = "0x5C01280")]
	protected void RefreshDict()
	{
		// Lifted from source/cpp/UI/CharacterInfoHandler.c (UI.CharacterInfoHandler$$RefreshDict): 11 lines keep C-only constructs
		HashSet<object> pSVar1;
		InGameManager __this_00;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		sbyte cVar4;
		bool bVar5;
		UI_CharacterInfoHandler___c_StaticFields pUVar6;
		Predicate<T> match;
		object pIVar7;
		VirtualInvokeData pVVar8;
		BaseCharacter character;
		CharacterInfoPopup value;
		SetItem<BaseCharacter, CharacterInfoPopup> pAVar9;
		ulong uVar10;
		long lVar11;
		object local_48;
		byte local_38;

		if (Il2CppMethodInitialized_07547d05 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(IEnumerable<BaseCharacter>)) ;
			il2cpp_codegen_initialize_runtime_metadata(&typeof(IEnumerator<BaseCharacter>)) ;
			Il2CppMethodInitialized_07547d05 = true;
		}
		local_48 = null;
		pSVar1 = (HashSet<object>)this._characterInfoPopups;
		if ((typeof(CharacterInfoHandler.c)._2).cctor_finished_or_no_cctor == 0) {
			pUVar6 = typeof(CharacterInfoHandler.c).static_fields;
			match = (Predicate<T>)pUVar6.__9__14_0;
		}
		else {
			pUVar6 = typeof(CharacterInfoHandler.c).static_fields;
			match = (Predicate<T>)pUVar6.__9__14_0;
		}
		if (match == null) {
			if (((typeof(CharacterInfoHandler.c))._2).cctor_finished_or_no_cctor == 0) {
				pUVar6 = typeof(CharacterInfoHandler.c).static_fields;
			}
			pIVar7 = (object)pUVar6.__9;
			match = new Predicate<SetItem<BaseCharacter, CharacterInfoPopup>>(pIVar7, (intptr_t)MethodInfo_UI_CharacterInfoHandler_c_RefreshDict_b__14_0);
			pUVar6 = typeof(CharacterInfoHandler.c).static_fields;
			pUVar6.__9__14_0 = (Predicate<SetItem<BaseCharacter, CharacterInfoPopup>>)match;
		}
		if (pSVar1 != null) {
			pSVar1.RemoveWhere(match);
			__this_00 = this._inGameManager;
			if ((__this_00 != null) &&(pIVar7 = (object)__this_00.GetAllCharactersEnumerable(), pIVar7 != null)) {
				pIVar2 = pIVar7.klass;
				uVar10 = (ulong)(pIVar2._2).interface_offsets_count;
				pIVar7 = pIVar7.Dispose();
				local_38 = (byte)&local_48;
				do {
					local_48 = pIVar7;
					if (pIVar7 == null) {
						throw new NullReferenceException();
					}
					pIVar2 = pIVar7.klass;
					uVar10 = (ulong)(pIVar2._2).interface_offsets_count;
					cVar4 = pIVar7.Dispose();
					pIVar7 = local_48;
					if (cVar4 == false) {
						if (local_48 == null) {
							return;
						}
						pIVar2 = local_48.klass;
						uVar10 = (ulong)(pIVar2._2).interface_offsets_count;
						if (uVar10 == 0) goto label_05d0171f;
						pIVar3 = (pIVar2._1).interfaceOffsets;
						lVar11 = 0;
						goto label_05d01710;
					}
					if (local_48 == null) {
						throw new NullReferenceException();
					}
					pIVar2 = local_48.klass;
					uVar10 = (ulong)(pIVar2._2).interface_offsets_count;
					character = (BaseCharacter)pIVar7.Dispose();
					if (character == null) {
						throw new NullReferenceException();
					}
					bVar5 = character.ValidTarget();
					pIVar7 = local_48;
					if (bVar5) {
						pAVar9 = this.mockEntry;
						if (pAVar9 == null) {
							throw new NullReferenceException();
						}
						pAVar9._Key_k__BackingField = character;
						pSVar1 = (HashSet<object>)this._characterInfoPopups;
						if (pSVar1 == null) {
							throw new NullReferenceException();
						}
						bVar5 = pSVar1.Contains((object)this.mockEntry);
						pIVar7 = local_48;
						if (!bVar5) {
							bVar5 = ((bool)(Object)character);
							pIVar7 = local_48;
							if ((bVar5) && (character.Dead == false)) {
								value = this.CreateInfoPopup(character);
								pSVar1 = (HashSet<object>)this._characterInfoPopups;
								pAVar9 = il2cpp_codegen_object_new((Il2CppClass)typeof(SetItem<BaseCharacter, CharacterInfoPopup>));
								pAVar9 = new SetItem<object, object>((object)character, (object)value);
								if (pSVar1 == null) {
									throw new NullReferenceException();
								}
								pSVar1.Add((object)pAVar9);
								pIVar7 = local_48;
							}
						}
					}
				} while(true);
			}
		}
		throw new NullReferenceException();
		while (true) {
			lVar11 = lVar11 + 0x10;
			if (!(uVar10 * 0x10 != lVar11)) break;
	label_05d01710: ;
			if (*(IDisposable*)((long)&pIVar3.interfaceType + lVar11) == typeof(IDisposable)) {
				pVVar8 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar11);
				goto label_05d0173d;
			}
		}
	label_05d0171f: ;
	label_05d0173d: ;
		pIVar7.Dispose();
		return;
	}

	[Token(Token = "0x6004D20")]
	[Address(RVA = "0x5C01FF0", Offset = "0x5C00FF0", VA = "0x5C01FF0")]
	public CharacterInfoHandler()
	{
		// Lifted from source/cpp/UI/CharacterInfoHandler.c (UI.CharacterInfoHandler$$.ctor): 2 lines keep C-only constructs
		uint uVar1;
		LayerMask UVar3;
		HashSet<SetItem<BaseCharacter, CharacterInfoPopup>> __this_00;
		Int32[] layers;
		SetItem<BaseCharacter, CharacterInfoPopup> __this_01;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(HashSet<SetItem<BaseCharacter, CharacterInfoPopup>>)) ;
		__this_00 = new HashSet<object>();
		this._characterInfoPopups = __this_00;
		this.RedColor.r = 0.455;
		this.RedColor.g = 0.094;
		this.RedColor.b = 0.094;
		this.RedColor.a = 1.0;
		this.GreenColor.r = 0.106;
		this.GreenColor.g = 0.368;
		this.GreenColor.b = 0.086;
		this.GreenColor.a = 1.0;
		layers = (Int32[])new int[3];
		if (layers == null) {
			throw new NullReferenceException();
		}
		uVar1 = (uint)layers.Length;
		if (uVar1 != 0) {
			layers[0] = PhysicsLayer.MapObjectAll;
			if ((uVar1 != 1) && (layers[1] = PhysicsLayer.MapObjectEntities, 2 < uVar1)) {
				layers[2] = PhysicsLayer.TitanMovebox;
				UVar3 = PhysicsLayer.GetMask(layers);
				this.CullMask.m_Mask = (int32_t)UVar3.m_Mask;
				__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(SetItem<BaseCharacter, CharacterInfoPopup>));
				__this_01 = new SetItem<object, object>(null, null);
				this.mockEntry = __this_01;
				base();
				return;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/CharacterInfoHandler.c.

	// UI.CharacterInfoHandler.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new CharacterInfoHandler.c();
		CharacterInfoHandler.c.__9 = (CharacterInfoHandler.c)__this;
		return;
	}

	// UI.CharacterInfoHandler.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// UI.CharacterInfoHandler.<>c$$<RefreshDict>b__14_0: clean
	private bool c__RefreshDict_b__14_0(SetItem<BaseCharacter, CharacterInfoPopup> e)
	{
		BaseCharacter pCVar1;
		CharacterInfoPopup __this_00;
		bool bVar2;
		Object obj;

		if (e != null) {
			pCVar1 = e._Key_k__BackingField;
			bVar2 = ((bool)(Object)pCVar1);
			if (bVar2) {
				pCVar1 = e._Key_k__BackingField;
				if (pCVar1 == null) goto label_05d02298;
				if (pCVar1.Dead == false) {
					return false;
				}
			}
			__this_00 = e._Value_k__BackingField;
			if (__this_00 != null) {
				obj = (Object)__this_00.gameObject;
				Object.Destroy(obj);
				return true;
			}
		}
	label_05d02298: ;
		throw new NullReferenceException();
	}
}
