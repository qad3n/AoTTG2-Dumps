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

[Token(Token = "0x2000106")]
internal abstract class BaseSettingsContainer : BaseSetting
{
	[Token(Token = "0x4000640")]
	[FieldOffset(Offset = "0x18")]
	public OrderedDictionary Settings;

	[Token(Token = "0x4000641")]
	[FieldOffset(Offset = "0x20")]
	public Dictionary<string, BaseSetting> TypedSettings;

	[Token(Token = "0x4000642")]
	[FieldOffset(Offset = "0x28")]
	public HashSet<string> FoundSettings;

	[Token(Token = "0x6000570")]
	[Address(RVA = "0x5A46990", Offset = "0x5A45990", VA = "0x5A46990")]
	public BaseSettingsContainer()
	{
	}

	[Token(Token = "0x6000571")]
	[Address(RVA = "0x5A55100", Offset = "0x5A54100", VA = "0x5A55100", Slot = "11")]
	protected virtual void Setup()
	{
	}

	[Token(Token = "0x6000572")]
	[Address(RVA = "0x5A549D0", Offset = "0x5A539D0", VA = "0x5A549D0")]
	protected void RegisterSettings()
	{
	}

	[Token(Token = "0x6000573")]
	[Address(RVA = "0x5A41860", Offset = "0x5A40860", VA = "0x5A41860", Slot = "4")]
	public override void SetDefault()
	{
	}

	[Token(Token = "0x6000574")]
	[Address(RVA = "0x5A55220", Offset = "0x5A54220", VA = "0x5A55220", Slot = "12")]
	public virtual void Apply()
	{
	}

	[Token(Token = "0x6000575")]
	[Address(RVA = "0x5A45AC0", Offset = "0x5A44AC0", VA = "0x5A45AC0", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x6000576")]
	[Address(RVA = "0x5A46260", Offset = "0x5A45260", VA = "0x5A46260", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}

	[Token(Token = "0x6000577")]
	[Address(RVA = "0x5A55230", Offset = "0x5A54230", VA = "0x5A55230", Slot = "13")]
	protected virtual bool Validate()
	{
		return default(bool);
	}
}
