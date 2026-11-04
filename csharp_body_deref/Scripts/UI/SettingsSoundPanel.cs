// ==================== AoTTG2 cross-reference ====================
// Type: UI.SettingsSoundPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/SettingsSoundPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/SettingsPopup/SettingsSoundPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200087B")]
internal class SettingsSoundPanel : SettingsCategoryPanel
{
	[Token(Token = "0x4002A41")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private Text _currentSongLabel;

	[Token(Token = "0x17000EE6")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6005160")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6005161")]
	[Address(RVA = "0x22F98B0", Offset = "0x22F7EB0", VA = "0x1822F98B0", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6005162")]
	[Address(RVA = "0x22F93F0", Offset = "0x22F79F0", VA = "0x1822F93F0")]
	protected void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x6005163")]
	[Address(RVA = "0x22FAA10", Offset = "0x22F9010", VA = "0x1822FAA10")]
	private void Update()
	{
	}

	[Token(Token = "0x6005164")]
	[Address(RVA = "0x22D3D10", Offset = "0x22D2310", VA = "0x1822D3D10")]
	public SettingsSoundPanel()
	{
	}
}
