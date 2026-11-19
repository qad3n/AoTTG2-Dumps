// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterEditorCostumePanel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/CharacterEditorCostumePanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorCostumePanel.cs
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

[Token(Token = "0x20007B1")]
internal class CharacterEditorCostumePanel : HeadedPanel
{
	[Token(Token = "0x20007B5")]
	[CompilerGenerated]
	private sealed class _003CApplySkinPreviewAfterCostumeChange_003Ed__34 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40026CE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40026CF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40026D0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private bool _003CoriginalGlobalEnabled_003E5__2;

		[Token(Token = "0x40026D1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x21")]
		private bool _003CoriginalSetEnabled_003E5__3;

		[Token(Token = "0x17000CEE")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004A6C")]
			[Address(RVA = "0x5BD04D0", Offset = "0x5BCF4D0", VA = "0x5BD04D0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterCostumeChange>d__34$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000CEF")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004A6E")]
			[Address(RVA = "0x5BD0520", Offset = "0x5BCF520", VA = "0x5BD0520", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterCostumeChange>d__34$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6004A69")]
		[Address(RVA = "0x5BD0140", Offset = "0x5BCF140", VA = "0x5BD0140")]
		[DebuggerHidden]
		public _003CApplySkinPreviewAfterCostumeChange_003Ed__34(int _003C_003E1__state)
		{
			// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterCostumeChange>d__34$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6004A6A")]
		[Address(RVA = "0x5BD0160", Offset = "0x5BCF160", VA = "0x5BD0160", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterCostumeChange>d__34$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6004A6B")]
		[Address(RVA = "0x5BD0170", Offset = "0x5BCF170", VA = "0x5BD0170", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterCostumeChange>d__34$$MoveNext): 3 lines keep C-only constructs
			byte bVar1;
			int iVar2;
			BaseGameManager pGVar3;
			DummyHuman __this_00;
			CustomSkinSettings pSVar4;
			HumanCustomSkinSettings pSVar5;
			BoolSetting pSVar6;
			BoolSetting pSVar7;
			object pIVar8;

			iVar2 = this.__1__state;
			if (iVar2 == 2) {
				this.__1__state = -1;
				pSVar4 = SettingsManager.CustomSkinSettings;
				if (((pSVar4 != null) &&(pSVar5 = pSVar4.Human, pSVar5 != null)) &&(pSVar6 = pSVar5.GlobalSkinOverridesEnabled, pSVar6 != null)) {
					pSVar6.Value = this._originalGlobalEnabled_5__2;
					pSVar4 = SettingsManager.CustomSkinSettings;
					if (((pSVar4 != null) &&(pSVar5 = pSVar4.Human, pSVar5 != null)) &&(pSVar6 = pSVar5.SetSpecificSkinsEnabled, pSVar6 != null)) {
						pSVar6.Value = this._originalSetEnabled_5__3;
						return false;
					}
				}
		label_05cd04bb: ;
				throw new NullReferenceException();
			}
			if (iVar2 == 1) {
				this.__1__state = -1;
				pGVar3 = SceneLoader.CurrentGameManager;
				if (pGVar3 != null) {
					bVar1 = (typeof(CharacterEditorGameManager)._2).typeHierarchyDepth;
					if (((pGVar3.klass._2).typeHierarchyDepth < bVar1) ||((pGVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CharacterEditorGameManager))) {
						throw new InvalidCastException();
					}
					__this_00 = (DummyHuman)(*(ulong)((sbyte)pGVar3 + 0x38));
					if (__this_00 != null) {
						bVar1 = (typeof(DummyHuman)._2).typeHierarchyDepth;
						if ((bVar1 <= (__this_00.klass._2).typeHierarchyDepth) &&((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(DummyHuman))) {
							pSVar4 = SettingsManager.CustomSkinSettings;
							if ((pSVar4 != null) &&((pSVar5 = pSVar4.Human, pSVar5 != null &&(pSVar6 = pSVar5.GlobalSkinOverridesEnabled, pSVar6 != null)) )) {
								this._originalGlobalEnabled_5__2 =((Settings_TypedSetting_bool__Fields)&pSVar6.fields)._value;
								pSVar7 = pSVar5.SetSpecificSkinsEnabled;
								if (pSVar7 != null) {
									this._originalSetEnabled_5__3 = pSVar7._value;
									pSVar6.Value = CharacterEditorSkinsPanel._persistentGlobalSkinPreview;
									pSVar4 = SettingsManager.CustomSkinSettings;
									if ((pSVar4 != null) &&(pSVar5 = pSVar4.Human, pSVar5 != null)) {
										pSVar6 = pSVar5.SetSpecificSkinsEnabled;
										if (pSVar6 != null) {
											pSVar6.Value = CharacterEditorSkinsPanel. _persistentCustomSkinPreview;
											__this_00.LoadSkin();
											pIVar8 = (object)Util.YieldForFrames(2);
											this.__2__current = pIVar8;
											this.__1__state = 2;
											return true;
										}
									}
								}
							}
							goto label_05cd04bb;
						}
					}
				}
			}
			else if (iVar2 == 0) {
				this.__1__state = -1;
				pIVar8 = (object)Util.YieldForFrames(2);
				this.__2__current = pIVar8;
				this.__1__state = 1;
				return true;
			}
			return false;
		}

		[Token(Token = "0x6004A6D")]
		[Address(RVA = "0x5BD04E0", Offset = "0x5BCF4E0", VA = "0x5BD04E0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterCostumeChange>d__34$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_UI_CharacterEditorCostumePanel_ApplySkinPreviewAfterCostumeChange_d__34_System_Collections_IEnum);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x20007B6")]
	[CompilerGenerated]
	private sealed class _003CApplySkinPreviewAfterReset_003Ed__32 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40026D2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40026D3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40026D4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private bool _003CoriginalGlobalEnabled_003E5__2;

		[Token(Token = "0x40026D5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x21")]
		private bool _003CoriginalSetEnabled_003E5__3;

		[Token(Token = "0x17000CF0")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004A72")]
			[Address(RVA = "0x5BD08C0", Offset = "0x5BCF8C0", VA = "0x5BD08C0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterReset>d__32$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000CF1")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004A74")]
			[Address(RVA = "0x5BD0910", Offset = "0x5BCF910", VA = "0x5BD0910", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterReset>d__32$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6004A6F")]
		[Address(RVA = "0x5BD0530", Offset = "0x5BCF530", VA = "0x5BD0530")]
		[DebuggerHidden]
		public _003CApplySkinPreviewAfterReset_003Ed__32(int _003C_003E1__state)
		{
			// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterReset>d__32$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6004A70")]
		[Address(RVA = "0x5BD0550", Offset = "0x5BCF550", VA = "0x5BD0550", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterReset>d__32$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6004A71")]
		[Address(RVA = "0x5BD0560", Offset = "0x5BCF560", VA = "0x5BD0560", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterReset>d__32$$MoveNext): 3 lines keep C-only constructs
			byte bVar1;
			int iVar2;
			BaseGameManager pGVar3;
			DummyHuman __this_00;
			CustomSkinSettings pSVar4;
			HumanCustomSkinSettings pSVar5;
			BoolSetting pSVar6;
			BoolSetting pSVar7;
			object pIVar8;

			iVar2 = this.__1__state;
			if (iVar2 == 2) {
				this.__1__state = -1;
				pSVar4 = SettingsManager.CustomSkinSettings;
				if (((pSVar4 != null) &&(pSVar5 = pSVar4.Human, pSVar5 != null)) &&(pSVar6 = pSVar5.GlobalSkinOverridesEnabled, pSVar6 != null)) {
					pSVar6.Value = this._originalGlobalEnabled_5__2;
					pSVar4 = SettingsManager.CustomSkinSettings;
					if (((pSVar4 != null) &&(pSVar5 = pSVar4.Human, pSVar5 != null)) &&(pSVar6 = pSVar5.SetSpecificSkinsEnabled, pSVar6 != null)) {
						pSVar6.Value = this._originalSetEnabled_5__3;
						return false;
					}
				}
		label_05cd08ab: ;
				throw new NullReferenceException();
			}
			if (iVar2 == 1) {
				this.__1__state = -1;
				pGVar3 = SceneLoader.CurrentGameManager;
				if (pGVar3 != null) {
					bVar1 = (typeof(CharacterEditorGameManager)._2).typeHierarchyDepth;
					if (((pGVar3.klass._2).typeHierarchyDepth < bVar1) ||((pGVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CharacterEditorGameManager))) {
						throw new InvalidCastException();
					}
					__this_00 = (DummyHuman)(*(ulong)((sbyte)pGVar3 + 0x38));
					if (__this_00 != null) {
						bVar1 = (typeof(DummyHuman)._2).typeHierarchyDepth;
						if ((bVar1 <= (__this_00.klass._2).typeHierarchyDepth) &&((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(DummyHuman))) {
							pSVar4 = SettingsManager.CustomSkinSettings;
							if ((pSVar4 != null) &&((pSVar5 = pSVar4.Human, pSVar5 != null &&(pSVar6 = pSVar5.GlobalSkinOverridesEnabled, pSVar6 != null)) )) {
								this._originalGlobalEnabled_5__2 =((Settings_TypedSetting_bool__Fields)&pSVar6.fields)._value;
								pSVar7 = pSVar5.SetSpecificSkinsEnabled;
								if (pSVar7 != null) {
									this._originalSetEnabled_5__3 = pSVar7._value;
									pSVar6.Value = CharacterEditorSkinsPanel._persistentGlobalSkinPreview;
									pSVar4 = SettingsManager.CustomSkinSettings;
									if ((pSVar4 != null) &&(pSVar5 = pSVar4.Human, pSVar5 != null)) {
										pSVar6 = pSVar5.SetSpecificSkinsEnabled;
										if (pSVar6 != null) {
											pSVar6.Value = CharacterEditorSkinsPanel. _persistentCustomSkinPreview;
											__this_00.LoadSkin();
											pIVar8 = (object)Util.YieldForFrames(2);
											this.__2__current = pIVar8;
											this.__1__state = 2;
											return true;
										}
									}
								}
							}
							goto label_05cd08ab;
						}
					}
				}
			}
			else if (iVar2 == 0) {
				this.__1__state = -1;
				pIVar8 = (object)Util.YieldForFrames(2);
				this.__2__current = pIVar8;
				this.__1__state = 1;
				return true;
			}
			return false;
		}

		[Token(Token = "0x6004A73")]
		[Address(RVA = "0x5BD08D0", Offset = "0x5BCF8D0", VA = "0x5BD08D0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel.<ApplySkinPreviewAfterReset>d__32$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_UI_CharacterEditorCostumePanel_ApplySkinPreviewAfterReset_d__32_System_Collections_IEnumerator_R);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x20007B7")]
	[CompilerGenerated]
	private sealed class _003CCapturePreviousProfilePreviewAndApplySkins_003Ed__31 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40026D6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40026D7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40026D8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string previousProfileId;

		[Token(Token = "0x40026D9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CharacterEditorCostumePanel _003C_003E4__this;

		[Token(Token = "0x40026DA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool shouldApplySkinPreview;

		[Token(Token = "0x40026DB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private HumanCustomSettings _003Csettings_003E5__2;

		[Token(Token = "0x40026DC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private int _003CcurrentSelectedIndex_003E5__3;

		[Token(Token = "0x40026DD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private DummyHuman _003Ccharacter_003E5__4;

		[Token(Token = "0x17000CF2")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004A78")]
			[Address(RVA = "0x5BD10A0", Offset = "0x5BD00A0", VA = "0x5BD10A0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel.<CapturePreviousProfilePreviewAndApplySkins>d__31$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000CF3")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004A7A")]
			[Address(RVA = "0x5BD10F0", Offset = "0x5BD00F0", VA = "0x5BD10F0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel.<CapturePreviousProfilePreviewAndApplySkins>d__31$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6004A75")]
		[Address(RVA = "0x5BD0920", Offset = "0x5BCF920", VA = "0x5BD0920")]
		[DebuggerHidden]
		public _003CCapturePreviousProfilePreviewAndApplySkins_003Ed__31(int _003C_003E1__state)
		{
			// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel.<CapturePreviousProfilePreviewAndApplySkins>d__31$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6004A76")]
		[Address(RVA = "0x5BD0940", Offset = "0x5BCF940", VA = "0x5BD0940", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel.<CapturePreviousProfilePreviewAndApplySkins>d__31$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6004A77")]
		[Address(RVA = "0x5BD0950", Offset = "0x5BCF950", VA = "0x5BD0950", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel.<CapturePreviousProfilePreviewAndApplySkins>d__31$$MoveNext): 18 lines keep C-only constructs
			HumanCustomSettings* targetAddress;
			byte bVar1;
			uint uVar2;
			CharacterEditorCostumePanel __this_00;
			ListSetting<T> obj;
			HumanCustomSettings pSVar5;
			Settings_SetSettingsContainer_HumanCustomSet__o pSVar6;
			IntSetting pSVar7;
			DummyHuman pCVar8;
			ColorSetting pSVar9;
			HumanSetup pCVar10;
			StringSetting pSVar11;
			ConfirmPopup pUVar12;
			DummyHuman pCVar13;
			bool bVar14;
			HumanCustomSet pSVar16;
			object pIVar17;
			List<object> __this_01;
			int index;
			DummyHuman* targetAddress_00;
			HumanCustomSet pSVar20;

			uVar2 = this.__1__state;
			if (3 < uVar2) {
				return false;
			}
			__this_00 = this.__4__this;
			switch(uVar2) {
			case 0:
				this.__1__state = -1;
				targetAddress = &this._settings_5__2;
				this._settings_5__2 = SettingsManager.HumanCustomSettings;
				pSVar5 = this._settings_5__2;
				if (((pSVar5 != null) &&(pSVar6 = pSVar5.CustomSets, pSVar6 != null)) &&(obj = pSVar6.Sets, obj != null)) {
					__this_01 = (List<object>)obj.GetItems();
					if (__this_01 != null) {
						if (0 < __this_01._size) {
							index = 0;
							do {
								pSVar16 = (HumanCustomSet)__this_01.get_Item(index);
								if (pSVar16 == null) goto label_05cd106e;
								bVar1 = (typeof(HumanCustomSet)._2).typeHierarchyDepth;
								if (((pSVar16.klass._2).typeHierarchyDepth < bVar1) ||((pSVar16.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(HumanCustomSet))) {
									pSVar20 = pSVar16;
									goto label_05cd1076;
								}
								pSVar11 = pSVar16.UniqueId;
								if (pSVar11 == null) goto label_05cd106e;
								bVar14 = (pSVar11._value == this.previousProfileId) ;
								if (bVar14) {
									pSVar5 = *targetAddress;
									if (((pSVar5 == null) ||(pSVar6 = pSVar5.CustomSets, pSVar6 == null)) ||(pSVar7 = pSVar6.SelectedSetIndex, pSVar7 == null)) goto label_05cd106e;
									this._currentSelectedIndex_5__3 = pSVar7._value;
									pSVar7.Value = index;
									pCVar13 = typeof(DummyHuman);
									pSVar20 = (HumanCustomSet)SceneLoader.CurrentGameManager;
									if (pSVar20 == null) goto label_05cd106e;
									bVar1 = (typeof(CharacterEditorGameManager)._2).typeHierarchyDepth;
									if (((pSVar20.klass._2).typeHierarchyDepth < bVar1) ||((pSVar20.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CharacterEditorGameManager))) goto label_05cd1076;
									pUVar12 = (ConfirmPopup)pSVar20.Preset;
									if (pUVar12 == null) {
										this._character_5__4 = null;
									}
									else {
										bVar1 = (typeof(DummyHuman)._2).typeHierarchyDepth;
										if (((pUVar12.klass._2).typeHierarchyDepth < bVar1) ||((pUVar12.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(DummyHuman))) {
		label_05cd1083: ;
											throw new InvalidCastException();
										}
										this._character_5__4 = (DummyHuman)pUVar12;
										if (((pUVar12.klass._2).typeHierarchyDepth < bVar1) ||((pUVar12.klass._2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass)pCVar13)) goto label_05cd1083;
									}
									targetAddress_00 = &this._character_5__4;
									pCVar8 = *targetAddress_00;
									if (((pCVar8 == null) ||(__this_00 == null)) ||(pSVar20 = (HumanCustomSet)__this_00._menu, pSVar20 == null)) goto label_05cd106e;
									bVar1 = (typeof(CharacterEditorHumanMenu)._2).typeHierarchyDepth;
									if (((pSVar20.klass._2).typeHierarchyDepth < bVar1) ||((pSVar20.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CharacterEditorHumanMenu))) goto label_05cd1076;
									pSVar9 = pSVar20.BootsColor;
									if ((pSVar9 != null) &&(pCVar10 = pCVar8.Setup, pCVar10 != null)) {
										pCVar10.Load(pSVar16, *(int)((long)&pSVar9.DefaultValue + 4), false);
										pIVar17 = (object)Util.WaitForFrames(3);
										this.__2__current = pIVar17;
										this.__1__state = 1;
										return true;
									}
									goto label_05cd106e;
								}
								index = index + 1;
							} while (index < __this_01._size);
						}
						if (this.shouldApplySkinPreview == false) {
							return false;
						}
						pSVar20 = (HumanCustomSet)SceneLoader.CurrentGameManager;
						if (pSVar20 != null) {
							bVar1 = (typeof(CharacterEditorGameManager)._2).typeHierarchyDepth;
							if (((pSVar20.klass._2).typeHierarchyDepth < bVar1) ||((pSVar20.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CharacterEditorGameManager))) {
		label_05cd1076: ;
								throw new InvalidCastException();
							}
							pUVar12 = (ConfirmPopup)pSVar20.Preset;
							if (pUVar12 != null) {
								bVar1 = (typeof(DummyHuman)._2).typeHierarchyDepth;
								if (((pUVar12.klass._2).typeHierarchyDepth < bVar1) ||((pUVar12.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(DummyHuman))) {
									throw new InvalidCastException();
								}
							}
							bVar14 = ((Object)pUVar12 != null);
							if (!bVar14) {
								return false;
							}
							if (__this_00 != null) {
								pIVar17 = (object)__this_00.ApplySkinPreviewAfterReset();
								this.__2__current = pIVar17;
								this.__1__state = 3;
								return true;
							}
						}
					}
				}
				break;
			case 1:
				this.__1__state = -1;
				CharacterPreviewGenerator.CaptureCurrentCharacterPreview(true);
				pSVar5 = this._settings_5__2;
				if (((pSVar5 != null) &&(pSVar6 = pSVar5.CustomSets, pSVar6 != null)) &&(pSVar7 = pSVar6.SelectedSetIndex, pSVar7 != null)) {
					pSVar7.Value = this._currentSelectedIndex_5__3;
					pSVar5 = this._settings_5__2;
					if ((pSVar5 != null) &&(pSVar6 = pSVar5.CustomSets, pSVar6 != null)) {
						pSVar16 = (HumanCustomSet)pSVar6.GetSelectedSet();
						if (pSVar16 != null) {
							bVar1 = (typeof(HumanCustomSet)._2).typeHierarchyDepth;
							if (((pSVar16.klass._2).typeHierarchyDepth < bVar1) ||((pSVar16.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(HumanCustomSet))) {
								throw new InvalidCastException();
							}
						}
						pCVar8 = this._character_5__4;
						if (((pCVar8 != null) &&(__this_00 != null)) &&(pSVar20 = (HumanCustomSet)__this_00._menu, pSVar20 != null)) {
							bVar1 = (typeof(CharacterEditorHumanMenu)._2).typeHierarchyDepth;
							if (((pSVar20.klass._2).typeHierarchyDepth < bVar1) ||((pSVar20.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CharacterEditorHumanMenu))) goto label_05cd1076;
							pSVar9 = pSVar20.BootsColor;
							if ((pSVar9 != null) &&(pCVar10 = pCVar8.Setup, pCVar10 != null)) {
								pCVar10.Load(pSVar16, *(int)((long)&pSVar9.DefaultValue + 4), false);
								pCVar8 = this._character_5__4;
								if (pCVar8 != null) {
									pCVar8.Idle();
									if (this.shouldApplySkinPreview != false) {
										pIVar17 = (object)__this_00.ApplySkinPreviewAfterReset();
										this.__2__current = pIVar17;
										this.__1__state = 2;
										return true;
									}
									goto label_05cd0cb0;
								}
							}
						}
					}
				}
				break;
			case 2:
				this.__1__state = -1;
		label_05cd0cb0: ;
				this._character_5__4 = null;
				return false;
			case 3:
				this.__1__state = -1;
				return false;
			}
		label_05cd106e: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x6004A79")]
		[Address(RVA = "0x5BD10B0", Offset = "0x5BD00B0", VA = "0x5BD10B0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel.<CapturePreviousProfilePreviewAndApplySkins>d__31$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_UI_CharacterEditorCostumePanel_CapturePreviousProfilePreviewAndApplySkins_d__31_System_Collectio);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x20007B8")]
	[CompilerGenerated]
	private sealed class _003CSaveQuitCaptureCoroutine_003Ed__38 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40026DE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40026DF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x17000CF4")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004A7E")]
			[Address(RVA = "0x5BD1230", Offset = "0x5BD0230", VA = "0x5BD1230", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel.<SaveQuitCaptureCoroutine>d__38$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000CF5")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004A80")]
			[Address(RVA = "0x5BD1280", Offset = "0x5BD0280", VA = "0x5BD1280", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel.<SaveQuitCaptureCoroutine>d__38$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6004A7B")]
		[Address(RVA = "0x5BD1100", Offset = "0x5BD0100", VA = "0x5BD1100")]
		[DebuggerHidden]
		public _003CSaveQuitCaptureCoroutine_003Ed__38(int _003C_003E1__state)
		{
			// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel.<SaveQuitCaptureCoroutine>d__38$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6004A7C")]
		[Address(RVA = "0x5BD1120", Offset = "0x5BD0120", VA = "0x5BD1120", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel.<SaveQuitCaptureCoroutine>d__38$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6004A7D")]
		[Address(RVA = "0x5BD1130", Offset = "0x5BD0130", VA = "0x5BD1130", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel.<SaveQuitCaptureCoroutine>d__38$$MoveNext): clean
			int iVar1;
			object pIVar3;

			iVar1 = this.__1__state;
			if (iVar1 == 0) {
				this.__1__state = -1;
				pIVar3 = (object)Util.WaitForFrames(3);
				this.__2__current = pIVar3;
				this.__1__state = 1;
			}
			else if (iVar1 == 1) {
				this.__1__state = -1;
				CharacterPreviewGenerator.CaptureCurrentCharacterPreview(true);
				CharacterPreviewGenerator.SaveCachedPreviewsToDisk();
				CharacterEditorSkinsPanel._persistentGlobalSkinPreview = false;
				CharacterEditorSkinsPanel._persistentCustomSkinPreview = false;
				SceneLoader.LoadScene(1);
			}
			return iVar1 == 0;
		}

		[Token(Token = "0x6004A7F")]
		[Address(RVA = "0x5BD1240", Offset = "0x5BD0240", VA = "0x5BD1240", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel.<SaveQuitCaptureCoroutine>d__38$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_UI_CharacterEditorCostumePanel_SaveQuitCaptureCoroutine_d__38_System_Collections_IEnumerator_Res);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x40026C0")]
	private const float QuitButtonWidth = 80f;

	[Token(Token = "0x40026C1")]
	private const float BottomButtonWidth = 100f;

	[Token(Token = "0x40026C2")]
	private const float SaveQuitButtonWidth = 120f;

	[Token(Token = "0x40026C3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private CharacterEditorMenu _menu;

	[Token(Token = "0x40026C4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private bool _shouldGeneratePreviewAfterRebuild;

	[Token(Token = "0x40026C5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private string _previousProfileId;

	[Token(Token = "0x40026C6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private bool _isRebuildingPanel;

	[Token(Token = "0x17000CE7")]
	protected override string Title
	{
		[Token(Token = "0x6004A29")]
		[Address(RVA = "0x5BCA710", Offset = "0x5BC9710", VA = "0x5BCA710", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel$$get_Title): clean
			String pSVar1;

			pSVar1 = UIManager.GetLocale("CharacterEditor", "Costume", "Title", "", "");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000CE8")]
	protected override float Width
	{
		[Token(Token = "0x6004A2A")]
		[Address(RVA = "0x5BCA7B0", Offset = "0x5BC97B0", VA = "0x5BCA7B0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel$$get_Width): clean
			return 380.0;
		}
	}

	[Token(Token = "0x17000CE9")]
	protected override float Height
	{
		[Token(Token = "0x6004A2B")]
		[Address(RVA = "0x5BCA7C0", Offset = "0x5BC97C0", VA = "0x5BCA7C0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel$$get_Height): clean
			return 1020.0;
		}
	}

	[Token(Token = "0x17000CEA")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004A2C")]
		[Address(RVA = "0x5BCA7D0", Offset = "0x5BC97D0", VA = "0x5BCA7D0", Slot = "11")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel$$get_VerticalSpacing): clean
			return 20.0;
		}
	}

	[Token(Token = "0x17000CEB")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004A2D")]
		[Address(RVA = "0x5BCA7E0", Offset = "0x5BC97E0", VA = "0x5BCA7E0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel$$get_HorizontalPadding): clean
			return 0x19;
		}
	}

	[Token(Token = "0x17000CEC")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004A2E")]
		[Address(RVA = "0x5BCA7F0", Offset = "0x5BC97F0", VA = "0x5BCA7F0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel$$get_VerticalPadding): clean
			return 0x19;
		}
	}

	[Token(Token = "0x17000CED")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004A2F")]
		[Address(RVA = "0x5BCA800", Offset = "0x5BC9800", VA = "0x5BCA800", Slot = "15")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel$$get_ScrollBar): clean
			return true;
		}
	}

	[Token(Token = "0x6004A30")]
	[Address(RVA = "0x5BCA810", Offset = "0x5BC9810", VA = "0x5BCA810")]
	public static bool GetPersistentGlobalPreview()
	{
		// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel$$GetPersistentGlobalPreview): clean
		return CharacterEditorSkinsPanel._persistentGlobalSkinPreview;
	}

	[Token(Token = "0x6004A31")]
	[Address(RVA = "0x5BCA850", Offset = "0x5BC9850", VA = "0x5BCA850")]
	public static bool GetPersistentCustomPreview()
	{
		// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel$$GetPersistentCustomPreview): clean
		return CharacterEditorSkinsPanel._persistentCustomSkinPreview;
	}

	[Token(Token = "0x6004A32")]
	[Address(RVA = "0x5BCA130", Offset = "0x5BC9130", VA = "0x5BCA130")]
	public static void ResetSkinPreviewToggles()
	{
		// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel$$ResetSkinPreviewToggles): clean
		CharacterEditorSkinsPanel.ResetSkinPreviewToggles();
		return;
	}

	[Token(Token = "0x6004A33")]
	[Address(RVA = "0x5BCA890", Offset = "0x5BC9890", VA = "0x5BCA890", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel$$Setup): 74 lines keep C-only constructs
		Transform* ppUVar1;
		byte bVar2;
		int iVar3;
		HumanCustomSettings pSVar4;
		Settings_SetSettingsContainer_HumanCustomSet__o pSVar5;
		StringSetting pSVar6;
		Transform pUVar7;
		BaseMenu pUVar8;
		IconPickPopup pUVar9;
		ColorSetting pSVar10;
		ColorPickPopup pUVar11;
		BoolSetting pSVar12;
		CharacterEditorMenu pUVar13;
		HumanCustomSet pSVar14;
		String subCategory;
		bool bVar15;
		CharacterEditorCostumePanel.c__DisplayClass24_0 __this_00;
		HumanCustomSet pSVar16;
		String pSVar17;
		MethodInfo __this_01;
		String pSVar18;
		UnityAction pUVar19;
		String[] pSVar20;
		Action<string> __this_02;
		String pSVar21;
		String[] pSVar22;
		IntSetting pSVar23;
		MethodInfo pMVar24;
		HumanCustomSet* targetAddress;
		CharacterEditorMenu pUVar25;
		CharacterEditorCostumePanel pUVar26;
		CharacterEditorCostumePanel pUVar27;
		int defaultValue;

		__this_00 = new CharacterEditorCostumePanel.c__DisplayClass24_0();
		if (__this_00 == null) goto label_05cccc1e;
		__this_00.__4__this = this;
		this.Setup(parent);
		if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
			pUVar25 = (CharacterEditorMenu)UIManager.CurrentMenu;
			if (pUVar25 != null) goto label_05ccad3e;
	label_05ccadb9: ;
			this._menu = null;
		}
		else {
			pUVar25 = (CharacterEditorMenu)UIManager.CurrentMenu;
			if (pUVar25 == null) goto label_05ccadb9;
	label_05ccad3e: ;
			pUVar13 = typeof(CharacterEditorMenu);
			bVar2 = (typeof(CharacterEditorMenu)._2).typeHierarchyDepth;
			if (((pUVar25.klass._2).typeHierarchyDepth < bVar2) ||((pUVar25.klass._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(CharacterEditorMenu) )) {
	label_05cccc30: ;
				throw new InvalidCastException();
			}
			this._menu = pUVar25;
			if (((pUVar25.klass._2).typeHierarchyDepth < bVar2) ||((pUVar25.klass._2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass)pUVar13)) goto label_05cccc30;
		}
		this._isRebuildingPanel = true;
		pSVar4 = SettingsManager.HumanCustomSettings;
		if (((pSVar4 == null) ||(pSVar5 = pSVar4.CustomSets, pSVar5 == null) ) || (pSVar16 = (HumanCustomSet)pSVar5.GetSelectedSet(), pSVar16 == null)) goto label_05cccc1e;
		bVar2 = (typeof(HumanCustomSet)._2).typeHierarchyDepth;
		if (((pSVar16.klass._2).typeHierarchyDepth < bVar2) ||((pSVar16.klass._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(HumanCustomSet)) ) goto label_05cccc28;
		pSVar6 = pSVar16.UniqueId;
		if (pSVar6 == null) goto label_05cccc1e;
		this._previousProfileId = pSVar6._value;
		pSVar17 = this.get_ThemePanel();
		__this_01 = new ElementStyle(0x18, 130.0, 20.0, pSVar17);
		subCategory = "Costume";
		pSVar17 = "CharacterEditor";
		pSVar4 = SettingsManager.HumanCustomSettings;
		pUVar7 = this.BottomBar;
		pSVar18 = UIManager.GetLocaleCommon("Quit");
		pUVar19 = new UnityAction((object)__this_00, (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__0);
		ElementFactory.CreateTextButton(pUVar7, (ElementStyle)__this_01, pSVar18, 80.0, pUVar19);
		pUVar7 = this.BottomBar;
		pSVar18 = UIManager.GetLocaleCommon("LoadPreset");
		pUVar19 = new UnityAction((object)__this_00, (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__1);
		ElementFactory.CreateTextButton(pUVar7, (ElementStyle)__this_01, pSVar18, 100.0, pUVar19);
		pUVar7 = this.BottomBar;
		pSVar18 = UIManager.GetLocale(pSVar17, subCategory, "SaveQuit", "", "");
		pUVar19 = new UnityAction((object)__this_00, (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__2);
		ElementFactory.CreateTextButton(pUVar7, (ElementStyle)__this_01, pSVar18, 120.0, pUVar19);
		if ((pSVar4 == null) ||(pSVar5 = pSVar4.CustomSets, pSVar5 == null)) goto label_05cccc1e;
		pSVar16 = (HumanCustomSet)pSVar5.GetSelectedSet();
		pSVar14 = typeof(HumanCustomSet);
		if (pSVar16 == null) {
			__this_00.set = null;
		}
		else {
			bVar2 = (typeof(HumanCustomSet)._2).typeHierarchyDepth;
			if (((pSVar16.klass._2).typeHierarchyDepth < bVar2) ||((pSVar16.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(HumanCustomSet))) {
	label_05cccc28: ;
				throw new InvalidCastException();
			}
			__this_00.set = pSVar16;
			if (((pSVar16.klass._2).typeHierarchyDepth < bVar2) ||((pSVar16.klass._2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass)pSVar14)) goto label_05cccc28;
		}
		targetAddress = &__this_00.set;
		pSVar5 = pSVar4.CustomSets;
		if (pSVar5 == null) goto label_05cccc1e;
		pUVar7 = this.SinglePanel;
		pSVar23 = pSVar5.SelectedSetIndex;
		pSVar18 = UIManager.GetLocale(pSVar17, subCategory, "CustomSet", "", "");
		pSVar5 = pSVar4.CustomSets;
		if (pSVar5 == null) goto label_05cccc1e;
		ppUVar1 = &this.SinglePanel;
		pSVar20 = pSVar5.GetSetNames();
		pUVar19 = new UnityAction((object)__this_00, (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__3);
		ElementFactory.CreateDropdownSetting(pUVar7, (ElementStyle)__this_01, (BaseSetting)pSVar23, pSVar18, pSVar20, "", 170.0, 40.0, 300.0, (Nullable<float>)0x0, pUVar19, null, null);
		pUVar7 = *ppUVar1;
		pSVar20 = (String[])new string[6];
		if (pSVar20 == null) goto label_05cccc1e;
		if ((int)pSVar20.Length == 0) goto label_05cccc23;
		pSVar20[0] = "Create";
		if ((pSVar20.Length & 0xfffffffe) == 0) goto label_05cccc23;
		pSVar20[1] = "Delete";
		if ((uint)pSVar20.Length < 3) goto label_05cccc23;
		pSVar20[2] = "Copy";
		if ((pSVar20.Length & 0xfffffffc) == 0) goto label_05cccc23;
		pSVar20[3] = "Rename";
		if ((uint)pSVar20.Length < 5) goto label_05cccc23;
		pSVar20[4] = "Import";
		if ((uint)pSVar20.Length < 6) goto label_05cccc23;
		pSVar20[5] = "Export";
		__this_02 = new Action<string>((object)this, (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_OnButtonClick);
		ElementFactory.CreateSetActionButtons(pUVar7, (ElementStyle)__this_01, pSVar20, __this_02, 36.0);
		this.CreateHorizontalDivider(this.SinglePanel, 1.0);
		if (*targetAddress == null) goto label_05cccc1e;
		pUVar7 = this.SinglePanel;
		pSVar23 = ((*targetAddress).fields).Sex;
		pSVar18 = UIManager.GetLocale(pSVar17, subCategory, "Sex", "", "");
		pSVar20 = (String[])new string[2];
		pSVar21 = UIManager.GetLocale(pSVar17, subCategory, "Male", "", "");
		if (pSVar20 == null) goto label_05cccc1e;
		if ((int)pSVar20.Length == 0) goto label_05cccc23;
		pSVar20[0] = pSVar21;
		pSVar21 = UIManager.GetLocale(pSVar17, subCategory, "Female", "", "");
		if ((pSVar20.Length & 0xfffffffe) == 0) goto label_05cccc23;
		pSVar20[1] = pSVar21;
		pUVar19 = new UnityAction((object)__this_00, (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__4);
		ElementFactory.CreateDropdownSetting(pUVar7, (ElementStyle)__this_01, (BaseSetting)pSVar23, pSVar18, pSVar20, "", 170.0, 40.0, 300.0, (Nullable<float>)0x0, pUVar19, null, null);
		pSVar20 = typeof(HumanSetup).GetOptions("Eye", HumanSetup.EyeCount, false);
		if (*targetAddress == null) goto label_05cccc1e;
		pUVar27 = (CharacterEditorCostumePanel)*ppUVar1;
		pSVar23 = ((*targetAddress).fields).Eye;
		pUVar26 = (CharacterEditorCostumePanel)pSVar17;
		pSVar18 = UIManager.GetLocale(pSVar17, subCategory, "Eye", "", "");
		pSVar22 = pUVar26.GetIcons(pSVar20);
		pUVar8 = UIManager.CurrentMenu;
		if (pUVar8 == null) goto label_05cccc1e;
		pUVar9 = pUVar8.IconPickPopup;
		pUVar19 = new UnityAction((object)__this_00, (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__5);
		ElementFactory.CreateIconPickSetting((Transform)pUVar27, (ElementStyle)__this_01, (BaseSetting)pSVar23, pSVar18, pSVar20, pSVar22, pUVar9, "", null, 170.0, 40.0, pUVar19, null, null);
		pSVar20 = pUVar27.GetOptions("Face", HumanSetup.FaceCount, true);
		pSVar16 = __this_00.set;
		if (pSVar16 == null) goto label_05cccc1e;
		pUVar27 = (CharacterEditorCostumePanel)*ppUVar1;
		pSVar6 = pSVar16.Face;
		pUVar26 = (CharacterEditorCostumePanel)pSVar17;
		pSVar18 = UIManager.GetLocale(pSVar17, subCategory, "Face", "", "");
		pSVar22 = pUVar26.GetIcons(pSVar20);
		pUVar8 = UIManager.CurrentMenu;
		if (pUVar8 == null) goto label_05cccc1e;
		pUVar9 = pUVar8.IconPickPopup;
		pUVar19 = new UnityAction((object)__this_00, (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__6);
		ElementFactory.CreateIconPickSetting((Transform)pUVar27, (ElementStyle)__this_01, (BaseSetting)pSVar6, pSVar18, pSVar20, pSVar22, pUVar9, "", null, 170.0, 40.0, pUVar19, null, null);
		pSVar20 = pUVar27.GetOptions("Glass", HumanSetup.GlassCount, true);
		pSVar16 = __this_00.set;
		if (pSVar16 == null) goto label_05cccc1e;
		pUVar27 = (CharacterEditorCostumePanel)*ppUVar1;
		pSVar6 = pSVar16.Glass;
		pUVar26 = (CharacterEditorCostumePanel)pSVar17;
		pSVar18 = UIManager.GetLocale(pSVar17, subCategory, "Glass", "", "");
		pSVar22 = pUVar26.GetIcons(pSVar20);
		pUVar8 = UIManager.CurrentMenu;
		if (pUVar8 == null) goto label_05cccc1e;
		pUVar9 = pUVar8.IconPickPopup;
		pUVar19 = new UnityAction((object)__this_00, (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__7);
		ElementFactory.CreateIconPickSetting((Transform)pUVar27, (ElementStyle)__this_01, (BaseSetting)pSVar6, pSVar18, pSVar20, pSVar22, pUVar9, "", null, 170.0, 40.0, pUVar19, null, null);
		pSVar20 = pUVar27.GetHairOptions();
		pSVar16 = __this_00.set;
		if (pSVar16 == null) goto label_05cccc1e;
		pUVar7 = *ppUVar1;
		pSVar6 = pSVar16.Hair;
		pUVar27 = (CharacterEditorCostumePanel)pSVar17;
		pSVar18 = UIManager.GetLocale(pSVar17, subCategory, "Hair", "", "");
		pSVar22 = pUVar27.GetIcons(pSVar20);
		pUVar8 = UIManager.CurrentMenu;
		if (pUVar8 == null) goto label_05cccc1e;
		pUVar9 = pUVar8.IconPickPopup;
		pUVar19 = new UnityAction((object)__this_00, (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__8);
		ElementFactory.CreateIconPickSetting(pUVar7, (ElementStyle)__this_01, (BaseSetting)pSVar6, pSVar18, pSVar20, pSVar22, pUVar9, "", null, 170.0, 40.0, pUVar19, null, null);
		pUVar27 = null;
		bVar15 = PatreonHelper.LocalPlayerHasCharacterEffectAccess();
		if (bVar15) {
			if (*targetAddress == null) goto label_05cccc1e;
			pUVar7 = *ppUVar1;
			pSVar6 = ((*targetAddress).fields).HairEffect;
			pSVar18 = UIManager.GetLocale(pSVar17, subCategory, "HairEffect", "", "");
			pSVar20 = CharacterEffectPresets.Options;
			pUVar19 = new UnityAction((object)__this_00, (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__9);
			ElementFactory.CreateDropdownSetting(pUVar7, (ElementStyle)__this_01, (BaseSetting)pSVar6, pSVar18, pSVar20, "", 170.0, 40.0, 300.0, (Nullable<float>)0x0, pUVar19, null, null);
			pSVar16 = __this_00.set;
			if (pSVar16 == null) goto label_05cccc1e;
			pUVar27 = (CharacterEditorCostumePanel)*ppUVar1;
			pSVar10 = pSVar16.HairEffectColor;
			pSVar18 = UIManager.GetLocale(pSVar17, subCategory, "HairEffectColor", "", "");
			pUVar8 = UIManager.CurrentMenu;
			if (pUVar8 == null) goto label_05cccc1e;
			pUVar11 = pUVar8.ColorPickPopup;
			pUVar19 = new UnityAction((object)__this_00, (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__10);
			ElementFactory.CreateColorSetting((Transform)pUVar27, (ElementStyle)__this_01, (BaseSetting)pSVar10, pSVar18, pUVar11, "", 90.0, 30.0, pUVar19);
		}
		pSVar20 = pUVar27.GetCostumeOptions(*targetAddress);
		if (*targetAddress == null) goto label_05cccc1e;
		pUVar7 = *ppUVar1;
		pSVar23 = ((*targetAddress).fields).Costume;
		pUVar27 = (CharacterEditorCostumePanel)pSVar17;
		pSVar18 = UIManager.GetLocale(pSVar17, subCategory, "Costume", "", "");
		pSVar22 = pUVar27.GetIcons(pSVar20);
		pUVar8 = UIManager.CurrentMenu;
		if (pUVar8 == null) goto label_05cccc1e;
		pUVar9 = pUVar8.IconPickPopup;
		pUVar19 = new UnityAction((object)__this_00, (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__11);
		ElementFactory.CreateIconPickSetting(pUVar7, (ElementStyle)__this_01, (BaseSetting)pSVar23, pSVar18, pSVar20, pSVar22, pUVar9, "", null, 170.0, 40.0, pUVar19, null, null);
		pSVar16 = __this_00.set;
		if (pSVar16 == null) goto label_05cccc1e;
		pUVar7 = *ppUVar1;
		pSVar23 = pSVar16.Boots;
		pUVar27 = (CharacterEditorCostumePanel)pSVar17;
		pMVar24 = (MethodInfo *)"";
		pSVar18 = UIManager.GetLocale(pSVar17, subCategory, "Boots", "", "");
		pSVar20 = pUVar27.GetOptions("Boots", 2, false);
		pUVar19 = new UnityAction((object)__this_00, (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__12);
		ElementFactory.CreateDropdownSetting(pUVar7, (ElementStyle)__this_01, (BaseSetting)pSVar23, pSVar18, pSVar20, "", 170.0, 40.0, 300.0, (Nullable<float>)0x0, pUVar19, null, null);
		if (bVar15) {
			if (*targetAddress == null) goto label_05cccc1e;
			pUVar7 = *ppUVar1;
			pSVar6 = ((*targetAddress).fields).BladeEffect;
			pSVar18 = UIManager.GetLocale(pSVar17, subCategory, "BladeEffect", "", "");
			pSVar20 = CharacterEffectPresets.Options;
			pUVar19 = new UnityAction((object)__this_00, (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__13);
			ElementFactory.CreateDropdownSetting(pUVar7, (ElementStyle)__this_01, (BaseSetting)pSVar6, pSVar18, pSVar20, "", 170.0, 40.0, 300.0, (Nullable<float>)0x0, pUVar19, null, null);
			pSVar16 = __this_00.set;
			if (pSVar16 == null) goto label_05cccc1e;
			pUVar7 = *ppUVar1;
			pSVar10 = pSVar16.BladeEffectColor;
			pSVar18 = UIManager.GetLocale(pSVar17, subCategory, "BladeEffectColor", "", "");
			pUVar8 = UIManager.CurrentMenu;
			if (pUVar8 == null) goto label_05cccc1e;
			pUVar11 = pUVar8.ColorPickPopup;
			pUVar19 = new UnityAction((object)__this_00, (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__14);
			ElementFactory.CreateColorSetting(pUVar7, (ElementStyle)__this_01, (BaseSetting)pSVar10, pSVar18, pUVar11, "", 90.0, 30.0, pUVar19);
		}
		pSVar16 = *targetAddress;
		if ((pSVar16 == null) ||(pSVar23 = pSVar16.Cape, pSVar23 == null)) goto label_05cccc1e;
		iVar3 = pSVar23._value;
		if (iVar3 == 2) {
			pSVar12 = pSVar16.HoodUp;
			if (pSVar12 == null) goto label_05cccc1e;
			defaultValue = 3;
			if (pSVar12._value == false) goto label_05ccbf65;
		}
		else {
	label_05ccbf65: ;
			defaultValue = iVar3;
		}
		pSVar23 = new IntSetting(defaultValue, -0x80000000, 0x7fffffff);
		__this_00.capeOption = pSVar23;
		pUVar7 = *ppUVar1;
		pSVar23 = __this_00.capeOption;
		pSVar18 = UIManager.GetLocale(pSVar17, subCategory, "Cape", "", "");
		pSVar20 = (String[])new string[4];
		pSVar21 = UIManager.GetLocale(pSVar17, subCategory, "NoCape", "", "");
		if (pSVar20 == null) {
	label_05cccc1e: ;
			throw new NullReferenceException();
		}
		if ((int)pSVar20.Length != 0) {
			pSVar20[0] = pSVar21;
			pSVar21 = UIManager.GetLocale(pSVar17, subCategory, "Cape", "", "");
			if ((pSVar20.Length & 0xfffffffe) != 0) {
				pSVar20[1] = pSVar21;
				pSVar21 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "Cloak", "", "");
				if (2 < (uint)pSVar20.Length) {
					pSVar20[2] = pSVar21;
					pSVar21 = UIManager.GetLocale(pSVar17, subCategory, "Hood", "", "");
					if ((pSVar20.Length & 0xfffffffc) != 0) {
						pSVar20[3] = pSVar21;
						pUVar19 = new UnityAction((object)__this_00, (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__15);
						ElementFactory.CreateDropdownSetting(pUVar7, (ElementStyle)__this_01, (BaseSetting)pSVar23, pSVar18, pSVar20, "", 170.0, 40.0, 300.0, (Nullable<float>)0x0, pUVar19, null, null);
						pSVar16 = __this_00.set;
						if (pSVar16 != null) {
							pUVar7 = *ppUVar1;
							pSVar23 = pSVar16.Logo;
							pUVar27 = (CharacterEditorCostumePanel)pSVar17;
							pMVar24 = (MethodInfo *)"";
							pSVar18 = UIManager.GetLocale(pSVar17, subCategory, "Logo", "", "");
							pSVar20 = pUVar27.GetOptions("Logo", 4, false);
							pUVar19 = new UnityAction((object)__this_00, (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__16);
							ElementFactory.CreateDropdownSetting(pUVar7, (ElementStyle)__this_01, (BaseSetting)pSVar23, pSVar18, pSVar20, "", 170.0, 40.0, 300.0, (Nullable<float>)0x0, pUVar19, null, null);
							pSVar20 = typeof(HumanSetup).GetOptions("Hat", HumanSetup.HatCount, true);
							if (*targetAddress != null) {
								pUVar27 = (CharacterEditorCostumePanel)*ppUVar1;
								pSVar6 = ((*targetAddress).fields).Hat;
								pUVar26 = (CharacterEditorCostumePanel)pSVar17;
								pSVar18 = UIManager.GetLocale(pSVar17, subCategory, "Hat", "", "");
								pSVar22 = pUVar26.GetIcons(pSVar20);
								pUVar8 = UIManager.CurrentMenu;
								if (pUVar8 != null) {
									pUVar9 = pUVar8.IconPickPopup;
									pUVar19 = new UnityAction((object)__this_00, (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__17);
									ElementFactory.CreateIconPickSetting((Transform)pUVar27, (ElementStyle)__this_01, (BaseSetting)pSVar6, pSVar18, pSVar20, pSVar22, pUVar9, "", null, 170.0, 40.0, pUVar19, null, null);
									pSVar20 = pUVar27.GetOptions("Head", HumanSetup.HeadCount, true);
									pSVar16 = __this_00.set;
									if (pSVar16 != null) {
										pUVar27 = (CharacterEditorCostumePanel)*ppUVar1;
										pSVar6 = pSVar16.Head;
										pUVar26 = (CharacterEditorCostumePanel)pSVar17;
										pSVar18 = UIManager.GetLocale(pSVar17, subCategory, "Head", "", "");
										pSVar22 = pUVar26.GetIcons(pSVar20);
										pUVar8 = UIManager.CurrentMenu;
										if (pUVar8 != null) {
											pUVar9 = pUVar8.IconPickPopup;
											pUVar19 = new UnityAction((object)__this_00, (intptr_t) MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__18);
											ElementFactory.CreateIconPickSetting((Transform)pUVar27, (ElementStyle)__this_01, (BaseSetting)pSVar6, pSVar18, pSVar20, pSVar22, pUVar9, "", null, 170.0, 40.0, pUVar19, null, null);
											pSVar20 = pUVar27.GetOptions("Back", HumanSetup.BackCount, true);
											pSVar16 = __this_00.set;
											if (pSVar16 != null) {
												pUVar7 = *ppUVar1;
												pSVar6 = pSVar16.Back;
												pUVar27 = (CharacterEditorCostumePanel)pSVar17;
												pSVar18 = UIManager.GetLocale(pSVar17, subCategory, "Back", "", "");
												pSVar22 = pUVar27.GetIcons(pSVar20);
												pUVar8 = UIManager.CurrentMenu;
												if (pUVar8 != null) {
													pUVar9 = pUVar8.IconPickPopup;
													pUVar19 = new UnityAction((object)__this_00, (intptr_t) MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__19);
													ElementFactory.CreateIconPickSetting(pUVar7, (ElementStyle)__this_01, (BaseSetting)pSVar6, pSVar18, pSVar20, pSVar22, pUVar9, "", null, 170.0, 40.0, pUVar19, null, null);
													pSVar16 = __this_00.set;
													if (pSVar16 != null) {
														pUVar7 = *ppUVar1;
														pSVar10 = pSVar16.SkinColor;
														pSVar18 = UIManager.GetLocale(pSVar17, subCategory, "SkinColor", "", "");
														pUVar8 = UIManager.CurrentMenu;
														if (pUVar8 != null) {
															pUVar11 = pUVar8.ColorPickPopup;
															pUVar19 = new UnityAction((object)__this_00, (intptr_t) MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__20);
															ElementFactory.CreateColorSetting(pUVar7, (ElementStyle)__this_01, (BaseSetting)pSVar10, pSVar18, pUVar11, "", 90.0, 30.0, pUVar19);
															pSVar16 = __this_00.set;
															if (pSVar16 != null) {
																pUVar7 = *ppUVar1;
																pSVar10 = pSVar16.HairColor;
																pSVar18 = UIManager.GetLocale(pSVar17, subCategory, "HairColor", "", "");
																pUVar8 = UIManager.CurrentMenu;
																if (pUVar8 != null) {
																	pUVar11 = pUVar8.ColorPickPopup;
																	pUVar19 = new UnityAction((object)__this_00, (intptr_t) MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__21);
																	ElementFactory.CreateColorSetting(pUVar7, (ElementStyle)__this_01, (BaseSetting)pSVar10, pSVar18, pUVar11, "", 90.0, 30.0, pUVar19);
																	pSVar16 = __this_00.set;
																	if (pSVar16 != null) {
																		pUVar7 = *ppUVar1;
																		pSVar10 = pSVar16.ShirtColor;
																		pSVar18 = UIManager.GetLocale(pSVar17, subCategory, "ShirtColor", "", "");
																		pUVar8 = UIManager.CurrentMenu;
																		if (pUVar8 != null) {
																			pUVar11 = pUVar8.ColorPickPopup;
																			pUVar19 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																			pUVar19 = new UnityAction((object)__this_00, (intptr_t) MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__22);
																			ElementFactory.CreateColorSetting(pUVar7, (ElementStyle)__this_01, (BaseSetting)pSVar10, pSVar18, pUVar11, "", 90.0, 30.0, pUVar19);
																			pSVar16 = __this_00.set;
																			if (pSVar16 != null) {
																				pUVar7 = *ppUVar1;
																				pSVar10 = pSVar16.StrapsColor;
																				pSVar18 = UIManager.GetLocale(pSVar17, subCategory, "StrapsColor", "", "");
																				pUVar8 = UIManager.CurrentMenu;
																				if (pUVar8 != null) {
																					pUVar11 = pUVar8.ColorPickPopup;
																					pUVar19 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																					pUVar19 = new UnityAction((object)__this_00, (intptr_t) MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__23);
																					ElementFactory.CreateColorSetting(pUVar7, (ElementStyle)__this_01, (BaseSetting)pSVar10, pSVar18, pUVar11, "", 90.0, 30.0, pUVar19);
																					pSVar16 = __this_00.set;
																					if (pSVar16 != null) {
																						pUVar7 = *ppUVar1;
																						pSVar10 = pSVar16.PantsColor;
																						pSVar18 = UIManager.GetLocale(pSVar17, subCategory, "PantsColor", "", "");
																						pUVar8 = UIManager.CurrentMenu;
																						if (pUVar8 != null) {
																							pUVar11 = pUVar8.ColorPickPopup;
																							pUVar19 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																							pUVar19 = new UnityAction((object)__this_00, (intptr_t) MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__24);
																							ElementFactory.CreateColorSetting(pUVar7, (ElementStyle)__this_01, (BaseSetting)pSVar10, pSVar18, pUVar11, "", 90.0, 30.0, pUVar19);
																							pSVar16 = __this_00.set;
																							if (pSVar16 != null) {
																								pUVar7 = *ppUVar1;
																								pSVar10 = pSVar16.JacketColor;
																								pSVar18 = UIManager.GetLocale(pSVar17, subCategory, "JacketColor", "", "");
																								pUVar8 = UIManager.CurrentMenu;
																								if (pUVar8 != null) {
																									pUVar11 = pUVar8.ColorPickPopup;
																									pUVar19 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																									pUVar19 = new UnityAction((object)__this_00, (intptr_t) MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__25);
																									ElementFactory.CreateColorSetting(pUVar7, (ElementStyle)__this_01, (BaseSetting)pSVar10, pSVar18, pUVar11, "", 90.0, 30.0, pUVar19);
																									pSVar16 = __this_00.set;
																									if (pSVar16 != null) {
																										pUVar7 = *ppUVar1;
																										pSVar10 = pSVar16.BootsColor;
																										pSVar17 = UIManager.GetLocale(pSVar17, subCategory, "BootsColor", "", "");
																										pUVar8 = UIManager.CurrentMenu;
																										if (pUVar8 != null) {
																											pUVar11 = pUVar8.ColorPickPopup;
																											pUVar19 = il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																											pUVar19 = new UnityAction((object)__this_00, (intptr_t) MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass24_0_Setup_b__26);
																											ElementFactory.CreateColorSetting(pUVar7, (ElementStyle)__this_01, (BaseSetting)pSVar10, pSVar17, pUVar11, "", 90.0, 30.0, pUVar19);
																											this._isRebuildingPanel = false;
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
						}
						goto label_05cccc1e;
					}
				}
			}
		}
	label_05cccc23: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6004A34")]
	[Address(RVA = "0x5BCCC40", Offset = "0x5BCBC40", VA = "0x5BCCC40")]
	private string[] GetOptions(string prefix, int options, bool includeNone = false)
	{
		// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel$$GetOptions): 4 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<string> __this_00;
		String pSVar4;
		String[] pSVar5;
		int local_2c;

		__this_00 = new List<string>();
		if (includeNone) {
			pSVar4 = String.Concat(prefix, "None");
			if (__this_00 == null) goto label_05ccce15;
			piVar1 = &__this_00._version;
			*piVar1 = *piVar1 + 1;
			pSVar5 = __this_00._items;
			if (pSVar5 == null) goto label_05ccce15;
			uVar2 = __this_00._size;
			if (uVar2 < (uint)pSVar5.Length) {
				__this_00._size = uVar2 + 1;
				pSVar5[(int)uVar2] = pSVar4;
			}
			else {
				__this_00.AddWithResize((object)pSVar4);
			}
		}
		if (options < 1) {
			local_2c = 0;
			if (__this_00 == null) {
	label_05ccce15: ;
				throw new NullReferenceException();
			}
		}
		else {
			local_2c = 0;
			if (__this_00 == null) {
				pSVar4 = local_2c.ToString();
				String.Concat(prefix, pSVar4);
				throw new NullReferenceException();
			}
			do {
				pSVar4 = local_2c.ToString();
				pSVar4 = String.Concat(prefix, pSVar4);
				piVar1 = &__this_00._version;
				*piVar1 = *piVar1 + 1;
				pSVar5 = __this_00._items;
				if (pSVar5 == null) goto label_05ccce15;
				uVar2 = __this_00._size;
				if (uVar2 < (uint)pSVar5.Length) {
					__this_00._size = uVar2 + 1;
					pSVar5[(int)uVar2] = pSVar4;
				}
				else {
					__this_00.AddWithResize((object)pSVar4);
				}
				local_2c = local_2c + 1;
			} while (local_2c < options);
		}
		pSVar5 = (String[])__this_00.ToArray();
		return pSVar5;
	}

	[Token(Token = "0x6004A35")]
	[Address(RVA = "0x5BCD030", Offset = "0x5BCC030", VA = "0x5BCD030")]
	private string[] GetHairOptions()
	{
		// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel$$GetHairOptions): 14 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		ulong in_RAX;
		List<string> __this_00;
		String pSVar4;
		String[] pSVar5;
		String* ppSVar6;
		int iVar7;
		ulong local_38;

		local_38._4_4_ = (uint)((ulong)in_RAX >> 0x20);
		local_38 = (ulong)local_38._4_4_ << 0x20;
		__this_00 = new List<string>();
		if (__this_00 == null) {
			local_38 = local_38 & 0xffffffff;
			if (HumanSetup.HairMCount < 1) {
				local_38 = local_38 & 0xffffffff00000000;
				if (HumanSetup.HairFCount < 1) goto label_05ccd2ed;
				pSVar4 = local_38.ToString();
				ppSVar6 = &"HairF";
			}
			else {
				pSVar4 = (((long)&local_38 + 4)).ToString();
				ppSVar6 = &"HairM";
			}
			String.Concat(*ppSVar6, pSVar4);
		}
		else {
			iVar7 = 0;
			while(true) {
				local_38 = CONCAT44(iVar7, (int32_t)local_38);
				if (HumanSetup.HairMCount <= iVar7) {
					iVar7 = 0;
					while(true) {
						local_38 = CONCAT44(local_38._4_4_, iVar7);
						if (HumanSetup.HairFCount <= iVar7) {
							pSVar5 = (String[])__this_00.ToArray();
							return pSVar5;
						}
						pSVar4 = local_38.ToString();
						pSVar4 = String.Concat("HairF", pSVar4);
						piVar1 = &__this_00._version;
						*piVar1 = *piVar1 + 1;
						pSVar5 = __this_00._items;
						if (pSVar5 == null) break;
						uVar2 = __this_00._size;
						if (uVar2 < (uint)pSVar5.Length) {
							__this_00._size = uVar2 + 1;
							pSVar5[(int)uVar2] = pSVar4;
						}
						else {
							__this_00.AddWithResize((object)pSVar4);
						}
						iVar7 = (int32_t)local_38 + 1;
					}
					break;
				}
				pSVar4 = (((long)&local_38 + 4)).ToString();
				pSVar4 = String.Concat("HairM", pSVar4);
				piVar1 = &__this_00._version;
				*piVar1 = *piVar1 + 1;
				pSVar5 = __this_00._items;
				if (pSVar5 == null) break;
				uVar2 = __this_00._size;
				if (uVar2 < (uint)pSVar5.Length) {
					__this_00._size = uVar2 + 1;
					pSVar5[(int)uVar2] = pSVar4;
				}
				else {
					__this_00.AddWithResize((object)pSVar4);
				}
				iVar7 = local_38._4_4_ + 1;
			}
		}
	label_05ccd2ed: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004A36")]
	[Address(RVA = "0x5BCD300", Offset = "0x5BCC300", VA = "0x5BCD300")]
	private string[] GetCostumeOptions(HumanCustomSet set)
	{
		// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel$$GetCostumeOptions): 11 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		IntSetting pSVar3;
		List<string> __this_00;
		String pSVar5;
		String[] pSVar6;
		String* ppSVar7;
		int iVar8;
		ulong local_38;

		local_38 = 0;
		if ((set == null) ||(pSVar3 = set.Sex, pSVar3 == null)) goto label_05ccd609;
		iVar8 = pSVar3._value;
		__this_00 = new List<string>();
		if (iVar8 == 0) {
			if (__this_00 != null) {
				iVar8 = 0;
				while(true) {
					local_38 = CONCAT44(iVar8, (int)local_38);
					if (HumanSetup.CostumeMCount <= iVar8) goto label_05ccd556;
					pSVar5 = (((long)&local_38 + 4)).ToString();
					pSVar5 = String.Concat("CostumeM", pSVar5);
					piVar1 = &__this_00._version;
					*piVar1 = *piVar1 + 1;
					pSVar6 = __this_00._items;
					if (pSVar6 == null) break;
					uVar2 = __this_00._size;
					if (uVar2 < (uint)pSVar6.Length) {
						__this_00._size = uVar2 + 1;
						pSVar6[(int)uVar2] = pSVar5;
					}
					else {
						__this_00.AddWithResize((object)pSVar5);
					}
					iVar8 = local_38._4_4_ + 1;
				}
				goto label_05ccd609;
			}
			local_38 = local_38 & 0xffffffff;
			if (HumanSetup.CostumeMCount < 1) goto label_05ccd609;
			pSVar5 = (((long)&local_38 + 4)).ToString();
			ppSVar7 = &"CostumeM";
		}
		else {
			if (__this_00 != null) {
				iVar8 = 0;
				do {
					local_38 = CONCAT44(local_38._4_4_, iVar8);
					if (HumanSetup.CostumeFCount <= iVar8) {
	label_05ccd556: ;
						pSVar6 = (String[])__this_00.ToArray() ;
						return pSVar6;
					}
					pSVar5 = local_38.ToString();
					pSVar5 = String.Concat("CostumeF", pSVar5);
					piVar1 = &__this_00._version;
					*piVar1 = *piVar1 + 1;
					pSVar6 = __this_00._items;
					if (pSVar6 == null) goto label_05ccd609;
					uVar2 = __this_00._size;
					if (uVar2 < (uint)pSVar6.Length) {
						__this_00._size = uVar2 + 1;
						pSVar6[(int)uVar2] = pSVar5;
					}
					else {
						__this_00.AddWithResize((object)pSVar5);
					}
					iVar8 = (int)local_38 + 1;
				} while(true);
			}
			local_38 = local_38 & 0xffffffff00000000;
			if (HumanSetup.CostumeFCount < 1) goto label_05ccd609;
			pSVar5 = local_38.ToString();
			ppSVar7 = &"CostumeF";
		}
		String.Concat(*ppSVar7, pSVar5);
	label_05ccd609: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004A37")]
	[Address(RVA = "0x5BCCE40", Offset = "0x5BCBE40", VA = "0x5BCCE40")]
	private string[] GetIcons(string[] options)
	{
		// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel$$GetIcons): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		int iVar4;
		List<string> __this_00;
		ulong uVar5;
		String pSVar6;
		String[] pSVar7;
		ulong uVar8;

		__this_00 = new List<string>();
		if (options != null) {
			iVar4 = (int)options.Length;
			if (__this_00 != null) {
				if (0 < iVar4) {
					uVar5 = options.Length & 0xffffffff;
					uVar8 = 0;
					do {
						if (uVar5 <= uVar8) {
							throw new IndexOutOfRangeException();
						}
						pSVar6 = options[uVar8];
						pSVar6 = String.Concat(ResourcePaths.Characters, "/Human/Previews/", pSVar6);
						piVar1 = &__this_00._version;
						*piVar1 = *piVar1 + 1;
						pSVar7 = __this_00._items;
						if (pSVar7 == null) goto label_05ccd01e;
						uVar2 = __this_00._size;
						if (uVar2 < (uint)pSVar7.Length) {
							__this_00._size = uVar2 + 1;
							pSVar7[(int)uVar2] = pSVar6;
						}
						else {
							__this_00.AddWithResize((object)pSVar6);
						}
						uVar8 = uVar8 + 1;
						uVar2 = (uint)options.Length;
						uVar5 = (ulong)uVar2;
					} while ((long)uVar8 < (long)(int)uVar2);
				}
				pSVar7 = (String[])__this_00.ToArray();
				return pSVar7;
			}
			if (0 < iVar4) {
				pSVar6 = options[0];
				String.Concat(ResourcePaths.Characters, "/Human/Previews/", pSVar6);
			}
		}
	label_05ccd01e: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004A38")]
	[Address(RVA = "0x5BCD610", Offset = "0x5BCC610", VA = "0x5BCD610")]
	private void OnSexChanged()
	{
		// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel$$OnSexChanged): 4 lines keep C-only constructs
		byte bVar1;
		sbyte cVar2;
		HumanCustomSettings pSVar3;
		Settings_SetSettingsContainer_HumanCustomSet__o __this_00;
		Dictionary<string, BaseSetting> __this_01;
		HashSet<string> __this_02;
		CharacterEditorMenu pUVar4;
		CharacterEditorGameManager pGVar5;
		DummyHuman __this_03;
		bool bVar6;
		BaseSetSetting pSVar7;
		String* ppSVar8;
		CharacterEditorCostumePanel.d__32<ApplySkinPreviewAfterReset> __this_04;

		pSVar3 = SettingsManager.HumanCustomSettings;
		if (((pSVar3 != null) &&(__this_00 = pSVar3.CustomSets, __this_00 != null)) &&(pSVar7 = __this_00.GetSelectedSet(), pSVar7 != null)) {
			bVar1 = (typeof(HumanCustomSet)._2).typeHierarchyDepth;
			if (((pSVar7.klass._2).typeHierarchyDepth < bVar1) ||((pSVar7.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(HumanCustomSet) )) {
				throw new InvalidCastException();
			}
			if ((*(ulong)((sbyte)pSVar7 + 0x48)) != null) {
				__this_01 = (*(ulong)((sbyte)pSVar7 + 0x68));
				if (*(int)((long)&(((*(Il2CppClass*)((sbyte)pSVar7 + 0x48)))._1).namespaze + 4) == 0) {
					if (__this_01 == null) goto label_05ccd8df;
					ppSVar8 = &"HairM0";
				}
				else {
					if (__this_01 == null) goto label_05ccd8df;
					ppSVar8 = &"HairF0";
				}
				__this_01.Value = (object)*ppSVar8;
				__this_02 = (*(ulong)((sbyte)pSVar7 + 0x70));
				if (__this_02 != null) {
					__this_02.Value = 0;
					pUVar4 = this._menu;
					if (pUVar4 != null) {
						pUVar4.RebuildPanels(true);
						pUVar4 = this._menu;
						if (pUVar4 != null) {
							pUVar4.ResetCharacter(true);
							if (CharacterEditorSkinsPanel._persistentGlobalSkinPreview == false) {
								if (Il2CppMethodInitialized_07547b85 == false) {
									Il2CppMethodInitialized_07547b85 = true;
									cVar2 = CharacterEditorSkinsPanel._persistentCustomSkinPreview;
								}
								else {
									cVar2 = CharacterEditorSkinsPanel._persistentCustomSkinPreview;
								}
								if (cVar2 == false) {
									return;
								}
							}
							pUVar4 = this._menu;
							if ((pUVar4 != null) &&(pGVar5 = pUVar4._gameManager, pGVar5 != null)) {
								__this_03 = pGVar5.Human;
								bVar6 = ((Object)__this_03 != null);
								if (bVar6) {
									if (__this_03 == null) goto label_05ccd8df;
									__this_03.LoadSkin();
								}
								__this_04 = il2cpp_codegen_object_new((Il2CppClass)typeof(CharacterEditorCostumePanel.d__32<ApplySkinPreviewAfterReset>)) ;
								__this_04 = new CharacterEditorCostumePanel.d__32<ApplySkinPreviewAfterReset>(0);
								this.StartCoroutine((IEnumerator)__this_04);
								return;
							}
						}
					}
				}
			}
		}
	label_05ccd8df: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004A39")]
	[Address(RVA = "0x5BCD930", Offset = "0x5BCC930", VA = "0x5BCD930")]
	private void OnCustomSetSelected()
	{
		// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel$$OnCustomSetSelected): 16 lines keep C-only constructs
		String* targetAddress;
		byte bVar1;
		uint uVar2;
		HumanCustomSettings pSVar3;
		Settings_SetSettingsContainer_HumanCustomSet__o __this_00;
		StringSetting pSVar4;
		String b;
		CharacterEditorMenu pUVar5;
		MessagePopup x;
		PresetSkinEditPopup __this_01;
		String pSVar6;
		BaseGameManager __this_02;
		CharacterEditorHumanMenu pUVar7;
		bool bVar8;
		bool bVar9;
		BaseSetSetting pSVar10;
		UI_CharacterEditorSkinsPanel_StaticFields pUVar11;
		CharacterEditorCostumePanel.d__31<CapturePreviousProfilePreviewAndApplySkins> __this_03;
		CharacterEditorCostumePanel.d__32<ApplySkinPreviewAfterReset> pUVar12;
		CharacterEditorMenu x_00;
		CharacterEditorHumanMenu humanMenu;

		pSVar3 = SettingsManager.HumanCustomSettings;
		if (((pSVar3 == null) ||(__this_00 = pSVar3.CustomSets, __this_00 == null)) ||(pSVar10 = __this_00.GetSelectedSet(), pSVar10 == null)) goto label_05ccde74;
		bVar1 = (typeof(HumanCustomSet)._2).typeHierarchyDepth;
		if (((pSVar10.klass._2).typeHierarchyDepth < bVar1) ||((pSVar10.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(HumanCustomSet)) ) {
			throw new InvalidCastException();
		}
		pSVar4 = pSVar10.UniqueId;
		if (pSVar4 == null) goto label_05ccde74;
		b = pSVar4._value;
		targetAddress = &this._previousProfileId;
		bVar8 = (this._previousProfileId == b);
		if ((bVar8) && (*targetAddress != null)) {
			return;
		}
		pUVar5 = this._menu;
		if (pUVar5 == null) {
	label_05ccda9f: ;
			x_00 = null;
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			bVar1 = (typeof(CharacterEditorHumanMenu)._2).typeHierarchyDepth;
			if ((pUVar5.klass._2).typeHierarchyDepth < bVar1) goto label_05ccda9f;
			x_00 = null;
			if ((pUVar5.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CharacterEditorHumanMenu)) {
				x_00 = pUVar5;
			}
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		bVar8 = ((Object)x_00 != null);
		if (bVar8) {
			if (x_00 == null) goto label_05ccde74;
			x = (*(ulong)((sbyte)x_00 + 0xd0));
			bVar8 = ((Object)x != null);
			if (bVar8) {
				__this_01 = (PresetSkinEditPopup)(*(ulong)((sbyte)x_00 + 0xd0));
				if (__this_01 == null) goto label_05ccde74;
				if (__this_01.IsActive != false) {
					__this_01.OnCancelClick();
				}
			}
		}
		pUVar5 = this._menu;
		if (pUVar5 == null) {
	label_05ccde74: ;
			throw new NullReferenceException();
		}
		pUVar5.RebuildPanels(true);
		pUVar5 = this._menu;
		if (pUVar5 == null) goto label_05ccde74;
		pUVar5.ResetCharacter(true);
		pUVar11 = typeof(CharacterEditorSkinsPanel).static_fields;
		bVar8 = true;
		if (pUVar11._persistentGlobalSkinPreview == false) {
			if (Il2CppMethodInitialized_07547b85 == false) {
				Il2CppMethodInitialized_07547b85 = true;
				pUVar11 = typeof(CharacterEditorSkinsPanel).static_fields;
			}
			bVar8 = pUVar11._persistentCustomSkinPreview != false;
			pSVar6 = *targetAddress;
		}
		else {
			pSVar6 = *targetAddress;
		}
		if ((pSVar6 != null) &&(bVar9 = (pSVar6 != b))) {
			__this_02 = SceneLoader.CurrentGameManager;
			if (__this_02 != null) {
				bVar1 = (typeof(CharacterEditorGameManager)._2).typeHierarchyDepth;
				if (((__this_02.klass._2).typeHierarchyDepth < bVar1) ||((__this_02.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CharacterEditorGameManager))) {
					throw new InvalidCastException();
				}
			}
			bVar9 = ((Object)__this_02 != null);
			if (bVar9) {
				pSVar6 = *targetAddress;
				__this_03 = il2cpp_codegen_object_new((Il2CppClass)typeof(CharacterEditorCostumePanel.d__31<CapturePreviousProfilePreviewAndApplySkins>));
				__this_03 = new CharacterEditorCostumePanel.d__31<CapturePreviousProfilePreviewAndApplySkins>(0);
				if (__this_03 !=null) {
					__this_03.__4__this = this;
					__this_03.previousProfileId = pSVar6;
					__this_03.shouldApplySkinPreview = bVar8;
					if (__this_02 != null) {
						__this_02.StartCoroutine((IEnumerator)__this_03);
						goto label_05ccde57;
					}
				}
				goto label_05ccde74;
			}
			goto label_05ccde57;
		}
		if (this._shouldGeneratePreviewAfterRebuild == false) {
			if (bVar8 != false) {
				pUVar12 = il2cpp_codegen_object_new((Il2CppClass)typeof(CharacterEditorCostumePanel.d__32<ApplySkinPreviewAfterReset>));
				pUVar12 = new CharacterEditorCostumePanel.d__32<ApplySkinPreviewAfterReset>(0);
				this.StartCoroutine((IEnumerator)pUVar12);
			}
			goto label_05ccde57;
		}
		this._shouldGeneratePreviewAfterRebuild = false;
		if (bVar8 != false) {
			pUVar12 = il2cpp_codegen_object_new((Il2CppClass)typeof(CharacterEditorCostumePanel.d__32<ApplySkinPreviewAfterReset>));
			pUVar12 = new CharacterEditorCostumePanel.d__32<ApplySkinPreviewAfterReset>(0);
			this.StartCoroutine((IEnumerator)pUVar12);
		}
		pUVar7 = (CharacterEditorHumanMenu)this._menu;
		if ((typeof(CharacterPreviewGenerator)._2).cctor_finished_or_no_cctor == 0) {
			if (pUVar7 != null) goto label_05ccde1f;
	label_05ccde35: ;
			humanMenu = null;
		}
		else {
			if (pUVar7 == null) goto label_05ccde35;
	label_05ccde1f: ;
			bVar1 = (typeof(CharacterEditorHumanMenu)._2).typeHierarchyDepth;
			if ((((CharacterEditorMenu)pUVar7.klass)._2).typeHierarchyDepth < bVar1) goto label_05ccde35;
			humanMenu = null;
			if ((((CharacterEditorMenu)pUVar7.klass)._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CharacterEditorHumanMenu)) {
				humanMenu = pUVar7;
			}
		}
		CharacterPreviewGenerator.GeneratePreviewForHumanSet(humanMenu, true);
	label_05ccde57: ;
		*targetAddress = b;
		return;
	}

	[Token(Token = "0x6004A3A")]
	[Address(RVA = "0x5BCDE90", Offset = "0x5BCCE90", VA = "0x5BCDE90")]
	[IteratorStateMachine(typeof(_003CCapturePreviousProfilePreviewAndApplySkins_003Ed__31))]
	private IEnumerator CapturePreviousProfilePreviewAndApplySkins(string previousProfileId, string currentProfileId, bool shouldApplySkinPreview)
	{
		// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel$$CapturePreviousProfilePreviewAndApplySkins): 1 lines keep C-only constructs
		CharacterEditorCostumePanel.d__31<CapturePreviousProfilePreviewAndApplySkins> __this_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CharacterEditorCostumePanel.d__31<CapturePreviousProfilePreviewAndApplySkins>));
		__this_00 = new CharacterEditorCostumePanel.d__31<CapturePreviousProfilePreviewAndApplySkins>(0);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.__4__this = this;
		__this_00.previousProfileId = previousProfileId;
		__this_00.shouldApplySkinPreview = shouldApplySkinPreview;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6004A3B")]
	[Address(RVA = "0x5BCD8F0", Offset = "0x5BCC8F0", VA = "0x5BCD8F0")]
	[IteratorStateMachine(typeof(_003CApplySkinPreviewAfterReset_003Ed__32))]
	private IEnumerator ApplySkinPreviewAfterReset()
	{
		// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel$$ApplySkinPreviewAfterReset): 1 lines keep C-only constructs
		CharacterEditorCostumePanel.d__32<ApplySkinPreviewAfterReset> __this_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CharacterEditorCostumePanel.d__32<ApplySkinPreviewAfterReset>));
		__this_00 = new CharacterEditorCostumePanel.d__32<ApplySkinPreviewAfterReset>(0);
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6004A3C")]
	[Address(RVA = "0x5BCDF20", Offset = "0x5BCCF20", VA = "0x5BCDF20")]
	private void OnCharacterChanged()
	{
		// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel$$OnCharacterChanged): 1 lines keep C-only constructs
		sbyte cVar1;
		CharacterEditorMenu pUVar2;
		CharacterEditorCostumePanel.d__34<ApplySkinPreviewAfterCostumeChange> __this_00;

		pUVar2 = this._menu;
		if (pUVar2 == null) {
			throw new NullReferenceException();
		}
		pUVar2.ResetCharacter(false);
		if (CharacterEditorSkinsPanel._persistentGlobalSkinPreview == false) {
			if (Il2CppMethodInitialized_07547b85 == false) {
				Il2CppMethodInitialized_07547b85 = true;
				cVar1 = CharacterEditorSkinsPanel._persistentCustomSkinPreview;
			}
			else {
				cVar1 = CharacterEditorSkinsPanel._persistentCustomSkinPreview;
			}
			if (cVar1 == false) {
				return;
			}
		}
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CharacterEditorCostumePanel.d__34<ApplySkinPreviewAfterCostumeChange>));
		__this_00 = new CharacterEditorCostumePanel.d__34<ApplySkinPreviewAfterCostumeChange>(0);
		this.StartCoroutine((IEnumerator)__this_00);
		return;
	}

	[Token(Token = "0x6004A3D")]
	[Address(RVA = "0x5BCE010", Offset = "0x5BCD010", VA = "0x5BCE010")]
	[IteratorStateMachine(typeof(_003CApplySkinPreviewAfterCostumeChange_003Ed__34))]
	public IEnumerator ApplySkinPreviewAfterCostumeChange()
	{
		// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel$$ApplySkinPreviewAfterCostumeChange): 1 lines keep C-only constructs
		CharacterEditorCostumePanel.d__34<ApplySkinPreviewAfterCostumeChange> __this_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CharacterEditorCostumePanel.d__34<ApplySkinPreviewAfterCostumeChange>));
		__this_00 = new CharacterEditorCostumePanel.d__34<ApplySkinPreviewAfterCostumeChange>(0);
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6004A3E")]
	[Address(RVA = "0x5BCE050", Offset = "0x5BCD050", VA = "0x5BCE050")]
	private void GeneratePreviewForCurrentSet()
	{
		// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel$$GeneratePreviewForCurrentSet): 2 lines keep C-only constructs
		byte bVar1;
		CharacterEditorHumanMenu pUVar2;
		CharacterEditorHumanMenu humanMenu;

		pUVar2 = (CharacterEditorHumanMenu)this._menu;
		if (pUVar2 != null) {
			bVar1 = ((typeof(CharacterEditorHumanMenu))._2).typeHierarchyDepth;
			if (bVar1 <= (((CharacterEditorMenu)pUVar2.klass)._2).typeHierarchyDepth) {
				humanMenu = null;
				if ((((CharacterEditorMenu)pUVar2.klass)._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CharacterEditorHumanMenu)) {
					humanMenu = pUVar2;
				}
				CharacterPreviewGenerator.GeneratePreviewForHumanSet(humanMenu, false);
				return;
			}
		}
		CharacterPreviewGenerator.GeneratePreviewForHumanSet(null, false);
		return;
	}

	[Token(Token = "0x6004A3F")]
	[Address(RVA = "0x5BCE0F0", Offset = "0x5BCD0F0", VA = "0x5BCE0F0")]
	private void OnButtonClick(string name)
	{
		// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel$$OnButtonClick): 21 lines keep C-only constructs
		byte bVar1;
		HumanCustomSettings pSVar2;
		BaseMenu pUVar3;
		SetNamePopup __this_00;
		ImportPopup __this_01;
		SelectListPopup __this_02;
		BaseSetSetting pSVar4;
		CustomSkinSettings pSVar5;
		List<BasePopup> pSVar6;
		StringSetting pSVar7;
		ExportPopup __this_03;
		object @object;
		Settings_SetSettingsContainer_HumanCustomSet__o pSVar8;
		CharacterEditorMenu pUVar9;
		ExternalLinkPopup pUVar10;
		BasePopup[] __this_04;
		bool bVar11;
		uint uVar12;
		CharacterEditorCostumePanel.c__DisplayClass36_0 __this_05;
		UnityAction pUVar13;
		MethodInfo* ppMVar14;
		String[] collection;
		List<string> items;
		String pSVar15;
		JSONNode pSVar16;
		CharacterEditorCostumePanel.d__38<SaveQuitCaptureCoroutine> __this_06;
		String pSVar17;
		BaseSetSetting pSVar18;
		JSONNode pSVar19;
		UI_CharacterEditorCostumePanel___c_StaticFields pUVar20;
		HumanCustomSet customSet;
		int weapon;
		CharacterEditorCostumePanel __this_07;
		String* ppSVar21;
		ConfirmPopup __this_08;

		__this_05 = new CharacterEditorCostumePanel.c__DisplayClass36_0();
		if (__this_05 == null) goto label_05ccee36;
		__this_05.__4__this = this;
		ppSVar21 = &__this_05.name;
		__this_05.name = name;
		pSVar2 = SettingsManager.HumanCustomSettings;
		pUVar3 = UIManager.CurrentMenu;
		if (pUVar3 == null) goto label_05ccee36;
		__this_00 = pUVar3.SetNamePopup;
		pSVar15 = *ppSVar21;
		uVar12 = _PrivateImplementationDetails_.ComputeStringHash(pSVar15);
		if (uVar12 < 0x5cb46bab) {
			if (uVar12 < 0x573e0af5) {
				if (uVar12 != 0x547f6497) {
					if (uVar12 != 0x573e0af4) {
						return;
					}
					bVar11 = (pSVar15 == "Import");
					if (!bVar11) {
						return;
					}
					pUVar3 = UIManager.CurrentMenu;
					if (pUVar3 != null) {
						__this_01 = pUVar3.ImportPopup;
						pUVar13 = new UnityAction((object)__this_05, (intptr_t) MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass36_0_OnButtonClick_b__5);
						if (__this_01 != null) {
							__this_01.Show(pUVar13, true, "", "");
							return;
						}
					}
					goto label_05ccee36;
				}
				bVar11 = (pSVar15 == "SaveQuit");
				if (!bVar11) {
					return;
				}
				pSVar2 = SettingsManager.HumanCustomSettings;
				if (pSVar2 == null) goto label_05ccee36;
				pSVar2.Save();
				pSVar5 = SettingsManager.CustomSkinSettings;
				if (pSVar5 == null) goto label_05ccee36;
				pSVar5.Save();
				__this_07 = (CharacterEditorCostumePanel)SceneLoader.CurrentGameManager;
				if (__this_07 != null) {
					bVar1 = (typeof(CharacterEditorGameManager)._2).typeHierarchyDepth;
					if (((((BaseGameManager)__this_07.klass)._2).typeHierarchyDepth < bVar1) ||((((BaseGameManager)__this_07.klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CharacterEditorGameManager))) {
						throw new InvalidCastException();
					}
					pSVar6 = __this_07._popups;
					if (pSVar6 != null) {
						bVar1 = (typeof(DummyHuman)._2).typeHierarchyDepth;
						if ((bVar1 <= (pSVar6.klass._2).typeHierarchyDepth) &&((pSVar6.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(DummyHuman))) {
							pSVar2 = SettingsManager.HumanCustomSettings;
							if ((pSVar2 == null) ||(pSVar8 = pSVar2.CustomSets, pSVar8 == null)) goto label_05ccee36;
							customSet = (HumanCustomSet)pSVar8.GetSelectedSet();
							if (customSet != null) {
								bVar1 = (typeof(HumanCustomSet)._2).typeHierarchyDepth;
								if (((customSet.klass._2).typeHierarchyDepth < bVar1) ||((customSet.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(HumanCustomSet))) goto label_05ccee3b;
							}
							pUVar9 = this._menu;
							weapon = 0;
							if (pUVar9 != null) {
								bVar1 = (typeof(CharacterEditorHumanMenu)._2).typeHierarchyDepth;
								if ((bVar1 <= (pUVar9.klass._2).typeHierarchyDepth) &&((pUVar9.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CharacterEditorHumanMenu))) {
									pUVar10 = (*(ulong)((sbyte)pUVar9 + 0xe0));
									if (pUVar10 == null) goto label_05ccee36;
									weapon = *(int)((long)&pUVar10.m_CancellationTokenSource + 4);
								}
							}
							__this_04 = (*(ulong)((sbyte)pSVar6 + 0x38));
							if (__this_04 == null) goto label_05ccee36;
							__this_04.Load(customSet, weapon, false);
							__this_06 = il2cpp_codegen_object_new((Il2CppClass)typeof(CharacterEditorCostumePanel.d__38<SaveQuitCaptureCoroutine>));
							__this_06 = new CharacterEditorCostumePanel.d__38<SaveQuitCaptureCoroutine>(0);
							goto label_05cce8b8;
						}
					}
				}
				__this_06 = il2cpp_codegen_object_new((Il2CppClass)typeof(CharacterEditorCostumePanel.d__38<SaveQuitCaptureCoroutine>));
				__this_06 = new CharacterEditorCostumePanel.d__38<SaveQuitCaptureCoroutine>(0);
				__this_07 = this;
	label_05cce8b8: ;
				__this_07.StartCoroutine((IEnumerator)__this_06);
				return;
			}
			if (uVar12 != 0x5797ea6a) {
				if ((uVar12 != 0x5cb46baa) ||(bVar11 = (pSVar15 == "LoadPreset"), !bVar11)) {
					return;
				}
				pSVar2 = SettingsManager.HumanCustomSettings;
				if ((pSVar2 != null) &&(pSVar8 = pSVar2.Costume1Sets, pSVar8 != null)) {
					collection = pSVar8.GetSetNames();
					items = new List<string>((IEnumerable<T>)collection);
					pUVar3 = UIManager.CurrentMenu;
					if (pUVar3 != null) {
						__this_02 = pUVar3.SelectListPopup;
						pSVar15 = UIManager.GetLocale("CharacterEditor", "Costume", "Presets", "", "");
						pUVar13 = new UnityAction((object)__this_05, (intptr_t) MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass36_0_OnButtonClick_b__4);
						if (__this_02 != null) {
							__this_02.ShowLoad(items, pSVar15, pUVar13, null, null);
							return;
						}
					}
				}
				goto label_05ccee36;
			}
			bVar11 = (pSVar15 == "Delete");
			if (!bVar11) {
				return;
			}
			if ((pSVar2 == null) ||(pSVar8 = pSVar2.CustomSets, pSVar8 == null )) goto label_05ccee36;
			bVar11 = pSVar8.CanDeleteSelectedSet();
			if (!bVar11) {
				return;
			}
			pUVar3 = UIManager.CurrentMenu;
			if (pUVar3 == null) goto label_05ccee36;
			__this_08 = pUVar3.ConfirmPopup;
			pSVar15 = UIManager.GetLocaleCommon("DeleteWarning");
			pUVar13 = new UnityAction((object)__this_05, (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass36_0_OnButtonClick_b__1);
			pSVar17 = "Delete";
		}
		else {
			if (uVar12 < 0x990de47e) {
				if (uVar12 == 0x990de47d) {
					ppSVar21 = &"Create";
					bVar11 = (pSVar15 == "Create");
					if (!bVar11) {
						return;
					}
					pSVar15 = UIManager.GetLocale("CharacterEditor", "Costume", "NewSet", "", "");
					ppMVar14 = &MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass36_0_OnButtonClick_b__0;
				}
				else {
					if (uVar12 != 0x658f3664) {
						return;
					}
					ppSVar21 = &"Copy";
					bVar11 = (pSVar15 == "Copy");
					if (!bVar11) {
						return;
					}
					pSVar15 = UIManager.GetLocale("CharacterEditor", "Costume", "NewSet", "", "");
					ppMVar14 = &MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass36_0_OnButtonClick_b__3;
				}
				pUVar13 = new UnityAction((object)__this_05, (intptr_t)*ppMVar14);
	label_05cce960: ;
				pSVar17 = UIManager.GetLocaleCommon(*ppSVar21);
				if (__this_00 != null) {
					__this_00.Show(pSVar15, pUVar13, pSVar17, null);
					return;
				}
				goto label_05ccee36;
			}
			if (uVar12 != 0xc7b3d356) {
				if (uVar12 == 0xc80631f3) {
					ppSVar21 = &"Rename";
					bVar11 = (pSVar15 == "Rename");
					if (!bVar11) {
						return;
					}
					if ((((pSVar2 == null) ||(pSVar8 = pSVar2.CustomSets, pSVar8 == null)) ||(pSVar18 = pSVar8.GetSelectedSet(), pSVar18 == null)) ||(pSVar7 = pSVar18.Name, pSVar7 == null)) goto label_05ccee36;
					pSVar15 = pSVar7._value;
					pUVar13 = new UnityAction((object)__this_05, (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c__DisplayClass36_0_OnButtonClick_b__2);
					goto label_05cce960;
				}
				if (uVar12 != 0xe86349d3) {
					return;
				}
				bVar11 = (pSVar15 == "Export");
				if (!bVar11) {
					return;
				}
				if (((pSVar2 == null) ||(pSVar8 = pSVar2.CustomSets, pSVar8 == null)) ||(customSet = (HumanCustomSet)pSVar8.GetSelectedSet(), customSet == null)) goto label_05ccee36;
				pSVar4 = (BaseSetSetting)customSet.klass;
				bVar1 = (typeof(HumanCustomSet)._2).typeHierarchyDepth;
				if (((pSVar4._2).typeHierarchyDepth < bVar1) ||((pSVar4._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(HumanCustomSet))) {
	label_05ccee3b: ;
					throw new InvalidCastException();
				}
				pSVar16 = customSet.SerializeToJsonObject();
				if (pSVar16 == null) goto label_05ccee36;
				bVar11 = pSVar16.HasKey("Preset");
				if (bVar11) {
					pSVar19 = ((JSONNode)false);
					pSVar16.set_Item("Preset", pSVar19);
					if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) goto label_05ccec30;
	label_05cce771: ;
					pUVar3 = UIManager.CurrentMenu;
				}
				else {
					if ((typeof(UIManager)._2).cctor_finished_or_no_cctor != 0) goto label_05cce771;
	label_05ccec30: ;
					pUVar3 = UIManager.CurrentMenu;
				}
				if (pUVar3 != null) {
					__this_03 = pUVar3.ExportPopup;
					pSVar15 = pSVar16.ToString(4);
					if (__this_03 != null) {
						__this_03.Show(pSVar15);
						return;
					}
				}
				goto label_05ccee36;
			}
			bVar11 = (pSVar15 == "Quit");
			if (!bVar11) {
				return;
			}
			pUVar3 = UIManager.CurrentMenu;
			if (pUVar3 == null) goto label_05ccee36;
			__this_08 = pUVar3.ConfirmPopup;
			pSVar15 = UIManager.GetLocaleCommon("QuitWithoutSaveConfirm");
			if ((typeof(CharacterEditorCostumePanel.c)._2).cctor_finished_or_no_cctor == 0) {
				pUVar20 = typeof(CharacterEditorCostumePanel.c).static_fields;
				pUVar13 = pUVar20.__9__36_6;
				if (pUVar13 == null) goto label_05cceca7;
	label_05cceae8: ;
				uVar12 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				pUVar20 = typeof(CharacterEditorCostumePanel.c).static_fields;
				pUVar13 = pUVar20.__9__36_6;
				if (pUVar13 != null) goto label_05cceae8;
	label_05cceca7: ;
				if ((typeof(CharacterEditorCostumePanel.c)._2).cctor_finished_or_no_cctor == 0) {
					pUVar20 = typeof(CharacterEditorCostumePanel.c).static_fields;
				}
				@object = (object)pUVar20.__9;
				pUVar13 = new UnityAction(@object, (intptr_t)MethodInfo_UI_CharacterEditorCostumePanel_c_OnButtonClick_b__36_6);
				pUVar20 = typeof(CharacterEditorCostumePanel.c).static_fields;
				pUVar20.__9__36_6 = pUVar13;
				uVar12 = (typeof(UIManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar12 == 0) {
			}
			pSVar17 = "Quit";
		}
		pSVar17 = UIManager.GetLocaleCommon(pSVar17);
		if (__this_08 != null) {
			__this_08.Show(pSVar15, pUVar13, pSVar17);
			return;
		}
	label_05ccee36: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004A40")]
	[Address(RVA = "0x5BCEE90", Offset = "0x5BCDE90", VA = "0x5BCEE90")]
	private void OnCostumeSetOperationFinish(string name)
	{
		// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel$$OnCostumeSetOperationFinish): 19 lines keep C-only constructs
		byte bVar1;
		BaseMenu pUVar2;
		HumanCustomSettings pSVar3;
		SetNamePopup pUVar4;
		Settings_SetSettingsContainer_HumanCustomSet__o __this_00;
		StringSetting pSVar5;
		StringSetting __this_01;
		Settings_SetSettingsContainer_HumanCustomSet__o pSVar6;
		String pSVar7;
		Il2CppClass pIVar8;
		ImportPopup pUVar9;
		String a;
		SelectListPopup pUVar10;
		BoolSetting pSVar11;
		BaseSetting pSVar12;
		bool bVar13;
		int iVar14;
		VirtualInvokeData pVVar15;
		BaseSetSetting pSVar16;
		ListSetting<T> pSVar17;
		UI_CharacterEditorSkinsPanel_StaticFields pUVar18;
		List<object> __this_02;
		ulong uVar19;
		Il2CppRuntimeInterfaceOffsetPair pIVar20;
		ListSetting<T> pSVar21;
		MethodInfo method_00;
		long lVar22;
		IntSetting pSVar23;
		byte[] local_68 = new byte[8];
		BaseSetting local_58;
		byte[] local_48 = new byte[16];
		BaseSetting local_38;

		local_68 = (byte[])0x0;
		local_58 = null;
		pUVar2 = UIManager.CurrentMenu;
		if ((pUVar2 == null) ||(pSVar3 = SettingsManager.HumanCustomSettings, pSVar3 == null)) goto label_05ccf8eb;
		pUVar4 = pUVar2.SetNamePopup;
		__this_00 = pSVar3.CustomSets;
		bVar13 = (name == "Create");
		if (bVar13) {
			if (((pUVar4 == null) ||(pSVar5 = pUVar4.NameSetting, pSVar5 == null)) ||(__this_00 == null)) goto label_05ccf8eb;
			__this_00.CreateSet(pSVar5._value);
			pSVar21 = ((SetSettingsContainer<T>)&__this_00.fields).Sets;
			if (pSVar21 == null) goto label_05ccf8eb;
			pSVar23 = ((SetSettingsContainer<T>)&__this_00.fields).SelectedSetIndex;
			pSVar17 = pSVar21.klass;
			uVar19 = (ulong)(pSVar17._2).interface_offsets_count;
			if (uVar19 != 0) {
				pIVar20 = (pSVar17._1).interfaceOffsets;
				lVar22 = 0;
				do {
					if (*(IListSetting*)((long)&pIVar20.interfaceType + lVar22) == typeof(IListSetting)) goto label_05ccf2a4;
					lVar22 = lVar22 + 0x10;
				} while (uVar19 * 0x10 != lVar22);
			}
		}
		else {
			bVar13 = (name == "Delete");
			if (bVar13) {
				if (__this_00 != null) {
					__this_00.DeleteSelectedSet();
					pSVar23 = ((SetSettingsContainer<T>)&__this_00.fields).SelectedSetIndex;
					if (pSVar23 != null) {
						method_00 = null;
						pSVar23.Value = 0;
						CharacterPreviewGenerator.CleanupOrphanedPreviews();
						goto label_05ccf2e7;
					}
				}
				goto label_05ccf8eb;
			}
			bVar13 = (name == "Rename");
			if (bVar13) {
				if ((((__this_00 != null) &&(pSVar16 = __this_00.GetSelectedSet(), pSVar16 != null)) && (pUVar4 != null)) &&((pSVar5 = pUVar4.NameSetting, pSVar5 != null &&(__this_01 = pSVar16.Name, __this_01 != null)))) {
					method_00 = (MethodInfo)pSVar5._value;
					__this_01.Value = (object)method_00;
					goto label_05ccf2e7;
				}
				goto label_05ccf8eb;
			}
			bVar13 = (name == "Copy");
			if (!bVar13) {
				bVar13 = (name == "LoadPreset");
				if (bVar13) {
					if (((__this_00 != null) &&(pSVar16 = __this_00.GetSelectedSet(), pSVar16 != null)) &&((pSVar5 = pSVar16.Name, pSVar5 != null &&(((pSVar3 = SettingsManager.HumanCustomSettings, pSVar3 != null &&(pSVar6 = pSVar3.Costume1Sets, pSVar6 != null)) &&(pSVar21 = pSVar6.Sets, pSVar21 != null)))))) {
						pSVar7 = pSVar5._value;
						pIVar8 = (Il2CppClass)pSVar21.klass;
						uVar19 = (ulong)(pIVar8._2).interface_offsets_count;
						__this_02 = (List<object>)pSVar21.GetCount();
						if (__this_02 != null) {
							local_48.GetEnumerator(__this_02);
							local_58 = local_38;
							local_68 = (byte[])local_48._0_8_;
							local_48._0_8_ = null;
							local_48._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_68;
							while (true) {
								bVar13 = local_68.MoveNext();
								pSVar12 = local_58;
								if (!(bVar13)) break;
								if (local_58 == null) {
									throw new NullReferenceException();
								}
								bVar1 = (typeof(HumanCustomSet)._2).typeHierarchyDepth;
								if (((local_58.klass._2).typeHierarchyDepth < bVar1) ||((local_58.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(HumanCustomSet))) {
									throw new InvalidCastException();
								}
								if ((*(ulong)((sbyte)local_58 + 0x30)) == null) {
									throw new NullReferenceException();
								}
								a = (((*(Il2CppClass*)((sbyte)local_58 + 0x30)))._1).byval_arg.data;
								pUVar2 = UIManager.CurrentMenu;
								if (pUVar2 == null) {
									throw new NullReferenceException();
								}
								pUVar10 = pUVar2.SelectListPopup;
								if (pUVar10 == null) {
									throw new NullReferenceException();
								}
								pSVar5 = pUVar10.FinishSetting;
								if (pSVar5 == null) {
									throw new NullReferenceException();
								}
								bVar13 = (a == pSVar5._value);
								if (bVar13) {
									pSVar16 = __this_00.GetSelectedSet();
									if (pSVar16 == null) {
										throw new NullReferenceException();
									}
									pSVar16.Copy(pSVar12);
									pSVar16 = __this_00.GetSelectedSet();
									if (pSVar16 == null) {
										throw new NullReferenceException();
									}
									pSVar11 = pSVar16.Preset;
									if (pSVar11 == null) {
										throw new NullReferenceException();
									}
									pSVar11.Value = false;
									pSVar16 = __this_00.GetSelectedSet();
									if (pSVar16 == null) {
										throw new NullReferenceException();
									}
									pSVar5 = pSVar16.Name;
									if (pSVar5 == null) {
										throw new NullReferenceException();
									}
									pSVar5.Value = (object)pSVar7;
								}
							}
							method_00 = MethodInfo_System_Collections_Generic_List_Enumerator_BaseSetting_Dispose;
							local_68.Dispose();
							goto label_05ccf2e7;
						}
					}
					goto label_05ccf8eb;
				}
				method_00 = (MethodInfo *)"Import";
				bVar13 = (name == "Import");
				if (bVar13) {
					pUVar2 = UIManager.CurrentMenu;
					if (pUVar2 != null) {
						pUVar9 = pUVar2.ImportPopup;
						if (__this_00 == null) {
							throw new NullReferenceException();
						}
						pSVar16 = __this_00.GetSelectedSet();
						if (pSVar16 == null) {
							throw new NullReferenceException();
						}
						pSVar5 = pSVar16.Name;
						if (pSVar5 == null) {
							throw new NullReferenceException();
						}
						pSVar7 = pSVar5._value;
						pSVar16 = __this_00.GetSelectedSet();
						if (pUVar9 == null) {
							throw new NullReferenceException();
						}
						pSVar5 = pUVar9.ImportSetting;
						if (pSVar5 == null) {
							throw new NullReferenceException();
						}
						if (pSVar16 == null) {
							throw new NullReferenceException();
						}
						pSVar16.DeserializeFromJsonString(pSVar5._value);
						pSVar16 = __this_00.GetSelectedSet();
						if (pSVar16 == null) {
							throw new NullReferenceException();
						}
						pSVar11 = pSVar16.Preset;
						if (pSVar11 == null) {
							throw new NullReferenceException();
						}
						pSVar11.Value = false;
						pSVar16 = __this_00.GetSelectedSet();
						if (pSVar16 == null) {
							throw new NullReferenceException();
						}
						pSVar5 = pSVar16.Name;
						if (pSVar5 == null) {
							throw new NullReferenceException();
						}
						pSVar5.Value = (object)pSVar7;
						method_00 = (pUVar9.klass.vtable)._22_Hide.method;
						pUVar9.Hide();
						pUVar18 = typeof(CharacterEditorSkinsPanel).static_fields;
						bVar13 = true;
						if (pUVar18._persistentGlobalSkinPreview == false) {
							if (Il2CppMethodInitialized_07547b85 == false) {
								Il2CppMethodInitialized_07547b85 = true;
								pUVar18 = typeof(CharacterEditorSkinsPanel).static_fields;
							}
							bVar13 = pUVar18._persistentCustomSkinPreview;
						}
						if (this != null) {
							this._shouldGeneratePreviewAfterRebuild = bVar13;
							goto label_05ccf2e7;
						}
					}
					goto label_05ccf8eb;
				}
				goto label_05ccf2e7;
			}
			if (((pUVar4 == null) ||(pSVar5 = pUVar4.NameSetting, pSVar5 == null)) ||(__this_00 == null)) goto label_05ccf8eb;
			__this_00.CopySelectedSet(pSVar5._value);
			pSVar21 = ((SetSettingsContainer<T>)&__this_00.fields).Sets;
			if (pSVar21 == null) goto label_05ccf8eb;
			pSVar23 = ((SetSettingsContainer<T>)&__this_00.fields).SelectedSetIndex;
			pSVar17 = pSVar21.klass;
			uVar19 = (ulong)(pSVar17._2).interface_offsets_count;
			if (uVar19 != 0) {
				pIVar20 = (pSVar17._1).interfaceOffsets;
				lVar22 = 0;
				do {
					if (*(IListSetting*)((long)&pIVar20.interfaceType + lVar22) == typeof(IListSetting)) goto label_05ccf2a4;
					lVar22 = lVar22 + 0x10;
				} while (uVar19 * 0x10 != lVar22);
			}
		}
	label_05ccf2b7: ;
		iVar14 = pSVar21.GetCount();
		if (pSVar23 != null) {
			method_00 = (MethodInfo)(ulong)(iVar14 - 1U);
			pSVar23.Value = iVar14 - 1U;
			this._shouldGeneratePreviewAfterRebuild = true;
	label_05ccf2e7: ;
			this.OnCustomSetSelected();
			return;
		}
	label_05ccf8eb: ;
		throw new NullReferenceException();
	label_05ccf2a4: ;
		pVVar15 = &(pSVar17.vtable)._0_Equals + *(int)((long)&pIVar20.offset + lVar22);
		goto label_05ccf2b7;
	}

	[Token(Token = "0x6004A41")]
	[Address(RVA = "0x5BCEE50", Offset = "0x5BCDE50", VA = "0x5BCEE50")]
	[IteratorStateMachine(typeof(_003CSaveQuitCaptureCoroutine_003Ed__38))]
	private IEnumerator SaveQuitCaptureCoroutine()
	{
		// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel$$SaveQuitCaptureCoroutine): 1 lines keep C-only constructs
		CharacterEditorCostumePanel.d__38<SaveQuitCaptureCoroutine> __this_00;

		__this_00 = il2cpp_codegen_object_new(typeof(CharacterEditorCostumePanel.d__38<SaveQuitCaptureCoroutine>));
		__this_00 = new CharacterEditorCostumePanel.d__38<SaveQuitCaptureCoroutine>(0);
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6004A42")]
	[Address(RVA = "0x5BCF9C0", Offset = "0x5BCE9C0", VA = "0x5BCF9C0")]
	public CharacterEditorCostumePanel()
	{
		// Lifted from source/cpp/UI/CharacterEditorCostumePanel.c (UI.CharacterEditorCostumePanel$$.ctor): clean
		MethodInfo method_00;

		method_00 = new Dictionary<string, Button>();
		this._topButtons = (Dictionary<string, Button>)method_00;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/CharacterEditorCostumePanel.c.

	// UI.CharacterEditorCostumePanel.<>c$$.cctor: 1 lines keep C-only constructs
	private static void c__cctor()
	{
		object __this;

		__this = (object)il2cpp_codegen_object_new(typeof(CharacterEditorCostumePanel.c)) ;
		__this = new Object();
		CharacterEditorCostumePanel.c.__9 =(CharacterEditorCostumePanel.c)__this;
		return;
	}

	// UI.CharacterEditorCostumePanel.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// UI.CharacterEditorCostumePanel.<>c$$<OnButtonClick>b__36_6: clean
	private void c__OnButtonClick_b__36_6()
	{
		HumanCustomSettings pSVar1;
		CustomSkinSettings pSVar2;

		CharacterPreviewGenerator.ClearSessionGeneratedPreviews();
		CharacterPreviewGenerator.ClearNonPersistentPreviews();
		pSVar1 = SettingsManager.HumanCustomSettings;
		if (pSVar1 != null) {
			pSVar1.Load();
			pSVar2 = SettingsManager.CustomSkinSettings;
			if (pSVar2 != null) {
				pSVar2.Load();
				CharacterEditorSkinsPanel._persistentGlobalSkinPreview = false;
				CharacterEditorSkinsPanel._persistentCustomSkinPreview = false;
				SceneLoader.LoadScene(1);
				return;
			}
		}
		throw new NullReferenceException();
	}

	// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$.ctor: clean
	private void c__DisplayClass24_0__ctor()
	{
		base();
		return;
	}

	// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__0: clean
	private void c__DisplayClass24_0__Setup_b__0()
	{
		CharacterEditorCostumePanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnButtonClick("Quit");
		return;
	}

	// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__1: clean
	private void c__DisplayClass24_0__Setup_b__1()
	{
		CharacterEditorCostumePanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnButtonClick("LoadPreset");
		return;
	}

	// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__2: clean
	private void c__DisplayClass24_0__Setup_b__2()
	{
		CharacterEditorCostumePanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnButtonClick("SaveQuit");
		return;
	}

	// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__3: clean
	private void c__DisplayClass24_0__Setup_b__3()
	{
		CharacterEditorCostumePanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnCustomSetSelected();
		return;
	}

	// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__4: clean
	private void c__DisplayClass24_0__Setup_b__4()
	{
		CharacterEditorCostumePanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnSexChanged();
		return;
	}

	// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__5: clean
	private void c__DisplayClass24_0__Setup_b__5()
	{
		CharacterEditorCostumePanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnCharacterChanged();
		return;
	}

	// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__6: clean
	private void c__DisplayClass24_0__Setup_b__6()
	{
		CharacterEditorCostumePanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnCharacterChanged();
		return;
	}

	// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__7: clean
	private void c__DisplayClass24_0__Setup_b__7()
	{
		CharacterEditorCostumePanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnCharacterChanged();
		return;
	}

	// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__8: clean
	private void c__DisplayClass24_0__Setup_b__8()
	{
		CharacterEditorCostumePanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnCharacterChanged();
		return;
	}

	// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__9: clean
	private void c__DisplayClass24_0__Setup_b__9()
	{
		CharacterEditorCostumePanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnCharacterChanged();
		return;
	}

	// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__10: clean
	private void c__DisplayClass24_0__Setup_b__10()
	{
		CharacterEditorCostumePanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnCharacterChanged();
		return;
	}

	// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__11: clean
	private void c__DisplayClass24_0__Setup_b__11()
	{
		CharacterEditorCostumePanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnCharacterChanged();
		return;
	}

	// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__12: clean
	private void c__DisplayClass24_0__Setup_b__12()
	{
		CharacterEditorCostumePanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnCharacterChanged();
		return;
	}

	// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__13: clean
	private void c__DisplayClass24_0__Setup_b__13()
	{
		CharacterEditorCostumePanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnCharacterChanged();
		return;
	}

	// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__14: clean
	private void c__DisplayClass24_0__Setup_b__14()
	{
		CharacterEditorCostumePanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnCharacterChanged();
		return;
	}

	// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__15: clean
	private void c__DisplayClass24_0__Setup_b__15()
	{
		int iVar1;
		HumanCustomSet pSVar2;
		IntSetting pSVar3;
		IntSetting __this_00;
		BoolSetting __this_01;
		CharacterEditorCostumePanel __this_02;
		int value;

		pSVar2 = this.set;
		if (((pSVar2 != null) &&(pSVar3 = this.capeOption, pSVar3 != null)) &&(__this_00 = pSVar2.Cape, __this_00 != null)) {
			iVar1 = pSVar3._value;
			value = 2;
			if (iVar1 != 3) {
				value = iVar1;
			}
			__this_00.Value = value;
			pSVar2 = this.set;
			if (((pSVar2 != null) &&(pSVar3 = this.capeOption, pSVar3 != null)) &&(__this_01 = pSVar2.HoodUp, __this_01 != null)) {
				__this_01.Value = pSVar3._value == 3;
				__this_02 = this.__4__this;
				if (__this_02 != null) {
					__this_02.OnCharacterChanged();
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__16: clean
	private void c__DisplayClass24_0__Setup_b__16()
	{
		CharacterEditorCostumePanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnCharacterChanged();
		return;
	}

	// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__17: clean
	private void c__DisplayClass24_0__Setup_b__17()
	{
		CharacterEditorCostumePanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnCharacterChanged();
		return;
	}

	// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__18: clean
	private void c__DisplayClass24_0__Setup_b__18()
	{
		CharacterEditorCostumePanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnCharacterChanged();
		return;
	}

	// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__19: clean
	private void c__DisplayClass24_0__Setup_b__19()
	{
		CharacterEditorCostumePanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnCharacterChanged();
		return;
	}

	// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__20: clean
	private void c__DisplayClass24_0__Setup_b__20()
	{
		CharacterEditorCostumePanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnCharacterChanged();
		return;
	}

	// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__21: clean
	private void c__DisplayClass24_0__Setup_b__21()
	{
		CharacterEditorCostumePanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnCharacterChanged();
		return;
	}

	// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__22: clean
	private void c__DisplayClass24_0__Setup_b__22()
	{
		CharacterEditorCostumePanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnCharacterChanged();
		return;
	}

	// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__23: clean
	private void c__DisplayClass24_0__Setup_b__23()
	{
		CharacterEditorCostumePanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnCharacterChanged();
		return;
	}

	// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__24: clean
	private void c__DisplayClass24_0__Setup_b__24()
	{
		CharacterEditorCostumePanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnCharacterChanged();
		return;
	}

	// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__25: clean
	private void c__DisplayClass24_0__Setup_b__25()
	{
		CharacterEditorCostumePanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnCharacterChanged();
		return;
	}

	// UI.CharacterEditorCostumePanel.<>c__DisplayClass24_0$$<Setup>b__26: clean
	private void c__DisplayClass24_0__Setup_b__26()
	{
		CharacterEditorCostumePanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnCharacterChanged();
		return;
	}

	// UI.CharacterEditorCostumePanel.<>c__DisplayClass36_0$$.ctor: clean
	private void c__DisplayClass36_0__ctor()
	{
		base();
		return;
	}

	// UI.CharacterEditorCostumePanel.<>c__DisplayClass36_0$$<OnButtonClick>b__0: clean
	private void c__DisplayClass36_0__OnButtonClick_b__0()
	{
		CharacterEditorCostumePanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnCostumeSetOperationFinish(this.name);
		return;
	}

	// UI.CharacterEditorCostumePanel.<>c__DisplayClass36_0$$<OnButtonClick>b__1: clean
	private void c__DisplayClass36_0__OnButtonClick_b__1()
	{
		CharacterEditorCostumePanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnCostumeSetOperationFinish(this.name);
		return;
	}

	// UI.CharacterEditorCostumePanel.<>c__DisplayClass36_0$$<OnButtonClick>b__2: clean
	private void c__DisplayClass36_0__OnButtonClick_b__2()
	{
		CharacterEditorCostumePanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnCostumeSetOperationFinish(this.name);
		return;
	}

	// UI.CharacterEditorCostumePanel.<>c__DisplayClass36_0$$<OnButtonClick>b__3: clean
	private void c__DisplayClass36_0__OnButtonClick_b__3()
	{
		CharacterEditorCostumePanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnCostumeSetOperationFinish(this.name);
		return;
	}

	// UI.CharacterEditorCostumePanel.<>c__DisplayClass36_0$$<OnButtonClick>b__4: clean
	private void c__DisplayClass36_0__OnButtonClick_b__4()
	{
		CharacterEditorCostumePanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnCostumeSetOperationFinish("LoadPreset");
		return;
	}

	// UI.CharacterEditorCostumePanel.<>c__DisplayClass36_0$$<OnButtonClick>b__5: clean
	private void c__DisplayClass36_0__OnButtonClick_b__5()
	{
		CharacterEditorCostumePanel __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.OnCostumeSetOperationFinish(this.name);
		return;
	}
}
