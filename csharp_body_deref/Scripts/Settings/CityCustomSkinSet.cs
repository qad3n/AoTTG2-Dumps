// ==================== AoTTG2 cross-reference ====================
// Type: Settings.CityCustomSkinSet
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/CityCustomSkinSet.c
// Prior real C# source (older reference): Assets/Scripts/Settings/CustomSkins/CityCustomSkinSet.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000067")]
internal class CityCustomSkinSet : BaseSetSetting
{
	[Token(Token = "0x400020F")]
	[FieldOffset(Offset = "0x48")]
	public ListSetting<StringSetting> Houses;

	[Token(Token = "0x4000210")]
	[FieldOffset(Offset = "0x50")]
	public StringSetting Ground;

	[Token(Token = "0x4000211")]
	[FieldOffset(Offset = "0x58")]
	public StringSetting Wall;

	[Token(Token = "0x4000212")]
	[FieldOffset(Offset = "0x60")]
	public StringSetting Gate;

	[Token(Token = "0x6000319")]
	[Address(RVA = "0x1DBA180", Offset = "0x1DB8780", VA = "0x181DBA180", Slot = "13")]
	protected override bool Validate()
	{
		return default(bool);
	}

	[Token(Token = "0x600031A")]
	[Address(RVA = "0x1DBA1E0", Offset = "0x1DB87E0", VA = "0x181DBA1E0")]
	public CityCustomSkinSet()
	{
	}
}
