// ==================== AoTTG2 cross-reference ====================
// Type: UI.CharacterCategoryPanel
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/CharacterCategoryPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/CharacterCategoryPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x200080A")]
internal class CharacterCategoryPanel : CategoryPanel
{
	[Token(Token = "0x40027FC")]
	protected const string LocaleCategory = "CharacterPopup";

	[Token(Token = "0x40027FD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	protected AottgInGameView View;

	[Token(Token = "0x40027FE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private readonly Dictionary<string, Action> _settingActions;

	[Token(Token = "0x40027FF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private readonly Dictionary<string, Action<string>> _choiceActions;

	[Token(Token = "0x17000D64")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x6004CF3")]
		[Address(RVA = "0x5BFC630", Offset = "0x5BFB630", VA = "0x5BFC630", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000D65")]
	protected CharacterPopup Popup
	{
		[Token(Token = "0x6004CF4")]
		[Address(RVA = "0x5BFC640", Offset = "0x5BFB640", VA = "0x5BFC640")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004CF5")]
	[Address(RVA = "0x5BFC6A0", Offset = "0x5BFB6A0", VA = "0x5BFC6A0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004CF6")]
	[Address(RVA = "0x5BFC900", Offset = "0x5BFB900", VA = "0x5BFC900")]
	private Transform CreateColumn(Transform parent)
	{
		return null;
	}

	[Token(Token = "0x6004CF7")]
	[Address(RVA = "0x5BFCAD0", Offset = "0x5BFBAD0", VA = "0x5BFCAD0")]
	public void OpenSetting(string id)
	{
	}

	[Token(Token = "0x6004CF8")]
	[Address(RVA = "0x5BFCB50", Offset = "0x5BFBB50", VA = "0x5BFCB50")]
	protected static string[] Labels(string group, IEnumerable<string> options)
	{
		return null;
	}

	[Token(Token = "0x6004CF9")]
	[Address(RVA = "0x5BFCC50", Offset = "0x5BFBC50", VA = "0x5BFCC50")]
	protected void Choice(Transform parent, BaseSetting setting, string title, string[] options, [Optional] Action changed, [Optional] string[] labels)
	{
	}

	[Token(Token = "0x6004CFA")]
	[Address(RVA = "0x5BFD370", Offset = "0x5BFC370", VA = "0x5BFD370")]
	protected void TeamChoice(Transform parent, BaseSetting setting)
	{
	}

	[Token(Token = "0x6004CFB")]
	[Address(RVA = "0x5BFD4C0", Offset = "0x5BFC4C0", VA = "0x5BFD4C0")]
	public void SelectChoice(string id, string value)
	{
	}

	[Token(Token = "0x6004CFC")]
	[Address(RVA = "0x5BFD550", Offset = "0x5BFC550", VA = "0x5BFD550")]
	protected void IconPicker(Transform parent, BaseSetting setting, string title, string[] options, string[] icons, [Optional] Action changed, [Optional] string[] tooltips, [Optional][DefaultParameterValue(144f)] float previewSize, [Optional] string[] labels)
	{
	}

	[Token(Token = "0x6004CFD")]
	[Address(RVA = "0x5BFD320", Offset = "0x5BFC320", VA = "0x5BFD320")]
	private static string CurrentOption(BaseSetting setting, string[] options)
	{
		return null;
	}

	[Token(Token = "0x6004CFE")]
	[Address(RVA = "0x5BFD850", Offset = "0x5BFC850", VA = "0x5BFD850")]
	private static int CurrentIndex(BaseSetting setting, string[] options)
	{
		return default(int);
	}

	[Token(Token = "0x6004CFF")]
	[Address(RVA = "0x5BFD1F0", Offset = "0x5BFC1F0", VA = "0x5BFD1F0")]
	private Transform SettingRow(Transform parent, string title)
	{
		return null;
	}

	[Token(Token = "0x6004D00")]
	[Address(RVA = "0x5BFD890", Offset = "0x5BFC890", VA = "0x5BFD890")]
	public CharacterCategoryPanel()
	{
	}
}
