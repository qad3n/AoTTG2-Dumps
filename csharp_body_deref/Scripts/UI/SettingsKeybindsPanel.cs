// ==================== AoTTG2 cross-reference ====================
// Type: UI.SettingsKeybindsPanel
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/SettingsKeybindsPanel.c
// Prior real C# source (older reference): Assets/Scripts/UI/SettingsPopup/SettingsKeybindsPanel.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x20006EC")]
internal class SettingsKeybindsPanel : SettingsCategoryPanel
{
	[Token(Token = "0x4002190")]
	[FieldOffset(Offset = "0x68")]
	protected string[] _categories;

	[Token(Token = "0x17000D71")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x60044D9")]
		[Address(RVA = "0x4346FF0", Offset = "0x4346FF0", VA = "0x4346FF0", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000D72")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x60044DA")]
		[Address(RVA = "0x4347000", Offset = "0x4347000", VA = "0x4347000", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60044DB")]
	[Address(RVA = "0x4346730", Offset = "0x4346730", VA = "0x4346730")]
	public void CreateCategoryDropdown(Transform panel)
	{
	}

	[Token(Token = "0x60044DC")]
	[Address(RVA = "0x4347030", Offset = "0x4347030", VA = "0x4347030", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x60044DD")]
	[Address(RVA = "0x4347110", Offset = "0x4347110", VA = "0x4347110")]
	public SettingsKeybindsPanel()
	{
	}
}
