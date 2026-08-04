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

[Token(Token = "0x20000AD")]
internal abstract class BaseSetting
{
	[Token(Token = "0x600036A")]
	public abstract void SetDefault();

	[Token(Token = "0x600036B")]
	public abstract JSONNode SerializeToJsonObject();

	[Token(Token = "0x600036C")]
	public abstract void DeserializeFromJsonObject(JSONNode json);

	[Token(Token = "0x600036D")]
	[Address(RVA = "0x40FDDC0", Offset = "0x40FDDC0", VA = "0x40FDDC0", Slot = "7")]
	public virtual string SerializeToJsonString()
	{
		return null;
	}

	[Token(Token = "0x600036E")]
	[Address(RVA = "0x40FDE00", Offset = "0x40FDE00", VA = "0x40FDE00", Slot = "8")]
	public virtual void DeserializeFromJsonString(string json)
	{
	}

	[Token(Token = "0x600036F")]
	[Address(RVA = "0x40FDE30", Offset = "0x40FDE30", VA = "0x40FDE30", Slot = "9")]
	public virtual void Copy(BaseSetting other)
	{
	}

	[Token(Token = "0x6000370")]
	[Address(RVA = "0x40FDE70", Offset = "0x40FDE70", VA = "0x40FDE70")]
	protected BaseSetting()
	{
	}
}
