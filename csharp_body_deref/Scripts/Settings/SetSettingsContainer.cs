using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000BB")]
internal class SetSettingsContainer<T> : BaseSettingsContainer, ISetSettingsContainer where T : BaseSetSetting, new()
{
	[Token(Token = "0x400047D")]
	[FieldOffset(Offset = "0x0")]
	public IntSetting SelectedSetIndex;

	[Token(Token = "0x400047E")]
	[FieldOffset(Offset = "0x0")]
	public ListSetting<T> Sets;

	[Token(Token = "0x1700009C")]
	protected virtual bool PresetsOnly
	{
		[Token(Token = "0x60003D3")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700009D")]
	protected virtual bool AllowPresets
	{
		[Token(Token = "0x60003D4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60003D5")]
	protected override bool Validate()
	{
		return default(bool);
	}

	[Token(Token = "0x60003D6")]
	public override void Apply()
	{
	}

	[Token(Token = "0x60003D7")]
	private void MigrateUniqueIds()
	{
	}

	[Token(Token = "0x60003D8")]
	public BaseSetSetting GetSelectedSet()
	{
		return null;
	}

	[Token(Token = "0x60003D9")]
	public IntSetting GetSelectedSetIndex()
	{
		return null;
	}

	[Token(Token = "0x60003DA")]
	public void CreateSet(string name)
	{
	}

	[Token(Token = "0x60003DB")]
	public void CopySelectedSet(string name)
	{
	}

	[Token(Token = "0x60003DC")]
	public bool CanDeleteSelectedSet()
	{
		return default(bool);
	}

	[Token(Token = "0x60003DD")]
	public bool CanEditSelectedSet()
	{
		return default(bool);
	}

	[Token(Token = "0x60003DE")]
	public void DeleteSelectedSet()
	{
	}

	[Token(Token = "0x60003DF")]
	public IListSetting GetSets()
	{
		return null;
	}

	[Token(Token = "0x60003E0")]
	public void SetPresetsFromJsonString(string json)
	{
	}

	[Token(Token = "0x60003E1")]
	public string[] GetSetNames()
	{
		return null;
	}

	[Token(Token = "0x60003E2")]
	public SetSettingsContainer()
	{
	}
}
