using Il2CppDummyDll;
using UnityEngine;

namespace UI;

[Token(Token = "0x200069E")]
internal class SettingsKeybindsPanel : SettingsCategoryPanel
{
	[Token(Token = "0x4002033")]
	[FieldOffset(Offset = "0x68")]
	protected string[] _categories;

	[Token(Token = "0x17000CF7")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x6004272")]
		[Address(RVA = "0x4031C20", Offset = "0x4031C20", VA = "0x4031C20", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000CF8")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x6004273")]
		[Address(RVA = "0x4031C30", Offset = "0x4031C30", VA = "0x4031C30", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004274")]
	[Address(RVA = "0x4031360", Offset = "0x4031360", VA = "0x4031360")]
	public void CreateCategoryDropdown(Transform panel)
	{
	}

	[Token(Token = "0x6004275")]
	[Address(RVA = "0x4031C60", Offset = "0x4031C60", VA = "0x4031C60", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x6004276")]
	[Address(RVA = "0x4031D40", Offset = "0x4031D40", VA = "0x4031D40")]
	public SettingsKeybindsPanel()
	{
	}
}
