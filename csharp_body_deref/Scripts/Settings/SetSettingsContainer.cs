// ==================== AoTTG2 cross-reference ====================
// Type: Settings.SetSettingsContainer
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/SetSettingsContainer.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/SetSettingsContainer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000117")]
internal class SetSettingsContainer<T> : BaseSettingsContainer, ISetSettingsContainer where T : BaseSetSetting, new()
{
	[Token(Token = "0x4000661")]
	[FieldOffset(Offset = "0x0")]
	public IntSetting SelectedSetIndex;

	[Token(Token = "0x4000662")]
	[FieldOffset(Offset = "0x0")]
	public ListSetting<T> Sets;

	[Token(Token = "0x170000CA")]
	protected virtual bool PresetsOnly
	{
		[Token(Token = "0x60005EF")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000CB")]
	protected virtual bool AllowPresets
	{
		[Token(Token = "0x60005F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60005F1")]
	protected override bool Validate()
	{
		return default(bool);
	}

	[Token(Token = "0x60005F2")]
	public override void Apply()
	{
	}

	[Token(Token = "0x60005F3")]
	private void MigrateUniqueIds()
	{
	}

	[Token(Token = "0x60005F4")]
	public BaseSetSetting GetSelectedSet()
	{
		return null;
	}

	[Token(Token = "0x60005F5")]
	public IntSetting GetSelectedSetIndex()
	{
		return null;
	}

	[Token(Token = "0x60005F6")]
	public void CreateSet(string name)
	{
	}

	[Token(Token = "0x60005F7")]
	public void CopySelectedSet(string name)
	{
	}

	[Token(Token = "0x60005F8")]
	public bool CanDeleteSelectedSet()
	{
		return default(bool);
	}

	[Token(Token = "0x60005F9")]
	public bool CanEditSelectedSet()
	{
		return default(bool);
	}

	[Token(Token = "0x60005FA")]
	public void DeleteSelectedSet()
	{
	}

	[Token(Token = "0x60005FB")]
	public IListSetting GetSets()
	{
		return null;
	}

	[Token(Token = "0x60005FC")]
	public void SetPresetsFromJsonString(string json)
	{
	}

	[Token(Token = "0x60005FD")]
	public string[] GetSetNames()
	{
		return null;
	}

	[Token(Token = "0x60005FE")]
	public SetSettingsContainer()
	{
	}
}
