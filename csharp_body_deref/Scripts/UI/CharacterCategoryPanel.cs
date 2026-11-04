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

[Token(Token = "0x2000763")]
internal class CharacterCategoryPanel : CategoryPanel
{
	[Token(Token = "0x400248D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	protected AottgInGameView View;

	[Token(Token = "0x400248E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private readonly Dictionary<string, Action> _settingActions;

	[Token(Token = "0x400248F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private readonly Dictionary<string, Action<string>> _choiceActions;

	[Token(Token = "0x17000CE8")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x60047DD")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000CE9")]
	protected CharacterPopup Popup
	{
		[Token(Token = "0x60047DE")]
		[Address(RVA = "0x221E220", Offset = "0x221C820", VA = "0x18221E220")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60047DF")]
	[Address(RVA = "0x221DEF0", Offset = "0x221C4F0", VA = "0x18221DEF0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60047E0")]
	[Address(RVA = "0x221D760", Offset = "0x221BD60", VA = "0x18221D760")]
	private Transform CreateColumn(Transform parent)
	{
		return null;
	}

	[Token(Token = "0x60047E1")]
	[Address(RVA = "0x221DC90", Offset = "0x221C290", VA = "0x18221DC90")]
	public void OpenSetting(string id)
	{
	}

	[Token(Token = "0x60047E2")]
	[Address(RVA = "0x221D250", Offset = "0x221B850", VA = "0x18221D250")]
	protected void Choice(Transform parent, BaseSetting setting, string title, string[] options, [Optional] Action changed)
	{
	}

	[Token(Token = "0x60047E3")]
	[Address(RVA = "0x221DD10", Offset = "0x221C310", VA = "0x18221DD10")]
	public void SelectChoice(string id, string value)
	{
	}

	[Token(Token = "0x60047E4")]
	[Address(RVA = "0x221D9C0", Offset = "0x221BFC0", VA = "0x18221D9C0")]
	protected void IconPicker(Transform parent, BaseSetting setting, string title, string[] options, string[] icons, [Optional] Action changed, [Optional] string[] tooltips, float previewSize = 144f)
	{
	}

	[Token(Token = "0x60047E5")]
	[Address(RVA = "0x221D970", Offset = "0x221BF70", VA = "0x18221D970")]
	private static string CurrentOption(BaseSetting setting, string[] options)
	{
		return null;
	}

	[Token(Token = "0x60047E6")]
	[Address(RVA = "0x221DDA0", Offset = "0x221C3A0", VA = "0x18221DDA0")]
	private Transform SettingRow(Transform parent, string title)
	{
		return null;
	}

	[Token(Token = "0x60047E7")]
	[Address(RVA = "0x221E160", Offset = "0x221C760", VA = "0x18221E160")]
	public CharacterCategoryPanel()
	{
	}
}
