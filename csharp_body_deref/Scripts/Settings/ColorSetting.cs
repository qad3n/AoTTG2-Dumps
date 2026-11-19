// ==================== AoTTG2 cross-reference ====================
// Type: Settings.ColorSetting
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/ColorSetting.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/ColorSetting.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using SimpleJSONFixed;
using Utility;

namespace Settings;

[Token(Token = "0x2000109")]
internal class ColorSetting : TypedSetting<Color255>
{
	[Token(Token = "0x4000645")]
	[FieldOffset(Offset = "0x28")]
	public int MinAlpha;

	[Token(Token = "0x6000580")]
	[Address(RVA = "0x5A55460", Offset = "0x5A54460", VA = "0x5A55460")]
	public ColorSetting()
	{
	}

	[Token(Token = "0x6000581")]
	[Address(RVA = "0x5A451C0", Offset = "0x5A441C0", VA = "0x5A451C0")]
	public ColorSetting(Color255 defaultValue, int minAlpha = 0)
	{
	}

	[Token(Token = "0x6000582")]
	[Address(RVA = "0x5A554E0", Offset = "0x5A544E0", VA = "0x5A554E0", Slot = "11")]
	protected override Color255 SanitizeValue(Color255 value)
	{
		return null;
	}

	[Token(Token = "0x6000583")]
	[Address(RVA = "0x5A55560", Offset = "0x5A54560", VA = "0x5A55560", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x6000584")]
	[Address(RVA = "0x5A55710", Offset = "0x5A54710", VA = "0x5A55710", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}
}
