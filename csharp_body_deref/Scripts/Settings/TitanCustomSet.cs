// ==================== AoTTG2 cross-reference ====================
// Type: Settings.TitanCustomSet
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/TitanCustomSet.c
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/TitanCustomSet.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000095")]
internal class TitanCustomSet : BaseSetSetting
{
	[Token(Token = "0x4000362")]
	[FieldOffset(Offset = "0x38")]
	public IntSetting Head;

	[Token(Token = "0x4000363")]
	[FieldOffset(Offset = "0x40")]
	public IntSetting Body;

	[Token(Token = "0x4000364")]
	[FieldOffset(Offset = "0x48")]
	public IntSetting Eye;

	[Token(Token = "0x4000365")]
	[FieldOffset(Offset = "0x50")]
	public StringSetting Hair;

	[Token(Token = "0x4000366")]
	[FieldOffset(Offset = "0x58")]
	public ColorSetting SkinColor;

	[Token(Token = "0x4000367")]
	[FieldOffset(Offset = "0x60")]
	public ColorSetting HairColor;

	[Token(Token = "0x6000334")]
	[Address(RVA = "0x3F8C4F0", Offset = "0x3F8C4F0", VA = "0x3F8C4F0")]
	public TitanCustomSet()
	{
	}
}
