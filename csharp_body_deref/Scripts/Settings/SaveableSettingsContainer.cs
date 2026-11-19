// ==================== AoTTG2 cross-reference ====================
// Type: Settings.SaveableSettingsContainer
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/SaveableSettingsContainer.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/SaveableSettingsContainer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Settings;

[Token(Token = "0x2000116")]
internal abstract class SaveableSettingsContainer : BaseSettingsContainer
{
	[Token(Token = "0x400065F")]
	private const string VersionKey = "SettingsVersion";

	[Token(Token = "0x4000660")]
	[FieldOffset(Offset = "0x30")]
	private bool _migrationPending;

	[Token(Token = "0x170000C6")]
	protected virtual string FolderPath
	{
		[Token(Token = "0x60005E2")]
		[Address(RVA = "0x5B7C450", Offset = "0x5B7B450", VA = "0x5B7C450", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000C7")]
	protected abstract string FileName
	{
		[Token(Token = "0x60005E3")]
		get;
	}

	[Token(Token = "0x170000C8")]
	protected virtual bool Encrypted
	{
		[Token(Token = "0x60005E4")]
		[Address(RVA = "0x5B7C4C0", Offset = "0x5B7B4C0", VA = "0x5B7C4C0", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000C9")]
	protected virtual int CurrentVersion
	{
		[Token(Token = "0x60005E5")]
		[Address(RVA = "0x5B7C4D0", Offset = "0x5B7B4D0", VA = "0x5B7C4D0", Slot = "17")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60005E6")]
	[Address(RVA = "0x5B7C4E0", Offset = "0x5B7B4E0", VA = "0x5B7C4E0", Slot = "11")]
	protected override void Setup()
	{
	}

	[Token(Token = "0x60005E7")]
	[Address(RVA = "0x5B7C520", Offset = "0x5B7B520", VA = "0x5B7C520", Slot = "18")]
	public virtual void Save()
	{
	}

	[Token(Token = "0x60005E8")]
	[Address(RVA = "0x5B7C1E0", Offset = "0x5B7B1E0", VA = "0x5B7C1E0", Slot = "19")]
	public virtual void Load()
	{
	}

	[Token(Token = "0x60005E9")]
	[Address(RVA = "0x5B7C6D0", Offset = "0x5B7B6D0", VA = "0x5B7C6D0", Slot = "20")]
	protected virtual void LoadLegacy()
	{
	}

	[Token(Token = "0x60005EA")]
	[Address(RVA = "0x5B7C6E0", Offset = "0x5B7B6E0", VA = "0x5B7C6E0", Slot = "21")]
	protected virtual bool Migrate(int fromVersion)
	{
		return default(bool);
	}

	[Token(Token = "0x60005EB")]
	[Address(RVA = "0x5B7C6F0", Offset = "0x5B7B6F0", VA = "0x5B7C6F0", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x60005EC")]
	[Address(RVA = "0x5B7C7B0", Offset = "0x5B7B7B0", VA = "0x5B7C7B0", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}

	[Token(Token = "0x60005ED")]
	[Address(RVA = "0x5B7C900", Offset = "0x5B7B900", VA = "0x5B7C900", Slot = "22")]
	protected virtual string GetFilePath()
	{
		return null;
	}

	[Token(Token = "0x60005EE")]
	[Address(RVA = "0x5B7C440", Offset = "0x5B7B440", VA = "0x5B7C440")]
	protected SaveableSettingsContainer()
	{
	}
}
