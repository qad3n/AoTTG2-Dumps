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

[Token(Token = "0x2000863")]
internal class SettingsAbilityPanel : SettingsCategoryPanel
{
	[Token(Token = "0x4002A1E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	protected Text _pointsLeftLabel;

	[Token(Token = "0x4002A1F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	protected GameObject _radiusElement;

	[Token(Token = "0x4002A20")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	protected GameObject _rangeElement;

	[Token(Token = "0x4002A21")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	protected GameObject _speedElement;

	[Token(Token = "0x4002A22")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	protected GameObject _cooldownElement;

	[Token(Token = "0x17000ECB")]
	protected override TextAnchor PanelAlignment
	{
		[Token(Token = "0x60050F1")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "12")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x60050F2")]
	[Address(RVA = "0x22E0660", Offset = "0x22DEC60", VA = "0x1822E0660", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60050F3")]
	[Address(RVA = "0x22DFD80", Offset = "0x22DE380", VA = "0x1822DFD80")]
	protected string GetBombStatLabel(string cat, string sub, string statName, int pointsSpent, float oldMinCost, float oldMaxCost, float cutoff, string unit, float divisor = 1f)
	{
		return null;
	}

	[Token(Token = "0x60050F4")]
	[Address(RVA = "0x22DFCE0", Offset = "0x22DE2E0", VA = "0x1822DFCE0")]
	private string CenterString(string text, int totalWidth)
	{
		return null;
	}

	[Token(Token = "0x60050F5")]
	[Address(RVA = "0x22E01E0", Offset = "0x22DE7E0", VA = "0x1822E01E0")]
	protected void OnStatChanged(IntSetting setting)
	{
	}

	[Token(Token = "0x60050F6")]
	[Address(RVA = "0x22E01F0", Offset = "0x22DE7F0", VA = "0x1822E01F0")]
	protected void RefreshBombStatLabels()
	{
	}

	[Token(Token = "0x60050F7")]
	[Address(RVA = "0x22E1150", Offset = "0x22DF750", VA = "0x1822E1150")]
	protected void UpdateElementLabel(GameObject element, string newText)
	{
	}

	[Token(Token = "0x60050F8")]
	[Address(RVA = "0x1DA8AE0", Offset = "0x1DA70E0", VA = "0x181DA8AE0")]
	public SettingsAbilityPanel()
	{
	}
}
