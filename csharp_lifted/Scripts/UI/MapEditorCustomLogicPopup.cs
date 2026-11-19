// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorCustomLogicPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapEditorCustomLogicPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorCustomLogicPopup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using GameManagers;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20008A3")]
internal class MapEditorCustomLogicPopup : PromptPopup
{
	[Token(Token = "0x4002B92")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private StringSetting _logic;

	[Token(Token = "0x4002B93")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private GameObject _logicInput;

	[Token(Token = "0x4002B94")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private MapEditorGameManager _gameManager;

	[Token(Token = "0x4002B95")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private Text _error;

	[Token(Token = "0x17000E7A")]
	protected override string Title
	{
		[Token(Token = "0x6005243")]
		[Address(RVA = "0x5C70CC0", Offset = "0x5C6FCC0", VA = "0x5C70CC0", Slot = "35")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorCustomLogicPopup.c (UI.MapEditorCustomLogicPopup$$get_Title): clean
			String pSVar1;

			pSVar1 = UIManager.GetLocale("MapEditor", "Top", "CustomLogic", "", "");
			return pSVar1;
		}
	}

	[Token(Token = "0x17000E7B")]
	protected override float Width
	{
		[Token(Token = "0x6005244")]
		[Address(RVA = "0x5C70D60", Offset = "0x5C6FD60", VA = "0x5C70D60", Slot = "5")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorCustomLogicPopup.c (UI.MapEditorCustomLogicPopup$$get_Width): clean
			return 500.0;
		}
	}

	[Token(Token = "0x17000E7C")]
	protected override float Height
	{
		[Token(Token = "0x6005245")]
		[Address(RVA = "0x5C70D70", Offset = "0x5C6FD70", VA = "0x5C70D70", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorCustomLogicPopup.c (UI.MapEditorCustomLogicPopup$$get_Height): clean
			return 585.0;
		}
	}

	[Token(Token = "0x17000E7D")]
	protected override int VerticalPadding
	{
		[Token(Token = "0x6005246")]
		[Address(RVA = "0x5C70D80", Offset = "0x5C6FD80", VA = "0x5C70D80", Slot = "9")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorCustomLogicPopup.c (UI.MapEditorCustomLogicPopup$$get_VerticalPadding): clean
			return 0x14;
		}
	}

	[Token(Token = "0x17000E7E")]
	protected override float VerticalSpacing
	{
		[Token(Token = "0x6005247")]
		[Address(RVA = "0x5C70D90", Offset = "0x5C6FD90", VA = "0x5C70D90", Slot = "11")]
		get
		{
			// Lifted from source/cpp/UI/MapEditorCustomLogicPopup.c (UI.MapEditorCustomLogicPopup$$get_VerticalSpacing): clean
			return 10.0;
		}
	}

	[Token(Token = "0x6005248")]
	[Address(RVA = "0x5C70DA0", Offset = "0x5C6FDA0", VA = "0x5C70DA0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/MapEditorCustomLogicPopup.c (UI.MapEditorCustomLogicPopup$$Setup): 2 lines keep C-only constructs
		Transform pUVar1;
		int fontSize;
		String pSVar2;
		ElementStyle __this_00;
		UnityAction pUVar3;
		GameObject __this_01;
		Text pUVar4;
		Color UVar5;

		this.Setup(parent);
		fontSize = this.get_ButtonFontSize();
		pSVar2 = this.get_ThemePanel();
		__this_00 = new ElementStyle(fontSize, 130.0, 20.0, pSVar2);
		pUVar1 = this.BottomBar;
		pSVar2 = UIManager.GetLocaleCommon("Save");
		pUVar3 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorCustomLogicPopup_Setup_b__14_0);
		ElementFactory.CreateTextButton(pUVar1, __this_00, pSVar2, 0.0, pUVar3);
		pUVar1 = this.BottomBar;
		pSVar2 = UIManager.GetLocaleCommon("Cancel");
		pUVar3 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MapEditorCustomLogicPopup_Setup_b__14_1);
		ElementFactory.CreateTextButton(pUVar1, __this_00, pSVar2, 0.0, pUVar3);
		__this_01 = ElementFactory.CreateDefaultLabel(this.SinglePanel, __this_00, "", 0, 4);
		if (__this_01 != null) {
			pUVar4 = __this_01.GetComponent<Text>();
			this._error = pUVar4;
			pUVar4 = this._error;
			if (pUVar4 != null) {
				UVar5.b = 0.0;
				UVar5.a = 1.0;
				UVar5.r = 1.0;
				UVar5.g = 0.0;
				pUVar4.set_color(UVar5);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005249")]
	[Address(RVA = "0x5C70FF0", Offset = "0x5C6FFF0", VA = "0x5C70FF0", Slot = "21")]
	public override void Show()
	{
		// Lifted from source/cpp/UI/MapEditorCustomLogicPopup.c (UI.MapEditorCustomLogicPopup$$Show): 4 lines keep C-only constructs
		GameObject* targetAddress;
		byte bVar1;
		MapEditorGameManager pGVar2;
		Object pUVar3;
		MapScript pMVar4;
		StringSetting __this_00;
		Text pUVar5;
		MapEditorGameManager pGVar6;
		bool bVar7;
		int fontSize;
		String themePanel;
		ElementStyle __this_01;
		GameObject pUVar8;

		pGVar6 = typeof(MapEditorGameManager);
		pGVar2 = (MapEditorGameManager)SceneLoader.CurrentGameManager;
		if (pGVar2 != null) {
			bVar1 = (typeof(MapEditorGameManager)._2).typeHierarchyDepth;
			if ((bVar1 <= (((BaseGameManager)pGVar2.klass)._2).typeHierarchyDepth) &&((((BaseGameManager)pGVar2.klass)._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(MapEditorGameManager))) {
				this._gameManager = pGVar2;
				if ((bVar1 <= (((BaseGameManager)pGVar2.klass)._2).typeHierarchyDepth) &&((((BaseGameManager)pGVar2.klass)._2).typeHierarchy[(ulong)bVar1 - 1] ==(Il2CppClass)pGVar6)) goto label_05d710e6;
			}
			throw new InvalidCastException();
		}
		this._gameManager = null;
	label_05d710e6: ;
		pUVar3 = (Object)this._logicInput;
		targetAddress = &this._logicInput;
		bVar7 = (pUVar3 != null);
		if (bVar7) {
			pUVar3 = (Object)*targetAddress;
			Object.Destroy(pUVar3);
		}
		fontSize = this.get_ButtonFontSize();
		themePanel = this.get_ThemePanel();
		__this_01 = new ElementStyle(fontSize, 130.0, 20.0, themePanel);
		this.Show();
		pGVar2 = this._gameManager;
		if (((pGVar2 != null) &&(pMVar4 = pGVar2.MapScript, pMVar4 != null)) &&(__this_00 = this._logic, __this_00 != null)) {
			__this_00.Value = (object)pMVar4.Logic;
			pUVar8 = ElementFactory.CreateInputSetting(this.SinglePanel, __this_01, (BaseSetting)this._logic, "", "", 450.0, 400.0, true, null, null, null, null);
			this._logicInput = pUVar8;
			pUVar5 = this._error;
			if (pUVar5 != null) {
				pUVar5.set_text("");
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600524A")]
	[Address(RVA = "0x5C71290", Offset = "0x5C70290", VA = "0x5C71290")]
	private void OnButtonClick(string name)
	{
		// Lifted from source/cpp/UI/MapEditorCustomLogicPopup.c (UI.MapEditorCustomLogicPopup$$OnButtonClick): 3 lines keep C-only constructs
		GameObject* targetAddress;
		byte bVar1;
		StringSetting pSVar2;
		Text pUVar3;
		Object pUVar4;
		MapEditorGameManager pGVar5;
		MapScript pMVar6;
		BaseMenu pUVar7;
		MapEditorTopPanel __this_00;
		bool bVar8;
		int fontSize;
		String pSVar9;
		ElementStyle __this_01;
		GameObject pUVar10;
		CustomLogicEvaluator pCVar11;

		bVar8 = (name == "Cancel");
		if (bVar8) {
	label_05d71338: ;
			this.Hide();
			return;
		}
		bVar8 = (name == "Save");
		pSVar9 = "";
		if (!bVar8) {
			return;
		}
		pSVar2 = this._logic;
		if (pSVar2 != null) {
			bVar8 = (pSVar2._value != (String)**(ulong*)(g_data_07556758 + 0xb8));
			if (bVar8) {
				pSVar2 = this._logic;
				if (pSVar2 == null) goto label_05d7166a;
				pSVar9 = pSVar2._value;
				pSVar9 = CustomLogicManager.TryParseLogic(pSVar9);
			}
			bVar8 = (pSVar9 != (String)**(ulong*)(g_data_07556758 + 0xb8));
			if (bVar8) {
				pUVar3 = this._error;
				if (pUVar3 != null) {
					pUVar3.set_text(pSVar9);
					pUVar4 = (Object)this._logicInput;
					targetAddress = &this._logicInput;
					bVar8 = (pUVar4 != null);
					if (bVar8) {
						pUVar4 = (Object)*targetAddress;
						Object.Destroy(pUVar4);
					}
					fontSize = this.get_ButtonFontSize();
					pSVar9 = this.get_ThemePanel();
					__this_01 = new ElementStyle(fontSize, 130.0, 20.0, pSVar9);
					pUVar10 = ElementFactory.CreateInputSetting(this.SinglePanel, __this_01, (BaseSetting)this._logic, "", "", 450.0, 400.0, true, null, null, null, null);
					this._logicInput = pUVar10;
					return;
				}
			}
			else {
				pGVar5 = this._gameManager;
				if (((pGVar5 != null) &&(pSVar2 = this._logic, pSVar2 != null)) &&(pMVar6 = pGVar5.MapScript, pMVar6 != null)) {
					pMVar6.Logic = pSVar2._value;
					pSVar2 = this._logic;
					if (pSVar2 != null) {
						pGVar5 = this._gameManager;
						pSVar9 = pSVar2._value;
						pCVar11 = CustomLogicManager.GetEditorEvaluator(pSVar9, true);
						if (pGVar5 != null) {
							pGVar5.LogicEvaluator = pCVar11;
							pUVar7 = UIManager.CurrentMenu;
							if (pUVar7 != null) {
								bVar1 = (typeof(MapEditorMenu)._2).typeHierarchyDepth;
								if (((pUVar7.klass._2).typeHierarchyDepth < bVar1) ||((pUVar7.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(MapEditorMenu))) {
									throw new InvalidCastException();
								}
								__this_00 = (MapEditorTopPanel)(*(ulong)((sbyte)pUVar7 + 0xb8));
								if (__this_00 != null) {
									__this_00.Save();
									goto label_05d71338;
								}
							}
						}
					}
				}
			}
		}
	label_05d7166a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600524B")]
	[Address(RVA = "0x5C71680", Offset = "0x5C70680", VA = "0x5C71680")]
	public MapEditorCustomLogicPopup()
	{
		// Lifted from source/cpp/UI/MapEditorCustomLogicPopup.c (UI.MapEditorCustomLogicPopup$$.ctor): clean
		String defaultValue;
		StringSetting __this_00;

		defaultValue = (String)**(ulong*)(g_data_07556758 + 0xb8);
		__this_00 = new StringSetting(defaultValue, 0x7fffffff);
		this._logic = __this_00;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/MapEditorCustomLogicPopup.c.

	// UI.MapEditorCustomLogicPopup$$<Setup>b__14_0: clean
	private void Setup_b__14_0()
	{


		this.OnButtonClick("Save");
		return;
	}

	// UI.MapEditorCustomLogicPopup$$<Setup>b__14_1: clean
	private void Setup_b__14_1()
	{


		this.OnButtonClick("Cancel");
		return;
	}
}
