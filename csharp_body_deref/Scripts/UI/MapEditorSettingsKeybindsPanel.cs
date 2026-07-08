using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x2000688")]
internal class MapEditorSettingsKeybindsPanel : CategoryPanel
{
	[Token(Token = "0x17000CD7")]
	protected override bool DoublePanel
	{
		[Token(Token = "0x60041DB")]
		[Address(RVA = "0x4022F50", Offset = "0x4022F50", VA = "0x4022F50", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000CD8")]
	protected override bool ScrollBar
	{
		[Token(Token = "0x60041DC")]
		[Address(RVA = "0x4022F60", Offset = "0x4022F60", VA = "0x4022F60", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60041DD")]
	[Address(RVA = "0x4022F70", Offset = "0x4022F70", VA = "0x4022F70", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x60041DE")]
	[Address(RVA = "0x4023100", Offset = "0x4023100", VA = "0x4023100")]
	private void CreateKeybindSettings(BaseSettingsContainer container, KeybindPopup popup, string cat, string sub, ElementStyle style)
	{
	}

	[Token(Token = "0x60041DF")]
	[Address(RVA = "0x40236D0", Offset = "0x40236D0", VA = "0x40236D0")]
	public MapEditorSettingsKeybindsPanel()
	{
	}
}
