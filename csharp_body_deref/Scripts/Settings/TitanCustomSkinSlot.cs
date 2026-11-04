// ==================== AoTTG2 cross-reference ====================
// Type: Settings.TitanCustomSkinSlot
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Settings/TitanCustomSkinSlot.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000071")]
internal class TitanCustomSkinSlot : BaseSettingsContainer
{
	[Token(Token = "0x4000249")]
	[FieldOffset(Offset = "0x30")]
	public IntSetting Target;

	[Token(Token = "0x400024A")]
	[FieldOffset(Offset = "0x38")]
	public StringSetting Body;

	[Token(Token = "0x400024B")]
	[FieldOffset(Offset = "0x40")]
	public StringSetting Head;

	[Token(Token = "0x400024C")]
	[FieldOffset(Offset = "0x48")]
	public StringSetting Eye;

	[Token(Token = "0x400024D")]
	[FieldOffset(Offset = "0x50")]
	public StringSetting Hair;

	[Token(Token = "0x400024E")]
	[FieldOffset(Offset = "0x58")]
	public IntSetting BodyModel;

	[Token(Token = "0x400024F")]
	[FieldOffset(Offset = "0x60")]
	public IntSetting HeadModel;

	[Token(Token = "0x4000250")]
	[FieldOffset(Offset = "0x68")]
	public IntSetting EyeModel;

	[Token(Token = "0x4000251")]
	[FieldOffset(Offset = "0x70")]
	public IntSetting HairModel;

	[Token(Token = "0x6000328")]
	[Address(RVA = "0x1DCFA90", Offset = "0x1DCE090", VA = "0x181DCFA90")]
	public TitanCustomSkinSlot()
	{
	}
}
