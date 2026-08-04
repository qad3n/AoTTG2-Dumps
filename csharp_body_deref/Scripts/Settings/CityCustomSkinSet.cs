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
	[Token(Token = "0x4000203")]
	[FieldOffset(Offset = "0x38")]
	public ListSetting<StringSetting> Houses;

	[Token(Token = "0x4000204")]
	[FieldOffset(Offset = "0x40")]
	public StringSetting Ground;

	[Token(Token = "0x4000205")]
	[FieldOffset(Offset = "0x48")]
	public StringSetting Wall;

	[Token(Token = "0x4000206")]
	[FieldOffset(Offset = "0x50")]
	public StringSetting Gate;

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x3F852F0", Offset = "0x3F852F0", VA = "0x3F852F0", Slot = "12")]
	protected override bool Validate()
	{
		return default(bool);
	}

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x3F85340", Offset = "0x3F85340", VA = "0x3F85340")]
	public CityCustomSkinSet()
	{
	}
}
