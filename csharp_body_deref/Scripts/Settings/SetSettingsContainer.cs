// ==================== AoTTG2 cross-reference ====================
// Type: Settings.SetSettingsContainer
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/SetSettingsContainer.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/SetSettingsContainer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000BE")]
internal class SetSettingsContainer<T> : BaseSettingsContainer, ISetSettingsContainer where T : BaseSetSetting, new()
{
	[Token(Token = "0x4000497")]
	[FieldOffset(Offset = "0x0")]
	public IntSetting SelectedSetIndex;

	[Token(Token = "0x4000498")]
	[FieldOffset(Offset = "0x0")]
	public ListSetting<T> Sets;

	[Token(Token = "0x1700009E")]
	protected virtual bool PresetsOnly
	{
		[Token(Token = "0x60003E3")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700009F")]
	protected virtual bool AllowPresets
	{
		[Token(Token = "0x60003E4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60003E5")]
	protected override bool Validate()
	{
		return default(bool);
	}

	[Token(Token = "0x60003E6")]
	public override void Apply()
	{
	}

	[Token(Token = "0x60003E7")]
	private void MigrateUniqueIds()
	{
	}

	[Token(Token = "0x60003E8")]
	public BaseSetSetting GetSelectedSet()
	{
		return null;
	}

	[Token(Token = "0x60003E9")]
	public IntSetting GetSelectedSetIndex()
	{
		return null;
	}

	[Token(Token = "0x60003EA")]
	public void CreateSet(string name)
	{
	}

	[Token(Token = "0x60003EB")]
	public void CopySelectedSet(string name)
	{
	}

	[Token(Token = "0x60003EC")]
	public bool CanDeleteSelectedSet()
	{
		return default(bool);
	}

	[Token(Token = "0x60003ED")]
	public bool CanEditSelectedSet()
	{
		return default(bool);
	}

	[Token(Token = "0x60003EE")]
	public void DeleteSelectedSet()
	{
	}

	[Token(Token = "0x60003EF")]
	public IListSetting GetSets()
	{
		return null;
	}

	[Token(Token = "0x60003F0")]
	public void SetPresetsFromJsonString(string json)
	{
	}

	[Token(Token = "0x60003F1")]
	public string[] GetSetNames()
	{
		return null;
	}

	[Token(Token = "0x60003F2")]
	public SetSettingsContainer()
	{
	}
}
