// ==================== AoTTG2 cross-reference ====================
// Type: Settings.BaseSettingsContainer
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/BaseSettingsContainer.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/BaseSettingsContainer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Collections.Specialized;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Settings;

[Token(Token = "0x20000AE")]
internal abstract class BaseSettingsContainer : BaseSetting
{
	[Token(Token = "0x4000480")]
	[FieldOffset(Offset = "0x10")]
	public OrderedDictionary Settings;

	[Token(Token = "0x4000481")]
	[FieldOffset(Offset = "0x18")]
	public Dictionary<string, BaseSetting> TypedSettings;

	[Token(Token = "0x6000371")]
	[Address(RVA = "0x40FDCF0", Offset = "0x40FDCF0", VA = "0x40FDCF0")]
	public BaseSettingsContainer()
	{
	}

	[Token(Token = "0x6000372")]
	[Address(RVA = "0x40FDE80", Offset = "0x40FDE80", VA = "0x40FDE80", Slot = "10")]
	protected virtual void Setup()
	{
	}

	[Token(Token = "0x6000373")]
	[Address(RVA = "0x40FDEA0", Offset = "0x40FDEA0", VA = "0x40FDEA0")]
	protected void RegisterSettings()
	{
	}

	[Token(Token = "0x6000374")]
	[Address(RVA = "0x40FE530", Offset = "0x40FE530", VA = "0x40FE530", Slot = "4")]
	public override void SetDefault()
	{
	}

	[Token(Token = "0x6000375")]
	[Address(RVA = "0x40FE910", Offset = "0x40FE910", VA = "0x40FE910", Slot = "11")]
	public virtual void Apply()
	{
	}

	[Token(Token = "0x6000376")]
	[Address(RVA = "0x40FE920", Offset = "0x40FE920", VA = "0x40FE920", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x6000377")]
	[Address(RVA = "0x40FEDC0", Offset = "0x40FEDC0", VA = "0x40FEDC0", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}

	[Token(Token = "0x6000378")]
	[Address(RVA = "0x40FF450", Offset = "0x40FF450", VA = "0x40FF450", Slot = "12")]
	protected virtual bool Validate()
	{
		return default(bool);
	}
}
