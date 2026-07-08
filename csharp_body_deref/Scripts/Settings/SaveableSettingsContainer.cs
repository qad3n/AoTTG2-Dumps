using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000BA")]
internal abstract class SaveableSettingsContainer : BaseSettingsContainer
{
	[Token(Token = "0x17000099")]
	protected virtual string FolderPath
	{
		[Token(Token = "0x60003CA")]
		[Address(RVA = "0x3E11010", Offset = "0x3E11010", VA = "0x3E11010", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009A")]
	protected abstract string FileName
	{
		[Token(Token = "0x60003CB")]
		get;
	}

	[Token(Token = "0x1700009B")]
	protected virtual bool Encrypted
	{
		[Token(Token = "0x60003CC")]
		[Address(RVA = "0x3E11080", Offset = "0x3E11080", VA = "0x3E11080", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60003CD")]
	[Address(RVA = "0x3E11090", Offset = "0x3E11090", VA = "0x3E11090", Slot = "10")]
	protected override void Setup()
	{
	}

	[Token(Token = "0x60003CE")]
	[Address(RVA = "0x3E110D0", Offset = "0x3E110D0", VA = "0x3E110D0", Slot = "16")]
	public virtual void Save()
	{
	}

	[Token(Token = "0x60003CF")]
	[Address(RVA = "0x3E10D80", Offset = "0x3E10D80", VA = "0x3E10D80", Slot = "17")]
	public virtual void Load()
	{
	}

	[Token(Token = "0x60003D0")]
	[Address(RVA = "0x3E112D0", Offset = "0x3E112D0", VA = "0x3E112D0", Slot = "18")]
	protected virtual void LoadLegacy()
	{
	}

	[Token(Token = "0x60003D1")]
	[Address(RVA = "0x3E112E0", Offset = "0x3E112E0", VA = "0x3E112E0", Slot = "19")]
	protected virtual string GetFilePath()
	{
		return null;
	}

	[Token(Token = "0x60003D2")]
	[Address(RVA = "0x3E07DF0", Offset = "0x3E07DF0", VA = "0x3E07DF0")]
	protected SaveableSettingsContainer()
	{
	}
}
