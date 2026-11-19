// ==================== AoTTG2 cross-reference ====================
// Type: Settings.StringSetting
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/StringSetting.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/StringSetting.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Settings;

[Token(Token = "0x200011C")]
internal class StringSetting : TypedSetting<string>
{
	[Token(Token = "0x4000670")]
	[FieldOffset(Offset = "0x28")]
	public int MaxLength;

	[Token(Token = "0x6000607")]
	[Address(RVA = "0x5B7C970", Offset = "0x5B7B970", VA = "0x5B7C970")]
	public StringSetting()
	{
		// Lifted from source/cpp/Settings/StringSetting.c (Settings.StringSetting$$.ctor): clean
		this.MaxLength = 0x7fffffff;
		base((object)**(ulong*)(g_data_07556758 + 0xb8));
		return;
	}

	[Token(Token = "0x6000608")]
	[Address(RVA = "0x5B7B730", Offset = "0x5B7A730", VA = "0x5B7B730")]
	public StringSetting(string defaultValue, int maxLength = 2147483647)
	{
		// Lifted from source/cpp/Settings/StringSetting.c (Settings.StringSetting$$.ctor): clean
		this.MaxLength = 0x7fffffff;
		base((object)defaultValue);
		this.MaxLength = maxLength;
		return;
	}

	[Token(Token = "0x6000609")]
	[Address(RVA = "0x5B7C9D0", Offset = "0x5B7B9D0", VA = "0x5B7C9D0", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
		// Lifted from source/cpp/Settings/StringSetting.c (Settings.StringSetting$$DeserializeFromJsonObject): clean
		String value;

		if (json == null) {
			throw new NullReferenceException();
		}
		value = json.get_Value();
		this.Value = (object)value;
		return;
	}

	[Token(Token = "0x600060A")]
	[Address(RVA = "0x5B7CA30", Offset = "0x5B7BA30", VA = "0x5B7CA30", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		// Lifted from source/cpp/Settings/StringSetting.c (Settings.StringSetting$$SerializeToJsonObject): clean
		String aData;
		JSONString __this_00;

		aData = this._value;
		__this_00 = new JSONString(aData);
		return (JSONNode)__this_00;
	}

	[Token(Token = "0x600060B")]
	[Address(RVA = "0x5B7CA90", Offset = "0x5B7BA90", VA = "0x5B7CA90", Slot = "11")]
	protected override string SanitizeValue(string value)
	{
		// Lifted from source/cpp/Settings/StringSetting.c (Settings.StringSetting$$SanitizeValue): clean
		int length;
		String pSVar1;

		if (value == null) {
			throw new NullReferenceException();
		}
		length = this.MaxLength;
		if (length < value._stringLength) {
			pSVar1 = value.Substring(0, length);
			return pSVar1;
		}
		return value;
	}
}
