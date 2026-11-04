// ==================== AoTTG2 cross-reference ====================
// Type: Settings.BaseSettingsContainer
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Settings/BaseSettingsContainer.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/BaseSettingsContainer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Collections.Specialized;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Settings;

[Token(Token = "0x20000CB")]
internal abstract class BaseSettingsContainer : BaseSetting
{
	[Token(Token = "0x4000502")]
	[FieldOffset(Offset = "0x18")]
	public OrderedDictionary Settings;

	[Token(Token = "0x4000503")]
	[FieldOffset(Offset = "0x20")]
	public Dictionary<string, BaseSetting> TypedSettings;

	[Token(Token = "0x4000504")]
	[FieldOffset(Offset = "0x28")]
	public HashSet<string> FoundSettings;

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x1F0FCF0", Offset = "0x1F0E2F0", VA = "0x181F0FCF0")]
	public BaseSettingsContainer()
	{
	}

	[Token(Token = "0x60003F3")]
	[Address(RVA = "0x1F0FBB0", Offset = "0x1F0E1B0", VA = "0x181F0FBB0", Slot = "11")]
	protected virtual void Setup()
	{
	}

	[Token(Token = "0x60003F4")]
	[Address(RVA = "0x1F0F1E0", Offset = "0x1F0D7E0", VA = "0x181F0F1E0")]
	protected void RegisterSettings()
	{
	}

	[Token(Token = "0x60003F5")]
	[Address(RVA = "0x1F0F980", Offset = "0x1F0DF80", VA = "0x181F0F980", Slot = "4")]
	public override void SetDefault()
	{
	}

	[Token(Token = "0x60003F6")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "12")]
	public virtual void Apply()
	{
	}

	[Token(Token = "0x60003F7")]
	[Address(RVA = "0x1F0F6B0", Offset = "0x1F0DCB0", VA = "0x181F0F6B0", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x60003F8")]
	[Address(RVA = "0x1F0ED90", Offset = "0x1F0D390", VA = "0x181F0ED90", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}

	[Token(Token = "0x60003F9")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "13")]
	protected virtual bool Validate()
	{
		return default(bool);
	}
}
