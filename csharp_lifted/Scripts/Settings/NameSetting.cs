// ==================== AoTTG2 cross-reference ====================
// Type: Settings.NameSetting
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/NameSetting.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/NameSetting.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Settings;

[Token(Token = "0x2000114")]
internal class NameSetting : StringSetting
{
	[Token(Token = "0x400065E")]
	[FieldOffset(Offset = "0x2C")]
	public int MaxStrippedLength;

	[Token(Token = "0x60005D9")]
	[Address(RVA = "0x5B7B6C0", Offset = "0x5B7A6C0", VA = "0x5B7B6C0")]
	public NameSetting()
	{
		// Lifted from source/cpp/Settings/NameSetting.c (Settings.NameSetting$$.ctor): clean
		object defaultValue;

		this.MaxStrippedLength = 0x7fffffff;
		defaultValue = (object)**(ulong*)(g_data_07556758 + 0xb8);
		this.MaxLength = 0x7fffffff;
		base(defaultValue);
		this.MaxLength = 0x7fffffff;
		return;
	}

	[Token(Token = "0x60005DA")]
	[Address(RVA = "0x5B7B780", Offset = "0x5B7A780", VA = "0x5B7B780")]
	public NameSetting(string defaultValue, int maxLength = 2147483647, int maxStrippedLength = 2147483647)
	{
		// Lifted from source/cpp/Settings/NameSetting.c (Settings.NameSetting$$.ctor): clean
		this.MaxStrippedLength = 0x7fffffff;
		this.MaxLength = 0x7fffffff;
		base((object)defaultValue);
		this.MaxLength = maxLength;
		this.MaxStrippedLength = maxStrippedLength;
		return;
	}

	[Token(Token = "0x60005DB")]
	[Address(RVA = "0x5B7B7F0", Offset = "0x5B7A7F0", VA = "0x5B7B7F0", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
		// Lifted from source/cpp/Settings/NameSetting.c (Settings.NameSetting$$DeserializeFromJsonObject): clean
		String value;

		if (json == null) {
			throw new NullReferenceException();
		}
		value = json.get_Value();
		this.Value = (object)value;
		return;
	}

	[Token(Token = "0x60005DC")]
	[Address(RVA = "0x5B7B850", Offset = "0x5B7A850", VA = "0x5B7B850", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		// Lifted from source/cpp/Settings/NameSetting.c (Settings.NameSetting$$SerializeToJsonObject): clean
		String aData;
		JSONString __this_00;

		aData = this._value;
		__this_00 = new JSONString(aData);
		return (JSONNode)__this_00;
	}

	[Token(Token = "0x60005DD")]
	[Address(RVA = "0x5B7B8B0", Offset = "0x5B7A8B0", VA = "0x5B7B8B0", Slot = "11")]
	protected override string SanitizeValue(string value)
	{
		// Lifted from source/cpp/Settings/NameSetting.c (Settings.NameSetting$$SanitizeValue): clean
		String pSVar1;
		int length;

		if (value == null) {
	label_05c7b937: ;
			throw new NullReferenceException();
		}
		length = this.MaxLength;
		if (length < value._stringLength) {
			pSVar1 = value;
		}
		else {
			pSVar1 = MiscExtensions.StripHex(value);
			if (pSVar1 == null) goto label_05c7b937;
			length = this.MaxStrippedLength;
			if (pSVar1._stringLength <= length) {
				return value;
			}
		}
		pSVar1 = pSVar1.Substring(0, length);
		return pSVar1;
	}
}
