// ==================== AoTTG2 cross-reference ====================
// Type: Settings.SaveableSettingsContainer
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/SaveableSettingsContainer.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/SaveableSettingsContainer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000BD")]
internal abstract class SaveableSettingsContainer : BaseSettingsContainer
{
	[Token(Token = "0x1700009B")]
	protected virtual string FolderPath
	{
		[Token(Token = "0x60003DA")]
		[Address(RVA = "0x4103400", Offset = "0x4103400", VA = "0x4103400", Slot = "13")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009C")]
	protected abstract string FileName
	{
		[Token(Token = "0x60003DB")]
		get;
	}

	[Token(Token = "0x1700009D")]
	protected virtual bool Encrypted
	{
		[Token(Token = "0x60003DC")]
		[Address(RVA = "0x4103470", Offset = "0x4103470", VA = "0x4103470", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60003DD")]
	[Address(RVA = "0x4103480", Offset = "0x4103480", VA = "0x4103480", Slot = "10")]
	protected override void Setup()
	{
	}

	[Token(Token = "0x60003DE")]
	[Address(RVA = "0x41034C0", Offset = "0x41034C0", VA = "0x41034C0", Slot = "16")]
	public virtual void Save()
	{
	}

	[Token(Token = "0x60003DF")]
	[Address(RVA = "0x4103170", Offset = "0x4103170", VA = "0x4103170", Slot = "17")]
	public virtual void Load()
	{
	}

	[Token(Token = "0x60003E0")]
	[Address(RVA = "0x41036C0", Offset = "0x41036C0", VA = "0x41036C0", Slot = "18")]
	protected virtual void LoadLegacy()
	{
	}

	[Token(Token = "0x60003E1")]
	[Address(RVA = "0x41036D0", Offset = "0x41036D0", VA = "0x41036D0", Slot = "19")]
	protected virtual string GetFilePath()
	{
		return null;
	}

	[Token(Token = "0x60003E2")]
	[Address(RVA = "0x40F3AE0", Offset = "0x40F3AE0", VA = "0x40F3AE0")]
	protected SaveableSettingsContainer()
	{
	}
}
