// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterEditorSkinsPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CharacterEditorSkinsPanel.c
// Prior real C# source: none (type is newer than the last public source snapshot)
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

[Token(Token = "0x20007C0")]
internal class CharacterEditorSkinsPanel : HeadedPanel
{
	[Token(Token = "0x20007C1")]
	[CompilerGenerated]
	private sealed class _003CApplySkinPreviewAfterGlobalSetChange_003Ed__27 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002700")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002701")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002702")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CharacterEditorSkinsPanel _003C_003E4__this;

		[Token(Token = "0x4002703")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private DummyHuman _003CdummyHuman_003E5__2;

		[Token(Token = "0x4002704")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private bool _003CoriginalGlobalEnabled_003E5__3;

		[Token(Token = "0x4002705")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x31")]
		private bool _003CoriginalSetEnabled_003E5__4;

		[Token(Token = "0x17000D0A")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004AD8")]
			[Address(RVA = "0x5BD8170", Offset = "0x5BD7170", VA = "0x5BD8170", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/CharacterEditorSkinsPanel.c (UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterGlobalSetChange>d__27$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000D0B")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004ADA")]
			[Address(RVA = "0x5BD81C0", Offset = "0x5BD71C0", VA = "0x5BD81C0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/CharacterEditorSkinsPanel.c (UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterGlobalSetChange>d__27$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6004AD5")]
		[Address(RVA = "0x5BD7210", Offset = "0x5BD6210", VA = "0x5BD7210")]
		[DebuggerHidden]
		public _003CApplySkinPreviewAfterGlobalSetChange_003Ed__27(int _003C_003E1__state)
		{
			// Lifted from source/cpp/UI/CharacterEditorSkinsPanel.c (UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterGlobalSetChange>d__27$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6004AD6")]
		[Address(RVA = "0x5BD7D30", Offset = "0x5BD6D30", VA = "0x5BD7D30", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/UI/CharacterEditorSkinsPanel.c (UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterGlobalSetChange>d__27$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6004AD7")]
		[Address(RVA = "0x5BD7D40", Offset = "0x5BD6D40", VA = "0x5BD7D40", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/UI/CharacterEditorSkinsPanel.c (UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterGlobalSetChange>d__27$$MoveNext): 9 lines keep C-only constructs
			byte bVar1;
			CharacterEditorSkinsPanel pUVar2;
			BaseGameManager pGVar3;
			DummyHuman pCVar4;
			CustomSkinSettings pSVar5;
			HumanCustomSkinSettings pSVar6;
			BoolSetting pSVar7;
			CharacterEditorMenu pUVar8;
			object pIVar9;
			DummyHuman pCVar10;
			DummyHuman* ppCVar11;

			switch(this.__1__state) {
			case 0:
				this.__1__state = -1;
				this.__2__current = null;
				this.__1__state = 1;
				return true;
			case 1:
				pUVar2 = this.__4__this;
				this.__1__state = -1;
				pGVar3 = SceneLoader.CurrentGameManager;
				if (pGVar3 == null) {
		label_05cd8024: ;
					this._dummyHuman_5__2 = null;
		label_05cd805b: ;
					ppCVar11 = &this._dummyHuman_5__2;
					pCVar4 = *ppCVar11;
				}
				else {
					bVar1 = (typeof(CharacterEditorGameManager)._2).typeHierarchyDepth;
					if (((pGVar3.klass._2).typeHierarchyDepth < bVar1) ||((pGVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CharacterEditorGameManager))) {
						throw new InvalidCastException();
					}
					pCVar4 = (DummyHuman)(*(ulong)((sbyte)pGVar3 + 0x38));
					if (pCVar4 == null) goto label_05cd8024;
					bVar1 = (typeof(DummyHuman)._2).typeHierarchyDepth;
					if ((pCVar4.klass._2).typeHierarchyDepth < bVar1) {
						pCVar10 = null;
					}
					else {
						pCVar10 = null;
						if ((pCVar4.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(DummyHuman)) {
							pCVar10 = pCVar4;
						}
					}
					ppCVar11 = &this._dummyHuman_5__2;
					this._dummyHuman_5__2 = pCVar10;
					if ((pCVar4.klass._2).typeHierarchyDepth < bVar1) goto label_05cd805b;
					pCVar4 = *ppCVar11;
				}
				if (pCVar4 == null) {
		switchD_05cd7dd6_default: ;
					return false;
				}
				pSVar5 = SettingsManager.CustomSkinSettings;
				if (((pSVar5 != null) &&(pSVar6 = pSVar5.Human, pSVar6 != null)) &&(pSVar7 = pSVar6.GlobalSkinOverridesEnabled, pSVar7 != null)) {
					this._originalGlobalEnabled_5__3 = pSVar7._value;
					pSVar7 = pSVar6.SetSpecificSkinsEnabled;
					if (((pSVar7 != null) &&(this._originalSetEnabled_5__4 = pSVar7._value, pUVar2 != null)) &&(pUVar8 = pUVar2._menu, pUVar8 != null)) {
						pUVar8.ResetCharacter(false);
						pIVar9 = (object)Util.YieldForFrames(2);
						this.__2__current = pIVar9;
						this.__1__state = 2;
						return true;
					}
				}
				break;
			case 2:
				this.__1__state = -1;
				pSVar5 = SettingsManager.CustomSkinSettings;
				if (((pSVar5 != null) &&(pSVar6 = pSVar5.Human, pSVar6 != null)) &&(pSVar7 = pSVar6.GlobalSkinOverridesEnabled, pSVar7 != null)) {
					pSVar7.Value = CharacterEditorSkinsPanel._persistentGlobalSkinPreview;
					pSVar5 = SettingsManager.CustomSkinSettings;
					if (((pSVar5 != null) &&(pSVar6 = pSVar5.Human, pSVar6 != null)) &&(pSVar7 = pSVar6.SetSpecificSkinsEnabled, pSVar7 != null)) {
						pSVar7.Value = CharacterEditorSkinsPanel._persistentCustomSkinPreview;
						pCVar4 = this._dummyHuman_5__2;
						if (pCVar4 != null) {
							pCVar4.LoadSkin();
							pIVar9 = (object)Util.YieldForFrames(3);
							this.__2__current = pIVar9;
							this.__1__state = 3;
							return true;
						}
					}
				}
				break;
			case 3:
				this.__1__state = -1;
				pSVar5 = SettingsManager.CustomSkinSettings;
				if (((pSVar5 != null) &&(pSVar6 = pSVar5.Human, pSVar6 != null)) &&(pSVar7 = pSVar6.GlobalSkinOverridesEnabled, pSVar7 != null)) {
					pSVar7.Value = this._originalGlobalEnabled_5__3;
					pSVar5 = SettingsManager.CustomSkinSettings;
					if (((pSVar5 != null) &&(pSVar6 = pSVar5.Human, pSVar6 != null)) &&(pSVar7 = pSVar6.SetSpecificSkinsEnabled, pSVar7 != null)) {
						pSVar7.Value = this._originalSetEnabled_5__4;
						return false;
					}
				}
				break;
			default: ;
				goto switchD_05cd7dd6_default;
			}
			throw new NullReferenceException();
		}

		[Token(Token = "0x6004AD9")]
		[Address(RVA = "0x5BD8180", Offset = "0x5BD7180", VA = "0x5BD8180", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/UI/CharacterEditorSkinsPanel.c (UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterGlobalSetChange>d__27$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_UI_CharacterEditorSkinsPanel_ApplySkinPreviewAfterGlobalSetChange_d__27_System_Collections_IEnum);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x20007C2")]
	[CompilerGenerated]
	private sealed class _003CApplySkinPreviewAfterInitialSetup_003Ed__30 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002706")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002707")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002708")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public CharacterEditorSkinsPanel _003C_003E4__this;

		[Token(Token = "0x4002709")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		private bool _003CoriginalGlobalEnabled_003E5__2;

		[Token(Token = "0x400270A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x29")]
		private bool _003CoriginalSetEnabled_003E5__3;

		[Token(Token = "0x17000D0C")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004ADE")]
			[Address(RVA = "0x5BD8500", Offset = "0x5BD7500", VA = "0x5BD8500", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/CharacterEditorSkinsPanel.c (UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterInitialSetup>d__30$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000D0D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004AE0")]
			[Address(RVA = "0x5BD8550", Offset = "0x5BD7550", VA = "0x5BD8550", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/CharacterEditorSkinsPanel.c (UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterInitialSetup>d__30$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6004ADB")]
		[Address(RVA = "0x5BD78F0", Offset = "0x5BD68F0", VA = "0x5BD78F0")]
		[DebuggerHidden]
		public _003CApplySkinPreviewAfterInitialSetup_003Ed__30(int _003C_003E1__state)
		{
			// Lifted from source/cpp/UI/CharacterEditorSkinsPanel.c (UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterInitialSetup>d__30$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6004ADC")]
		[Address(RVA = "0x5BD81D0", Offset = "0x5BD71D0", VA = "0x5BD81D0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/UI/CharacterEditorSkinsPanel.c (UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterInitialSetup>d__30$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6004ADD")]
		[Address(RVA = "0x5BD81E0", Offset = "0x5BD71E0", VA = "0x5BD81E0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/UI/CharacterEditorSkinsPanel.c (UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterInitialSetup>d__30$$MoveNext): 3 lines keep C-only constructs
			byte bVar1;
			int iVar2;
			CharacterEditorSkinsPanel pUVar3;
			BaseGameManager pGVar4;
			DummyHuman __this_00;
			CustomSkinSettings pSVar5;
			HumanCustomSkinSettings pSVar6;
			BoolSetting pSVar7;
			BoolSetting pSVar8;
			object pIVar9;

			iVar2 = this.__1__state;
			if (iVar2 == 2) {
				this.__1__state = -1;
				pSVar5 = SettingsManager.CustomSkinSettings;
				if (((pSVar5 != null) &&(pSVar6 = pSVar5.Human, pSVar6 != null)) &&(pSVar7 = pSVar6.GlobalSkinOverridesEnabled, pSVar7 != null)) {
					pSVar7.Value = this._originalGlobalEnabled_5__2;
					pSVar5 = SettingsManager.CustomSkinSettings;
					if (((pSVar5 != null) &&(pSVar6 = pSVar5.Human, pSVar6 != null)) &&(pSVar7 = pSVar6.SetSpecificSkinsEnabled, pSVar7 != null)) {
						pSVar7.Value = this._originalSetEnabled_5__3;
						return false;
					}
				}
		label_05cd84e8: ;
				throw new NullReferenceException();
			}
			if (iVar2 == 1) {
				pUVar3 = this.__4__this;
				this.__1__state = -1;
				pGVar4 = SceneLoader.CurrentGameManager;
				if (pGVar4 != null) {
					bVar1 = (typeof(CharacterEditorGameManager)._2).typeHierarchyDepth;
					if (((pGVar4.klass._2).typeHierarchyDepth < bVar1) ||((pGVar4.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CharacterEditorGameManager))) {
						throw new InvalidCastException();
					}
					__this_00 = (DummyHuman)(*(ulong)((sbyte)pGVar4 + 0x38));
					if (__this_00 != null) {
						bVar1 = (typeof(DummyHuman)._2).typeHierarchyDepth;
						if ((bVar1 <= (__this_00.klass._2).typeHierarchyDepth) &&((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(DummyHuman))) {
							pSVar5 = SettingsManager.CustomSkinSettings;
							if ((pSVar5 != null) &&((pSVar6 = pSVar5.Human, pSVar6 != null &&(pSVar7 = pSVar6.GlobalSkinOverridesEnabled, pSVar7 != null)) )) {
								this._originalGlobalEnabled_5__2 =((Settings_TypedSetting_bool__Fields)&pSVar7.fields)._value;
								pSVar8 = pSVar6.SetSpecificSkinsEnabled;
								if ((pSVar8 != null) &&((this._originalSetEnabled_5__3 = pSVar8._value, pUVar3 != null &&(pSVar8 = pUVar3._globalSkinPreview, pSVar8 != null)))) {
									pSVar7.Value = pSVar8._value;
									pSVar5 = SettingsManager.CustomSkinSettings;
									if ((pSVar5 != null) &&(((pSVar6 = pSVar5.Human, pSVar6 != null &&(pSVar7 = pUVar3._customSkinPreview, pSVar7 != null)) &&(pSVar8 = pSVar6.SetSpecificSkinsEnabled, pSVar8 != null) ))) {
										pSVar8.Value = pSVar7._value;
										__this_00.LoadSkin();
										pIVar9 = (object)Util.YieldForFrames(2);
										this.__2__current = pIVar9;
										this.__1__state = 2;
										return true;
									}
								}
							}
							goto label_05cd84e8;
						}
					}
				}
			}
			else if (iVar2 == 0) {
				this.__1__state = -1;
				pIVar9 = (object)Util.YieldForFrames(3);
				this.__2__current = pIVar9;
				this.__1__state = 1;
				return true;
			}
			return false;
		}

		[Token(Token = "0x6004ADF")]
		[Address(RVA = "0x5BD8510", Offset = "0x5BD7510", VA = "0x5BD8510", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/UI/CharacterEditorSkinsPanel.c (UI.CharacterEditorSkinsPanel.<ApplySkinPreviewAfterInitialSetup>d__30$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_UI_CharacterEditorSkinsPanel_ApplySkinPreviewAfterInitialSetup_d__30_System_Collections_IEnumera);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x20007C3")]
	[CompilerGenerated]
	private sealed class _003CLoadSkinAfterReset_003Ed__29 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400270B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400270C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400270D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public DummyHuman dummyHuman;

		[Token(Token = "0x400270E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CharacterEditorSkinsPanel _003C_003E4__this;

		[Token(Token = "0x400270F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool originalGlobalEnabled;

		[Token(Token = "0x4002710")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x31")]
		public bool originalSetEnabled;

		[Token(Token = "0x17000D0E")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004AE4")]
			[Address(RVA = "0x5BD87C0", Offset = "0x5BD77C0", VA = "0x5BD87C0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/CharacterEditorSkinsPanel.c (UI.CharacterEditorSkinsPanel.<LoadSkinAfterReset>d__29$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000D0F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004AE6")]
			[Address(RVA = "0x5BD8810", Offset = "0x5BD7810", VA = "0x5BD8810", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/CharacterEditorSkinsPanel.c (UI.CharacterEditorSkinsPanel.<LoadSkinAfterReset>d__29$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6004AE1")]
		[Address(RVA = "0x5BD78D0", Offset = "0x5BD68D0", VA = "0x5BD78D0")]
		[DebuggerHidden]
		public _003CLoadSkinAfterReset_003Ed__29(int _003C_003E1__state)
		{
			// Lifted from source/cpp/UI/CharacterEditorSkinsPanel.c (UI.CharacterEditorSkinsPanel.<LoadSkinAfterReset>d__29$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6004AE2")]
		[Address(RVA = "0x5BD8560", Offset = "0x5BD7560", VA = "0x5BD8560", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/UI/CharacterEditorSkinsPanel.c (UI.CharacterEditorSkinsPanel.<LoadSkinAfterReset>d__29$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6004AE3")]
		[Address(RVA = "0x5BD8570", Offset = "0x5BD7570", VA = "0x5BD8570", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/UI/CharacterEditorSkinsPanel.c (UI.CharacterEditorSkinsPanel.<LoadSkinAfterReset>d__29$$MoveNext): 1 lines keep C-only constructs
			bool bVar1;
			int iVar2;
			CharacterEditorSkinsPanel __this_00;
			DummyHuman pCVar3;
			HumanSetup x;
			CustomSkinSettings pSVar4;
			HumanCustomSkinSettings pSVar5;
			BoolSetting pSVar6;
			bool bVar7;
			object pIVar8;
			CharacterEditorSkinsPanel.d__31<RestoreOriginalSkinSettings> __this_01;

			iVar2 = this.__1__state;
			if (iVar2 == 2) {
				this.__1__state = -1;
				pSVar4 = SettingsManager.CustomSkinSettings;
				if (((pSVar4 == null) ||(pSVar5 = pSVar4.Human, pSVar5 == null)) ||(pSVar6 = pSVar5.GlobalSkinOverridesEnabled, pSVar6 == null)) {
		label_05cd87b2: ;
					throw new NullReferenceException();
				}
				pSVar6.Value = this.originalGlobalEnabled;
				pSVar4 = SettingsManager.CustomSkinSettings;
				if (((pSVar4 == null) ||(pSVar5 = pSVar4.Human, pSVar5 == null)) ||(pSVar6 = pSVar5.SetSpecificSkinsEnabled, pSVar6 == null)) goto label_05cd87b2;
				pSVar6.Value = this.originalSetEnabled;
		label_05cd8756: ;
				bVar7 = false;
			}
			else {
				if (iVar2 == 1) {
					__this_00 = this.__4__this;
					this.__1__state = -1;
					pCVar3 = this.dummyHuman;
					if (pCVar3 == null) goto label_05cd87b2;
					x = pCVar3.Setup;
					bVar7 = ((Object)x == null);
					if (bVar7) {
						if (__this_00 != null) {
							bVar7 = this.originalGlobalEnabled;
							bVar1 = this.originalSetEnabled;
							__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(CharacterEditorSkinsPanel.d__31<RestoreOriginalSkinSettings>));
							__this_01 = new Object();
							__this_01.__1__state = 0;
							__this_01.originalGlobalEnabled = bVar7;
							__this_01.originalSetEnabled = bVar1;
							__this_00.StartCoroutine((IEnumerator)__this_01);
							return false;
						}
						goto label_05cd87b2;
					}
					pCVar3 = this.dummyHuman;
					if (pCVar3 == null) goto label_05cd87b2;
					pCVar3.LoadSkin();
					pIVar8 = (object)Util.YieldForFrames(2);
					this.__2__current = pIVar8;
					this.__1__state = 2;
				}
				else {
					if (iVar2 != 0) goto label_05cd8756;
					this.__1__state = -1;
					pIVar8 = (object)Util.YieldForFrames(2);
					this.__2__current = pIVar8;
					this.__1__state = 1;
				}
				bVar7 = true;
			}
			return bVar7;
		}

		[Token(Token = "0x6004AE5")]
		[Address(RVA = "0x5BD87D0", Offset = "0x5BD77D0", VA = "0x5BD87D0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/UI/CharacterEditorSkinsPanel.c (UI.CharacterEditorSkinsPanel.<LoadSkinAfterReset>d__29$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_UI_CharacterEditorSkinsPanel_LoadSkinAfterReset_d__29_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x20007C4")]
	[CompilerGenerated]
	private sealed class _003CRestoreOriginalSkinSettings_003Ed__31 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002711")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002712")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002713")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public bool originalGlobalEnabled;

		[Token(Token = "0x4002714")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x21")]
		public bool originalSetEnabled;

		[Token(Token = "0x17000D10")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004AEA")]
			[Address(RVA = "0x5BD8930", Offset = "0x5BD7930", VA = "0x5BD8930", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/CharacterEditorSkinsPanel.c (UI.CharacterEditorSkinsPanel.<RestoreOriginalSkinSettings>d__31$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000D11")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004AEC")]
			[Address(RVA = "0x5BD8980", Offset = "0x5BD7980", VA = "0x5BD8980", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/CharacterEditorSkinsPanel.c (UI.CharacterEditorSkinsPanel.<RestoreOriginalSkinSettings>d__31$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6004AE7")]
		[Address(RVA = "0x5BD7910", Offset = "0x5BD6910", VA = "0x5BD7910")]
		[DebuggerHidden]
		public _003CRestoreOriginalSkinSettings_003Ed__31(int _003C_003E1__state)
		{
			// Lifted from source/cpp/UI/CharacterEditorSkinsPanel.c (UI.CharacterEditorSkinsPanel.<RestoreOriginalSkinSettings>d__31$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6004AE8")]
		[Address(RVA = "0x5BD8820", Offset = "0x5BD7820", VA = "0x5BD8820", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/UI/CharacterEditorSkinsPanel.c (UI.CharacterEditorSkinsPanel.<RestoreOriginalSkinSettings>d__31$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6004AE9")]
		[Address(RVA = "0x5BD8830", Offset = "0x5BD7830", VA = "0x5BD8830", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/UI/CharacterEditorSkinsPanel.c (UI.CharacterEditorSkinsPanel.<RestoreOriginalSkinSettings>d__31$$MoveNext): clean
			int iVar1;
			CustomSkinSettings pSVar2;
			HumanCustomSkinSettings pSVar3;
			BoolSetting pSVar4;

			iVar1 = this.__1__state;
			if (iVar1 == 0) {
				this.__1__state = -1;
				this.__2__current = null;
				this.__1__state = 1;
			}
			else if (iVar1 == 1) {
				this.__1__state = -1;
				pSVar2 = SettingsManager.CustomSkinSettings;
				if (((pSVar2 != null) &&(pSVar3 = pSVar2.Human, pSVar3 != null)) &&(pSVar4 = pSVar3.GlobalSkinOverridesEnabled, pSVar4 != null)) {
					pSVar4.Value = this.originalGlobalEnabled;
					pSVar2 = SettingsManager.CustomSkinSettings;
					if (((pSVar2 != null) &&(pSVar3 = pSVar2.Human, pSVar3 != null)) &&(pSVar4 = pSVar3.SetSpecificSkinsEnabled, pSVar4 != null)) {
						pSVar4.Value = this.originalSetEnabled;
						goto label_05cd8918;
					}
				}
				throw new NullReferenceException();
			}
		label_05cd8918: ;
			return iVar1 == 0;
		}

		[Token(Token = "0x6004AEB")]
		[Address(RVA = "0x5BD8940", Offset = "0x5BD7940", VA = "0x5BD8940", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/UI/CharacterEditorSkinsPanel.c (UI.CharacterEditorSkinsPanel.<RestoreOriginalSkinSettings>d__31$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_UI_CharacterEditorSkinsPanel_RestoreOriginalSkinSettings_d__31_System_Collections_IEnumerator_Re);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x40026F8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private CharacterEditorMenu _menu;

	[Token(Token = "0x40026F9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private BoolSetting _globalSkinPreview;

	[Token(Token = "0x40026FA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private BoolSetting _customSkinPreview;

	[Token(Token = "0x40026FB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static bool _persistentGlobalSkinPreview;

	[Token(Token = "0x40026FC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1")]
	private static bool _persistentCustomSkinPreview;

	[Token(Token = "0x40026FD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2")]
	private static bool _hasInitializedPersistentStates;

	[Token(Token = "0x40026FE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private bool _isRebuildingPanel;

	[Token(Token = "0x40026FF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private IntSetting _globalSetDropdownSetting;

	[Token(Token = "0x17000D04")]
	protected override string Title
	{
		[Token(Token = "0x6004ABC")]
		[Address(RVA = "0x5BD5C20", Offset = "0x5BD4C20", VA = "0x5BD5C20", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorSkinsPanel.c (UI.CharacterEditorSkinsPanel$$get_Title): clean
			String pSVar1;

			pSVar1 = UIManager.GetLocale("SettingsPopup", "Top", "SkinsButton", "", "");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000D05")]
	protected override float Width
	{
		[Token(Token = "0x6004ABD")]
		[Address(RVA = "0x5BD5CC0", Offset = "0x5BD4CC0", VA = "0x5BD5CC0", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorSkinsPanel.c (UI.CharacterEditorSkinsPanel$$get_Width): clean
			return 330.0;
		}
	}

	[Token(Token = "0x17000D06")]
	protected override float Height
	{
		[Token(Token = "0x6004ABE")]
		[Address(RVA = "0x5BD5CD0", Offset = "0x5BD4CD0", VA = "0x5BD5CD0", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorSkinsPanel.c (UI.CharacterEditorSkinsPanel$$get_Height): clean
			return 310.0;
		}
	}

	[Token(Token = "0x17000D07")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004ABF")]
		[Address(RVA = "0x5BD5CE0", Offset = "0x5BD4CE0", VA = "0x5BD5CE0", Slot = "11")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorSkinsPanel.c (UI.CharacterEditorSkinsPanel$$get_VerticalSpacing): clean
			return 20.0;
		}
	}

	[Token(Token = "0x17000D08")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004AC0")]
		[Address(RVA = "0x5BD5CF0", Offset = "0x5BD4CF0", VA = "0x5BD5CF0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorSkinsPanel.c (UI.CharacterEditorSkinsPanel$$get_HorizontalPadding): clean
			return 0x14;
		}
	}

	[Token(Token = "0x17000D09")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004AC1")]
		[Address(RVA = "0x5BD5D00", Offset = "0x5BD4D00", VA = "0x5BD5D00", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorSkinsPanel.c (UI.CharacterEditorSkinsPanel$$get_VerticalPadding): clean
			return 0x14;
		}
	}

	[Token(Token = "0x6004AC2")]
	[Address(RVA = "0x5BD5D10", Offset = "0x5BD4D10", VA = "0x5BD5D10")]
	public static bool GetPersistentGlobalPreview()
	{
		// Lifted from source/cpp/UI/CharacterEditorSkinsPanel.c (UI.CharacterEditorSkinsPanel$$GetPersistentGlobalPreview): clean
		return CharacterEditorSkinsPanel._persistentGlobalSkinPreview;
	}

	[Token(Token = "0x6004AC3")]
	[Address(RVA = "0x5BD5D50", Offset = "0x5BD4D50", VA = "0x5BD5D50")]
	public static bool GetPersistentCustomPreview()
	{
		// Lifted from source/cpp/UI/CharacterEditorSkinsPanel.c (UI.CharacterEditorSkinsPanel$$GetPersistentCustomPreview): clean
		return CharacterEditorSkinsPanel._persistentCustomSkinPreview;
	}

	[Token(Token = "0x6004AC4")]
	[Address(RVA = "0x5BCFBA0", Offset = "0x5BCEBA0", VA = "0x5BCFBA0")]
	public static void ResetSkinPreviewToggles()
	{
		// Lifted from source/cpp/UI/CharacterEditorSkinsPanel.c (UI.CharacterEditorSkinsPanel$$ResetSkinPreviewToggles): clean

		CharacterEditorSkinsPanel._persistentGlobalSkinPreview = false;
		CharacterEditorSkinsPanel._persistentCustomSkinPreview = false;
		return;
	}

	[Token(Token = "0x6004AC5")]
	[Address(RVA = "0x5BD5D90", Offset = "0x5BD4D90", VA = "0x5BD5D90", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/CharacterEditorSkinsPanel.c (UI.CharacterEditorSkinsPanel$$Setup): 14 lines keep C-only constructs
		BoolSetting* targetAddress;
		BoolSetting* targetAddress_00;
		byte bVar1;
		CharacterEditorMenu pUVar3;
		bool bVar4;
		int defaultValue;
		BoolSetting pSVar5;
		String pSVar6;
		MethodInfo __this_00;
		String pSVar7;
		UnityAction pUVar8;
		String[] options;
		IntSetting pSVar9;
		GameObject pUVar10;
		Transform pUVar11;
		GameObject __this_01;
		Text __this_02;
		Text __this_03;
		LayoutElement x;
		LayoutElement x_00;
		CharacterEditorSkinsPanel.d__30<ApplySkinPreviewAfterInitialSetup> __this_04;
		CharacterEditorMenu pUVar12;
		CharacterEditorSkinsPanel __this_05;
		MethodInfo method_00;
		MethodInfo pMVar13;

		this.Setup(parent);
		if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
			pUVar12 = (CharacterEditorMenu)UIManager.CurrentMenu;
			if (pUVar12 != null) goto label_05cd5f44;
	label_05cd5fbf: ;
			this._menu = null;
		}
		else {
			pUVar12 = (CharacterEditorMenu)UIManager.CurrentMenu;
			if (pUVar12 == null) goto label_05cd5fbf;
	label_05cd5f44: ;
			pUVar3 = typeof(CharacterEditorMenu);
			bVar1 = (typeof(CharacterEditorMenu)._2).typeHierarchyDepth;
			if (((pUVar12.klass._2).typeHierarchyDepth < bVar1) ||((pUVar12.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(CharacterEditorMenu) )) {
	label_05cd6750: ;
				throw new InvalidCastException();
			}
			this._menu = pUVar12;
			if (((pUVar12.klass._2).typeHierarchyDepth < bVar1) ||((pUVar12.klass._2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass)pUVar3)) goto label_05cd6750;
		}
		this._isRebuildingPanel = true;
		if (CharacterEditorSkinsPanel._hasInitializedPersistentStates == false) {
			CharacterEditorSkinsPanel._persistentGlobalSkinPreview = false;
			CharacterEditorSkinsPanel._persistentCustomSkinPreview = false;
			CharacterEditorSkinsPanel._hasInitializedPersistentStates = true;
			bVar4 = false;
		}
		else {
			bVar4 = CharacterEditorSkinsPanel._persistentGlobalSkinPreview;
		}
		pSVar5 = new BoolSetting(bVar4);
		targetAddress = &this._globalSkinPreview;
		this._globalSkinPreview = pSVar5;
		bVar4 = CharacterEditorSkinsPanel._persistentCustomSkinPreview;
		pSVar5 = new BoolSetting(bVar4);
		targetAddress_00 = &this._customSkinPreview;
		this._customSkinPreview = pSVar5;
		pSVar6 = this.get_ThemePanel();
		__this_00 = new ElementStyle(0x18, 95.0, 20.0, pSVar6);
		pUVar11 = this.BottomBar;
		pSVar6 = UIManager.GetLocaleCommon("Edit");
		pMVar13 = (MethodInfo *)"";
		pSVar7 = UIManager.GetLocale("CharacterPopup", "General", "Character", "", "");
		pSVar6 = GisketchArabicText.Join(pSVar6, " ", pSVar7);
		pUVar8 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_CharacterEditorSkinsPanel_Setup_b__23_0);
		ElementFactory.CreateTextButton(pUVar11, (ElementStyle)__this_00, pSVar6, 0.0, pUVar8);
		__this_05 = (CharacterEditorSkinsPanel)this.BottomBar;
		pSVar6 = UIManager.GetLocaleCommon("Edit");
		method_00 = (MethodInfo *)"";
		pSVar7 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "Global", "", "");
		pSVar6 = GisketchArabicText.Join(pSVar6, " ", pSVar7);
		pUVar8 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_CharacterEditorSkinsPanel_Setup_b__23_1);
		ElementFactory.CreateTextButton((Transform)__this_05, (ElementStyle)__this_00, pSVar6, 0.0, pUVar8);
		options = __this_05.GetFilteredGlobalSetNames();
		defaultValue = __this_05.GetFilteredGlobalSetIndex();
		pSVar9 = new IntSetting(defaultValue, -0x80000000, 0x7fffffff);
		this._globalSetDropdownSetting = pSVar9;
		pUVar11 = this.SinglePanel;
		pSVar9 = this._globalSetDropdownSetting;
		pSVar6 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "Global", "", "");
		pUVar8 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_CharacterEditorSkinsPanel_Setup_b__23_2);
		pUVar10 = ElementFactory.CreateDropdownSetting(pUVar11, (ElementStyle)__this_00, (BaseSetting)pSVar9, pSVar6, options, "", 160.0, 40.0, 180.0, (Nullable<float>)0x0, pUVar8, null, null);
		if (((pUVar10 == null) ||(pUVar11 = pUVar10.transform, pUVar11 == null)) ||(pUVar11 = pUVar11.Find("Label"), pUVar11 == null)) {
	label_05cd674b: ;
			throw new NullReferenceException();
		}
		pUVar11.GetComponent<Text>();
		pUVar11 = this.SinglePanel;
		pSVar5 = this._globalSkinPreview;
		pSVar6 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "GlobalSkins", "", "");
		pUVar8 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_CharacterEditorSkinsPanel_Setup_b__23_3);
		pUVar10 = ElementFactory.CreateToggleSetting(pUVar11, (ElementStyle)__this_00, (BaseSetting)pSVar5, pSVar6, "", 30.0, 30.0, pUVar8);
		pUVar11 = this.SinglePanel;
		pSVar5 = this._customSkinPreview;
		pSVar6 = UIManager.GetLocale("SettingsPopup", "Skins.Human", "CharacterSkins", "", "");
		pUVar8 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_CharacterEditorSkinsPanel_Setup_b__23_4);
		__this_01 = ElementFactory.CreateToggleSetting(pUVar11, (ElementStyle)__this_00, (BaseSetting)pSVar5, pSVar6, "", 30.0, 30.0, pUVar8);
		if (((((pUVar10 == null) ||(pUVar11 = pUVar10.transform, pUVar11 == null)) ||((pUVar11 = pUVar11.Find("Label"), pUVar11 == null ||((__this_02 = pUVar11.GetComponent<Text>(), __this_01 == null ||(pUVar11 = __this_01.transform, pUVar11 == null)))))) ||(pUVar11 = pUVar11.Find("Label"), pUVar11 == null)) ||((__this_03 = pUVar11.GetComponent<Text>(), __this_02 == null ||(__this_02.horizontalOverflow = 1, __this_03 == null)))) goto label_05cd674b;
		__this_03.horizontalOverflow = 1;
		__this_02.verticalOverflow = 1;
		__this_03.verticalOverflow = 1;
		pUVar11 = pUVar10.transform;
		if ((pUVar11 == null) ||(pUVar11 = pUVar11.Find("Label"), pUVar11 == null)) goto label_05cd674b;
		x = pUVar11.GetComponent<LayoutElement>();
		pUVar11 = __this_01.transform;
		if ((pUVar11 == null) ||(pUVar11 = pUVar11.Find("Label"), pUVar11 == null)) goto label_05cd674b;
		x_00 = pUVar11.GetComponent<LayoutElement>();
		bVar4 = ((Object)x != null);
		if (bVar4) {
			if (x == null) goto label_05cd674b;
			x.set_preferredWidth(210.0);
		}
		bVar4 = ((Object)x_00 != null);
		if (bVar4) {
			if (x_00 == null) goto label_05cd674b;
			x_00.set_preferredWidth(210.0);
		}
		pSVar5 = *targetAddress;
		if (pSVar5 == null) goto label_05cd674b;
		if (pSVar5._value == false) {
			pSVar5 = *targetAddress_00;
			if (pSVar5 == null) goto label_05cd674b;
			if (pSVar5._value == false) goto label_05cd6734;
		}
		__this_04 = il2cpp_codegen_object_new((Il2CppClass)typeof(CharacterEditorSkinsPanel.d__30<ApplySkinPreviewAfterInitialSetup>));
		__this_04 = new Object();
		__this_04.__1__state = 0;
		__this_04.__4__this = this;
		this.StartCoroutine((IEnumerator)__this_04);
	label_05cd6734: ;
		this._isRebuildingPanel = false;
		return;
	}

	[Token(Token = "0x6004AC6")]
	[Address(RVA = "0x5BD6760", Offset = "0x5BD5760", VA = "0x5BD6760")]
	private string[] GetFilteredGlobalSetNames()
	{
		// Lifted from source/cpp/UI/CharacterEditorSkinsPanel.c (UI.CharacterEditorSkinsPanel$$GetFilteredGlobalSetNames): 2 lines keep C-only constructs
		int piVar1;
		CustomSkinSettings pSVar2;
		HumanCustomSkinSettings __this_00;
		String item;
		String[] pSVar3;
		bool bVar5;
		uint uVar6;
		String[] pSVar7;
		List<string> __this_01;
		uint uVar8;
		long lVar9;

		pSVar2 = SettingsManager.CustomSkinSettings;
		if ((pSVar2 != null) &&(__this_00 = pSVar2.Human, __this_00 != null)) {
			pSVar7 = __this_00.GetSetNames();
			__this_01 = new List<string>();
			if (pSVar7 == null) goto label_05cd6963;
			uVar6 = (uint)pSVar7.Length;
			if (__this_01 == null) {
				if ((int)uVar6 < 1) goto label_05cd6963;
				lVar9 = 0;
				do {
					if (uVar6 <= (uint)lVar9) goto label_05cd6968;
					if (pSVar7[lVar9] == null) goto label_05cd6963;
					bVar5 = (pSVar7[lVar9]).StartsWith("Custom Set:");
					if (!bVar5) {
						if ((uint)lVar9 < (uint)pSVar7.Length) goto label_05cd6963;
						goto label_05cd6968;
					}
					uVar6 = (uint)pSVar7.Length;
					lVar9 = lVar9 + 1;
				} while ((int)lVar9 < (int)uVar6);
			}
			else {
				if ((int)uVar6 < 1) goto label_05cd693d;
				uVar8 = 0;
				do {
					if (uVar6 <= uVar8) {
	label_05cd6968: ;
						throw new IndexOutOfRangeException();
					}
					if (pSVar7[(int)uVar8] == null) goto label_05cd6963;
					bVar5 = (pSVar7[(int)uVar8]).StartsWith("Custom Set:") ;
					if (!bVar5) {
						if ((uint)pSVar7.Length <= uVar8) goto label_05cd6968;
						item = pSVar7[(int)uVar8];
						piVar1 = &__this_01._version;
						*piVar1 = *piVar1 + 1;
						pSVar3 = __this_01._items;
						if (pSVar3 == null) goto label_05cd6963;
						uVar6 = __this_01._size;
						if (uVar6 < (uint)pSVar3.Length) {
							__this_01._size = uVar6 + 1;
							pSVar3[(int)uVar6] = item;
						}
						else {
							__this_01.AddWithResize((object)item);
						}
					}
					uVar8 = uVar8 + 1;
					uVar6 = (uint)pSVar7.Length;
				} while ((int)uVar8 < (int)uVar6);
			}
			if (__this_01 != null) {
	label_05cd693d: ;
				pSVar7 = (String[])__this_01.ToArray();
				return pSVar7;
			}
		}
	label_05cd6963: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004AC7")]
	[Address(RVA = "0x5BD6970", Offset = "0x5BD5970", VA = "0x5BD6970")]
	private int GetFilteredGlobalSetIndex()
	{
		// Lifted from source/cpp/UI/CharacterEditorSkinsPanel.c (UI.CharacterEditorSkinsPanel$$GetFilteredGlobalSetIndex): 2 lines keep C-only constructs
		int piVar1;
		CustomSkinSettings pSVar2;
		HumanCustomSkinSettings __this_00;
		IntSetting pSVar3;
		Int32[] pSVar4;
		bool bVar6;
		uint uVar7;
		int iVar8;
		String[] pSVar9;
		List<int> __this_01;
		uint item;
		long lVar10;

		pSVar2 = SettingsManager.CustomSkinSettings;
		if (((pSVar2 != null) &&(__this_00 = pSVar2.Human, __this_00 != null)) &&(pSVar3 = __this_00.LastGlobalPresetIndex, pSVar3 != null)) {
			iVar8 = pSVar3._value;
			pSVar9 = __this_00.GetSetNames();
			__this_01 = new List<int>();
			if (pSVar9 == null) goto label_05cd6b77;
			uVar7 = (uint)pSVar9.Length;
			if (__this_01 == null) {
				if ((int)uVar7 < 1) goto label_05cd6b77;
				lVar10 = 0;
				do {
					if (uVar7 <= (uint)lVar10) goto label_05cd6b7c;
					if (pSVar9[lVar10] == null) goto label_05cd6b77;
					bVar6 = (pSVar9[lVar10]).StartsWith("Custom Set:");
					if (!bVar6) goto label_05cd6b77;
					uVar7 = (uint)pSVar9.Length;
					lVar10 = lVar10 + 1;
				} while ((int)lVar10 < (int)uVar7);
			}
			else {
				if ((int)uVar7 < 1) goto label_05cd6b4c;
				item = 0;
				do {
					if (uVar7 <= item) {
	label_05cd6b7c: ;
						throw new IndexOutOfRangeException();
					}
					if (pSVar9[(int)item] == null) goto label_05cd6b77;
					bVar6 = (pSVar9[(int)item]).StartsWith("Custom Set:");
					if (!bVar6) {
						piVar1 = &__this_01._version;
						*piVar1 = *piVar1 + 1;
						pSVar4 = __this_01._items;
						if (pSVar4 == null) goto label_05cd6b77;
						uVar7 = __this_01._size;
						if (uVar7 < (uint)pSVar4.Length) {
							__this_01._size = uVar7 + 1;
							pSVar4[(int)uVar7] = item;
						}
						else {
							__this_01.AddWithResize(item);
						}
					}
					item = item + 1;
					uVar7 = (uint)pSVar9.Length;
				} while ((int)item < (int)uVar7);
			}
			if (__this_01 != null) {
	label_05cd6b4c: ;
				iVar8 = __this_01.IndexOf(iVar8);
				if (iVar8 < 1) {
					iVar8 = 0;
				}
				return iVar8;
			}
		}
	label_05cd6b77: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004AC8")]
	[Address(RVA = "0x5BD6CD0", Offset = "0x5BD5CD0", VA = "0x5BD6CD0")]
	private void OnGlobalSkinSetSelected(int filteredIndex)
	{
		// Lifted from source/cpp/UI/CharacterEditorSkinsPanel.c (UI.CharacterEditorSkinsPanel$$OnGlobalSkinSetSelected): 5 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		uint uVar3;
		CustomSkinSettings pSVar4;
		HumanCustomSkinSettings pSVar5;
		Int32[] pSVar6;
		IntSetting pSVar7;
		CharacterEditorMenu pUVar8;
		ConfirmPopup x;
		GlobalSkinEditPopup __this_00;
		bool bVar9;
		uint uVar10;
		String[] pSVar11;
		List<int> __this_01;
		CharacterEditorSkinsPanel.d__27<ApplySkinPreviewAfterGlobalSetChange> __this_02;
		CharacterEditorMenu x_00;
		uint item;
		long lVar12;

		pSVar4 = SettingsManager.CustomSkinSettings;
		if ((pSVar4 == null) ||(pSVar5 = pSVar4.Human, pSVar5 == null)) goto label_05cd7160;
		pSVar11 = pSVar5.GetSetNames();
		__this_01 = new List<int>();
		if (pSVar11 == null) goto label_05cd7160;
		uVar10 = (uint)pSVar11.Length;
		if (__this_01 == null) {
			if ((int)uVar10 < 1) {
				if (filteredIndex < 0) {
					return;
				}
				goto label_05cd7160;
			}
			lVar12 = 0;
			do {
				if (uVar10 <= (uint)lVar12) goto label_05cd7165;
				if ((pSVar11[lVar12] == null) ||(bVar9 = (pSVar11[lVar12]).StartsWith("Custom Set:"), !bVar9)) goto label_05cd7160;
				uVar10 = (uint)pSVar11.Length;
				lVar12 = lVar12 + 1;
			} while ((int)lVar12 < (int)uVar10);
	label_05cd6f02: ;
			if (filteredIndex < 0) {
				return;
			}
			if (__this_01 == null) goto label_05cd7160;
		}
		else {
			if (0 < (int)uVar10) {
				item = 0;
				do {
					if (uVar10 <= item) goto label_05cd7165;
					if (pSVar11[(int)item] == null) goto label_05cd7160;
					bVar9 = (pSVar11[(int)item]).StartsWith("Custom Set:") ;
					if (!bVar9) {
						piVar1 = &__this_01._version;
						*piVar1 = *piVar1 + 1;
						pSVar6 = __this_01._items;
						if (pSVar6 == null) goto label_05cd7160;
						uVar10 = __this_01._size;
						if (uVar10 < (uint)pSVar6.Length) {
							__this_01._size = uVar10 + 1;
							pSVar6[(int)uVar10] = item;
						}
						else {
							__this_01.AddWithResize(item);
						}
					}
					item = item + 1;
					uVar10 = (uint)pSVar11.Length;
				} while ((int)item < (int)uVar10);
				goto label_05cd6f02;
			}
			if (filteredIndex < 0) {
				return;
			}
		}
		if (__this_01._size <= filteredIndex) {
			return;
		}
		uVar10 = __this_01.get_Item(filteredIndex);
		pSVar4 = SettingsManager.CustomSkinSettings;
		if (((pSVar4 == null) ||(pSVar5 = pSVar4.Human, pSVar5 == null)) ||(pSVar7 = pSVar5.SelectedSetIndex, pSVar7 == null)) goto label_05cd7160;
		pSVar7.Value = uVar10;
		pSVar4 = SettingsManager.CustomSkinSettings;
		if (((pSVar4 == null) ||(pSVar5 = pSVar4.Human, pSVar5 == null)) ||(pSVar7 = pSVar5.LastGlobalPresetIndex, pSVar7 == null)) goto label_05cd7160;
		pSVar7.Value = uVar10;
		if ((uint)pSVar11.Length <= uVar10) {
	label_05cd7165: ;
			throw new IndexOutOfRangeException();
		}
		pUVar8 = this._menu;
		if (pUVar8 == null) {
	label_05cd7000: ;
			x_00 = null;
			uVar3 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			bVar2 = (typeof(CharacterEditorHumanMenu)._2).typeHierarchyDepth;
			if ((pUVar8.klass._2).typeHierarchyDepth < bVar2) goto label_05cd7000;
			x_00 = null;
			if ((pUVar8.klass._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(CharacterEditorHumanMenu)) {
				x_00 = pUVar8;
			}
			uVar3 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		bVar9 = ((Object)x_00 != null);
		if (bVar9) {
			if (x_00 == null) {
	label_05cd7160: ;
				throw new NullReferenceException();
			}
			x = (*(ulong)((sbyte)x_00 + 0xd8));
			bVar9 = ((Object)x != null);
			if (bVar9) {
				__this_00 = (GlobalSkinEditPopup)(*(ulong)((sbyte)x_00 + 0xd8));
				if (__this_00 == null) goto label_05cd7160;
				if (__this_00.IsActive != false) {
					if (__this_00._hasBackup != false) {
						__this_00.RestoreBackup();
					}
					__this_00.Hide() ;
				}
			}
		}
		if ((CharacterEditorSkinsPanel._persistentGlobalSkinPreview == false) &&(CharacterEditorSkinsPanel._persistentCustomSkinPreview == false)) {
			return;
		}
		__this_02 = il2cpp_codegen_object_new((Il2CppClass)typeof(CharacterEditorSkinsPanel.d__27<ApplySkinPreviewAfterGlobalSetChange>));
		__this_02 = new Object();
		__this_02.__1__state = 0;
		__this_02.__4__this = this;
		this.StartCoroutine((IEnumerator)__this_02);
		return;
	}

	[Token(Token = "0x6004AC9")]
	[Address(RVA = "0x5BD71A0", Offset = "0x5BD61A0", VA = "0x5BD71A0")]
	[IteratorStateMachine(typeof(_003CApplySkinPreviewAfterGlobalSetChange_003Ed__27))]
	private IEnumerator ApplySkinPreviewAfterGlobalSetChange()
	{
		// Lifted from source/cpp/UI/CharacterEditorSkinsPanel.c (UI.CharacterEditorSkinsPanel$$ApplySkinPreviewAfterGlobalSetChange): 1 lines keep C-only constructs
		CharacterEditorSkinsPanel.d__27<ApplySkinPreviewAfterGlobalSetChange> __this_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CharacterEditorSkinsPanel.d__27<ApplySkinPreviewAfterGlobalSetChange>));
		__this_00 = new Object();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6004ACA")]
	[Address(RVA = "0x5BD7230", Offset = "0x5BD6230", VA = "0x5BD7230")]
	private void OnSkinPreviewToggle()
	{
		// Lifted from source/cpp/UI/CharacterEditorSkinsPanel.c (UI.CharacterEditorSkinsPanel$$OnSkinPreviewToggle): 10 lines keep C-only constructs
		byte bVar1;
		bool bVar2;
		bool bVar3;
		BoolSetting pSVar4;
		BaseGameManager pGVar6;
		DummyHuman __this_00;
		CustomSkinSettings pSVar7;
		HumanCustomSkinSettings pSVar8;
		BoolSetting pSVar9;
		CharacterEditorMenu pUVar10;
		HumanCustomSettings pSVar11;
		Settings_SetSettingsContainer_HumanCustomSet__o __this_01;
		ExternalLinkPopup pUVar12;
		HumanSetup __this_02;
		bool bVar13;
		HumanCustomSet customSet;
		CharacterEditorSkinsPanel.d__29<LoadSkinAfterReset> __this_03;
		CharacterEditorSkinsPanel.d__31<RestoreOriginalSkinSettings> __this_04;
		CharacterEditorMenu x;

		if (this._isRebuildingPanel != false) {
			return;
		}
		pSVar4 = this._globalSkinPreview;
		if (pSVar4 == null) {
			throw new NullReferenceException();
		}
		bVar13 = pSVar4._value;
		CharacterEditorSkinsPanel._persistentGlobalSkinPreview = bVar13;
		pSVar4 = this._customSkinPreview;
		if (pSVar4 == null) {
			throw new NullReferenceException();
		}
		CharacterEditorSkinsPanel._persistentCustomSkinPreview = pSVar4._value;
		pGVar6 = SceneLoader.CurrentGameManager;
		if (pGVar6 == null) {
			return;
		}
		bVar1 = (typeof(CharacterEditorGameManager)._2).typeHierarchyDepth;
		if (((pGVar6.klass._2).typeHierarchyDepth < bVar1) ||((pGVar6.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CharacterEditorGameManager))) {
			throw new InvalidCastException();
		}
		__this_00 = (DummyHuman)(*(ulong)((sbyte)pGVar6 + 0x38));
		if (__this_00 == null) {
			return;
		}
		bVar1 = (typeof(DummyHuman)._2).typeHierarchyDepth;
		if ((__this_00.klass._2).typeHierarchyDepth < bVar1) {
			return;
		}
		if ((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(DummyHuman)) {
			return;
		}
		pSVar7 = SettingsManager.CustomSkinSettings;
		if (pSVar7 == null) {
			throw new NullReferenceException();
		}
		pSVar8 = pSVar7.Human;
		if (pSVar8 == null) {
			throw new NullReferenceException();
		}
		pSVar4 = pSVar8.GlobalSkinOverridesEnabled;
		if (pSVar4 == null) {
			throw new NullReferenceException();
		}
		pSVar9 = pSVar8.SetSpecificSkinsEnabled;
		if (pSVar9 == null) {
			throw new NullReferenceException();
		}
		bVar2 = ((Settings_TypedSetting_bool__Fields)&pSVar4.fields)._value;
		bVar3 = pSVar9._value;
		pSVar4.Value = bVar13;
		pSVar7 = SettingsManager.CustomSkinSettings;
		if (pSVar7 == null) {
			throw new NullReferenceException();
		}
		pSVar8 = pSVar7.Human;
		if (pSVar8 == null) {
			throw new NullReferenceException();
		}
		pSVar4 = this._customSkinPreview;
		if (pSVar4 == null) {
			throw new NullReferenceException();
		}
		pSVar9 = pSVar8.SetSpecificSkinsEnabled;
		if (pSVar9 == null) {
			throw new NullReferenceException();
		}
		pSVar9.Value = pSVar4._value;
		pUVar10 = this._menu;
		if (pUVar10 != null) {
			bVar1 = (typeof(CharacterEditorHumanMenu)._2).typeHierarchyDepth;
			if (bVar1 <= (pUVar10.klass._2).typeHierarchyDepth) {
				x = null;
				if ((pUVar10.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CharacterEditorHumanMenu)) {
					x = pUVar10;
				}
				goto label_05cd74b9;
			}
		}
		x = null;
	label_05cd74b9: ;
		bVar13 = ((Object)x != null);
		if (bVar13) {
			pSVar11 = SettingsManager.HumanCustomSettings;
			if (pSVar11 == null) {
				throw new NullReferenceException();
			}
			__this_01 = pSVar11.CustomSets;
			if (__this_01 == null) {
				throw new NullReferenceException();
			}
			customSet = (HumanCustomSet)__this_01.GetSelectedSet();
			if (customSet != null) {
				bVar1 = (typeof(HumanCustomSet)._2).typeHierarchyDepth;
				if (((customSet.klass._2).typeHierarchyDepth < bVar1) ||((customSet.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(HumanCustomSet))) {
					throw new InvalidCastException();
				}
			}
			if (x == null) {
				throw new NullReferenceException();
			}
			pUVar12 = (*(ulong)((sbyte)x + 0xe0));
			if (pUVar12 == null) {
				throw new NullReferenceException();
			}
			__this_02 = __this_00.Setup;
			if (__this_02 == null) {
				throw new NullReferenceException();
			}
			__this_02.Load(customSet, *(int)((long)&pUVar12.m_CancellationTokenSource + 4), false);
			__this_03 = new CharacterEditorSkinsPanel.d__29<LoadSkinAfterReset>();
			__this_03.__1__state = 0;
			__this_03.__4__this = this;
			__this_03.dummyHuman = __this_00;
			__this_03.originalGlobalEnabled = bVar2;
			__this_03.originalSetEnabled = bVar3;
			this.StartCoroutine((IEnumerator)__this_03);
		}
		else {
			__this_00.LoadSkin();
			__this_04 = il2cpp_codegen_object_new((Il2CppClass)typeof(CharacterEditorSkinsPanel.d__31<RestoreOriginalSkinSettings>));
			__this_04 = new Object();
			__this_04.__1__state = 0;
			__this_04.originalGlobalEnabled = bVar2;
			__this_04.originalSetEnabled = bVar3;
			this.StartCoroutine((IEnumerator)__this_04);
		}
		return;
	}

	[Token(Token = "0x6004ACB")]
	[Address(RVA = "0x5BD77E0", Offset = "0x5BD67E0", VA = "0x5BD77E0")]
	[IteratorStateMachine(typeof(_003CLoadSkinAfterReset_003Ed__29))]
	private IEnumerator LoadSkinAfterReset(DummyHuman dummyHuman, bool originalGlobalEnabled, bool originalSetEnabled)
	{
		// Lifted from source/cpp/UI/CharacterEditorSkinsPanel.c (UI.CharacterEditorSkinsPanel$$LoadSkinAfterReset): clean
		CharacterEditorSkinsPanel.d__29<LoadSkinAfterReset> __this_00;

		__this_00 = new CharacterEditorSkinsPanel.d__29<LoadSkinAfterReset>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.dummyHuman = dummyHuman;
		__this_00.originalGlobalEnabled = originalGlobalEnabled;
		__this_00.originalSetEnabled = originalSetEnabled;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6004ACC")]
	[Address(RVA = "0x5BD6C60", Offset = "0x5BD5C60", VA = "0x5BD6C60")]
	[IteratorStateMachine(typeof(_003CApplySkinPreviewAfterInitialSetup_003Ed__30))]
	private IEnumerator ApplySkinPreviewAfterInitialSetup()
	{
		// Lifted from source/cpp/UI/CharacterEditorSkinsPanel.c (UI.CharacterEditorSkinsPanel$$ApplySkinPreviewAfterInitialSetup): 1 lines keep C-only constructs
		CharacterEditorSkinsPanel.d__30<ApplySkinPreviewAfterInitialSetup> __this_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CharacterEditorSkinsPanel.d__30<ApplySkinPreviewAfterInitialSetup>));
		__this_00 = new Object();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6004ACD")]
	[Address(RVA = "0x5BD7870", Offset = "0x5BD6870", VA = "0x5BD7870")]
	[IteratorStateMachine(typeof(_003CRestoreOriginalSkinSettings_003Ed__31))]
	private IEnumerator RestoreOriginalSkinSettings(bool originalGlobalEnabled, bool originalSetEnabled)
	{
		// Lifted from source/cpp/UI/CharacterEditorSkinsPanel.c (UI.CharacterEditorSkinsPanel$$RestoreOriginalSkinSettings): 1 lines keep C-only constructs
		CharacterEditorSkinsPanel.d__31<RestoreOriginalSkinSettings> __this_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CharacterEditorSkinsPanel.d__31<RestoreOriginalSkinSettings>));
		__this_00 = new Object();
		__this_00.__1__state = 0;
		__this_00.originalGlobalEnabled = originalGlobalEnabled;
		__this_00.originalSetEnabled = originalSetEnabled;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6004ACE")]
	[Address(RVA = "0x5BD7930", Offset = "0x5BD6930", VA = "0x5BD7930")]
	private void OnButtonClick(string name)
	{
		// Lifted from source/cpp/UI/CharacterEditorSkinsPanel.c (UI.CharacterEditorSkinsPanel$$OnButtonClick): 4 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		CharacterEditorMenu pUVar3;
		ConfirmPopup pUVar4;
		List<BasePopup> pSVar5;
		TooltipPopup pUVar6;
		bool bVar7;
		CharacterEditorMenu pUVar8;
		MessagePopup pUVar9;

		bVar7 = (name == "EditCustomSkins");
		if (!bVar7) {
			bVar7 = (name == "EditGlobalSkin");
			if (!bVar7) {
				return;
			}
			pUVar3 = this._menu;
			if (pUVar3 == null) {
	label_05cd7ae3: ;
				pUVar8 = null;
				uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
			}
			else {
				bVar1 = (typeof(CharacterEditorHumanMenu)._2).typeHierarchyDepth;
				if ((pUVar3.klass._2).typeHierarchyDepth < bVar1) goto label_05cd7ae3;
				pUVar8 = null;
				if ((pUVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CharacterEditorHumanMenu)) {
					pUVar8 = pUVar3;
				}
				uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
			}
			if (uVar2 == 0) {
			}
			bVar7 = ((Object)pUVar8 != null);
			if (!bVar7) {
				return;
			}
			if (pUVar8 != null) {
				pUVar4 = (*(ulong)((sbyte)pUVar8 + 0xd8));
				bVar7 = ((Object)pUVar4 != null);
				if (!bVar7) {
					return;
				}
				pUVar9 = (*(ulong)((sbyte)pUVar8 + 0xd0));
				if (pUVar9 == null) goto label_05cd7c2c;
				pUVar9.Hide();
				pSVar5 = (*(ulong)((sbyte)pUVar8 + 0xc0));
				if (pSVar5 == null) goto label_05cd7c2c;
				pSVar5.Clear();
				pUVar6 = (*(ulong)((sbyte)pUVar8 + 0xc8));
				if (pUVar6 == null) goto label_05cd7c2c;
				pUVar6.Hide();
				pUVar9 = (MessagePopup)(*(ulong)((sbyte)pUVar8 + 0xd8));
				if (pUVar9 == null) goto label_05cd7c2c;
				goto label_05cd7bb2;
			}
			goto label_05cd7c2c;
		}
		pUVar3 = this._menu;
		if (pUVar3 == null) {
	label_05cd79c3: ;
			pUVar8 = null;
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			bVar1 = (typeof(CharacterEditorHumanMenu)._2).typeHierarchyDepth;
			if ((pUVar3.klass._2).typeHierarchyDepth < bVar1) goto label_05cd79c3;
			pUVar8 = null;
			if ((pUVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CharacterEditorHumanMenu)) {
				pUVar8 = pUVar3;
			}
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		bVar7 = ((Object)pUVar8 != null);
		if (!bVar7) {
			return;
		}
		if (pUVar8 != null) {
			pUVar9 = (*(ulong)((sbyte)pUVar8 + 0xd0));
			bVar7 = ((Object)pUVar9 != null);
			if (!bVar7) {
				return;
			}
			pUVar4 = (*(ulong)((sbyte)pUVar8 + 0xd8));
			if (pUVar4 != null) {
				pUVar4.Hide();
				pSVar5 = (*(ulong)((sbyte)pUVar8 + 0xc0));
				if (pSVar5 != null) {
					pSVar5.Clear();
					pUVar6 = (*(ulong)((sbyte)pUVar8 + 0xc8));
					if (pUVar6 != null) {
						pUVar6.Hide();
						pUVar9 = (*(ulong)((sbyte)pUVar8 + 0xd0));
						if (pUVar9 != null) {
	label_05cd7bb2: ;
							pUVar9.Show();
							return;
						}
					}
				}
			}
		}
	label_05cd7c2c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004ACF")]
	[Address(RVA = "0x5BD7C40", Offset = "0x5BD6C40", VA = "0x5BD7C40")]
	public CharacterEditorSkinsPanel()
	{
		// Lifted from source/cpp/UI/CharacterEditorSkinsPanel.c (UI.CharacterEditorSkinsPanel$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/CharacterEditorSkinsPanel.c.

	// UI.CharacterEditorSkinsPanel$$<Setup>b__23_0: clean
	private void Setup_b__23_0()
	{


		this.OnButtonClick("EditCustomSkins");
		return;
	}

	// UI.CharacterEditorSkinsPanel$$<Setup>b__23_1: clean
	private void Setup_b__23_1()
	{


		this.OnButtonClick("EditGlobalSkin");
		return;
	}

	// UI.CharacterEditorSkinsPanel$$<Setup>b__23_2: clean
	private void Setup_b__23_2()
	{
		IntSetting pSVar1;

		pSVar1 = this._globalSetDropdownSetting;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		this.OnGlobalSkinSetSelected(pSVar1._value);
		return;
	}

	// UI.CharacterEditorSkinsPanel$$<Setup>b__23_3: clean
	private void Setup_b__23_3()
	{
		this.OnSkinPreviewToggle();
		return;
	}

	// UI.CharacterEditorSkinsPanel$$<Setup>b__23_4: clean
	private void Setup_b__23_4()
	{
		this.OnSkinPreviewToggle();
		return;
	}
}
