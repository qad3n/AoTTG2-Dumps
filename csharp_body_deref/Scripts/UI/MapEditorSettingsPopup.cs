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

[Token(Token = "0x20006D7")]
internal class MapEditorSettingsPopup : BasePopup
{
	[Token(Token = "0x400215A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public string LocaleCategory;

	[Token(Token = "0x400215B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	protected List<SaveableSettingsContainer> _saveableSettings;

	[Token(Token = "0x17000D53")]
	protected override string Title
	{
		[Token(Token = "0x6004447")]
		[Address(RVA = "0x4338AB0", Offset = "0x4338AB0", VA = "0x4338AB0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000D54")]
	protected override float Width
	{
		[Token(Token = "0x6004448")]
		[Address(RVA = "0x4338AD0", Offset = "0x4338AD0", VA = "0x4338AD0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D55")]
	protected override float Height
	{
		[Token(Token = "0x6004449")]
		[Address(RVA = "0x4338AE0", Offset = "0x4338AE0", VA = "0x4338AE0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000D56")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x600444A")]
		[Address(RVA = "0x4338AF0", Offset = "0x4338AF0", VA = "0x4338AF0", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000D57")]
	protected override bool CategoryButtons
	{
		[Token(Token = "0x600444B")]
		[Address(RVA = "0x4338B00", Offset = "0x4338B00", VA = "0x4338B00", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000D58")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x600444C")]
		[Address(RVA = "0x4338B10", Offset = "0x4338B10", VA = "0x4338B10", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600444D")]
	[Address(RVA = "0x4338B40", Offset = "0x4338B40", VA = "0x4338B40", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x600444E")]
	[Address(RVA = "0x4338F20", Offset = "0x4338F20", VA = "0x4338F20", Slot = "44")]
	protected override void SetupTopButtons()
	{
	}

	[Token(Token = "0x600444F")]
	[Address(RVA = "0x4339240", Offset = "0x4339240", VA = "0x4339240", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x6004450")]
	[Address(RVA = "0x4338C80", Offset = "0x4338C80", VA = "0x4338C80")]
	private void SetupBottomButtons()
	{
	}

	[Token(Token = "0x6004451")]
	[Address(RVA = "0x4339340", Offset = "0x4339340", VA = "0x4339340")]
	private void OnConfirmSetDefault()
	{
	}

	[Token(Token = "0x6004452")]
	[Address(RVA = "0x43395C0", Offset = "0x43395C0", VA = "0x43395C0")]
	private void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x6004453")]
	[Address(RVA = "0x4339880", Offset = "0x4339880", VA = "0x4339880", Slot = "22")]
	public override void Hide()
	{
	}

	[Token(Token = "0x6004454")]
	[Address(RVA = "0x4339A10", Offset = "0x4339A10", VA = "0x4339A10")]
	public MapEditorSettingsPopup()
	{
	}
}
