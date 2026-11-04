// ==================== AoTTG2 cross-reference ====================
// Type: Settings.BaseSetting
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Settings/BaseSetting.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/BaseSetting.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Settings;

[Token(Token = "0x20000C9")]
internal abstract class BaseSetting
{
	[Token(Token = "0x40004F5")]
	[FieldOffset(Offset = "0x10")]
	public InspectorSettingMetadata InspectorMetadata;

	[Token(Token = "0x60003E9")]
	public abstract void SetDefault();

	[Token(Token = "0x60003EA")]
	public abstract JSONNode SerializeToJsonObject();

	[Token(Token = "0x60003EB")]
	public abstract void DeserializeFromJsonObject(JSONNode json);

	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "7")]
	public virtual object GetDefaultValue()
	{
		return null;
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x1F0EC10", Offset = "0x1F0D210", VA = "0x181F0EC10", Slot = "8")]
	public virtual string SerializeToJsonString()
	{
		return null;
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x1F0EBD0", Offset = "0x1F0D1D0", VA = "0x181F0EBD0", Slot = "9")]
	public virtual void DeserializeFromJsonString(string json)
	{
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x1F0EB80", Offset = "0x1F0D180", VA = "0x181F0EB80", Slot = "10")]
	public virtual void Copy(BaseSetting other)
	{
	}

	[Token(Token = "0x60003F0")]
	[Address(RVA = "0x1F0EC50", Offset = "0x1F0D250", VA = "0x181F0EC50")]
	protected BaseSetting()
	{
	}
}
