// ==================== AoTTG2 cross-reference ====================
// Type: Settings.FloatSetting
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/FloatSetting.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/FloatSetting.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Settings;

[Token(Token = "0x20000CF")]
internal class FloatSetting : TypedSetting<float>
{
	[Token(Token = "0x4000508")]
	[FieldOffset(Offset = "0x20")]
	public float MinValue;

	[Token(Token = "0x4000509")]
	[FieldOffset(Offset = "0x24")]
	public float MaxValue;

	[Token(Token = "0x6000407")]
	[Address(RVA = "0x1F12620", Offset = "0x1F10C20", VA = "0x181F12620")]
	public FloatSetting()
	{
	}

	[Token(Token = "0x6000408")]
	[Address(RVA = "0x1F12570", Offset = "0x1F10B70", VA = "0x181F12570")]
	public FloatSetting(float defaultValue, float minValue = -3.4028235E+38f, float maxValue = 3.4028235E+38f)
	{
	}

	[Token(Token = "0x6000409")]
	[Address(RVA = "0x1F12470", Offset = "0x1F10A70", VA = "0x181F12470", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}

	[Token(Token = "0x600040A")]
	[Address(RVA = "0x1F12500", Offset = "0x1F10B00", VA = "0x181F12500", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x600040B")]
	[Address(RVA = "0x1F124E0", Offset = "0x1F10AE0", VA = "0x181F124E0", Slot = "11")]
	protected override float SanitizeValue(float value)
	{
		return default(float);
	}
}
