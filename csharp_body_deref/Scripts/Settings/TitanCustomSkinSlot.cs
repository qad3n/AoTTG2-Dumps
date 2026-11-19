// ==================== AoTTG2 cross-reference ====================
// Type: Settings.TitanCustomSkinSlot
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/TitanCustomSkinSlot.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000A8")]
internal class TitanCustomSkinSlot : BaseSettingsContainer
{
	[Token(Token = "0x4000376")]
	[FieldOffset(Offset = "0x30")]
	public IntSetting Target;

	[Token(Token = "0x4000377")]
	[FieldOffset(Offset = "0x38")]
	public StringSetting Body;

	[Token(Token = "0x4000378")]
	[FieldOffset(Offset = "0x40")]
	public StringSetting Head;

	[Token(Token = "0x4000379")]
	[FieldOffset(Offset = "0x48")]
	public StringSetting Eye;

	[Token(Token = "0x400037A")]
	[FieldOffset(Offset = "0x50")]
	public StringSetting Hair;

	[Token(Token = "0x400037B")]
	[FieldOffset(Offset = "0x58")]
	public IntSetting BodyModel;

	[Token(Token = "0x400037C")]
	[FieldOffset(Offset = "0x60")]
	public IntSetting HeadModel;

	[Token(Token = "0x400037D")]
	[FieldOffset(Offset = "0x68")]
	public IntSetting EyeModel;

	[Token(Token = "0x400037E")]
	[FieldOffset(Offset = "0x70")]
	public IntSetting HairModel;

	[Token(Token = "0x6000491")]
	[Address(RVA = "0x58D25F0", Offset = "0x58D15F0", VA = "0x58D25F0")]
	public TitanCustomSkinSlot()
	{
	}
}
