// ==================== AoTTG2 cross-reference ====================
// Type: UI.MapEditorSettingsPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MapEditorSettingsPopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/MapEditorMenu/MapEditorSettingsPopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x20008CD")]
internal class MapEditorSettingsPopup : BasePopup
{
	[Token(Token = "0x4002C7E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public string LocaleCategory;

	[Token(Token = "0x4002C7F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected List<SaveableSettingsContainer> _saveableSettings;

	[Token(Token = "0x17000EAF")]
	protected override string Title
	{
		[Token(Token = "0x60053E9")]
		[Address(RVA = "0x5C9B480", Offset = "0x5C9A480", VA = "0x5C9B480", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000EB0")]
	protected override float Width
	{
		[Token(Token = "0x60053EA")]
		[Address(RVA = "0x5C9B4A0", Offset = "0x5C9A4A0", VA = "0x5C9B4A0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EB1")]
	protected override float Height
	{
		[Token(Token = "0x60053EB")]
		[Address(RVA = "0x5C9B4B0", Offset = "0x5C9A4B0", VA = "0x5C9B4B0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000EB2")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x60053EC")]
		[Address(RVA = "0x5C9B4C0", Offset = "0x5C9A4C0", VA = "0x5C9B4C0", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000EB3")]
	protected override bool CategoryButtons
	{
		[Token(Token = "0x60053ED")]
		[Address(RVA = "0x5C9B4D0", Offset = "0x5C9A4D0", VA = "0x5C9B4D0", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000EB4")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x60053EE")]
		[Address(RVA = "0x5C9B4E0", Offset = "0x5C9A4E0", VA = "0x5C9B4E0", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60053EF")]
	[Address(RVA = "0x5C9B510", Offset = "0x5C9A510", VA = "0x5C9B510", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60053F0")]
	[Address(RVA = "0x5C9B960", Offset = "0x5C9A960", VA = "0x5C9B960", Slot = "44")]
	protected override void SetupTopButtons()
	{
	}

	[Token(Token = "0x60053F1")]
	[Address(RVA = "0x5C9BE80", Offset = "0x5C9AE80", VA = "0x5C9BE80", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x60053F2")]
	[Address(RVA = "0x5C9B640", Offset = "0x5C9A640", VA = "0x5C9B640")]
	private void SetupBottomButtons()
	{
	}

	[Token(Token = "0x60053F3")]
	[Address(RVA = "0x5C9BF80", Offset = "0x5C9AF80", VA = "0x5C9BF80")]
	private void OnConfirmSetDefault()
	{
	}

	[Token(Token = "0x60053F4")]
	[Address(RVA = "0x5C9C210", Offset = "0x5C9B210", VA = "0x5C9C210")]
	private void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x60053F5")]
	[Address(RVA = "0x5C9C560", Offset = "0x5C9B560", VA = "0x5C9C560", Slot = "22")]
	public override void Hide()
	{
	}

	[Token(Token = "0x60053F6")]
	[Address(RVA = "0x5C9C6E0", Offset = "0x5C9B6E0", VA = "0x5C9C6E0")]
	public MapEditorSettingsPopup()
	{
	}
}
