// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterEditorTitanCategoryPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CharacterEditorTitanCategoryPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/CharacterEditorMenu/CharacterEditorTitanCategoryPanel.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x20007C6")]
internal class CharacterEditorTitanCategoryPanel : CharacterEditorCategoryPanel
{
	[Token(Token = "0x4002715")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private StringSetting _emote;

	[Token(Token = "0x17000D18")]
	protected override float Height
	{
		[Token(Token = "0x6004AFA")]
		[Address(RVA = "0x5BD9D00", Offset = "0x5BD8D00", VA = "0x5BD9D00", Slot = "6")]
		get
		{
			// Lifted from source/cpp/UI/CharacterEditorTitanCategoryPanel.c (UI.CharacterEditorTitanCategoryPanel$$get_Height): clean
			return 280.0;
		}
	}

	[Token(Token = "0x6004AFB")]
	[Address(RVA = "0x5BD9D10", Offset = "0x5BD8D10", VA = "0x5BD9D10", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
		// Lifted from source/cpp/UI/CharacterEditorTitanCategoryPanel.c (UI.CharacterEditorTitanCategoryPanel$$Setup): 1 lines keep C-only constructs
		Transform parent_00;
		StringSetting setting;
		String pSVar1;
		ElementStyle __this_00;
		String[] options;
		UnityAction __this_01;

		this.Setup(parent) ;
		pSVar1 = this.get_ThemePanel();
		__this_00 = new ElementStyle(0x18, 95.0, 20.0, pSVar1);
		options = (String[])new string[4];
		if (options == null) {
			throw new NullReferenceException();
		}
		if ((int)options.Length != 0) {
			options[0] = "Laugh";
			if ((options.Length & 0xfffffffe) != 0) {
				options[1] = "Nod";
				if (2 < (uint)options.Length) {
					options[2] = "Shake";
					if ((options.Length & 0xfffffffc) != 0) {
						options[3] = "Roar";
						parent_00 = this.SinglePanel;
						setting = this._emote;
						pSVar1 = UIManager.GetLocale("CharacterEditor", "Preview", "Emote", "", "");
						__this_01 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_CharacterEditorTitanCategoryPanel_Setup_b__3_0) ;
						ElementFactory.CreateDropdownSetting(parent_00, __this_00, (BaseSetting)setting, pSVar1, options, "", 160.0, 40.0, 300.0, (Nullable<float>)0x0, __this_01, null, null) ;
						return;
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6004AFC")]
	[Address(RVA = "0x5BD9FD0", Offset = "0x5BD8FD0", VA = "0x5BD9FD0")]
	private void OnEmote()
	{
		// Lifted from source/cpp/UI/CharacterEditorTitanCategoryPanel.c (UI.CharacterEditorTitanCategoryPanel$$OnEmote): clean
		CharacterEditorGameManager pGVar1;
		StringSetting pSVar2;
		DummyCharacter __this_00;

		pGVar1 = this._gameManager;
		if (((pGVar1 == null) ||(pSVar2 = this._emote, pSVar2 == null)) ||(__this_00 = pGVar1.Character, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.EmoteAction(pSVar2._value);
		return;
	}

	[Token(Token = "0x6004AFD")]
	[Address(RVA = "0x5BDA030", Offset = "0x5BD9030", VA = "0x5BDA030")]
	public CharacterEditorTitanCategoryPanel()
	{
		// Lifted from source/cpp/UI/CharacterEditorTitanCategoryPanel.c (UI.CharacterEditorTitanCategoryPanel$$.ctor): clean
		StringSetting __this_00;

		__this_00 = new StringSetting("Laugh", 0x7fffffff);
		this._emote = __this_00;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/CharacterEditorTitanCategoryPanel.c.

	// UI.CharacterEditorTitanCategoryPanel$$<Setup>b__3_0: clean
	private void Setup_b__3_0()
	{
		CharacterEditorGameManager pGVar1;
		StringSetting pSVar2;
		DummyCharacter __this_00;

		pGVar1 = this._gameManager;
		if (((pGVar1 == null) ||(pSVar2 = this._emote, pSVar2 == null)) ||(__this_00 = pGVar1.Character, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.EmoteAction(pSVar2._value);
		return;
	}
}
