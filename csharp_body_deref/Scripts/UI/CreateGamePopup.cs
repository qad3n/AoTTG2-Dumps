// ==================== AoTTG2 cross-reference ====================
// Type: UI.CreateGamePopup
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/CreateGamePopup.c
// Prior real C# source (older reference): Assets/Scripts/UI/CreateGamePopup/CreateGamePopup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.IO;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Map;
using Settings;
using Utility;

namespace UI;

[Token(Token = "0x20005C5")]
internal class CreateGamePopup : BasePopup
{
	[Token(Token = "0x4001C1A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public string LocaleCategory;

	[Token(Token = "0x4001C1B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	public bool IsMultiplayer;

	[Token(Token = "0x4001C1C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	protected FileWatcherExtension _watcher;

	[Token(Token = "0x4001C1D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private string _cachedLogicSource;

	[Token(Token = "0x4001C1E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private Dictionary<string, BaseSetting> _cachedModeSettings;

	[Token(Token = "0x4001C1F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private string _cachedAddonSelectionKey;

	[Token(Token = "0x4001C20")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private Dictionary<string, Dictionary<string, BaseSetting>> _cachedAddonSettings;

	[Token(Token = "0x4001C21")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	public CreateGameSelectModePopup SelectModePopup;

	[Token(Token = "0x4001C22")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE8")]
	public CreateGameSelectAddonPopup SelectAddonPopup;

	[Token(Token = "0x17000B61")]
	protected override string Title
	{
		[Token(Token = "0x6003B48")]
		[Address(RVA = "0x42797D0", Offset = "0x42797D0", VA = "0x42797D0", Slot = "35")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000B62")]
	protected override float Width
	{
		[Token(Token = "0x6003B49")]
		[Address(RVA = "0x42797F0", Offset = "0x42797F0", VA = "0x42797F0", Slot = "5")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B63")]
	protected override float Height
	{
		[Token(Token = "0x6003B4A")]
		[Address(RVA = "0x4279800", Offset = "0x4279800", VA = "0x4279800", Slot = "6")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B64")]
	protected override bool CategoryPanel
	{
		[Token(Token = "0x6003B4B")]
		[Address(RVA = "0x4279810", Offset = "0x4279810", VA = "0x4279810", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000B65")]
	protected override bool CategoryButtons
	{
		[Token(Token = "0x6003B4C")]
		[Address(RVA = "0x4279820", Offset = "0x4279820", VA = "0x4279820", Slot = "42")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000B66")]
	protected override string DefaultCategoryPanel
	{
		[Token(Token = "0x6003B4D")]
		[Address(RVA = "0x4279830", Offset = "0x4279830", VA = "0x4279830", Slot = "19")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000B67")]
	protected override bool UseSound
	{
		[Token(Token = "0x6003B4E")]
		[Address(RVA = "0x4279860", Offset = "0x4279860", VA = "0x4279860", Slot = "53")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003B4F")]
	[Address(RVA = "0x4279870", Offset = "0x4279870", VA = "0x4279870", Slot = "20")]
	public override void Setup([Optional] BasePanel parent)
	{
	}

	[Token(Token = "0x6003B50")]
	[Address(RVA = "0x4279E60", Offset = "0x4279E60", VA = "0x4279E60")]
	private void RefreshList(object source, FileSystemEventArgs e)
	{
	}

	[Token(Token = "0x6003B51")]
	[Address(RVA = "0x4277C90", Offset = "0x4277C90", VA = "0x4277C90")]
	public Dictionary<string, BaseSetting> SyncModeSettings(MapScript script)
	{
		return null;
	}

	[Token(Token = "0x6003B52")]
	[Address(RVA = "0x4278770", Offset = "0x4278770", VA = "0x4278770")]
	public Dictionary<string, Dictionary<string, BaseSetting>> SyncAddonSettings()
	{
		return null;
	}

	[Token(Token = "0x6003B53")]
	[Address(RVA = "0x4279EE0", Offset = "0x4279EE0", VA = "0x4279EE0")]
	public void Show(bool isMultiplayer)
	{
	}

	[Token(Token = "0x6003B54")]
	[Address(RVA = "0x4279F30", Offset = "0x4279F30", VA = "0x4279F30", Slot = "44")]
	protected override void SetupTopButtons()
	{
	}

	[Token(Token = "0x6003B55")]
	[Address(RVA = "0x427A550", Offset = "0x427A550", VA = "0x427A550", Slot = "27")]
	protected override void RegisterCategoryPanels()
	{
	}

	[Token(Token = "0x6003B56")]
	[Address(RVA = "0x427A780", Offset = "0x427A780", VA = "0x427A780", Slot = "25")]
	protected override void SetupPopups()
	{
	}

	[Token(Token = "0x6003B57")]
	[Address(RVA = "0x4279B10", Offset = "0x4279B10", VA = "0x4279B10")]
	private void SetupBottomButtons()
	{
	}

	[Token(Token = "0x6003B58")]
	[Address(RVA = "0x427AC20", Offset = "0x427AC20", VA = "0x427AC20", Slot = "22")]
	public override void Hide()
	{
	}

	[Token(Token = "0x6003B59")]
	[Address(RVA = "0x427ACB0", Offset = "0x427ACB0", VA = "0x427ACB0")]
	public void HideNoDisconnect()
	{
	}

	[Token(Token = "0x6003B5A")]
	[Address(RVA = "0x427ACC0", Offset = "0x427ACC0", VA = "0x427ACC0")]
	private void OnBottomBarButtonClick(string name)
	{
	}

	[Token(Token = "0x6003B5B")]
	[Address(RVA = "0x427B900", Offset = "0x427B900", VA = "0x427B900")]
	private void OnDeletePreset()
	{
	}

	[Token(Token = "0x6003B5C")]
	[Address(RVA = "0x427B5E0", Offset = "0x427B5E0", VA = "0x427B5E0")]
	private List<string> GetPresetDisallowedDelete()
	{
		return null;
	}

	[Token(Token = "0x6003B5D")]
	[Address(RVA = "0x427BCF0", Offset = "0x427BCF0", VA = "0x427BCF0")]
	private void OnLoadPreset()
	{
	}

	[Token(Token = "0x6003B5E")]
	[Address(RVA = "0x427C060", Offset = "0x427C060", VA = "0x427C060")]
	private void OnSavePreset()
	{
	}

	[Token(Token = "0x6003B5F")]
	[Address(RVA = "0x427C560", Offset = "0x427C560", VA = "0x427C560")]
	private void OnImportPreset()
	{
	}

	[Token(Token = "0x6003B60")]
	[Address(RVA = "0x427C800", Offset = "0x427C800", VA = "0x427C800")]
	public CreateGamePopup()
	{
	}
}
