// ==================== AoTTG2 cross-reference ====================
// Type: Settings.IntSetting
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/IntSetting.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/IntSetting.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Settings;

[Token(Token = "0x20000B7")]
internal class IntSetting : TypedSetting<int>
{
	[Token(Token = "0x4000492")]
	[FieldOffset(Offset = "0x18")]
	public int MinValue;

	[Token(Token = "0x4000493")]
	[FieldOffset(Offset = "0x1C")]
	public int MaxValue;

	[Token(Token = "0x60003A8")]
	[Address(RVA = "0x40FD800", Offset = "0x40FD800", VA = "0x40FD800")]
	public IntSetting()
	{
	}

	[Token(Token = "0x60003A9")]
	[Address(RVA = "0x40F39A0", Offset = "0x40F39A0", VA = "0x40F39A0")]
	public IntSetting(int defaultValue, int minValue = int.MinValue, int maxValue = int.MaxValue)
	{
	}

	[Token(Token = "0x60003AA")]
	[Address(RVA = "0x4101100", Offset = "0x4101100", VA = "0x4101100", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}

	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x4101160", Offset = "0x4101160", VA = "0x4101160", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x41011D0", Offset = "0x41011D0", VA = "0x41011D0", Slot = "10")]
	protected override int SanitizeValue(int value)
	{
		return default(int);
	}
}
