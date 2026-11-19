// ==================== AoTTG2 cross-reference ====================
// Type: Settings.BaseSetting
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/BaseSetting.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/BaseSetting.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Settings;

[Token(Token = "0x2000104")]
internal abstract class BaseSetting
{
	[Token(Token = "0x4000633")]
	[FieldOffset(Offset = "0x10")]
	public InspectorSettingMetadata InspectorMetadata;

	[Token(Token = "0x6000567")]
	public abstract void SetDefault();

	[Token(Token = "0x6000568")]
	public abstract JSONNode SerializeToJsonObject();

	[Token(Token = "0x6000569")]
	public abstract void DeserializeFromJsonObject(JSONNode json);

	[Token(Token = "0x600056A")]
	[Address(RVA = "0x5A54EE0", Offset = "0x5A53EE0", VA = "0x5A54EE0", Slot = "7")]
	public virtual object GetDefaultValue()
	{
		return null;
	}

	[Token(Token = "0x600056B")]
	[Address(RVA = "0x5A54EF0", Offset = "0x5A53EF0", VA = "0x5A54EF0", Slot = "8")]
	public virtual string SerializeToJsonString()
	{
		return null;
	}

	[Token(Token = "0x600056C")]
	[Address(RVA = "0x5A54F30", Offset = "0x5A53F30", VA = "0x5A54F30", Slot = "9")]
	public virtual void DeserializeFromJsonString(string json)
	{
	}

	[Token(Token = "0x600056D")]
	[Address(RVA = "0x5A54F60", Offset = "0x5A53F60", VA = "0x5A54F60", Slot = "10")]
	public virtual void Copy(BaseSetting other)
	{
	}

	[Token(Token = "0x600056E")]
	[Address(RVA = "0x5A54FA0", Offset = "0x5A53FA0", VA = "0x5A54FA0")]
	protected BaseSetting()
	{
	}
}
