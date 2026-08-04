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

[Token(Token = "0x20006FC")]
internal class SettingsSoundPanel : SettingsCategoryPanel
{
	[Token(Token = "0x40021A9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private Text _currentSongLabel;

	[Token(Token = "0x17000D86")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x6004527")]
		[Address(RVA = "0x434DB00", Offset = "0x434DB00", VA = "0x434DB00", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004528")]
	[Address(RVA = "0x434DB10", Offset = "0x434DB10", VA = "0x434DB10", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6004529")]
	[Address(RVA = "0x434EAF0", Offset = "0x434EAF0", VA = "0x434EAF0")]
	protected void OnButtonClick(string name)
	{
	}

	[Token(Token = "0x600452A")]
	[Address(RVA = "0x434F0B0", Offset = "0x434F0B0", VA = "0x434F0B0")]
	private void Update()
	{
	}

	[Token(Token = "0x600452B")]
	[Address(RVA = "0x434F1F0", Offset = "0x434F1F0", VA = "0x434F1F0")]
	public SettingsSoundPanel()
	{
	}
}
