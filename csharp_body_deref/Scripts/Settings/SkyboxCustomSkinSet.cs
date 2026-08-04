// ==================== AoTTG2 cross-reference ====================
// Type: Settings.SkyboxCustomSkinSet
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/SkyboxCustomSkinSet.c
// Prior real C# source (older reference): Assets/Scripts/Settings/CustomSkins/SkyboxCustomSkinSet.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x200006E")]
internal class SkyboxCustomSkinSet : BaseSetSetting
{
	[Token(Token = "0x400022F")]
	[FieldOffset(Offset = "0x38")]
	public StringSetting Front;

	[Token(Token = "0x4000230")]
	[FieldOffset(Offset = "0x40")]
	public StringSetting Back;

	[Token(Token = "0x4000231")]
	[FieldOffset(Offset = "0x48")]
	public StringSetting Left;

	[Token(Token = "0x4000232")]
	[FieldOffset(Offset = "0x50")]
	public StringSetting Right;

	[Token(Token = "0x4000233")]
	[FieldOffset(Offset = "0x58")]
	public StringSetting Up;

	[Token(Token = "0x4000234")]
	[FieldOffset(Offset = "0x60")]
	public StringSetting Down;

	[Token(Token = "0x6000315")]
	[Address(RVA = "0x3F86170", Offset = "0x3F86170", VA = "0x3F86170")]
	public SkyboxCustomSkinSet()
	{
	}
}
