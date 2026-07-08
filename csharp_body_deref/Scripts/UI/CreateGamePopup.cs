using System.Collections.Generic;
using System.IO;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Map;
using Settings;
using Utility;

namespace UI;

[Token(Token = "0x2000580")]
internal class CreateGamePopup : BasePopup
{
	[Token(Token = "0x4001B07")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public string LocaleCategory;

	[Token(Token = "0x4001B08")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	public bool IsMultiplayer;

	[Token(Token = "0x4001B09")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	protected FileWatcherExtension _watcher;

	[Token(Token = "0x4001B0A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private string _cachedLogicSource;

	[Token(Token = "0x4001B0B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private Dictionary<string, BaseSetting> _cachedModeSettings;

	[Token(Token = "0x4001B0C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private string _cachedAddonSelectionKey;

	[Token(Token = "0x4001B0D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private Dictionary<string, BaseSetting> _cachedAddonSettings;

	[Token(Token = "0x4001B0E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	public CreateGameSelectModePopup SelectModePopup;

	[Token(Token = "0x4001B0F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	public CreateGameSelectAddonPopup SelectAddonPopup;

	[Token(Token = "0x17000AF7")]
	protected override string Title
	{
		[Token(Token = "0x6003939")]
		[Address(RVA = "0x3F6BDC0", Offset = "0x3F6BDC0", VA = "0x3F6BDC0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000AF8")]
	protected override float Width
	{
		[Token(Token = "0x600393A")]
		[Address(RVA = "0x3F6BDE0", Offset = "0x3F6BDE0", VA = "0x3F6BDE0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AF9")]
	protected override float Height
	{
		[Token(Token = "0x600393B")]
		[Address(RVA = "0x3F6BDF0", Offset = "0x3F6BDF0", VA = "0x3F6BDF0", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000AFA")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x600393C")]
		[Address(RVA = "0x3F6BE00", Offset = "0x3F6BE00", VA = "0x3F6BE00", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000AFB")]
	protected override bool CategoryButtons
	{
		[Token(Token = "0x600393D")]
		[Address(RVA = "0x3F6BE10", Offset = "0x3F6BE10", VA = "0x3F6BE10", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000AFC")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x600393E")]
		[Address(RVA = "0x3F6BE20", Offset = "0x3F6BE20", VA = "0x3F6BE20", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000AFD")]
	protected override bool UseSound
	{
		[Token(Token = "0x600393F")]
		[Address(RVA = "0x3F6BE50", Offset = "0x3F6BE50", VA = "0x3F6BE50", Slot = "53")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003940")]
	[Address(RVA = "0x3F6BE60", Offset = "0x3F6BE60", VA = "0x3F6BE60", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003941")]
	[Address(RVA = "0x3F6C450", Offset = "0x3F6C450", VA = "0x3F6C450")]
	private void RefreshList(object source, FileSystemEventArgs e)
	{
	}

	[Token(Token = "0x6003942")]
	[Address(RVA = "0x3F6A510", Offset = "0x3F6A510", VA = "0x3F6A510")]
	public Dictionary<string, BaseSetting> SyncModeSettings(MapScript script)
	{
		return null;
	}

	[Token(Token = "0x6003943")]
	[Address(RVA = "0x3F6AFF0", Offset = "0x3F6AFF0", VA = "0x3F6AFF0")]
	public Dictionary<string, BaseSetting> SyncAddonSettings()
	{
		return null;
	}

	[Token(Token = "0x6003944")]
	[Address(RVA = "0x3F6C4D0", Offset = "0x3F6C4D0", VA = "0x3F6C4D0")]
	public void Show(bool isMultiplayer)
	{
	}

	[Token(Token = "0x6003945")]
	[Address(RVA = "0x3F6C520", Offset = "0x3F6C520", VA = "0x3F6C520", Slot = "44")]
	protected override void SetupTopButtons()
	{
	}

	[Token(Token = "0x6003946")]
	[Address(RVA = "0x3F6CB40", Offset = "0x3F6CB40", VA = "0x3F6CB40", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x6003947")]
	[Address(RVA = "0x3F6CD70", Offset = "0x3F6CD70", VA = "0x3F6CD70", Slot = "25")]
	protected override void SetupPopups()
	{
	}

	[Token(Token = "0x6003948")]
	[Address(RVA = "0x3F6C100", Offset = "0x3F6C100", VA = "0x3F6C100")]
	private void SetupBottomButtons()
	{
	}

	[Token(Token = "0x6003949")]
	[Address(RVA = "0x3F6D210", Offset = "0x3F6D210", VA = "0x3F6D210", Slot = "22")]
	public override void Hide()
	{
	}

	[Token(Token = "0x600394A")]
	[Address(RVA = "0x3F6D2A0", Offset = "0x3F6D2A0", VA = "0x3F6D2A0")]
	public void HideNoDisconnect()
	{
	}

	[Token(Token = "0x600394B")]
	[Address(RVA = "0x3F6D2B0", Offset = "0x3F6D2B0", VA = "0x3F6D2B0")]
	private void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x600394C")]
	[Address(RVA = "0x3F6DEF0", Offset = "0x3F6DEF0", VA = "0x3F6DEF0")]
	private void OnDeletePreset()
	{
	}

	[Token(Token = "0x600394D")]
	[Address(RVA = "0x3F6DBD0", Offset = "0x3F6DBD0", VA = "0x3F6DBD0")]
	private List<string> GetPresetDisallowedDelete()
	{
		return null;
	}

	[Token(Token = "0x600394E")]
	[Address(RVA = "0x3F6E2E0", Offset = "0x3F6E2E0", VA = "0x3F6E2E0")]
	private void OnLoadPreset()
	{
	}

	[Token(Token = "0x600394F")]
	[Address(RVA = "0x3F6E650", Offset = "0x3F6E650", VA = "0x3F6E650")]
	private void OnSavePreset()
	{
	}

	[Token(Token = "0x6003950")]
	[Address(RVA = "0x3F6EB50", Offset = "0x3F6EB50", VA = "0x3F6EB50")]
	private void OnImportPreset()
	{
	}

	[Token(Token = "0x6003951")]
	[Address(RVA = "0x3F6EDF0", Offset = "0x3F6EDF0", VA = "0x3F6EDF0")]
	public CreateGamePopup()
	{
	}
}
