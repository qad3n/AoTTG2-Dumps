using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000B9")]
internal abstract class PresetSettingsContainer : SaveableSettingsContainer
{
	[Token(Token = "0x17000098")]
	protected virtual string PresetFolderPath
	{
		[Token(Token = "0x60003C6")]
		[Address(RVA = "0x3E10380", Offset = "0x3E10380", VA = "0x3E10380", Slot = "20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60003C7")]
	[Address(RVA = "0x3E103E0", Offset = "0x3E103E0", VA = "0x3E103E0", Slot = "17")]
	public override void Load()
	{
	}

	[Token(Token = "0x60003C8")]
	[Address(RVA = "0x3E10F90", Offset = "0x3E10F90", VA = "0x3E10F90", Slot = "21")]
	protected virtual string GetPresetFilePath()
	{
		return null;
	}

	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x3E11000", Offset = "0x3E11000", VA = "0x3E11000")]
	protected PresetSettingsContainer()
	{
	}
}
