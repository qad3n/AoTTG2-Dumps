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
	[Token(Token = "0x400023C")]
	[FieldOffset(Offset = "0x48")]
	public StringSetting Front;

	[Token(Token = "0x400023D")]
	[FieldOffset(Offset = "0x50")]
	public StringSetting Back;

	[Token(Token = "0x400023E")]
	[FieldOffset(Offset = "0x58")]
	public StringSetting Left;

	[Token(Token = "0x400023F")]
	[FieldOffset(Offset = "0x60")]
	public StringSetting Right;

	[Token(Token = "0x4000240")]
	[FieldOffset(Offset = "0x68")]
	public StringSetting Up;

	[Token(Token = "0x4000241")]
	[FieldOffset(Offset = "0x70")]
	public StringSetting Down;

	[Token(Token = "0x6000325")]
	[Address(RVA = "0x1DCF080", Offset = "0x1DCD680", VA = "0x181DCF080")]
	public SkyboxCustomSkinSet()
	{
	}
}
