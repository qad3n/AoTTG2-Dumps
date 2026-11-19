// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterEditorCategoryPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CharacterEditorCategoryPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorCategoryPanel.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using GameManagers;
using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x20007AF")]
internal class CharacterEditorCategoryPanel : HeadedPanel
{
	[Token(Token = "0x20007B0")]
	[CompilerGenerated]
	private sealed class _003CCategoryChangeCaptureCoroutine_003Ed__18 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40026B9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40026BA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40026BB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public bool isHuman;

		[Token(Token = "0x40026BC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public CharacterEditorCategoryPanel _003C_003E4__this;

		[Token(Token = "0x40026BD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool shouldPreserveSkinPreview;

		[Token(Token = "0x40026BE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x31")]
		private bool _003CoriginalGlobalEnabled_003E5__2;

		[Token(Token = "0x40026BF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x32")]
		private bool _003CoriginalSetEnabled_003E5__3;

		[Token(Token = "0x17000CE5")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004A26")]
			[Address(RVA = "0x5BCA6B0", Offset = "0x5BC96B0", VA = "0x5BCA6B0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/CharacterEditorCategoryPanel.c (UI.CharacterEditorCategoryPanel.<CategoryChangeCaptureCoroutine>d__18$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000CE6")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004A28")]
			[Address(RVA = "0x5BCA700", Offset = "0x5BC9700", VA = "0x5BCA700", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/UI/CharacterEditorCategoryPanel.c (UI.CharacterEditorCategoryPanel.<CategoryChangeCaptureCoroutine>d__18$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6004A23")]
		[Address(RVA = "0x5BCA140", Offset = "0x5BC9140", VA = "0x5BCA140")]
		[DebuggerHidden]
		public _003CCategoryChangeCaptureCoroutine_003Ed__18(int _003C_003E1__state)
		{
			// Lifted from source/cpp/UI/CharacterEditorCategoryPanel.c (UI.CharacterEditorCategoryPanel.<CategoryChangeCaptureCoroutine>d__18$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6004A24")]
		[Address(RVA = "0x5BCA230", Offset = "0x5BC9230", VA = "0x5BCA230", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/UI/CharacterEditorCategoryPanel.c (UI.CharacterEditorCategoryPanel.<CategoryChangeCaptureCoroutine>d__18$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6004A25")]
		[Address(RVA = "0x5BCA240", Offset = "0x5BC9240", VA = "0x5BCA240", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/UI/CharacterEditorCategoryPanel.c (UI.CharacterEditorCategoryPanel.<CategoryChangeCaptureCoroutine>d__18$$MoveNext): 4 lines keep C-only constructs
			byte bVar1;
			CharacterEditorCategoryPanel pUVar2;
			StringSetting pSVar3;
			BaseGameManager pGVar4;
			DummyHuman __this_00;
			BoolSetting pSVar5;
			CustomSkinSettings pSVar6;
			HumanCustomSkinSettings pSVar7;
			BoolSetting pSVar8;
			bool bVar9;
			object pIVar10;

			switch(this.__1__state) {
			case 0:
				this.__1__state = -1;
				pIVar10 = (object)Util.WaitForFrames(3);
				this.__2__current = pIVar10;
				this.__1__state = 1;
				return true;
			case 1:
				pUVar2 = this.__4__this;
				this.__1__state = -1;
				bVar9 = this.isHuman;
				CharacterPreviewGenerator.CaptureCurrentCharacterPreview(bVar9);
				if ((pUVar2 != null) &&(pSVar3 = pUVar2._category, pSVar3 != null)) {
					bVar9 = (pSVar3._value == "Human");
					CharacterEditorGameManager.HumanMode = bVar9;
					SceneLoader.LoadScene(4);
					if (this.shouldPreserveSkinPreview == false) {
						return false;
					}
					pIVar10 = (object)Util.WaitForFrames(3);
					this.__2__current = pIVar10;
					this.__1__state = 2;
					return true;
				}
				break;
			case 2:
				this.__1__state = -1;
				pGVar4 = SceneLoader.CurrentGameManager;
				if (pGVar4 == null) {
					return false;
				}
				bVar1 = (typeof(CharacterEditorGameManager)._2).typeHierarchyDepth;
				if (((pGVar4.klass._2).typeHierarchyDepth < bVar1) ||((pGVar4.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CharacterEditorGameManager))) {
					throw new InvalidCastException();
				}
				__this_00 = (DummyHuman)(*(ulong)((sbyte)pGVar4 + 0x38));
				if (__this_00 == null) {
					return false;
				}
				bVar1 = (typeof(DummyHuman)._2).typeHierarchyDepth;
				if ((__this_00.klass._2).typeHierarchyDepth < bVar1) {
					return false;
				}
				if ((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(DummyHuman)) {
					return false;
				}
				pSVar6 = SettingsManager.CustomSkinSettings;
				if (((pSVar6 != null) &&(pSVar7 = pSVar6.Human, pSVar7 != null)) &&(pSVar8 = pSVar7.GlobalSkinOverridesEnabled, pSVar8 != null)) {
					this._originalGlobalEnabled_5__2 =((Settings_TypedSetting_bool__Fields)&pSVar8.fields)._value;
					pSVar5 = pSVar7.SetSpecificSkinsEnabled;
					if (pSVar5 != null) {
						this._originalSetEnabled_5__3 = pSVar5._value;
						pSVar8.Value = CharacterEditorSkinsPanel._persistentGlobalSkinPreview;
						pSVar6 = SettingsManager.CustomSkinSettings;
						if ((pSVar6 != null) &&(pSVar7 = pSVar6.Human, pSVar7 != null)) {
							pSVar8 = pSVar7.SetSpecificSkinsEnabled;
							if (pSVar8 != null) {
								pSVar8.Value = CharacterEditorSkinsPanel._persistentCustomSkinPreview;
								__this_00.LoadSkin();
								pIVar10 = (object)Util.WaitForFrames(2);
								this.__2__current = pIVar10;
								this.__1__state = 3;
								return true;
							}
						}
					}
				}
				break;
			case 3:
				this.__1__state = -1;
				pSVar6 = SettingsManager.CustomSkinSettings;
				if (((pSVar6 != null) &&(pSVar7 = pSVar6.Human, pSVar7 != null)) &&(pSVar8 = pSVar7.GlobalSkinOverridesEnabled, pSVar8 != null)) {
					pSVar8.Value = this._originalGlobalEnabled_5__2;
					pSVar6 = SettingsManager.CustomSkinSettings;
					if (((pSVar6 != null) &&(pSVar7 = pSVar6.Human, pSVar7 != null)) &&(pSVar8 = pSVar7.SetSpecificSkinsEnabled, pSVar8 != null)) {
						pSVar8.Value = this._originalSetEnabled_5__3;
						return false;
					}
				}
				break;
			default: ;
				return false;
			}
			throw new NullReferenceException();
		}

		[Token(Token = "0x6004A27")]
		[Address(RVA = "0x5BCA6C0", Offset = "0x5BC96C0", VA = "0x5BCA6C0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/UI/CharacterEditorCategoryPanel.c (UI.CharacterEditorCategoryPanel.<CategoryChangeCaptureCoroutine>d__18$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_UI_CharacterEditorCategoryPanel_CategoryChangeCaptureCoroutine_d__18_System_Collections_IEnumera);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x40026B7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private StringSetting _category;

	[Token(Token = "0x40026B8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	protected CharacterEditorGameManager _gameManager;

	[Token(Token = "0x17000CDF")]
	protected override string Title
	{
		[Token(Token = "0x6004A16")]
		[Address(RVA = "0x5BC9700", Offset = "0x5BC8700", VA = "0x5BC9700", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorCategoryPanel.c (UI.CharacterEditorCategoryPanel$$get_Title): clean
			String pSVar1;

			pSVar1 = UIManager.GetLocaleCommon("Editor");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000CE0")]
	protected override float Width
	{
		[Token(Token = "0x6004A17")]
		[Address(RVA = "0x5BC9760", Offset = "0x5BC8760", VA = "0x5BC9760", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorCategoryPanel.c (UI.CharacterEditorCategoryPanel$$get_Width): clean
			return 330.0;
		}
	}

	[Token(Token = "0x17000CE1")]
	protected override float Height
	{
		[Token(Token = "0x6004A18")]
		[Address(RVA = "0x5BC9770", Offset = "0x5BC8770", VA = "0x5BC9770", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorCategoryPanel.c (UI.CharacterEditorCategoryPanel$$get_Height): clean
			return 240.0;
		}
	}

	[Token(Token = "0x17000CE2")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6004A19")]
		[Address(RVA = "0x5BC9780", Offset = "0x5BC8780", VA = "0x5BC9780", Slot = "11")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorCategoryPanel.c (UI.CharacterEditorCategoryPanel$$get_VerticalSpacing): clean
			return 20.0;
		}
	}

	[Token(Token = "0x17000CE3")]
	protected override int HorizontalPadding
	{
		[Token(Token = "0x6004A1A")]
		[Address(RVA = "0x5BC9790", Offset = "0x5BC8790", VA = "0x5BC9790", Slot = "10")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorCategoryPanel.c (UI.CharacterEditorCategoryPanel$$get_HorizontalPadding): clean
			return 0x19;
		}
	}

	[Token(Token = "0x17000CE4")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6004A1B")]
		[Address(RVA = "0x5BC97A0", Offset = "0x5BC87A0", VA = "0x5BC97A0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorCategoryPanel.c (UI.CharacterEditorCategoryPanel$$get_VerticalPadding): clean
			return 0x19;
		}
	}

	[Token(Token = "0x6004A1C")]
	[Address(RVA = "0x5BC97B0", Offset = "0x5BC87B0", VA = "0x5BC97B0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/CharacterEditorCategoryPanel.c (UI.CharacterEditorCategoryPanel$$Setup): 4 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		CharacterEditorGameManager pGVar3;
		StringSetting pSVar4;
		Transform parent_00;
		CharacterEditorGameManager pGVar5;
		String pSVar6;
		ElementStyle __this_00;
		String[] options;
		Func<string, string> __this_01;
		UnityAction __this_02;

		this.Setup(parent);
		pGVar5 = typeof(CharacterEditorGameManager);
		pGVar3 = (CharacterEditorGameManager)SceneLoader.CurrentGameManager;
		if (pGVar3 == null) {
			this._gameManager = null;
		}
		else {
			bVar1 = (typeof(CharacterEditorGameManager)._2).typeHierarchyDepth;
			if (((pGVar3.klass._2).typeHierarchyDepth < bVar1) ||((pGVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(CharacterEditorGameManager))) {
	label_05cc9b66: ;
				throw new InvalidCastException();
			}
			this._gameManager = pGVar3;
			if (((pGVar3.klass._2).typeHierarchyDepth < bVar1) ||((pGVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass)pGVar5)) goto label_05cc9b66;
		}
		pSVar6 = this.get_ThemePanel();
		__this_00 = new ElementStyle(0x18, 95.0, 20.0, pSVar6);
		options = (String[])new string[2];
		if (options == null) {
	label_05cc9b61: ;
			throw new NullReferenceException();
		}
		if ((int)options.Length != 0) {
			options[0] = "Human";
			if ((options.Length & 0xfffffffe) != 0) {
				options[1] = "Titan";
				pSVar4 = this._category;
				if (Il2CppMethodInitialized_07547b70 == false) {
					Il2CppMethodInitialized_07547b70 = true;
					uVar2 = (typeof(CharacterEditorGameManager)._2).cctor_finished_or_no_cctor;
					pSVar6 = "Human";
				}
				else {
					uVar2 = (typeof(CharacterEditorGameManager)._2).cctor_finished_or_no_cctor;
					pSVar6 = "Human";
				}
				"Human" = pSVar6;
				if (uVar2 == 0) {
				}
				if (pSVar4 != null) {
					if (*(sbyte)(typeof(CharacterEditorGameManager)).static_fields == false) {
						pSVar6 = "Titan";
					}
					pSVar4.Value = (object)pSVar6;
					parent_00 = this.SinglePanel;
					pSVar4 = this._category;
					pSVar6 = UIManager.GetLocaleCommon("Category");
					__this_01 = new Func<string, string>(null, (intptr_t)MethodInfo_UI_UIManager_GetLocaleCommon);
					__this_02 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_CharacterEditorCategoryPanel_Setup_b__14_0);
					ElementFactory.CreateDropdownSetting(parent_00, __this_00, (BaseSetting)pSVar4, pSVar6, options, "", 160.0, 40.0, 300.0, (Nullable<float>)0x0, __this_02, null, __this_01);
					return;
				}
				goto label_05cc9b61;
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6004A1D")]
	[Address(RVA = "0x5BC9B80", Offset = "0x5BC8B80", VA = "0x5BC9B80")]
	private string GetCurrentCategory()
	{
		// Lifted from source/cpp/UI/CharacterEditorCategoryPanel.c (UI.CharacterEditorCategoryPanel$$GetCurrentCategory): clean
		sbyte cVar1;
		String pSVar2;

		pSVar2 = "Human";
		if ((typeof(CharacterEditorGameManager)._2).cctor_finished_or_no_cctor == 0) {
			cVar1 = CharacterEditorGameManager.HumanMode;
		}
		else {
			cVar1 = CharacterEditorGameManager.HumanMode;
		}
		if (cVar1 == false) {
			pSVar2 = "Titan";
		}
		return pSVar2;
	}

	[Token(Token = "0x6004A1E")]
	[Address(RVA = "0x5BC9C10", Offset = "0x5BC8C10", VA = "0x5BC9C10")]
	private void OnCategoryChange()
	{
		// Lifted from source/cpp/UI/CharacterEditorCategoryPanel.c (UI.CharacterEditorCategoryPanel$$OnCategoryChange): 7 lines keep C-only constructs
		byte bVar1;
		StringSetting pSVar2;
		String a;
		DummyCharacter pCVar3;
		HumanCustomSettings pSVar4;
		Settings_SetSettingsContainer_HumanCustomSet__o __this_00;
		HumanSetup __this_01;
		DummyTitan __this_02;
		TitanCustomSettings pSVar5;
		Settings_SetSettingsContainer_TitanCustomSet__o __this_03;
		bool bVar6;
		bool bVar7;
		HumanCustomSet customSet;
		UI_CharacterEditorSkinsPanel_StaticFields pUVar8;
		CharacterEditorGameManager pGVar9;
		CharacterEditorCategoryPanel.d__18<CategoryChangeCaptureCoroutine> __this_04;
		String b;
		sbyte cVar10;

		pSVar2 = this._category;
		if (pSVar2 == null) goto label_05cca08b;
		a = pSVar2._value;
		b = "Human";
		if ((typeof(CharacterEditorGameManager)._2).cctor_finished_or_no_cctor == 0) {
			cVar10 = CharacterEditorGameManager.HumanMode;
		}
		else {
			cVar10 = CharacterEditorGameManager.HumanMode;
		}
		if (cVar10 == false) {
			b = "Titan";
		}
		bVar6 = (a != b);
		if (!bVar6) {
			return;
		}
		if ((typeof(CharacterEditorGameManager)._2).cctor_finished_or_no_cctor == 0) {
			bVar6 = CharacterEditorGameManager.HumanMode;
		}
		else {
			bVar6 = CharacterEditorGameManager.HumanMode;
		}
		pUVar8 = typeof(CharacterEditorSkinsPanel).static_fields;
		cVar10 = true;
		if (pUVar8._persistentGlobalSkinPreview == false) {
			if (Il2CppMethodInitialized_07547b85 == false) {
				Il2CppMethodInitialized_07547b85 = true;
				pUVar8 = typeof(CharacterEditorSkinsPanel).static_fields;
			}
			cVar10 = pUVar8._persistentCustomSkinPreview;
			pGVar9 = this._gameManager;
			if (bVar6 != false) goto label_05cc9d94;
	label_05cc9f15: ;
			if ((pGVar9 != null) &&(__this_02 = (DummyTitan)pGVar9.Character, __this_02 != null)) {
				bVar1 = (typeof(DummyTitan)._2).typeHierarchyDepth;
				if ((bVar1 <= (__this_02.klass._2).typeHierarchyDepth) &&((__this_02.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(DummyTitan))) {
					pSVar5 = SettingsManager.TitanCustomSettings;
					if ((pSVar5 == null) ||(__this_03 = pSVar5.TitanCustomSets, __this_03 == null)) goto label_05cca08b;
					customSet = (HumanCustomSet)__this_03.GetSelectedSet();
					if (customSet != null) {
						bVar1 = (typeof(TitanCustomSet)._2).typeHierarchyDepth;
						if (((customSet.klass._2).typeHierarchyDepth < bVar1) ||((customSet.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(TitanCustomSet))) {
	label_05cca090: ;
							throw new InvalidCastException();
						}
					}
					__this_02.LoadSet((TitanCustomSet)customSet, true);
				}
			}
		}
		else {
			pGVar9 = this._gameManager;
			if (bVar6 == false) goto label_05cc9f15;
	label_05cc9d94: ;
			if ((pGVar9 != null) &&(pCVar3 = pGVar9.Character, pCVar3 != null)) {
				bVar1 = (typeof(DummyHuman)._2).typeHierarchyDepth;
				if ((bVar1 <= (pCVar3.klass._2).typeHierarchyDepth) &&((pCVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(DummyHuman) )) {
					pSVar4 = SettingsManager.HumanCustomSettings;
					if ((pSVar4 == null) ||(__this_00 = pSVar4.CustomSets, __this_00 == null)) goto label_05cca08b;
					customSet = (HumanCustomSet)__this_00.GetSelectedSet();
					if (customSet != null) {
						bVar1 = (typeof(HumanCustomSet)._2).typeHierarchyDepth;
						if (((customSet.klass._2).typeHierarchyDepth < bVar1) ||((customSet.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(HumanCustomSet))) goto label_05cca090;
					}
					__this_01 = (*(ulong)((sbyte)pCVar3 + 0x38));
					if (__this_01 == null) goto label_05cca08b;
					__this_01.Load(customSet, __this_01.Weapon, false);
				}
			}
		}
		pSVar2 = this._category;
		if (pSVar2 != null) {
			bVar7 = (pSVar2._value == "Titan");
			if (bVar7) {
				CharacterEditorSkinsPanel.ResetSkinPreviewToggles();
			}
			pGVar9 = this._gameManager;
			__this_04 = il2cpp_codegen_object_new((Il2CppClass)typeof(CharacterEditorCategoryPanel.d__18<CategoryChangeCaptureCoroutine>));
			__this_04 = new Object();
			__this_04.__1__state = 0;
			__this_04.__4__this = this;
			__this_04.isHuman = bVar6;
			__this_04.shouldPreserveSkinPreview = cVar10 != false;
			if (pGVar9 != null) {
				pGVar9.StartCoroutine((IEnumerator)__this_04);
				return;
			}
		}
	label_05cca08b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004A1F")]
	[Address(RVA = "0x5BCA120", Offset = "0x5BC9120", VA = "0x5BCA120")]
	private void ResetHumanSkinPreviewToggles()
	{
		// Lifted from source/cpp/UI/CharacterEditorCategoryPanel.c (UI.CharacterEditorCategoryPanel$$ResetHumanSkinPreviewToggles): clean
		CharacterEditorSkinsPanel.ResetSkinPreviewToggles();
		return;
	}

	[Token(Token = "0x6004A20")]
	[Address(RVA = "0x5BCA0A0", Offset = "0x5BC90A0", VA = "0x5BCA0A0")]
	[IteratorStateMachine(typeof(_003CCategoryChangeCaptureCoroutine_003Ed__18))]
	private IEnumerator CategoryChangeCaptureCoroutine(bool isHuman, bool shouldPreserveSkinPreview)
	{
		// Lifted from source/cpp/UI/CharacterEditorCategoryPanel.c (UI.CharacterEditorCategoryPanel$$CategoryChangeCaptureCoroutine): 1 lines keep C-only constructs
		CharacterEditorCategoryPanel.d__18<CategoryChangeCaptureCoroutine> __this_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(CharacterEditorCategoryPanel.d__18<CategoryChangeCaptureCoroutine>));
		__this_00 = new Object();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.isHuman = isHuman;
		__this_00.shouldPreserveSkinPreview = shouldPreserveSkinPreview;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6004A21")]
	[Address(RVA = "0x5BCA160", Offset = "0x5BC9160", VA = "0x5BCA160")]
	public CharacterEditorCategoryPanel()
	{
		// Lifted from source/cpp/UI/CharacterEditorCategoryPanel.c (UI.CharacterEditorCategoryPanel$$.ctor): clean
		StringSetting __this_00;
		MethodInfo method_00;

		__this_00 = new StringSetting();
		this._category = __this_00;
		method_00 = new Dictionary<string, Button>();
		this._topButtons = (Dictionary<string, Button>)method_00;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/CharacterEditorCategoryPanel.c.

	// UI.CharacterEditorCategoryPanel$$<Setup>b__14_0: clean
	private void Setup_b__14_0()
	{
		this.OnCategoryChange();
		return;
	}
}
