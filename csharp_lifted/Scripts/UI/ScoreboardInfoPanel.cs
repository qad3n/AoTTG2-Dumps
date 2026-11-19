// ==================== AoTTG2 cross-reference ====================
// Type: UI.ScoreboardInfoPanel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/ScoreboardInfoPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/ScoreboardInfoPanel.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000857")]
internal class ScoreboardInfoPanel : ScoreboardCategoryPanel
{
	[Token(Token = "0x4002A43")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly HashSet<string> HiddenSettings;

	[Token(Token = "0x4002A44")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private AottgInGameView _view;

	[Token(Token = "0x17000DDE")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x6004FB8")]
		[Address(RVA = "0x5C3C810", Offset = "0x5C3B810", VA = "0x5C3C810", Slot = "13")]
		get
		{
			// Lifted from source/cpp/UI/ScoreboardInfoPanel.c (UI.ScoreboardInfoPanel$$get_DoublePanel): clean
			return true;
		}
	}

	[Token(Token = "0x17000DDF")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004FB9")]
		[Address(RVA = "0x5C3C820", Offset = "0x5C3B820", VA = "0x5C3C820", Slot = "11")]
		get
		{
			// Lifted from source/cpp/UI/ScoreboardInfoPanel.c (UI.ScoreboardInfoPanel$$get_VerticalSpacing): clean
			return 15.0;
		}
	}

	[Token(Token = "0x17000DE0")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004FBA")]
		[Address(RVA = "0x5C3C830", Offset = "0x5C3B830", VA = "0x5C3C830", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/ScoreboardInfoPanel.c (UI.ScoreboardInfoPanel$$get_VerticalPadding): clean
			return 0xf;
		}
	}

	[Token(Token = "0x6004FBB")]
	[Address(RVA = "0x5C3C840", Offset = "0x5C3B840", VA = "0x5C3C840", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/ScoreboardInfoPanel.c (UI.ScoreboardInfoPanel$$Setup): 13 lines keep C-only constructs
		uint uVar1;
		InGameSet pSVar2;
		InGameGeneralSettings pSVar3;
		Transform pUVar4;
		MapScript pMVar5;
		InGameTitanSettings pSVar6;
		StringSetting pSVar7;
		InGameModeSettings pSVar8;
		ListSetting<StringSetting> pSVar9;
		List<object> __this_00;
		InGameAddonSettings pSVar10;
		Dictionary<object, object> pSVar11;
		InGameMiscSettings pSVar12;
		bool bVar13;
		int iVar14;
		AottgInGameView pGVar15;
		String pSVar16;
		ElementStyle pUVar17;
		String pSVar18;
		Room pPVar19;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o __this_01;
		object settings;
		ElementStyle style;
		ElementStyle style_00;
		ElementStyle style_01;
		ElementStyle style_02;
		ElementStyle style_03;
		ElementStyle style_04;
		ElementStyle style_05;
		ElementStyle style_06;
		ElementStyle style_07;
		ElementStyle style_08;
		ElementStyle style_09;
		ElementStyle style_10;
		ElementStyle style_11;
		MethodInfo pMVar20;
		float fVar21;
		int iStack_84;
		byte[] auStack_80 = new byte[16];
		ElementStyle pUStack_70;
		byte[] auStack_68 = new byte[8];
		System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o pSStack_60;
		ElementStyle pUStack_58;
		byte[] auStack_48 = new byte[8];
		System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o pSStack_40;
		ElementStyle pUStack_38;

		if (Il2CppMethodInitialized_07547e77 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_List_StringSetting_get_Value) ;
			Il2CppMethodInitialized_07547e77 = true;
		}
		iStack_84 = 0;
		auStack_48 = (byte[])0x0;
		pUStack_38 = null;
		auStack_68 = (byte[])0x0;
		pUStack_58 = null;
		this.SetupGisketch(parent);
		pGVar15 = new AottgInGameView();
		this._view = pGVar15;
		pSVar16 = this.get_ThemePanel();
		pUVar17 = new ElementStyle(0x18, 120.0, 20.0, pSVar16);
		pSVar2 = SettingsManager.InGameCurrent;
		pUVar17 = (ElementStyle)this.DoublePanelLeft;
		if ((typeof(ScoreboardInfoPanel)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07547e79 != false) goto label_05d3cb38;
	label_05d3d33d: ;
			pSVar16 = "Section.General";
			Il2CppMethodInitialized_07547e79 = true;
			uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_07547e79 == false) goto label_05d3d33d;
	label_05d3cb38: ;
			uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
			pSVar16 = "Section.General";
		}
		if (uVar1 == 0) {
		}
		pMVar20 = null;
		pSVar16 = UIManager.GetLocale("GameCreate", "Sandbox", pSVar16, "", "");
		this.CreateLabel((Transform)pUVar17, style, pSVar16, 1, (int32_t)pMVar20);
		if ((pSVar2 == null) ||(pSVar3 = pSVar2.General, pSVar3 == null)) goto label_05d3d990;
		this.CreateLabels(pUVar17, this.DoublePanelLeft, "general", (IDictionary)pSVar3.Settings);
		pSVar16 = "MapHash";
		pUVar4 = this.DoublePanelLeft;
		iVar14 = 0;
		pSVar16 = UIManager.GetLocale("ScoreboardPopup", "GameInfo", pSVar16, "", "");
		pMVar5 = MapManager.MapScript;
		if ((pMVar5 == null) ||(pSVar18 = pMVar5.MapHash, pSVar18 == null)) goto label_05d3d990;
		pSVar18 = pSVar18.ToLower();
		pSVar16 = String.Concat(pSVar16, pSVar18);
		this.CreateLabel(pUVar4, style_00, pSVar16, 0, iVar14);
		pSVar16 = "LogicHash";
		pUVar4 = this.DoublePanelLeft;
		iVar14 = 0;
		pSVar16 = UIManager.GetLocale("ScoreboardPopup", "GameInfo", pSVar16, "", "");
		pSVar18 = CustomLogicManager.LogicHash;
		if (pSVar18 == null) goto label_05d3d990;
		pSVar18 = pSVar18.ToLower();
		pSVar16 = String.Concat(pSVar16, pSVar18);
		this.CreateLabel(pUVar4, style_01, pSVar16, 0, iVar14);
		if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
			if (g_data_07544cc2 != false) goto label_05d3cdc8;
	label_05d3d3a8: ;
			g_data_07544cc2 = true;
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor != 0) goto label_05d3cdd9;
	label_05d3d3cc: ;
			if (PhotonNetwork.offlineMode != false) goto label_05d3cdef;
	label_05d3d3eb: ;
			pUVar4 = this.DoublePanelLeft;
			if ((typeof(ScoreboardInfoPanel)._2).cctor_finished_or_no_cctor == 0) {
				if (Il2CppMethodInitialized_07547e78 != false) goto label_05d3d41e;
	label_05d3d93e: ;
				pSVar16 = "RoomName";
				Il2CppMethodInitialized_07547e78 = true;
				uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				if (Il2CppMethodInitialized_07547e78 == false) goto label_05d3d93e;
	label_05d3d41e: ;
				uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
				pSVar16 = "RoomName";
			}
			if (uVar1 == 0) {
			}
			iVar14 = 0;
			pSVar16 = UIManager.GetLocale("ScoreboardPopup", "GameInfo", pSVar16, "", "");
			pPVar19 = PhotonNetwork.CurrentRoom;
			pSVar18 = PhotonExtensions.GetStringProperty((RoomInfo)pPVar19, RoomProperty.Name, "");
			pSVar16 = String.Concat(pSVar16, pSVar18);
			this.CreateLabel(pUVar4, style_07, pSVar16, 0, iVar14);
			pSVar16 = "MaxPlayers";
			pUVar4 = this.DoublePanelLeft;
			iVar14 = 0;
			pSVar16 = UIManager.GetLocale("ScoreboardPopup", "GameInfo", pSVar16, "", "");
			pPVar19 = PhotonNetwork.CurrentRoom;
			if (pPVar19 == null) goto label_05d3d990;
			iStack_84 = pPVar19.maxPlayers;
			pSVar18 = iStack_84.ToString();
			pSVar16 = String.Concat(pSVar16, pSVar18);
			this.CreateLabel(pUVar4, style_08, pSVar16, 0, iVar14);
			pUVar4 = this.DoublePanelLeft;
		}
		else {
			if (g_data_07544cc2 == false) goto label_05d3d3a8;
	label_05d3cdc8: ;
			if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) goto label_05d3d3cc;
	label_05d3cdd9: ;
			if (PhotonNetwork.offlineMode == false) goto label_05d3d3eb;
	label_05d3cdef: ;
			pUVar4 = this.DoublePanelLeft;
		}
		pGVar15 = this._view;
		fVar21 = this.GetPanelWidth();
		iVar14 = this.get_HorizontalPadding();
		if (pGVar15 == null) goto label_05d3d990;
		pGVar15.Panel(pUVar4, "inGameDivider", fVar21 * 0.5 - ((float)iVar14 + (float)iVar14), 1.0, false, (Nullable<float>)0x0);
		pUVar17 = (ElementStyle)this.DoublePanelLeft;
		pSVar16 = "Section.Titans";
		pMVar20 = null;
		pSVar16 = UIManager.GetLocale("GameCreate", "Sandbox", pSVar16, "", "");
		this.CreateLabel((Transform)pUVar17, style_02, pSVar16, 1, (int32_t)pMVar20);
		pSVar6 = pSVar2.Titan;
		if (pSVar6 == null) goto label_05d3d990;
		this.CreateLabels(pUVar17, this.DoublePanelLeft, "titan", (IDictionary)pSVar6.Settings);
		pSVar16 = "Section.Mode";
		pUVar4 = this.DoublePanelRight;
		iVar14 = 0;
		pSVar16 = UIManager.GetLocale("GameCreate", "Sandbox", pSVar16, "", "");
		this.CreateLabel(pUVar4, style_03, pSVar16, 1, iVar14);
		pSVar16 = "GameMode";
		pUVar17 = (ElementStyle)this.DoublePanelRight;
		pMVar20 = null;
		pSVar16 = UIManager.GetLocale("ScoreboardPopup", "GameInfo", pSVar16, "", "");
		pSVar3 = pSVar2.General;
		if ((pSVar3 == null) ||(pSVar7 = pSVar3.GameMode, pSVar7 == null)) goto label_05d3d990;
		pSVar18 = ContentLocale.ModeName(pSVar7._value);
		pSVar16 = String.Concat(pSVar16, pSVar18);
		this.CreateLabel((Transform)pUVar17, style_04, pSVar16, 0, (int32_t)pMVar20);
		pSVar8 = pSVar2.Mode;
		if (pSVar8 == null) goto label_05d3d990;
		this.CreateLabels(pUVar17, this.DoublePanelRight, "mode", (IDictionary)pSVar8.Current);
		pUVar4 = this.DoublePanelRight;
		pGVar15 = this._view;
		fVar21 = this.GetPanelWidth();
		iVar14 = this.get_HorizontalPadding();
		if (pGVar15 == null) goto label_05d3d990;
		pGVar15.Panel(pUVar4, "inGameDivider", fVar21 * 0.5 - ((float)iVar14 + (float)iVar14), 1.0, false, (Nullable<float>)0x0);
		pSVar16 = "Addons";
		pUVar4 = this.DoublePanelRight;
		pMVar20 = null;
		pSVar16 = UIManager.GetLocale("GameCreate", "Sandbox", pSVar16, "", "");
		this.CreateLabel(pUVar4, style_05, pSVar16, 1, (int32_t)pMVar20);
		pSVar3 = pSVar2.General;
		if (((pSVar3 == null) ||(pSVar9 = pSVar3.Addons, pSVar9 == null)) ||(__this_00 = (List<object>)pSVar9._value, __this_00 == null)) goto label_05d3d990;
		if (__this_00._size == 0) {
			pUVar4 = this.DoublePanelRight;
			pSVar16 = UIManager.GetLocaleCommon("None");
			this.CreateLabel(pUVar4, style_09, pSVar16, 0, (int32_t)pMVar20);
			pSVar10 = pSVar2.Addons;
		}
		else {
			auStack_80.GetEnumerator(__this_00);
			pUStack_38 = pUStack_70;
			auStack_48 = (byte[])auStack_80._0_8_;
			pSStack_40 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)auStack_80._8_8_;
			auStack_80._0_8_ = null;
			auStack_80._8_8_ =(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)auStack_48;
			while (bVar13 = auStack_48.MoveNext()) {
				if (pUStack_38 == null) {
					throw new NullReferenceException();
				}
				this.CreateLabel(this.DoublePanelRight, style_06, *(String*)&pUStack_38.Spacing, 0, (int32_t)pMVar20);
			}
			auStack_48.Dispose();
			pSVar10 = pSVar2.Addons;
		}
		if ((pSVar10 == null) ||(pSVar11 = (Dictionary<object, object>)pSVar10.Current, pSVar11 == null)) goto label_05d3d990;
		iVar14 = pSVar11.Count;
		if (0 < iVar14) {
			pSVar10 = pSVar2.Addons;
			if (((pSVar10 == null) ||(pSVar11 = (Dictionary<object, object>)pSVar10.Current, pSVar11 == null)) ||(__this_01 = pSVar11.Keys, __this_01 == null)) goto label_05d3d990;
			auStack_80.GetEnumerator(__this_01);
			pUStack_58 = pUStack_70;
			auStack_68 = (byte[])auStack_80._0_8_;
			pSStack_60 = (System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)auStack_80._8_8_;
			auStack_80._0_8_ = null;
			auStack_80._8_8_ =(System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o)auStack_68;
			while (true) {
				bVar13 = auStack_68.MoveNext();
				pUVar17 = pUStack_58;
				if (!(bVar13)) break;
				this.CreateLabel(this.DoublePanelRight, style_10, (String)pUStack_58, 1, (int32_t)pMVar20);
				pUVar4 = this.DoublePanelRight;
				pSVar16 = String.Concat("addon.", (String)pUVar17);
				pSVar10 = pSVar2.Addons;
				if (pSVar10 == null) {
					throw new NullReferenceException();
				}
				pSVar11 = (Dictionary<object, object>)pSVar10.Current;
				if (pSVar11 == null) {
					throw new NullReferenceException();
				}
				settings = pSVar11.get_Item((object)pUVar17);
				this.CreateLabels(pUVar17, pUVar4, pSVar16, (IDictionary)settings);
			}
			auStack_68.Dispose();
		}
		pUVar4 = this.DoublePanelRight;
		pGVar15 = this._view;
		fVar21 = this.GetPanelWidth();
		iVar14 = this.get_HorizontalPadding();
		if (pGVar15 == null) goto label_05d3d990;
		pGVar15.Panel(pUVar4, "inGameDivider", fVar21 * 0.5 - ((float)iVar14 + (float)iVar14), 1.0, false, (Nullable<float>)0x0);
		pUVar17 = (ElementStyle)this.DoublePanelRight;
		if ((typeof(ScoreboardInfoPanel)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07547e79 != false) goto label_05d3d82c;
	label_05d3d8d0: ;
			pSVar16 = "Section.Misc";
			Il2CppMethodInitialized_07547e79 = true;
			uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_07547e79 == false) goto label_05d3d8d0;
	label_05d3d82c: ;
			uVar1 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
			pSVar16 = "Section.Misc";
		}
		if (uVar1 == 0) {
		}
		pMVar20 = null;
		pSVar16 = UIManager.GetLocale("GameCreate", "Sandbox", pSVar16, "", "");
		this.CreateLabel((Transform)pUVar17, style_11, pSVar16, 1, (int32_t)pMVar20);
		pSVar12 = pSVar2.Misc;
		if (pSVar12 != null) {
			this.CreateLabels(pUVar17, this.DoublePanelRight, "misc", (IDictionary)pSVar12.Settings);
			return;
		}
	label_05d3d990: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004FBC")]
	[Address(RVA = "0x5C3E170", Offset = "0x5C3D170", VA = "0x5C3E170")]
	private static string Locale(string item)
	{
		// Lifted from source/cpp/UI/ScoreboardInfoPanel.c (UI.ScoreboardInfoPanel$$Locale): clean
		String pSVar1;

		pSVar1 = UIManager.GetLocale("ScoreboardPopup", "GameInfo", item, "", "");
		return pSVar1;
	}

	[Token(Token = "0x6004FBD")]
	[Address(RVA = "0x5C3DA70", Offset = "0x5C3CA70", VA = "0x5C3DA70")]
	private static string SandboxLocale(string item)
	{
		// Lifted from source/cpp/UI/ScoreboardInfoPanel.c (UI.ScoreboardInfoPanel$$SandboxLocale): clean
		String pSVar1;

		pSVar1 = UIManager.GetLocale("GameCreate", "Sandbox", item, "", "");
		return pSVar1;
	}

	[Token(Token = "0x6004FBE")]
	[Address(RVA = "0x5C3E200", Offset = "0x5C3D200", VA = "0x5C3E200")]
	private void CreateDivider(Transform panel)
	{
		// Lifted from source/cpp/UI/ScoreboardInfoPanel.c (UI.ScoreboardInfoPanel$$CreateDivider): clean
		AottgInGameView __this_00;
		int iVar1;
		float fVar2;

		__this_00 = this._view;
		fVar2 = this.GetPanelWidth();
		iVar1 = this.get_HorizontalPadding();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Panel(panel, "inGameDivider", fVar2 * 0.5 - ((float)iVar1 + (float)iVar1), 1.0, false, (Nullable<float>)0x0);
		return;
	}

	[Token(Token = "0x6004FBF")]
	[Address(RVA = "0x5C3DB00", Offset = "0x5C3CB00", VA = "0x5C3DB00")]
	private void CreateLabel(Transform panel, ElementStyle style, string text, FontStyle fontStyle = FontStyle.Normal, TextAnchor alignment = TextAnchor.MiddleLeft)
	{
		// Lifted from source/cpp/UI/ScoreboardInfoPanel.c (UI.ScoreboardInfoPanel$$CreateLabel): 2 lines keep C-only constructs
		AottgInGameView __this_00;
		int iVar1;
		String* ppSVar2;
		TMP_Text __this_01;
		float fVar3;

		__this_00 = this._view;
		fVar3 = this.GetPanelWidth();
		iVar1 = this.get_HorizontalPadding();
		if (__this_00 != null) {
			if (fontStyle == 1) {
				ppSVar2 = &"inGameHeading";
			}
			else {
				ppSVar2 = &"inGameInfo";
			}
			__this_01 = __this_00.Text(panel, text, fVar3 * 0.5 - ((float)iVar1 + (float)iVar1), 40.0, *ppSVar2);
			if (__this_01 != null) {
				__this_01.alignment = 0x1001;
				AottgInGameView.FitTextHeight(__this_01, 40.0);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004FC0")]
	[Address(RVA = "0x5C3DC30", Offset = "0x5C3CC30", VA = "0x5C3DC30")]
	private void CreateLabels(ElementStyle style, Transform panel, string prefix, IDictionary settings)
	{
		// Lifted from source/cpp/UI/ScoreboardInfoPanel.c (UI.ScoreboardInfoPanel$$CreateLabels): 15 lines keep C-only constructs
		byte bVar1;
		IDictionary pSVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		Il2CppClass pIVar4;
		BaseSetting setting;
		HashSet<object> __this_00;
		sbyte cVar5;
		bool bVar6;
		VirtualInvokeData pVVar7;
		object pIVar8;
		ulong puVar9;
		String pSVar10;
		String str0;
		ulong uVar11;
		ElementStyle style_00;
		long lVar12;
		int alignment;
		object local_70;
		object local_68;
		ScoreboardInfoPanel local_60;
		Transform local_58;
		String local_50;
		object* local_40;
		object* local_38;

		alignment = (int32_t)method;
		local_60 = this;
		local_58 = panel;
		local_50 = prefix;
		if (Il2CppMethodInitialized_07547e7c == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_07547e7c = true;
		}
		local_70 = null;
		local_68 = null;
		if (settings == null) {
			throw new NullReferenceException();
		}
		pSVar2 = settings.klass;
		uVar11 = (ulong)(pSVar2._2).interface_offsets_count;
		pIVar8 = (object)settings.Dispose();
		local_40 = &local_70;
		local_38 = &local_68;
		do {
			local_70 = pIVar8;
			if (pIVar8 == null) {
				throw new NullReferenceException();
			}
			pIVar4 = pIVar8.klass;
			uVar11 = (ulong)(pIVar4._2).interface_offsets_count;
			cVar5 = pIVar8.Dispose();
			pIVar8 = local_70;
			if (cVar5 == false) {
				pIVar8 = (local_70 as IDisposable);
				if (pIVar8 == null) {
					return;
				}
				pIVar4 = pIVar8.klass;
				uVar11 = (ulong)(pIVar4._2).interface_offsets_count;
				local_68 = pIVar8;
				if (uVar11 == 0) goto label_05d3e08f;
				pIVar3 = (pIVar4._1).interfaceOffsets;
				lVar12 = 0;
				break;
			}
			if (local_70 == null) {
				throw new NullReferenceException();
			}
			pIVar4 = local_70.klass;
			uVar11 = (ulong)(pIVar4._2).interface_offsets_count;
			pIVar8 = pIVar8.Dispose();
			if (pIVar8 == null) {
				throw new NullReferenceException();
			}
			if ((pIVar8.klass._1).element_class != (typeof(DictionaryEntry)._1).element_class) {
				throw new InvalidCastException();
			}
			puVar9 = il2cpp_vm_Object_Unbox(pIVar8);
			pSVar10 = (String)*puVar9;
			setting = (BaseSetting)puVar9[1];
			if ((pSVar10 != null) && (pSVar10.klass != g_data_07556758)) {
				throw new InvalidCastException();
			}
			__this_00 = (HashSet<object>)ScoreboardInfoPanel.HiddenSettings;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			bVar6 = __this_00.Contains((object)pSVar10);
			pIVar8 = local_70;
			if (!bVar6) {
				bVar6 = AottgGameCreateSession.IsMetadataField(pSVar10);
				pIVar8 = local_70;
				if (!bVar6) {
					pSVar10 = String.Concat(local_50, ".", pSVar10);
					str0 = AottgGameCreateSession.FieldLabel(pSVar10);
					if ((typeof(ScoreboardInfoPanel)._2).cctor_finished_or_no_cctor == 0) {
					}
					if (setting != null) {
						bVar1 = (typeof(BaseSetting)._2).typeHierarchyDepth;
						if (((setting.klass._2).typeHierarchyDepth < bVar1) ||((setting.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(BaseSetting))) {
							throw new InvalidCastException();
						}
					}
					pSVar10 = ScoreboardInfoPanel.SettingValue(pSVar10, setting);
					pSVar10 = String.Concat(str0, ": ", pSVar10);
					local_60.CreateLabel(local_58, style_00, pSVar10, 0, alignment);
					pIVar8 = local_70;
				}
			}
		} while(true);
		while (true) {
			lVar12 = lVar12 + 0x10;
			if (!(uVar11 * 0x10 != lVar12)) break;
			if (*(IDisposable*)((long)&pIVar3.interfaceType + lVar12) == typeof(IDisposable)) {
				pVVar7 = pIVar4.vtable + *(int)((long)&pIVar3.offset + lVar12);
				goto label_05d3e0ad;
			}
		}
	label_05d3e08f: ;
	label_05d3e0ad: ;
		pIVar8.Dispose();
		return;
	}

	[Token(Token = "0x6004FC1")]
	[Address(RVA = "0x5C3E2B0", Offset = "0x5C3D2B0", VA = "0x5C3E2B0")]
	private static string SettingValue(string id, BaseSetting setting)
	{
		// Lifted from source/cpp/UI/ScoreboardInfoPanel.c (UI.ScoreboardInfoPanel$$SettingValue): 7 lines keep C-only constructs
		uint uVar1;
		float num;
		byte bVar2;
		byte bVar3;
		BaseSetting pSVar4;
		object @object;
		String item;
		String category;
		bool bVar7;
		String[] pSVar8;
		object pIVar9;
		UI_ScoreboardInfoPanel___c_StaticFields pUVar11;
		Func<BaseSetting, string> __this;
		System_Collections_Generic_IEnumerable_TResult__o values;
		String pSVar12;
		String* ppSVar14;
		uint local_2c;

		category = "InGame";
		pSVar12 = "Hud";
		if (setting == null) {
			pIVar9 = (null as IListSetting);
			if (pIVar9 == null) goto label_05d3e838;
		}
		else {
			pSVar4 = setting.klass;
			bVar2 = (pSVar4._2).typeHierarchyDepth;
			bVar3 = (typeof(StringSetting)._2).typeHierarchyDepth;
			if ((bVar2 < bVar3) ||((pSVar4._2).typeHierarchy[(ulong)bVar3 - 1] != typeof(StringSetting))) {
				bVar3 = (typeof(BoolSetting)._2).typeHierarchyDepth;
				if ((bVar3 <= bVar2) &&((pSVar4._2).typeHierarchy[(ulong)bVar3 - 1] == typeof(BoolSetting))) {
					if (*(sbyte)((long)&(*(ulong)((sbyte)setting + 0x18)) + 1) == false) {
						ppSVar14 = &"Off";
					}
					else {
						ppSVar14 = &"On";
					}
					item = *ppSVar14;
					pSVar12 = UIManager.GetLocale(category, pSVar12, item, "", "");
					return pSVar12;
				}
				bVar3 = (typeof(FloatSetting)._2).typeHierarchyDepth;
				if ((bVar3 <= bVar2) &&((pSVar4._2).typeHierarchy[(ulong)bVar3 - 1] == typeof(FloatSetting))) {
					num = *(float)((long)&(*(ulong)((sbyte)setting + 0x18)) + 4);
					pSVar12 = Util.FormatFloat(num, 2);
					return pSVar12;
				}
				bVar3 = (typeof(IntSetting)._2).typeHierarchyDepth;
				if ((bVar3 <= bVar2) &&((pSVar4._2).typeHierarchy[(ulong)bVar3 - 1] == typeof(IntSetting))) {
					pSVar8 = AottgGameCreateSession.SettingOptions(id);
					local_2c = *(uint)((long)&(*(ulong)((sbyte)setting + 0x18)) + 4);
					if (-1 < (int)local_2c) {
						if (pSVar8 == null) goto label_05d3e838;
						uVar1 = (uint)pSVar8.Length;
						if ((int)local_2c < (int)uVar1) {
							if (uVar1 <= local_2c) {
								throw new IndexOutOfRangeException();
							}
							return pSVar8[local_2c];
						}
					}
					pSVar12 = local_2c.ToString();
					return pSVar12;
				}
			}
			else {
				bVar7 = (id == "general.GameMode");
				if (bVar7) {
					pSVar12 = ContentLocale.ModeName((*(ulong)((sbyte)setting + 0x20)));
					return pSVar12;
				}
				bVar7 = (id == "general.MapCategory");
				if (bVar7) {
					pSVar12 = ContentLocale.MapCategory((*(ulong)((sbyte)setting + 0x20)));
					return pSVar12;
				}
			}
			pIVar9 = ((object)setting as IListSetting);
			if (pIVar9 == null) {
				pSVar12 = (String)setting.ToString();
				return pSVar12;
			}
		}
		pIVar9 = pIVar9.GetItems();
		if (pIVar9 != null) {
			if (*(int)&pIVar9[1].monitor < 1) {
				pSVar12 = UIManager.GetLocaleCommon("None");
				return pSVar12;
			}
			pSVar12 = ", ";
			pUVar11 = typeof(ScoreboardInfoPanel.c).static_fields;
			__this = pUVar11.__9__14_0;
			if (__this == null) {
				if ((typeof(ScoreboardInfoPanel.c)._2).cctor_finished_or_no_cctor == 0) {
					pUVar11 = typeof(ScoreboardInfoPanel.c).static_fields;
				}
				@object = (object)pUVar11.__9;
				__this = new Func<BaseSetting, string>(@object, (intptr_t)MethodInfo_UI_ScoreboardInfoPanel_c_SettingValue_b__14_0) ;
				pUVar11 = typeof(ScoreboardInfoPanel.c).static_fields;
				pUVar11.__9__14_0 = __this;
			}
			values = Enumerable.Select<BaseSetting, string>((System_Collections_Generic_IEnumerable_TSource__o)pIVar9, (System_Func_TSource__TResult__o)__this);
			pSVar12 = String.Join(pSVar12, (IEnumerable<string>)values) ;
			return pSVar12;
		}
	label_05d3e838: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004FC2")]
	[Address(RVA = "0x5C3E850", Offset = "0x5C3D850", VA = "0x5C3E850")]
	public ScoreboardInfoPanel()
	{
		// Lifted from source/cpp/UI/ScoreboardInfoPanel.c (UI.ScoreboardInfoPanel$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/ScoreboardInfoPanel.c.

	// UI.ScoreboardInfoPanel$$.cctor: clean
	static ScoreboardInfoPanel()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"Password");
		__this.Add((Il2CppObject *)"PrevGameMode");
		__this.Add((Il2CppObject *)"RoomName");
		__this.Add((Il2CppObject *)"MaxPlayers");
		ScoreboardInfoPanel.HiddenSettings = __this;
		return;
	}

	// UI.ScoreboardInfoPanel.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new ScoreboardInfoPanel.c();
		ScoreboardInfoPanel.c.__9 = (ScoreboardInfoPanel.c)__this;
		return;
	}

	// UI.ScoreboardInfoPanel.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// UI.ScoreboardInfoPanel.<>c$$<SettingValue>b__14_0: 2 lines keep C-only constructs
	private String c__SettingValue_b__14_0(BaseSetting item)
	{
		Il2CppMethodPointer vtableDispatch;
		String pSVar1;

		if (item == null) {
			throw new NullReferenceException();
		}
		vtableDispatch = (item.klass.vtable)._3_ToString.methodPtr;
		pSVar1 = (String)(*vtableDispatch)(item,(item.klass.vtable)._3_ToString.method,method,vtableDispatch);
		return pSVar1;
	}
}
