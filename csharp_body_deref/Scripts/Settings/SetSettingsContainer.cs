// ==================== AoTTG2 cross-reference ====================
// Type: Settings.SetSettingsContainer
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/SetSettingsContainer.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/SetSettingsContainer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000DC")]
internal class SetSettingsContainer<T> : BaseSettingsContainer, ISetSettingsContainer where T : BaseSetSetting, new()
{
	[Token(Token = "0x4000522")]
	[FieldOffset(Offset = "0x0")]
	public IntSetting SelectedSetIndex;

	[Token(Token = "0x4000523")]
	[FieldOffset(Offset = "0x0")]
	public ListSetting<T> Sets;

	[Token(Token = "0x170000AD")]
	protected virtual bool PresetsOnly
	{
		[Token(Token = "0x6000471")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000AE")]
	protected virtual bool AllowPresets
	{
		[Token(Token = "0x6000472")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000473")]
	protected override bool Validate()
	{
		return default(bool);
	}

	[Token(Token = "0x6000474")]
	public override void Apply()
	{
	}

	[Token(Token = "0x6000475")]
	private void MigrateUniqueIds()
	{
	}

	[Token(Token = "0x6000476")]
	public BaseSetSetting GetSelectedSet()
	{
		return null;
	}

	[Token(Token = "0x6000477")]
	public IntSetting GetSelectedSetIndex()
	{
		return null;
	}

	[Token(Token = "0x6000478")]
	public void CreateSet(string name)
	{
	}

	[Token(Token = "0x6000479")]
	public void CopySelectedSet(string name)
	{
	}

	[Token(Token = "0x600047A")]
	public bool CanDeleteSelectedSet()
	{
		return default(bool);
	}

	[Token(Token = "0x600047B")]
	public bool CanEditSelectedSet()
	{
		return default(bool);
	}

	[Token(Token = "0x600047C")]
	public void DeleteSelectedSet()
	{
	}

	[Token(Token = "0x600047D")]
	public IListSetting GetSets()
	{
		return null;
	}

	[Token(Token = "0x600047E")]
	public void SetPresetsFromJsonString(string json)
	{
	}

	[Token(Token = "0x600047F")]
	public string[] GetSetNames()
	{
		return null;
	}

	[Token(Token = "0x6000480")]
	public SetSettingsContainer()
	{
	}
}
