// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterEditorTitanCostumePanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CharacterEditorTitanCostumePanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorTitanCostumePanel.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Characters;
using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x20007C7")]
internal class CharacterEditorTitanCostumePanel : HeadedPanel
{
	[Token(Token = "0x20007CA")]
	[CompilerGenerated]
	private sealed class _003CCapturePreviousTitanProfilePreview_003Ed__23 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400271D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400271E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400271F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string previousProfileId;

		[Token(Token = "0x4002720")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private TitanCustomSettings _003Csettings_003E5__2;

		[Token(Token = "0x4002721")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private int _003CcurrentSelectedIndex_003E5__3;

		[Token(Token = "0x4002722")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private DummyTitan _003Ccharacter_003E5__4;

		[Token(Token = "0x17000D20")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004B29")]
			[Address(RVA = "0x5BDE000", Offset = "0x5BDD000", VA = "0x5BDE000", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/CharacterEditorTitanCostumePanel.c (UI.CharacterEditorTitanCostumePanel.<CapturePreviousTitanProfilePreview>d__23$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000D21")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004B2B")]
			[Address(RVA = "0x5BDE050", Offset = "0x5BDD050", VA = "0x5BDE050", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/CharacterEditorTitanCostumePanel.c (UI.CharacterEditorTitanCostumePanel.<CapturePreviousTitanProfilePreview>d__23$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6004B26")]
		[Address(RVA = "0x5BDC250", Offset = "0x5BDB250", VA = "0x5BDC250")]
		[DebuggerHidden]
		public _003CCapturePreviousTitanProfilePreview_003Ed__23(int _003C_003E1__state)
		{
			// Lifted from source/cpp/UI/CharacterEditorTitanCostumePanel.c (UI.CharacterEditorTitanCostumePanel.<CapturePreviousTitanProfilePreview>d__23$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6004B27")]
		[Address(RVA = "0x5BDDAE0", Offset = "0x5BDCAE0", VA = "0x5BDDAE0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/UI/CharacterEditorTitanCostumePanel.c (UI.CharacterEditorTitanCostumePanel.<CapturePreviousTitanProfilePreview>d__23$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6004B28")]
		[Address(RVA = "0x5BDDAF0", Offset = "0x5BDCAF0", VA = "0x5BDDAF0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/UI/CharacterEditorTitanCostumePanel.c (UI.CharacterEditorTitanCostumePanel.<CapturePreviousTitanProfilePreview>d__23$$MoveNext): 16 lines keep C-only constructs
			TitanCustomSettings* targetAddress;
			byte bVar1;
			TitanCustomSettings pSVar2;
			Settings_SetSettingsContainer_TitanCustomSet__o pSVar3;
			ListSetting<T> obj;
			StringSetting pSVar6;
			IntSetting pSVar7;
			DummyTitan pCVar8;
			BasicTitanSetup pCVar9;
			DummyTitan pCVar10;
			bool bVar11;
			List<object> __this_00;
			TitanCustomSet pSVar13;
			object pIVar14;
			int iVar16;
			TitanCustomSet pSVar18;
			DummyTitan* ppCVar19;

			iVar16 = this.__1__state;
			if (iVar16 == 1) {
				this.__1__state = -1;
				CharacterPreviewGenerator.CaptureCurrentCharacterPreview(false);
				pSVar2 = this._settings_5__2;
				if (((pSVar2 != null) &&(pSVar3 = pSVar2.TitanCustomSets, pSVar3 != null)) &&(pSVar7 = pSVar3.SelectedSetIndex, pSVar7 != null)) {
					pSVar7.Value = this._currentSelectedIndex_5__3;
					pSVar2 = this._settings_5__2;
					if ((pSVar2 != null) &&(pSVar3 = pSVar2.TitanCustomSets, pSVar3 != null)) {
						pSVar13 = (TitanCustomSet)pSVar3.GetSelectedSet();
						if (pSVar13 != null) {
							bVar1 = (typeof(TitanCustomSet)._2).typeHierarchyDepth;
							if (((pSVar13.klass._2).typeHierarchyDepth < bVar1) ||((pSVar13.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(TitanCustomSet))) {
								throw new InvalidCastException();
							}
						}
						pCVar8 = this._character_5__4;
						if ((pCVar8 != null) &&(pCVar9 = pCVar8.Setup, pCVar9 != null)) {
							ppCVar19 = &this._character_5__4;
							pCVar9.Load(pSVar13);
							if (*ppCVar19 != null) {
								iVar16 = 0;
								(*ppCVar19).Idle();
								*ppCVar19 = null;
								goto label_05cdde60;
							}
						}
					}
				}
				goto label_05cddfdb;
			}
			if (iVar16 == 0) {
				this.__1__state = -1;
				targetAddress = &this._settings_5__2;
				this._settings_5__2 = SettingsManager.TitanCustomSettings;
				pSVar2 = this._settings_5__2;
				if (((pSVar2 == null) ||(pSVar3 = pSVar2.TitanCustomSets, pSVar3 == null)) ||(obj = pSVar3.Sets, obj == null)) {
		label_05cddfdb: ;
					throw new NullReferenceException();
				}
				__this_00 = (List<object>)obj.GetItems();
				if (__this_00 == null) goto label_05cddfdb;
				iVar16 = 0;
				if (__this_00._size < 1) goto label_05cdde60;
				do {
					pSVar13 = (TitanCustomSet)__this_00.get_Item(iVar16);
					if (pSVar13 == null) goto label_05cddfdb;
					bVar1 = (typeof(TitanCustomSet)._2).typeHierarchyDepth;
					if (((pSVar13.klass._2).typeHierarchyDepth < bVar1) ||((pSVar13.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(TitanCustomSet))) {
						pSVar18 = pSVar13;
		label_05cddfe3: ;
						throw new InvalidCastException();
					}
					pSVar6 = pSVar13.UniqueId;
					if (pSVar6 == null) goto label_05cddfdb;
					bVar11 = (pSVar6._value == this.previousProfileId);
					if (bVar11) {
						pSVar2 = *targetAddress;
						if (((pSVar2 == null) ||(pSVar3 = pSVar2.TitanCustomSets, pSVar3 == null)) ||(pSVar7 = pSVar3.SelectedSetIndex, pSVar7 == null)) goto label_05cddfdb;
						this._currentSelectedIndex_5__3 = pSVar7._value;
						pSVar7.Value = iVar16;
						pCVar10 = typeof(DummyTitan);
						pSVar18 = (TitanCustomSet)SceneLoader.CurrentGameManager;
						if (pSVar18 == null) goto label_05cddfdb;
						bVar1 = (typeof(CharacterEditorGameManager)._2).typeHierarchyDepth;
						if (((((BaseGameManager)pSVar18.klass)._2).typeHierarchyDepth < bVar1) ||((((BaseGameManager)pSVar18.klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CharacterEditorGameManager))) goto label_05cddfe3;
						pCVar8 = (DummyTitan)pSVar18.Preset;
						if (pCVar8 == null) {
							this._character_5__4 = null;
						}
						else {
							bVar1 = (typeof(DummyTitan)._2).typeHierarchyDepth;
							if (((((BoolSetting)pCVar8.klass)._2).typeHierarchyDepth < bVar1) ||((((BoolSetting)pCVar8.klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(DummyTitan))) {
		label_05cddff0: ;
								throw new InvalidCastException();
							}
							this._character_5__4 = pCVar8;
							if (((((BoolSetting)pCVar8.klass)._2).typeHierarchyDepth < bVar1) ||((((BoolSetting)pCVar8.klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=(Il2CppClass)pCVar10)) goto label_05cddff0;
						}
						ppCVar19 = &this._character_5__4;
						pCVar8 = *ppCVar19;
						if ((pCVar8 == null) ||(pCVar9 = pCVar8.Setup, pCVar9 == null)) goto label_05cddfdb;
						pCVar9.Load(pSVar13);
						pIVar14 = (object)Util.WaitForFrames(3);
						this.__2__current = pIVar14;
						this.__1__state = 1;
						iVar16 = 1;
						goto label_05cdde60;
					}
					iVar16 = iVar16 + 1;
				} while (iVar16 < __this_00._size);
			}
			iVar16 = 0;
		label_05cdde60: ;
			return SUB41(iVar16, 0);
		}

		[Token(Token = "0x6004B2A")]
		[Address(RVA = "0x5BDE010", Offset = "0x5BDD010", VA = "0x5BDE010", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/UI/CharacterEditorTitanCostumePanel.c (UI.CharacterEditorTitanCostumePanel.<CapturePreviousTitanProfilePreview>d__23$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_UI_CharacterEditorTitanCostumePanel_CapturePreviousTitanProfilePreview_d__23_System_Collections);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x20007CB")]
	[CompilerGenerated]
	private sealed class _003CSaveQuitCaptureCoroutineInternal_003Ed__28 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002723")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002724")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x17000D22")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004B2F")]
			[Address(RVA = "0x5BDE140", Offset = "0x5BDD140", VA = "0x5BDE140", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/CharacterEditorTitanCostumePanel.c (UI.CharacterEditorTitanCostumePanel.<SaveQuitCaptureCoroutineInternal>d__28$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000D23")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004B31")]
			[Address(RVA = "0x5BDE190", Offset = "0x5BDD190", VA = "0x5BDE190", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/CharacterEditorTitanCostumePanel.c (UI.CharacterEditorTitanCostumePanel.<SaveQuitCaptureCoroutineInternal>d__28$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6004B2C")]
		[Address(RVA = "0x5BDD710", Offset = "0x5BDC710", VA = "0x5BDD710")]
		[DebuggerHidden]
		public _003CSaveQuitCaptureCoroutineInternal_003Ed__28(int _003C_003E1__state)
		{
			// Lifted from source/cpp/UI/CharacterEditorTitanCostumePanel.c (UI.CharacterEditorTitanCostumePanel.<SaveQuitCaptureCoroutineInternal>d__28$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6004B2D")]
		[Address(RVA = "0x5BDE060", Offset = "0x5BDD060", VA = "0x5BDE060", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/UI/CharacterEditorTitanCostumePanel.c (UI.CharacterEditorTitanCostumePanel.<SaveQuitCaptureCoroutineInternal>d__28$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6004B2E")]
		[Address(RVA = "0x5BDE070", Offset = "0x5BDD070", VA = "0x5BDE070", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/UI/CharacterEditorTitanCostumePanel.c (UI.CharacterEditorTitanCostumePanel.<SaveQuitCaptureCoroutineInternal>d__28$$MoveNext): clean
			int iVar1;
			object pIVar2;

			iVar1 = this.__1__state;
			if (iVar1 == 0) {
				this.__1__state = -1;
				pIVar2 = (object)Util.WaitForFrames(3);
				this.__2__current = pIVar2;
				this.__1__state = 1;
			}
			else if (iVar1 == 1) {
				this.__1__state = -1;
				CharacterPreviewGenerator.CaptureCurrentCharacterPreview(false);
				CharacterPreviewGenerator.SaveCachedPreviewsToDisk();
				SceneLoader.LoadScene(1);
			}
			return iVar1 == 0;
		}

		[Token(Token = "0x6004B30")]
		[Address(RVA = "0x5BDE150", Offset = "0x5BDD150", VA = "0x5BDE150", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/UI/CharacterEditorTitanCostumePanel.c (UI.CharacterEditorTitanCostumePanel.<SaveQuitCaptureCoroutineInternal>d__28$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_UI_CharacterEditorTitanCostumePanel_SaveQuitCaptureCoroutineInternal_d__28_System_Collections_IE);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x4002716")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private CharacterEditorMenu _menu;

	[Token(Token = "0x4002717")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private bool _shouldGeneratePreviewAfterRebuild;

	[Token(Token = "0x4002718")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private string _previousProfileId;

	[Token(Token = "0x17000D19")]
	protected override string Title
	{
		[Token(Token = "0x6004AFF")]
		[Address(RVA = "0x5BDA120", Offset = "0x5BD9120", VA = "0x5BDA120", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorTitanCostumePanel.c (UI.CharacterEditorTitanCostumePanel$$get_Title): clean
			String pSVar1;

			pSVar1 = UIManager.GetLocale("CharacterEditor", "Costume", "Title", "", "");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000D1A")]
	protected override float Width
	{
		[Token(Token = "0x6004B00")]
		[Address(RVA = "0x5BDA1C0", Offset = "0x5BD91C0", VA = "0x5BDA1C0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorTitanCostumePanel.c (UI.CharacterEditorTitanCostumePanel$$get_Width): clean
			return 380.0;
		}
	}

	[Token(Token = "0x17000D1B")]
	protected override float Height
	{
		[Token(Token = "0x6004B01")]
		[Address(RVA = "0x5BDA1D0", Offset = "0x5BD91D0", VA = "0x5BDA1D0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorTitanCostumePanel.c (UI.CharacterEditorTitanCostumePanel$$get_Height): clean
			return 1020.0;
		}
	}

	[Token(Token = "0x17000D1C")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004B02")]
		[Address(RVA = "0x5BDA1E0", Offset = "0x5BD91E0", VA = "0x5BDA1E0", Slot = "11")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorTitanCostumePanel.c (UI.CharacterEditorTitanCostumePanel$$get_VerticalSpacing): clean
			return 20.0;
		}
	}

	[Token(Token = "0x17000D1D")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004B03")]
		[Address(RVA = "0x5BDA1F0", Offset = "0x5BD91F0", VA = "0x5BDA1F0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorTitanCostumePanel.c (UI.CharacterEditorTitanCostumePanel$$get_HorizontalPadding): clean
			return 0x19;
		}
	}

	[Token(Token = "0x17000D1E")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004B04")]
		[Address(RVA = "0x5BDA200", Offset = "0x5BD9200", VA = "0x5BDA200", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorTitanCostumePanel.c (UI.CharacterEditorTitanCostumePanel$$get_VerticalPadding): clean
			return 0x19;
		}
	}

	[Token(Token = "0x17000D1F")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004B05")]
		[Address(RVA = "0x5BDA210", Offset = "0x5BD9210", VA = "0x5BDA210", Slot = "15")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorTitanCostumePanel.c (UI.CharacterEditorTitanCostumePanel$$get_ScrollBar): clean
			return true;
		}
	}

	[Token(Token = "0x6004B06")]
	[Address(RVA = "0x5BDA220", Offset = "0x5BD9220", VA = "0x5BDA220", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/CharacterEditorTitanCostumePanel.c (UI.CharacterEditorTitanCostumePanel$$Setup): 20 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		TitanCustomSettings pSVar3;
		Settings_SetSettingsContainer_TitanCustomSet__o pSVar4;
		StringSetting pSVar5;
		Transform pUVar6;
		IntSetting setting;
		BaseSetSetting setting_00;
		BaseMenu pUVar7;
		IconPickPopup pUVar8;
		BaseSetting setting_01;
		InspectorSettingMetadata setting_02;
		OrderedDictionary setting_03;
		Dictionary<string, BaseSetting> setting_04;
		ColorPickPopup pUVar9;
		HashSet<string> setting_05;
		CharacterEditorMenu pUVar10;
		String subCategory;
		BaseSetSetting pSVar11;
		String pSVar12;
		MethodInfo __this_00;
		String pSVar13;
		UnityAction pUVar14;
		String[] pSVar15;
		String[] pSVar16;
		Action<string> __this_01;
		Int32[] pSVar17;
		ulong uVar18;
		ulong uVar19;
		uint uVar20;
		CharacterEditorMenu pUVar21;
		ulong uVar22;
		CharacterEditorTitanCostumePanel pUVar23;
		CharacterEditorTitanCostumePanel pUVar24;
		ulong uVar25;
		int iVar26;
		int iVar27;
		int iVar28;
		int iVar29;
		MethodInfo pMVar30;

		this.Setup(parent);
		if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
			pUVar21 = (CharacterEditorMenu)UIManager.CurrentMenu;
			if (pUVar21 == null) goto label_05cda4e1;
	label_05cda465: ;
			pUVar10 = typeof(CharacterEditorMenu);
			bVar2 = (typeof(CharacterEditorMenu)._2).typeHierarchyDepth;
			if (((pUVar21.klass._2).typeHierarchyDepth < bVar2) ||((pUVar21.klass._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(CharacterEditorMenu) )) {
	label_05cdb1fd: ;
				throw new InvalidCastException();
			}
			this._menu = pUVar21;
			if (((pUVar21.klass._2).typeHierarchyDepth < bVar2) ||((pUVar21.klass._2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass)pUVar10)) goto label_05cdb1fd;
		}
		else {
			pUVar21 = (CharacterEditorMenu)UIManager.CurrentMenu;
			if (pUVar21 != null) goto label_05cda465;
	label_05cda4e1: ;
			this._menu = null;
		}
		pSVar3 = SettingsManager.TitanCustomSettings;
		if (((pSVar3 != null) &&(pSVar4 = pSVar3.TitanCustomSets, pSVar4 != null)) &&(pSVar11 = pSVar4.GetSelectedSet(), pSVar11 != null)) {
			bVar2 = (typeof(TitanCustomSet)._2).typeHierarchyDepth;
			if (((pSVar11.klass._2).typeHierarchyDepth < bVar2) ||((pSVar11.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(TitanCustomSet))) {
	label_05cdb20b: ;
				throw new InvalidCastException();
			}
			pSVar5 = pSVar11.UniqueId;
			if (pSVar5 != null) {
				this._previousProfileId = pSVar5._value;
				pSVar12 = this.get_ThemePanel();
				__this_00 = new ElementStyle(0x18, 130.0, 20.0, pSVar12);
				subCategory = "Costume";
				pSVar12 = "CharacterEditor";
				pSVar3 = SettingsManager.TitanCustomSettings;
				pUVar6 = this.BottomBar;
				pSVar13 = UIManager.GetLocaleCommon("Quit");
				pUVar14 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_CharacterEditorTitanCostumePanel_Setup_b__17_0);
				ElementFactory.CreateTextButton(pUVar6, (ElementStyle)__this_00, pSVar13, 0.0, pUVar14);
				pUVar6 = this.BottomBar;
				pMVar30 = (MethodInfo *)"";
				pSVar13 = UIManager.GetLocale(pSVar12, subCategory, "SaveQuit", "", "");
				pUVar14 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_CharacterEditorTitanCostumePanel_Setup_b__17_1);
				ElementFactory.CreateTextButton(pUVar6, (ElementStyle)__this_00, pSVar13, 0.0, pUVar14);
				if ((pSVar3 != null) &&(pSVar4 = pSVar3.TitanCustomSets, pSVar4 != null)) {
					pSVar11 = pSVar4.GetSelectedSet();
					if (pSVar11 != null) {
						bVar2 = (typeof(TitanCustomSet)._2).typeHierarchyDepth;
						if (((pSVar11.klass._2).typeHierarchyDepth < bVar2) ||((pSVar11.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(TitanCustomSet))) goto label_05cdb20b;
					}
					pSVar4 = pSVar3.TitanCustomSets;
					if (pSVar4 != null) {
						pUVar6 = this.SinglePanel;
						setting = pSVar4.SelectedSetIndex;
						pSVar13 = UIManager.GetLocale(pSVar12, subCategory, "CustomSet", "", "");
						pSVar4 = pSVar3.TitanCustomSets;
						if (pSVar4 != null) {
							pSVar15 = pSVar4.GetSetNames();
							pUVar14 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_CharacterEditorTitanCostumePanel_Setup_b__17_2);
							ElementFactory.CreateDropdownSetting(pUVar6, (ElementStyle)__this_00, (BaseSetting)setting, pSVar13, pSVar15, "", 170.0, 40.0, 300.0, (Nullable<float>)0x0, pUVar14, null, null);
							pUVar6 = this.SinglePanel;
							pSVar16 = (String[])new string[6];
							if (pSVar16 != null) {
								if ((int)pSVar16.Length != 0) {
									pSVar16[0] = "Create";
									if ((pSVar16.Length & 0xfffffffe) != 0) {
										pSVar16[1] = "Delete";
										if (2 < (uint)pSVar16.Length) {
											pSVar16[2] = "Copy";
											if ((pSVar16.Length & 0xfffffffc) != 0) {
												pSVar16[3] = "Rename";
												if (4 < (uint)pSVar16.Length) {
													pSVar16[4] = "Import";
													if (5 < (uint)pSVar16.Length) {
														pSVar16[5] = "Export";
														__this_01 = new Action<string>((object)this, (intptr_t)MethodInfo_UI_CharacterEditorTitanCostumePanel_OnButtonClick);
														ElementFactory.CreateSetActionButtons(pUVar6, (ElementStyle)__this_00, pSVar16, __this_01, 36.0);
														this.CreateHorizontalDivider(this.SinglePanel, 1.0);
														pSVar15 = typeof(BasicTitanSetup).GetOptions("Head", BasicTitanSetup.HeadCount, false);
														if (pSVar11 != null) {
															pUVar24 = (CharacterEditorTitanCostumePanel)this.SinglePanel;
															setting_00 = (*(ulong)((sbyte)pSVar11 + 0x48));
															pUVar23 = (CharacterEditorTitanCostumePanel)pSVar12;
															pSVar13 = UIManager.GetLocale(pSVar12, subCategory, "Head", "", "");
															pSVar16 = pUVar23.GetIcons(pSVar15) ;
															pUVar7 = UIManager.CurrentMenu;
															if (pUVar7 != null) {
																pUVar8 = pUVar7.IconPickPopup;
																pUVar14 = new UnityAction((object)this, (intptr_t) MethodInfo_UI_CharacterEditorTitanCostumePanel_Setup_b__17_3);
																if (pSVar15 != null) {
																	uVar19 = pSVar15.Length;
																	uVar20 = (uint32_t)uVar19;
																	pSVar17 = (Int32[])new int[uVar20];
																	if (0 < (int)uVar20) {
																		if (pSVar17 == null) goto label_05cdb1f8;
																		uVar18 = (ulong)(uint)pSVar17.Length;
																		uVar19 = uVar19 & 0xffffffff;
																		uVar22 = uVar19 - 1;
																		if (uVar18 <= uVar22) {
																			uVar22 = uVar18;
																		}
																		if (uVar22 < 8) {
																			uVar22 = 0;
																		}
																		else {
																			uVar22 = uVar22 + 1;
																			uVar25 = 8;
																			if ((uVar22 & 7) != 0) {
																				uVar25 = (ulong)((uint)uVar22 & 7);
																			}
																			uVar22 = uVar22 - uVar25;
																			iVar26 = 0;
																			iVar27 = 1;
																			iVar28 = 2;
																			iVar29 = 3;
																			uVar25 = 0;
																			do {
																				piVar1 = pSVar17.m_Items + uVar25;
																				*piVar1 = iVar26 + -1;
																				piVar1[1] = iVar27 + -1;
																				piVar1[2] = iVar28 + -1;
																				piVar1[3] = iVar29 + -1;
																				piVar1 = pSVar17.m_Items + uVar25 + 4;
																				*piVar1 = iVar26 + 3;
																				piVar1[1] = iVar27 + 3;
																				piVar1[2] = iVar28 + 3;
																				piVar1[3] = iVar29 + 3;
																				uVar25 = uVar25 + 8;
																				iVar26 = iVar26 + 8;
																				iVar27 = iVar27 + 8;
																				iVar28 = iVar28 + 8;
																				iVar29 = iVar29 + 8;
																			} while (uVar22 != uVar25);
																		}
																		do {
																			if (uVar18 == uVar22) goto label_05cdb1f3;
																			pSVar17[uVar22] = (int)uVar22 + -1;
																			uVar22 = uVar22 + 1;
																		} while (uVar19 != uVar22);
																	}
																	ElementFactory.CreateIconPickSetting((Transform)pUVar24, (ElementStyle)__this_00, (BaseSetting)setting_00, pSVar13, pSVar15, pSVar16, pUVar8, "", null, 170.0, 40.0, pUVar14, null, pSVar17) ;
																	pSVar15 = pUVar24.GetOptions("Body", BasicTitanSetup. BodyCount, false);
																	pUVar24 = (CharacterEditorTitanCostumePanel)this.SinglePanel;
																	setting_01 = (*(ulong)((sbyte)pSVar11 + 0x50));
																	pUVar23 = (CharacterEditorTitanCostumePanel)pSVar12;
																	pSVar13 = UIManager.GetLocale(pSVar12, subCategory, "Body", "", "");
																	pSVar16 = pUVar23.GetIcons(pSVar15);
																	pUVar7 = UIManager.CurrentMenu;
																	if (pUVar7 != null) {
																		pUVar8 = pUVar7.IconPickPopup;
																		pUVar14 = il2cpp_codegen_object_new(typeof(UnityAction)) ;
																		pUVar14 = new UnityAction((object)this, (intptr_t) MethodInfo_UI_CharacterEditorTitanCostumePanel_Setup_b__17_4);
																		if (pSVar15 != null) {
																			uVar19 = pSVar15.Length;
																			uVar20 = (uint32_t)uVar19;
																			pSVar17 = (Int32[])new int[uVar20];
																			if (0 < (int)uVar20) {
																				if (pSVar17 == null) goto label_05cdb1f8;
																				uVar18 = (ulong)(uint)pSVar17.Length;
																				uVar19 = uVar19 & 0xffffffff;
																				uVar22 = uVar19 - 1;
																				if (uVar18 <= uVar22) {
																					uVar22 = uVar18;
																				}
																				if (uVar22 < 8) {
																					uVar22 = 0;
																				}
																				else {
																					uVar22 = uVar22 + 1;
																					uVar25 = 8;
																					if ((uVar22 & 7) != 0) {
																						uVar25 = (ulong)((uint)uVar22 & 7);
																					}
																					uVar22 = uVar22 - uVar25;
																					iVar26 = 0;
																					iVar27 = 1;
																					iVar28 = 2;
																					iVar29 = 3;
																					uVar25 = 0;
																					do {
																						piVar1 = pSVar17.m_Items + uVar25;
																						*piVar1 = iVar26 + -1;
																						piVar1[1] = iVar27 + -1;
																						piVar1[2] = iVar28 + -1;
																						piVar1[3] = iVar29 + -1;
																						piVar1 = pSVar17.m_Items + uVar25 + 4;
																						*piVar1 = iVar26 + 3;
																						piVar1[1] = iVar27 + 3;
																						piVar1[2] = iVar28 + 3;
																						piVar1[3] = iVar29 + 3;
																						uVar25 = uVar25 + 8;
																						iVar26 = iVar26 + 8;
																						iVar27 = iVar27 + 8;
																						iVar28 = iVar28 + 8;
																						iVar29 = iVar29 + 8;
																					} while (uVar22 != uVar25);
																				}
																				do {
																					if (uVar18 == uVar22) goto label_05cdb1f3;
																					pSVar17[uVar22] = (int)uVar22 + -1;
																					uVar22 = uVar22 + 1;
																				} while (uVar19 != uVar22);
																			}
																			ElementFactory.CreateIconPickSetting((Transform)pUVar24, (ElementStyle)__this_00, setting_01, pSVar13, pSVar15, pSVar16, pUVar8, "", null, 170.0, 40.0, pUVar14, null, pSVar17);
																			pSVar15 = pUVar24.GetOptions("Eye", BasicTitanSetup. EyeCount, false);
																			pUVar24 = (CharacterEditorTitanCostumePanel)this.SinglePanel;
																			setting_02 = (*(ulong)((sbyte)pSVar11 + 0x58));
																			pUVar23 = (CharacterEditorTitanCostumePanel)pSVar12;
																			pSVar13 = UIManager.GetLocale(pSVar12, subCategory, "Eye", "", "");
																			pSVar16 = pUVar23.GetIcons(pSVar15);
																			pUVar7 = UIManager.CurrentMenu;
																			if (pUVar7 != null) {
																				pUVar8 = pUVar7.IconPickPopup;
																				pUVar14 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																				pUVar14 = new UnityAction((object)this, (intptr_t) MethodInfo_UI_CharacterEditorTitanCostumePanel_Setup_b__17_5);
																				if (pSVar15 != null) {
																					uVar19 = pSVar15.Length;
																					uVar20 = (uint32_t)uVar19;
																					pSVar17 = (Int32[])new int[uVar20];
																					if (0 < (int)uVar20) {
																						if (pSVar17 == null) goto label_05cdb1f8;
																						uVar18 = (ulong)(uint)pSVar17.Length;
																						uVar19 = uVar19 & 0xffffffff;
																						uVar22 = uVar19 - 1;
																						if (uVar18 <= uVar22) {
																							uVar22 = uVar18;
																						}
																						if (uVar22 < 8) {
																							uVar22 = 0;
																						}
																						else {
																							uVar22 = uVar22 + 1;
																							uVar25 = 8;
																							if ((uVar22 & 7) != 0) {
																								uVar25 = (ulong)((uint)uVar22 & 7);
																							}
																							uVar22 = uVar22 - uVar25;
																							iVar26 = 0;
																							iVar27 = 1;
																							iVar28 = 2;
																							iVar29 = 3;
																							uVar25 = 0;
																							do {
																								piVar1 = pSVar17.m_Items + uVar25;
																								*piVar1 = iVar26 + -1;
																								piVar1[1] = iVar27 + -1;
																								piVar1[2] = iVar28 + -1;
																								piVar1[3] = iVar29 + -1;
																								piVar1 = pSVar17.m_Items + uVar25 + 4;
																								*piVar1 = iVar26 + 3;
																								piVar1[1] = iVar27 + 3;
																								piVar1[2] = iVar28 + 3;
																								piVar1[3] = iVar29 + 3;
																								uVar25 = uVar25 + 8;
																								iVar26 = iVar26 + 8;
																								iVar27 = iVar27 + 8;
																								iVar28 = iVar28 + 8;
																								iVar29 = iVar29 + 8;
																							} while (uVar22 != uVar25);
																						}
																						do {
																							if (uVar18 == uVar22) goto label_05cdb1f3;
																							pSVar17[uVar22] = (int)uVar22 + -1;
																							uVar22 = uVar22 + 1;
																						} while (uVar19 != uVar22);
																					}
																					ElementFactory.CreateIconPickSetting((Transform)pUVar24, (ElementStyle)__this_00, (BaseSetting)setting_02, pSVar13, pSVar15, pSVar16, pUVar8, "", null, 170.0, 40.0, pUVar14, null, pSVar17) ;
																					pSVar15 = pUVar24.GetHairOptions();
																					pUVar6 = this.SinglePanel;
																					setting_03 = (*(ulong)((sbyte)pSVar11 + 0x60));
																					pUVar24 = (CharacterEditorTitanCostumePanel)pSVar12;
																					pSVar13 = UIManager.GetLocale(pSVar12, subCategory, "Hair", "", "");
																					pSVar16 = pUVar24.GetIcons(pSVar15);
																					pUVar7 = UIManager.CurrentMenu;
																					if (pUVar7 != null) {
																						pUVar8 = pUVar7.IconPickPopup;
																						pUVar14 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																						pUVar14 = new UnityAction((object)this, (intptr_t) MethodInfo_UI_CharacterEditorTitanCostumePanel_Setup_b__17_6);
																						ElementFactory.CreateIconPickSetting(pUVar6, (ElementStyle)__this_00, (BaseSetting)setting_03, pSVar13, pSVar15, pSVar16, pUVar8, "", null, 170.0, 40.0, pUVar14, null, null);
																						pUVar6 = this.SinglePanel;
																						setting_04 = (*(ulong)((sbyte)pSVar11 + 0x68));
																						pSVar13 = UIManager.GetLocale(pSVar12, subCategory, "SkinColor", "", "");
																						pUVar7 = UIManager.CurrentMenu;
																						if (pUVar7 != null) {
																							pUVar9 = pUVar7.ColorPickPopup;
																							pUVar14 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																							pUVar14 = new UnityAction((object)this, (intptr_t) MethodInfo_UI_CharacterEditorTitanCostumePanel_Setup_b__17_7);
																							ElementFactory.CreateColorSetting(pUVar6, (ElementStyle)__this_00, (BaseSetting)setting_04, pSVar13, pUVar9, "", 90.0, 30.0, pUVar14);
																							pUVar6 = this.SinglePanel;
																							setting_05 = (*(ulong)((sbyte)pSVar11 + 0x70));
																							pSVar12 = UIManager.GetLocale(pSVar12, subCategory, "HairColor", "", "");
																							pUVar7 = UIManager.CurrentMenu;
																							if (pUVar7 != null) {
																								pUVar9 = pUVar7.ColorPickPopup;
																								pUVar14 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																								pUVar14 = new UnityAction((object)this, (intptr_t) MethodInfo_UI_CharacterEditorTitanCostumePanel_Setup_b__17_8);
																								ElementFactory.CreateColorSetting(pUVar6, (ElementStyle)__this_00, (BaseSetting)setting_05, pSVar12, pUVar9, "", 90.0, 30.0, pUVar14);
																								return;
																							}
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
														goto label_05cdb1f8;
													}
												}
											}
										}
									}
								}
	label_05cdb1f3: ;
								throw new IndexOutOfRangeException();
							}
						}
					}
				}
			}
		}
	label_05cdb1f8: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004B07")]
	[Address(RVA = "0x5BDB690", Offset = "0x5BDA690", VA = "0x5BDB690")]
	private string[] GetOptions(string prefix, int options, bool includeNone = false)
	{
		// Lifted from source/cpp/UI/CharacterEditorTitanCostumePanel.c (UI.CharacterEditorTitanCostumePanel$$GetOptions): 11 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint in_EAX;
		int iVar4;
		List<string> __this_00;
		String pSVar5;
		String[] pSVar6;
		ulong uStack_38;

		uStack_38._0_4_ = in_EAX;
		uStack_38 = (ulong)(uint)uStack_38;
		__this_00 = new List<string>();
		pSVar5 = "Random";
		if (__this_00 != null) {
			piVar1 = &__this_00._version;
			*piVar1 = *piVar1 + 1;
			pSVar6 = __this_00._items;
			if (pSVar6 != null) {
				uVar2 = __this_00._size;
				if (uVar2 < (uint)pSVar6.Length) {
					__this_00._size = uVar2 + 1;
					pSVar6[(int)uVar2] = pSVar5;
				}
				else {
					__this_00.AddWithResize((object)pSVar5);
				}
				if (includeNone) {
					pSVar5 = String.Concat(prefix, "None");
					piVar1 = &__this_00._version;
					*piVar1 = *piVar1 + 1;
					pSVar6 = __this_00._items;
					if (pSVar6 == null) goto label_05cdb8d2;
					uVar2 = __this_00._size;
					if (uVar2 < (uint)pSVar6.Length) {
						__this_00._size = uVar2 + 1;
						pSVar6[(int)uVar2] = pSVar5;
					}
					else {
						__this_00.AddWithResize((object)pSVar5);
					}
				}
				uStack_38 = uStack_38 & 0xffffffff;
				if (0 < options) {
					do {
						pSVar5 = (((long)&uStack_38 + 4)).ToString();
						pSVar5 = String.Concat(prefix, pSVar5);
						piVar1 = &__this_00._version;
						*piVar1 = *piVar1 + 1;
						pSVar6 = __this_00._items;
						if (pSVar6 == null) goto label_05cdb8d2;
						uVar2 = __this_00._size;
						if (uVar2 < (uint)pSVar6.Length) {
							__this_00._size = uVar2 + 1;
							pSVar6[(int)uVar2] = pSVar5;
						}
						else {
							__this_00.AddWithResize((object)pSVar5);
						}
						iVar4 = uStack_38._4_4_ + 1;
						uStack_38 = CONCAT44(iVar4, (uint)uStack_38);
					} while (iVar4 < options);
				}
				pSVar6 = (String[])__this_00.ToArray();
				return pSVar6;
			}
		}
	label_05cdb8d2: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004B08")]
	[Address(RVA = "0x5BDBAE0", Offset = "0x5BDAAE0", VA = "0x5BDBAE0")]
	private int[] GetIntOptionValues(int count)
	{
		// Lifted from source/cpp/UI/CharacterEditorTitanCostumePanel.c (UI.CharacterEditorTitanCostumePanel$$GetIntOptionValues): clean
		int piVar1;
		Int32[] pSVar2;
		ulong uVar3;
		ulong uVar4;
		ulong uVar5;
		int iVar6;
		int iVar7;
		int iVar8;
		int iVar9;

		pSVar2 = (Int32[])new int[count];
		if (0 < count) {
			if (pSVar2 == null) {
				throw new NullReferenceException();
			}
			uVar3 = (ulong)(uint)pSVar2.Length;
			uVar4 = (ulong)(uint)count - 1;
			if (uVar3 <= uVar4) {
				uVar4 = uVar3;
			}
			if (uVar4 < 8) {
				uVar4 = 0;
			}
			else {
				uVar4 = uVar4 + 1;
				uVar5 = 8;
				if ((uVar4 & 7) != 0) {
					uVar5 = (ulong)((uint)uVar4 & 7);
				}
				uVar4 = uVar4 - uVar5;
				iVar6 = 0;
				iVar7 = 1;
				iVar8 = 2;
				iVar9 = 3;
				uVar5 = 0;
				do {
					piVar1 = pSVar2.m_Items + uVar5;
					*piVar1 = iVar6 + -1;
					piVar1[1] = iVar7 + -1;
					piVar1[2] = iVar8 + -1;
					piVar1[3] = iVar9 + -1;
					piVar1 = pSVar2.m_Items + uVar5 + 4;
					*piVar1 = iVar6 + 3;
					piVar1[1] = iVar7 + 3;
					piVar1[2] = iVar8 + 3;
					piVar1[3] = iVar9 + 3;
					uVar5 = uVar5 + 8;
					iVar6 = iVar6 + 8;
					iVar7 = iVar7 + 8;
					iVar8 = iVar8 + 8;
					iVar9 = iVar9 + 8;
				} while (uVar4 != uVar5);
			}
			do {
				if (uVar3 == uVar4) {
					throw new IndexOutOfRangeException();
				}
				pSVar2[uVar4] = (int)uVar4 + -1;
				uVar4 = uVar4 + 1;
			} while ((uint)count != uVar4);
		}
		return pSVar2;
	}

	[Token(Token = "0x6004B09")]
	[Address(RVA = "0x5BDBCA0", Offset = "0x5BDACA0", VA = "0x5BDBCA0")]
	private string[] GetHairOptions()
	{
		// Lifted from source/cpp/UI/CharacterEditorTitanCostumePanel.c (UI.CharacterEditorTitanCostumePanel$$GetHairOptions): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		String item;
		List<string> __this_00;
		String[] pSVar5;

		__this_00 = new List<string>();
		item = "Random";
		if (__this_00 != null) {
			piVar1 = &__this_00._version;
			*piVar1 = *piVar1 + 1;
			pSVar5 = __this_00._items;
			if (pSVar5 != null) {
				uVar2 = __this_00._size;
				if (uVar2 < (uint)pSVar5.Length) {
					__this_00._size = uVar2 + 1;
					pSVar5[(int)uVar2] = item;
					uVar3 = (typeof(BasicTitanSetup)._2).cctor_finished_or_no_cctor;
				}
				else {
					__this_00.AddWithResize((object)item);
					uVar3 = (typeof(BasicTitanSetup)._2).cctor_finished_or_no_cctor;
				}
				if (uVar3 == 0) {
				}
				__this_00.AddRange((IEnumerable<T>)BasicTitanSetup.AllHairs);
				pSVar5 = (String[])__this_00.ToArray();
				return pSVar5;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004B0A")]
	[Address(RVA = "0x5BDB8E0", Offset = "0x5BDA8E0", VA = "0x5BDB8E0")]
	private string[] GetIcons(string[] options)
	{
		// Lifted from source/cpp/UI/CharacterEditorTitanCostumePanel.c (UI.CharacterEditorTitanCostumePanel$$GetIcons): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		bool bVar5;
		List<string> __this_00;
		ulong uVar6;
		String pSVar7;
		String[] pSVar8;
		ulong uVar9;

		__this_00 = new List<string>();
		if (options != null) {
			if (0 < (int)options.Length) {
				uVar6 = options.Length & 0xffffffff;
				uVar9 = 0;
				do {
					if (uVar6 <= uVar9) {
						throw new IndexOutOfRangeException();
					}
					pSVar7 = options[uVar9];
					bVar5 = (pSVar7 == "Random");
					uVar2 = (typeof(ResourcePaths)._2).cctor_finished_or_no_cctor;
					if (bVar5) {
						if (uVar2 == 0) {
						}
						pSVar7 = String.Concat(ResourcePaths.UI, "/Icons/Navigation/TooltipIcon");
					}
					else {
						if (uVar2 == 0) {
						}
						pSVar7 = String.Concat(ResourcePaths.Characters, "/Titans/Previews/", pSVar7);
					}
					if (__this_00 == null) goto label_05cdbad5;
					piVar1 = &__this_00._version;
					*piVar1 = *piVar1 + 1;
					pSVar8 = __this_00._items;
					if (pSVar8 == null) goto label_05cdbad5;
					uVar3 = __this_00._size;
					if (uVar3 < (uint)pSVar8.Length) {
						__this_00._size = uVar3 + 1;
						pSVar8[(int)uVar3] = pSVar7;
					}
					else {
						__this_00.AddWithResize((object)pSVar7);
					}
					uVar9 = uVar9 + 1;
					uVar3 = (uint)options.Length;
					uVar6 = (ulong)uVar3;
				} while ((long)uVar9 < (long)(int)uVar3);
			}
			if (__this_00 != null) {
				pSVar8 = (String[])__this_00.ToArray();
				return pSVar8;
			}
		}
	label_05cdbad5: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004B0B")]
	[Address(RVA = "0x5BDBED0", Offset = "0x5BDAED0", VA = "0x5BDBED0")]
	private void OnCustomSetSelected()
	{
		// Lifted from source/cpp/UI/CharacterEditorTitanCostumePanel.c (UI.CharacterEditorTitanCostumePanel$$OnCustomSetSelected): 9 lines keep C-only constructs
		String* targetAddress;
		byte bVar1;
		TitanCustomSettings pSVar2;
		Settings_SetSettingsContainer_TitanCustomSet__o __this_00;
		StringSetting pSVar3;
		CharacterEditorMenu pUVar4;
		String b;
		String pSVar5;
		BaseGameManager __this_01;
		CharacterEditorTitanMenu pUVar6;
		bool bVar7;
		BaseSetSetting pSVar8;
		CharacterEditorTitanCostumePanel.d__23<CapturePreviousTitanProfilePreview> __this_02;
		CharacterEditorTitanMenu titanMenu;

		pSVar2 = SettingsManager.TitanCustomSettings;
		if (((pSVar2 == null) ||(__this_00 = pSVar2.TitanCustomSets, __this_00 == null)) ||(pSVar8 = __this_00.GetSelectedSet(), pSVar8 == null)) {
	label_05cdc1c4: ;
			throw new NullReferenceException();
		}
		bVar1 = (typeof(TitanCustomSet)._2).typeHierarchyDepth;
		if (((pSVar8.klass._2).typeHierarchyDepth < bVar1) ||((pSVar8.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(TitanCustomSet))) {
			throw new InvalidCastException();
		}
		pSVar3 = pSVar8.UniqueId;
		if ((pSVar3 == null) ||(pUVar4 = this._menu, pUVar4 == null)) goto label_05cdc1c4;
		b = pSVar3._value;
		pUVar4.RebuildPanels(true);
		pUVar4 = this._menu;
		if (pUVar4 == null) goto label_05cdc1c4;
		pUVar4.ResetCharacter(true);
		targetAddress = &this._previousProfileId;
		pSVar5 = this._previousProfileId;
		if ((pSVar5 != null) &&(bVar7 = (pSVar5 != b))) {
			__this_01 = SceneLoader.CurrentGameManager;
			if (__this_01 != null) {
				bVar1 = (typeof(CharacterEditorGameManager)._2).typeHierarchyDepth;
				if (((__this_01.klass._2).typeHierarchyDepth < bVar1) ||((__this_01.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CharacterEditorGameManager))) {
					throw new InvalidCastException();
				}
			}
			bVar7 = ((Object)__this_01 != null);
			if (bVar7) {
				pSVar5 = *targetAddress;
				__this_02 = il2cpp_codegen_object_new((Il2CppClass)typeof(CharacterEditorTitanCostumePanel.d__23<CapturePreviousTitanProfilePreview>));
				__this_02 = new Object();
				__this_02.__1__state = 0;
				__this_02.previousProfileId = pSVar5;
				if (__this_01 == null) goto label_05cdc1c4;
				__this_01.StartCoroutine((IEnumerator)__this_02);
			}
			goto label_05cdc1ad;
		}
		if (this._shouldGeneratePreviewAfterRebuild == false) goto label_05cdc1ad;
		this._shouldGeneratePreviewAfterRebuild = false;
		pUVar6 = (CharacterEditorTitanMenu)this._menu;
		if ((typeof(CharacterPreviewGenerator)._2).cctor_finished_or_no_cctor == 0) {
			if (pUVar6 != null) goto label_05cdc16f;
	label_05cdc18b: ;
			titanMenu = null;
		}
		else {
			if (pUVar6 == null) goto label_05cdc18b;
	label_05cdc16f: ;
			bVar1 = (typeof(CharacterEditorTitanMenu)._2).typeHierarchyDepth;
			if ((((CharacterEditorMenu)pUVar6.klass)._2).typeHierarchyDepth < bVar1) goto label_05cdc18b;
			titanMenu = null;
			if ((((CharacterEditorMenu)pUVar6.klass)._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CharacterEditorTitanMenu)) {
				titanMenu = pUVar6;
			}
		}
		CharacterPreviewGenerator.GeneratePreviewForTitanSet(titanMenu, true);
	label_05cdc1ad: ;
		*targetAddress = b;
		return;
	}

	[Token(Token = "0x6004B0C")]
	[Address(RVA = "0x5BDC1E0", Offset = "0x5BDB1E0", VA = "0x5BDC1E0")]
	[IteratorStateMachine(typeof(_003CCapturePreviousTitanProfilePreview_003Ed__23))]
	private IEnumerator CapturePreviousTitanProfilePreview(string previousProfileId, string currentProfileId)
	{
		// Lifted from source/cpp/UI/CharacterEditorTitanCostumePanel.c (UI.CharacterEditorTitanCostumePanel$$CapturePreviousTitanProfilePreview): 1 lines keep C-only constructs
		CharacterEditorTitanCostumePanel.d__23<CapturePreviousTitanProfilePreview> __this_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CharacterEditorTitanCostumePanel.d__23<CapturePreviousTitanProfilePreview>));
		__this_00 = new Object();
		__this_00.__1__state = 0;
		__this_00.previousProfileId = previousProfileId;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6004B0D")]
	[Address(RVA = "0x5BDC270", Offset = "0x5BDB270", VA = "0x5BDC270")]
	private void OnCharacterChanged()
	{
		// Lifted from source/cpp/UI/CharacterEditorTitanCostumePanel.c (UI.CharacterEditorTitanCostumePanel$$OnCharacterChanged): clean
		CharacterEditorMenu pUVar1;

		pUVar1 = this._menu;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pUVar1.ResetCharacter(false);
		return;
	}

	[Token(Token = "0x6004B0E")]
	[Address(RVA = "0x5BDC2A0", Offset = "0x5BDB2A0", VA = "0x5BDC2A0")]
	private void GeneratePreviewForCurrentSet()
	{
		// Lifted from source/cpp/UI/CharacterEditorTitanCostumePanel.c (UI.CharacterEditorTitanCostumePanel$$GeneratePreviewForCurrentSet): 2 lines keep C-only constructs
		byte bVar1;
		CharacterEditorTitanMenu pUVar2;
		CharacterEditorTitanMenu titanMenu;

		pUVar2 = (CharacterEditorTitanMenu)this._menu;
		if (pUVar2 != null) {
			bVar1 = ((typeof(CharacterEditorTitanMenu))._2).typeHierarchyDepth;
			if (bVar1 <= (((CharacterEditorMenu)pUVar2.klass)._2).typeHierarchyDepth) {
				titanMenu = null;
				if ((((CharacterEditorMenu)pUVar2.klass)._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CharacterEditorTitanMenu)) {
					titanMenu = pUVar2;
				}
				CharacterPreviewGenerator.GeneratePreviewForTitanSet(titanMenu, false);
				return;
			}
		}
		CharacterPreviewGenerator.GeneratePreviewForTitanSet(null, false);
		return;
	}

	[Token(Token = "0x6004B0F")]
	[Address(RVA = "0x5BDC340", Offset = "0x5BDB340", VA = "0x5BDC340")]
	private void OnButtonClick(string name)
	{
		// Lifted from source/cpp/UI/CharacterEditorTitanCostumePanel.c (UI.CharacterEditorTitanCostumePanel$$OnButtonClick): 18 lines keep C-only constructs
		byte bVar1;
		TitanCustomSettings pSVar2;
		BaseMenu pUVar3;
		SetNamePopup __this_00;
		ImportPopup __this_01;
		SelectListPopup __this_02;
		BaseSetSetting pSVar4;
		DummyTitan __this_03;
		Settings_SetSettingsContainer_TitanCustomSet__o pSVar5;
		StringSetting pSVar6;
		ExportPopup __this_04;
		object @object;
		bool bVar7;
		uint uVar8;
		CharacterEditorTitanCostumePanel.c__DisplayClass26_0 __this_05;
		UnityAction pUVar9;
		MethodInfo* ppMVar10;
		String[] collection;
		List<string> items;
		String pSVar11;
		JSONNode pSVar12;
		JSONNode pSVar13;
		TitanCustomSet set;
		CharacterEditorTitanCostumePanel.d__28<SaveQuitCaptureCoroutineInternal> __this_06;
		String pSVar14;
		BaseSetSetting pSVar15;
		UI_CharacterEditorTitanCostumePanel___c_StaticFields pUVar16;
		String* ppSVar17;
		ConfirmPopup __this_07;

		__this_05 = new CharacterEditorTitanCostumePanel.c__DisplayClass26_0();
		if (__this_05 == null) goto label_05cdcfd4;
		__this_05.__4__this = this;
		ppSVar17 = &__this_05.name;
		__this_05.name = name;
		pSVar2 = SettingsManager.TitanCustomSettings;
		pUVar3 = UIManager.CurrentMenu;
		if (pUVar3 == null) goto label_05cdcfd4;
		__this_00 = pUVar3.SetNamePopup;
		pSVar11 = *ppSVar17;
		uVar8 = _PrivateImplementationDetails_.ComputeStringHash(pSVar11);
		if (uVar8 < 0x5cb46bab) {
			if (uVar8 < 0x573e0af5) {
				if (uVar8 == 0x547f6497) {
					bVar7 = (pSVar11 == "SaveQuit");
					if (!bVar7) {
						return;
					}
					pSVar2 = SettingsManager.TitanCustomSettings;
					if (pSVar2 != null) {
						pSVar2.Save();
						set = (TitanCustomSet)SceneLoader.CurrentGameManager;
						if (set != null) {
							bVar1 = (typeof(CharacterEditorGameManager)._2).typeHierarchyDepth;
							if (((((BaseGameManager)set.klass)._2).typeHierarchyDepth < bVar1) ||((((BaseGameManager)set.klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CharacterEditorGameManager))) {
	label_05cdcfdc: ;
								throw new InvalidCastException();
							}
							__this_03 = (DummyTitan)set.Preset;
							if (__this_03 != null) {
								bVar1 = (typeof(DummyTitan)._2).typeHierarchyDepth;
								if ((bVar1 <= (__this_03.klass._2).typeHierarchyDepth) &&((__this_03.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(DummyTitan))) {
									pSVar2 = SettingsManager.TitanCustomSettings;
									if ((pSVar2 == null) ||(pSVar5 = pSVar2.TitanCustomSets, pSVar5 == null)) goto label_05cdcfd4;
									set = (TitanCustomSet)pSVar5.GetSelectedSet();
									if (set != null) {
										bVar1 = (typeof(TitanCustomSet)._2).typeHierarchyDepth;
										if (((set.klass._2).typeHierarchyDepth < bVar1) ||((set.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(TitanCustomSet))) goto label_05cdcfdc;
									}
									__this_03.LoadSet(set, true);
								}
							}
						}
						__this_06 = il2cpp_codegen_object_new((Il2CppClass)typeof(CharacterEditorTitanCostumePanel.d__28<SaveQuitCaptureCoroutineInternal>));
						__this_06 = new Object();
						__this_06.__1__state = 0;
						this.StartCoroutine((IEnumerator)__this_06);
						return;
					}
				}
				else {
					if (uVar8 != 0x573e0af4) {
						return;
					}
					bVar7 = (pSVar11 == "Import");
					if (!bVar7) {
						return;
					}
					pUVar3 = UIManager.CurrentMenu;
					if (pUVar3 != null) {
						__this_01 = pUVar3.ImportPopup;
						pUVar9 = new UnityAction((object)__this_05, (intptr_t) MethodInfo_UI_CharacterEditorTitanCostumePanel_c__DisplayClass26_0_OnButtonClick_b__5);
						if (__this_01 != null) {
							__this_01.Show(pUVar9, true, "", "");
							return;
						}
					}
				}
				goto label_05cdcfd4;
			}
			if (uVar8 != 0x5797ea6a) {
				if ((uVar8 != 0x5cb46baa) ||(bVar7 = (pSVar11 == "LoadPreset"), !bVar7)) {
					return;
				}
				pSVar2 = SettingsManager.TitanCustomSettings;
				if ((pSVar2 != null) &&(pSVar5 = pSVar2.TitanCustomSets, pSVar5 != null)) {
					collection = pSVar5.GetSetNames();
					items = new List<string>((IEnumerable<T>)collection);
					pUVar3 = UIManager.CurrentMenu;
					if (pUVar3 != null) {
						__this_02 = pUVar3.SelectListPopup;
						pSVar11 = UIManager.GetLocale("CharacterEditor", "Costume", "Presets", "", "");
						pUVar9 = new UnityAction((object)__this_05, (intptr_t) MethodInfo_UI_CharacterEditorTitanCostumePanel_c__DisplayClass26_0_OnButtonClick_b__4);
						if (__this_02 != null) {
							__this_02.ShowLoad(items, pSVar11, pUVar9, null, null);
							return;
						}
					}
				}
				goto label_05cdcfd4;
			}
			bVar7 = (pSVar11 == "Delete");
			if (!bVar7) {
				return;
			}
			if ((pSVar2 == null) ||(pSVar5 = pSVar2.TitanCustomSets, pSVar5 == null)) goto label_05cdcfd4;
			bVar7 = pSVar5.CanDeleteSelectedSet();
			if (!bVar7) {
				return;
			}
			pUVar3 = UIManager.CurrentMenu;
			if (pUVar3 == null) goto label_05cdcfd4;
			__this_07 = pUVar3.ConfirmPopup;
			pSVar11 = UIManager.GetLocaleCommon("DeleteWarning");
			pUVar9 = new UnityAction((object)__this_05, (intptr_t)MethodInfo_UI_CharacterEditorTitanCostumePanel_c__DisplayClass26_0_OnButtonClick_b__1);
			pSVar14 = "Delete";
		}
		else {
			if (uVar8 < 0x990de47e) {
				if (uVar8 == 0x990de47d) {
					ppSVar17 = &"Create";
					bVar7 = (pSVar11 == "Create");
					if (!bVar7) {
						return;
					}
					pSVar11 = UIManager.GetLocale("CharacterEditor", "Costume", "NewSet", "", "");
					ppMVar10 = &MethodInfo_UI_CharacterEditorTitanCostumePanel_c__DisplayClass26_0_OnButtonClick_b__0;
				}
				else {
					if (uVar8 != 0x658f3664) {
						return;
					}
					ppSVar17 = &"Copy";
					bVar7 = (pSVar11 == "Copy");
					if (!bVar7) {
						return;
					}
					pSVar11 = UIManager.GetLocale("CharacterEditor", "Costume", "NewSet", "", "");
					ppMVar10 = &MethodInfo_UI_CharacterEditorTitanCostumePanel_c__DisplayClass26_0_OnButtonClick_b__3;
				}
				pUVar9 = new UnityAction((object)__this_05, (intptr_t)*ppMVar10);
	label_05cdcc46: ;
				pSVar14 = UIManager.GetLocaleCommon(*ppSVar17);
				if (__this_00 != null) {
					__this_00.Show(pSVar11, pUVar9, pSVar14, null);
					return;
				}
				goto label_05cdcfd4;
			}
			if (uVar8 != 0xc7b3d356) {
				if (uVar8 == 0xc80631f3) {
					ppSVar17 = &"Rename";
					bVar7 = (pSVar11 == "Rename");
					if (!bVar7) {
						return;
					}
					if ((((pSVar2 == null) ||(pSVar5 = pSVar2.TitanCustomSets, pSVar5 == null)) ||(pSVar15 = pSVar5.GetSelectedSet(), pSVar15 == null)) ||(pSVar6 = pSVar15.Name, pSVar6 == null)) goto label_05cdcfd4;
					pSVar11 = pSVar6._value;
					pUVar9 = new UnityAction((object)__this_05, (intptr_t) MethodInfo_UI_CharacterEditorTitanCostumePanel_c__DisplayClass26_0_OnButtonClick_b__2);
					goto label_05cdcc46;
				}
				if (uVar8 != 0xe86349d3) {
					return;
				}
				bVar7 = (pSVar11 == "Export");
				if (!bVar7) {
					return;
				}
				if (((pSVar2 == null) ||(pSVar5 = pSVar2.TitanCustomSets, pSVar5 == null)) ||(set = (TitanCustomSet)pSVar5.GetSelectedSet(), set == null)) goto label_05cdcfd4;
				pSVar4 = (BaseSetSetting)set.klass;
				bVar1 = (typeof(TitanCustomSet)._2).typeHierarchyDepth;
				if (((pSVar4._2).typeHierarchyDepth < bVar1) ||((pSVar4._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(TitanCustomSet))) goto label_05cdcfdc;
				pSVar12 = set.SerializeToJsonObject();
				if (pSVar12 == null) goto label_05cdcfd4;
				bVar7 = pSVar12.HasKey("Preset");
				if (bVar7) {
					pSVar13 = ((JSONNode)false);
					pSVar12.set_Item("Preset", pSVar13);
					if ((typeof(UIManager)._2).cctor_finished_or_no_cctor != 0) goto label_05cdcee2;
	label_05cdc9ee: ;
					pUVar3 = UIManager.CurrentMenu;
				}
				else {
					if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) goto label_05cdc9ee;
	label_05cdcee2: ;
					pUVar3 = UIManager.CurrentMenu;
				}
				if (pUVar3 != null) {
					__this_04 = pUVar3.ExportPopup;
					pSVar11 = pSVar12.ToString(4);
					if (__this_04 != null) {
						__this_04.Show(pSVar11);
						return;
					}
				}
				goto label_05cdcfd4;
			}
			bVar7 = (pSVar11 == "Quit");
			if (!bVar7) {
				return;
			}
			pUVar3 = UIManager.CurrentMenu;
			if (pUVar3 == null) goto label_05cdcfd4;
			__this_07 = pUVar3.ConfirmPopup;
			pSVar11 = UIManager.GetLocaleCommon("QuitWithoutSaveConfirm");
			if ((typeof(CharacterEditorTitanCostumePanel.c)._2).cctor_finished_or_no_cctor == 0) {
				pUVar16 = typeof(CharacterEditorTitanCostumePanel.c).static_fields;
				pUVar9 = pUVar16.__9__26_6;
				if (pUVar9 != null) goto label_05cdcdd1;
	label_05cdcf53: ;
				if ((typeof(CharacterEditorTitanCostumePanel.c)._2).cctor_finished_or_no_cctor == 0) {
					pUVar16 = typeof(CharacterEditorTitanCostumePanel.c).static_fields;
				}
				@object = (object)pUVar16.__9;
				pUVar9 = new UnityAction(@object, (intptr_t)MethodInfo_UI_CharacterEditorTitanCostumePanel_c_OnButtonClick_b__26_6);
				pUVar16 = typeof(CharacterEditorTitanCostumePanel.c).static_fields;
				pUVar16.__9__26_6 = pUVar9;
				uVar8 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				pUVar16 = typeof(CharacterEditorTitanCostumePanel.c).static_fields;
				pUVar9 = pUVar16.__9__26_6;
				if (pUVar9 == null) goto label_05cdcf53;
	label_05cdcdd1: ;
				uVar8 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar8 == 0) {
			}
			pSVar14 = "Quit";
		}
		pSVar14 = UIManager.GetLocaleCommon(pSVar14);
		if (__this_07 != null) {
			__this_07.Show(pSVar11, pUVar9, pSVar14);
			return;
		}
	label_05cdcfd4: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004B10")]
	[Address(RVA = "0x5BDD050", Offset = "0x5BDC050", VA = "0x5BDD050")]
	private void OnCostumeSetOperationFinish(string name)
	{
		// Lifted from source/cpp/UI/CharacterEditorTitanCostumePanel.c (UI.CharacterEditorTitanCostumePanel$$OnCostumeSetOperationFinish): 12 lines keep C-only constructs
		BaseMenu pUVar1;
		TitanCustomSettings pSVar2;
		SetNamePopup pUVar3;
		Settings_SetSettingsContainer_TitanCustomSet__o __this_00;
		StringSetting pSVar4;
		StringSetting __this_01;
		ImportPopup pUVar5;
		String value;
		BoolSetting __this_02;
		bool bVar6;
		int iVar7;
		VirtualInvokeData pVVar8;
		BaseSetSetting pSVar9;
		ListSetting<T> pSVar10;
		ulong uVar11;
		Il2CppRuntimeInterfaceOffsetPair pIVar12;
		ListSetting<T> obj;
		MethodInfo method_00;
		long lVar13;
		IntSetting pSVar14;

		if (Il2CppMethodInitialized_07547bd7 == false) {
			Il2CppMethodInitialized_07547bd7 = true;
			if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) goto label_05cdd19c;
	label_05cdd081: ;
			pUVar1 = UIManager.CurrentMenu;
		}
		else {
			if ((typeof(UIManager)._2).cctor_finished_or_no_cctor != 0) goto label_05cdd081;
	label_05cdd19c: ;
			pUVar1 = UIManager.CurrentMenu;
		}
		if ((pUVar1 == null) ||(pSVar2 = SettingsManager.TitanCustomSettings, pSVar2 == null)) goto label_05cdd6c9;
		pUVar3 = pUVar1.SetNamePopup;
		__this_00 = pSVar2.TitanCustomSets;
		bVar6 = (name == "Create");
		if (bVar6) {
			if (((pUVar3 == null) ||(pSVar4 = pUVar3.NameSetting, pSVar4 == null)) ||(__this_00 == null)) goto label_05cdd6c9;
			__this_00.CreateSet(pSVar4._value);
			obj = ((SetSettingsContainer<T>)&__this_00.fields).Sets;
			if (obj == null) goto label_05cdd6c9;
			pSVar14 = ((SetSettingsContainer<T>)&__this_00.fields).SelectedSetIndex;
			pSVar10 = obj.klass;
			uVar11 = (ulong)(pSVar10._2).interface_offsets_count;
			if (uVar11 != 0) {
				pIVar12 = (pSVar10._1).interfaceOffsets;
				lVar13 = 0;
				do {
					if (*(IListSetting*)((long)&pIVar12.interfaceType + lVar13) == typeof(IListSetting)) goto label_05cdd434;
					lVar13 = lVar13 + 0x10;
				} while (uVar11 * 0x10 != lVar13);
			}
		}
		else {
			bVar6 = (name == "Delete");
			if (bVar6) {
				if (__this_00 != null) {
					__this_00.DeleteSelectedSet();
					pSVar14 = ((SetSettingsContainer<T>)&__this_00.fields).SelectedSetIndex;
					if (pSVar14 != null) {
						method_00 = null;
						pSVar14.Value = 0;
						CharacterPreviewGenerator.CleanupOrphanedPreviews();
						goto label_05cdd477;
					}
				}
				goto label_05cdd6c9;
			}
			bVar6 = (name == "Rename");
			if (bVar6) {
				if ((((__this_00 != null) &&(pSVar9 = __this_00.GetSelectedSet(), pSVar9 != null)) && (pUVar3 != null)) &&((pSVar4 = pUVar3.NameSetting, pSVar4 != null &&(__this_01 = pSVar9.Name, __this_01 != null)))) {
					method_00 = (MethodInfo)pSVar4._value;
					__this_01.Value = (object)method_00;
					goto label_05cdd477;
				}
				goto label_05cdd6c9;
			}
			bVar6 = (name == "Copy");
			if (!bVar6) {
				method_00 = (MethodInfo *)"Import";
				bVar6 = (name == "Import");
				if (bVar6) {
					pUVar1 = UIManager.CurrentMenu;
					if (pUVar1 == null) goto label_05cdd6c9;
					pUVar5 = pUVar1.ImportPopup;
					if (__this_00 == null) {
						throw new NullReferenceException();
					}
					pSVar9 = __this_00.GetSelectedSet();
					if (pSVar9 == null) {
						throw new NullReferenceException();
					}
					pSVar4 = pSVar9.Name;
					if (pSVar4 == null) {
						throw new NullReferenceException();
					}
					value = pSVar4._value;
					pSVar9 = __this_00.GetSelectedSet();
					if (pUVar5 == null) {
						throw new NullReferenceException();
					}
					pSVar4 = pUVar5.ImportSetting;
					if (pSVar4 == null) {
						throw new NullReferenceException();
					}
					if (pSVar9 == null) {
						throw new NullReferenceException();
					}
					pSVar9.DeserializeFromJsonString(pSVar4._value) ;
					pSVar9 = __this_00.GetSelectedSet();
					if (pSVar9 == null) {
						throw new NullReferenceException();
					}
					__this_02 = pSVar9.Preset;
					if (__this_02 == null) {
						throw new NullReferenceException();
					}
					__this_02.Value = false;
					pSVar9 = __this_00.GetSelectedSet();
					if (pSVar9 == null) {
						throw new NullReferenceException();
					}
					pSVar4 = pSVar9.Name;
					if (pSVar4 == null) {
						throw new NullReferenceException();
					}
					pSVar4.Value = (object)value;
					method_00 = (pUVar5.klass.vtable)._22_Hide.method;
					pUVar5.Hide();
				}
				goto label_05cdd477;
			}
			if (((pUVar3 == null) ||(pSVar4 = pUVar3.NameSetting, pSVar4 == null)) ||(__this_00 == null)) goto label_05cdd6c9;
			__this_00.CopySelectedSet(pSVar4._value);
			obj = ((SetSettingsContainer<T>)&__this_00.fields).Sets;
			if (obj == null) goto label_05cdd6c9;
			pSVar14 = ((SetSettingsContainer<T>)&__this_00.fields).SelectedSetIndex;
			pSVar10 = obj.klass;
			uVar11 = (ulong)(pSVar10._2).interface_offsets_count;
			if (uVar11 != 0) {
				pIVar12 = (pSVar10._1).interfaceOffsets;
				lVar13 = 0;
				do {
					if (*(IListSetting*)((long)&pIVar12.interfaceType + lVar13) == typeof(IListSetting)) goto label_05cdd434;
					lVar13 = lVar13 + 0x10;
				} while (uVar11 * 0x10 != lVar13);
			}
		}
		goto label_05cdd447;
	label_05cdd434: ;
		pVVar8 = &(pSVar10.vtable)._0_Equals + *(int)((long)&pIVar12.offset + lVar13);
	label_05cdd447: ;
		iVar7 = obj.GetCount();
		if (pSVar14 != null) {
			method_00 = (MethodInfo)(ulong)(iVar7 - 1U);
			pSVar14.Value = iVar7 - 1U;
			this._shouldGeneratePreviewAfterRebuild = true;
	label_05cdd477: ;
			this.OnCustomSetSelected();
			return;
		}
	label_05cdd6c9: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004B11")]
	[Address(RVA = "0x5BDD000", Offset = "0x5BDC000", VA = "0x5BDD000")]
	[IteratorStateMachine(typeof(_003CSaveQuitCaptureCoroutineInternal_003Ed__28))]
	private IEnumerator SaveQuitCaptureCoroutineInternal()
	{
		// Lifted from source/cpp/UI/CharacterEditorTitanCostumePanel.c (UI.CharacterEditorTitanCostumePanel$$SaveQuitCaptureCoroutineInternal): 1 lines keep C-only constructs
		CharacterEditorTitanCostumePanel.d__28<SaveQuitCaptureCoroutineInternal> __this_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CharacterEditorTitanCostumePanel.d__28<SaveQuitCaptureCoroutineInternal>));
		__this_00 = new Object();
		__this_00.__1__state = 0;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6004B12")]
	[Address(RVA = "0x5BDD730", Offset = "0x5BDC730", VA = "0x5BDD730")]
	public CharacterEditorTitanCostumePanel()
	{
		// Lifted from source/cpp/UI/CharacterEditorTitanCostumePanel.c (UI.CharacterEditorTitanCostumePanel$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/CharacterEditorTitanCostumePanel.c.

	// UI.CharacterEditorTitanCostumePanel.<>c__DisplayClass26_0$$.ctor: clean
	private void c__DisplayClass26_0__ctor()
	{
		base();
		return;
	}

	// UI.CharacterEditorTitanCostumePanel$$<Setup>b__17_0: clean
	private void Setup_b__17_0()
	{


		this.OnButtonClick("Quit");
		return;
	}

	// UI.CharacterEditorTitanCostumePanel$$<Setup>b__17_1: clean
	private void Setup_b__17_1()
	{


		this.OnButtonClick("SaveQuit");
		return;
	}

	// UI.CharacterEditorTitanCostumePanel$$<Setup>b__17_2: clean
	private void Setup_b__17_2()
	{
		this.OnCustomSetSelected();
		return;
	}

	// UI.CharacterEditorTitanCostumePanel$$<Setup>b__17_3: clean
	private void Setup_b__17_3()
	{
		CharacterEditorMenu pUVar1;

		pUVar1 = this._menu;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pUVar1.ResetCharacter(false);
		return;
	}

	// UI.CharacterEditorTitanCostumePanel$$<Setup>b__17_4: clean
	private void Setup_b__17_4()
	{
		CharacterEditorMenu pUVar1;

		pUVar1 = this._menu;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pUVar1.ResetCharacter(false);
		return;
	}

	// UI.CharacterEditorTitanCostumePanel$$<Setup>b__17_5: clean
	private void Setup_b__17_5()
	{
		CharacterEditorMenu pUVar1;

		pUVar1 = this._menu;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pUVar1.ResetCharacter(false);
		return;
	}

	// UI.CharacterEditorTitanCostumePanel$$<Setup>b__17_6: clean
	private void Setup_b__17_6()
	{
		CharacterEditorMenu pUVar1;

		pUVar1 = this._menu;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pUVar1.ResetCharacter(false);
		return;
	}

	// UI.CharacterEditorTitanCostumePanel$$<Setup>b__17_7: clean
	private void Setup_b__17_7()
	{
		CharacterEditorMenu pUVar1;

		pUVar1 = this._menu;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pUVar1.ResetCharacter(false);
		return;
	}

	// UI.CharacterEditorTitanCostumePanel$$<Setup>b__17_8: clean
	private void Setup_b__17_8()
	{
		CharacterEditorMenu pUVar1;

		pUVar1 = this._menu;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pUVar1.ResetCharacter(false);
		return;
	}

	// UI.CharacterEditorTitanCostumePanel.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new CharacterEditorTitanCostumePanel.c();
		CharacterEditorTitanCostumePanel.c.__9 =(CharacterEditorTitanCostumePanel.c)__this;
		return;
	}

	// UI.CharacterEditorTitanCostumePanel.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// UI.CharacterEditorTitanCostumePanel.<>c$$<OnButtonClick>b__26_6: clean
	private void c__OnButtonClick_b__26_6()
	{
		TitanCustomSettings pSVar1;

		CharacterPreviewGenerator.ClearSessionGeneratedPreviews();
		pSVar1 = SettingsManager.TitanCustomSettings;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		pSVar1.Load();
		SceneLoader.LoadScene(1);
		return;
	}

	// UI.CharacterEditorTitanCostumePanel.<>c__DisplayClass26_0$$<OnButtonClick>b__0: clean
	private void c__DisplayClass26_0__OnButtonClick_b__0()
	{
		CharacterEditorTitanCostumePanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnCostumeSetOperationFinish(this.name);
		return;
	}

	// UI.CharacterEditorTitanCostumePanel.<>c__DisplayClass26_0$$<OnButtonClick>b__1: clean
	private void c__DisplayClass26_0__OnButtonClick_b__1()
	{
		CharacterEditorTitanCostumePanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnCostumeSetOperationFinish(this.name);
		return;
	}

	// UI.CharacterEditorTitanCostumePanel.<>c__DisplayClass26_0$$<OnButtonClick>b__2: clean
	private void c__DisplayClass26_0__OnButtonClick_b__2()
	{
		CharacterEditorTitanCostumePanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnCostumeSetOperationFinish(this.name);
		return;
	}

	// UI.CharacterEditorTitanCostumePanel.<>c__DisplayClass26_0$$<OnButtonClick>b__3: clean
	private void c__DisplayClass26_0__OnButtonClick_b__3()
	{
		CharacterEditorTitanCostumePanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnCostumeSetOperationFinish(this.name);
		return;
	}

	// UI.CharacterEditorTitanCostumePanel.<>c__DisplayClass26_0$$<OnButtonClick>b__4: clean
	private void c__DisplayClass26_0__OnButtonClick_b__4()
	{
		CharacterEditorTitanCostumePanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnCostumeSetOperationFinish("LoadPreset");
		return;
	}

	// UI.CharacterEditorTitanCostumePanel.<>c__DisplayClass26_0$$<OnButtonClick>b__5: clean
	private void c__DisplayClass26_0__OnButtonClick_b__5()
	{
		CharacterEditorTitanCostumePanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnCostumeSetOperationFinish(this.name);
		return;
	}
}
