// ==================== AoTTG2 cross-reference ====================
// Type: UI.SettingsAbilityPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/SettingsAbilityPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/SettingsPopup/SettingsAbilityPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20006E4")]
internal class SettingsAbilityPanel : SettingsCategoryPanel
{
	[Token(Token = "0x4002186")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	protected Text _pointsLeftLabel;

	[Token(Token = "0x4002187")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	protected GameObject _radiusElement;

	[Token(Token = "0x4002188")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	protected GameObject _rangeElement;

	[Token(Token = "0x4002189")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	protected GameObject _speedElement;

	[Token(Token = "0x400218A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	protected GameObject _cooldownElement;

	[Token(Token = "0x17000D6B")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x60044B8")]
		[Address(RVA = "0x4341160", Offset = "0x4341160", VA = "0x4341160", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x60044B9")]
	[Address(RVA = "0x4341170", Offset = "0x4341170", VA = "0x4341170", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60044BA")]
	[Address(RVA = "0x4341FD0", Offset = "0x4341FD0", VA = "0x4341FD0")]
	protected string GetBombStatLabel(string cat, string sub, string statName, int pointsSpent, float oldMinCost, float oldMaxCost, float cutoff, string unit, float divisor = 1f)
	{
		return null;
	}

	[Token(Token = "0x60044BB")]
	[Address(RVA = "0x4342420", Offset = "0x4342420", VA = "0x4342420")]
	private string CenterString(string text, int totalWidth)
	{
		return null;
	}

	[Token(Token = "0x60044BC")]
	[Address(RVA = "0x4342410", Offset = "0x4342410", VA = "0x4342410")]
	protected void OnStatChanged(IntSetting setting)
	{
	}

	[Token(Token = "0x60044BD")]
	[Address(RVA = "0x4342490", Offset = "0x4342490", VA = "0x4342490")]
	protected void RefreshBombStatLabels()
	{
	}

	[Token(Token = "0x60044BE")]
	[Address(RVA = "0x4342850", Offset = "0x4342850", VA = "0x4342850")]
	protected void UpdateElementLabel(GameObject element, string newText)
	{
	}

	[Token(Token = "0x60044BF")]
	[Address(RVA = "0x4342920", Offset = "0x4342920", VA = "0x4342920")]
	public SettingsAbilityPanel()
	{
	}
}
