// ==================== AoTTG2 cross-reference ====================
// Type: Settings.SaveableSettingsContainer
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Settings/SaveableSettingsContainer.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/SaveableSettingsContainer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Settings;

[Token(Token = "0x20000DB")]
internal abstract class SaveableSettingsContainer : BaseSettingsContainer
{
	[Token(Token = "0x4000520")]
	private const string VersionKey = "SettingsVersion";

	[Token(Token = "0x4000521")]
	[FieldOffset(Offset = "0x30")]
	private bool _migrationPending;

	[Token(Token = "0x170000A9")]
	protected virtual string FolderPath
	{
		[Token(Token = "0x6000464")]
		[Address(RVA = "0x1F25AD0", Offset = "0x1F240D0", VA = "0x181F25AD0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000AA")]
	protected abstract string FileName
	{
		[Token(Token = "0x6000465")]
		get;
	}

	[Token(Token = "0x170000AB")]
	protected virtual bool Encrypted
	{
		[Token(Token = "0x6000466")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "16")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000AC")]
	protected virtual int CurrentVersion
	{
		[Token(Token = "0x6000467")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "17")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000468")]
	[Address(RVA = "0x1F25A90", Offset = "0x1F24090", VA = "0x181F25A90", Slot = "11")]
	protected override void Setup()
	{
	}

	[Token(Token = "0x6000469")]
	[Address(RVA = "0x1F25870", Offset = "0x1F23E70", VA = "0x181F25870", Slot = "18")]
	public virtual void Save()
	{
	}

	[Token(Token = "0x600046A")]
	[Address(RVA = "0x1F25700", Offset = "0x1F23D00", VA = "0x181F25700", Slot = "19")]
	public virtual void Load()
	{
	}

	[Token(Token = "0x600046B")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "20")]
	protected virtual void LoadLegacy()
	{
	}

	[Token(Token = "0x600046C")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "21")]
	protected virtual bool Migrate(int fromVersion)
	{
		return default(bool);
	}

	[Token(Token = "0x600046D")]
	[Address(RVA = "0x1F259C0", Offset = "0x1F23FC0", VA = "0x181F259C0", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x600046E")]
	[Address(RVA = "0x1F13900", Offset = "0x1F11F00", VA = "0x181F13900", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}

	[Token(Token = "0x600046F")]
	[Address(RVA = "0x1F25680", Offset = "0x1F23C80", VA = "0x181F25680", Slot = "22")]
	protected virtual string GetFilePath()
	{
		return null;
	}

	[Token(Token = "0x6000470")]
	[Address(RVA = "0x1F24550", Offset = "0x1F22B50", VA = "0x181F24550")]
	protected SaveableSettingsContainer()
	{
	}
}
