// ==================== AoTTG2 cross-reference ====================
// Type: Settings.BoolSetting
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/BoolSetting.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/BoolSetting.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Settings;

[Token(Token = "0x2000108")]
internal class BoolSetting : TypedSetting<bool>
{
	[Token(Token = "0x600057C")]
	[Address(RVA = "0x5A55360", Offset = "0x5A54360", VA = "0x5A55360")]
	public BoolSetting()
	{
		// Lifted from source/cpp/Settings/BoolSetting.c (Settings.BoolSetting$$.ctor): clean
		base(false);
		return;
	}

	[Token(Token = "0x600057D")]
	[Address(RVA = "0x5A412A0", Offset = "0x5A402A0", VA = "0x5A412A0")]
	public BoolSetting(bool defaultValue)
	{
		// Lifted from source/cpp/Settings/BoolSetting.c (Settings.BoolSetting$$.ctor): clean
		base(defaultValue);
		return;
	}

	[Token(Token = "0x600057E")]
	[Address(RVA = "0x5A553A0", Offset = "0x5A543A0", VA = "0x5A553A0", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
		// Lifted from source/cpp/Settings/BoolSetting.c (Settings.BoolSetting$$DeserializeFromJsonObject): clean
		bool value;

		if (json == null) {
			throw new NullReferenceException();
		}
		value = json.get_AsBool();
		this.Value = value;
		return;
	}

	[Token(Token = "0x600057F")]
	[Address(RVA = "0x5A55400", Offset = "0x5A54400", VA = "0x5A55400", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		// Lifted from source/cpp/Settings/BoolSetting.c (Settings.BoolSetting$$SerializeToJsonObject): clean
		bool aData;
		JSONBool __this_00;

		aData = this._value;
		__this_00 = new JSONBool(aData);
		return (JSONNode)__this_00;
	}
}
