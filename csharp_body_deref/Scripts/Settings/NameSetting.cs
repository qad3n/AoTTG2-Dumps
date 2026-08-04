// ==================== AoTTG2 cross-reference ====================
// Type: Settings.NameSetting
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/NameSetting.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/NameSetting.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Settings;

[Token(Token = "0x20000BB")]
internal class NameSetting : StringSetting
{
	[Token(Token = "0x4000496")]
	[FieldOffset(Offset = "0x24")]
	public int MaxStrippedLength;

	[Token(Token = "0x60003D1")]
	[Address(RVA = "0x41025B0", Offset = "0x41025B0", VA = "0x41025B0")]
	public NameSetting()
	{
	}

	[Token(Token = "0x60003D2")]
	[Address(RVA = "0x40FA5B0", Offset = "0x40FA5B0", VA = "0x40FA5B0")]
	public NameSetting(string defaultValue, int maxLength = int.MaxValue, int maxStrippedLength = int.MaxValue)
	{
	}

	[Token(Token = "0x60003D3")]
	[Address(RVA = "0x4102620", Offset = "0x4102620", VA = "0x4102620", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}

	[Token(Token = "0x60003D4")]
	[Address(RVA = "0x4102680", Offset = "0x4102680", VA = "0x4102680", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x60003D5")]
	[Address(RVA = "0x41026E0", Offset = "0x41026E0", VA = "0x41026E0", Slot = "10")]
	protected override string SanitizeValue(string value)
	{
		return null;
	}
}
