// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileInputSkinEditState
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileInputSkinEditState.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Settings;

namespace UI;

[Token(Token = "0x2000772")]
internal class MobileInputSkinEditState
{
	[Token(Token = "0x400258D")]
	[FieldOffset(Offset = "0x10")]
	public ColorSetting Color;

	[Token(Token = "0x400258E")]
	[FieldOffset(Offset = "0x18")]
	public string Image;

	[Token(Token = "0x400258F")]
	[FieldOffset(Offset = "0x20")]
	public BoolSetting PreserveAspect;

	[Token(Token = "0x60047CB")]
	[Address(RVA = "0x5BA5E90", Offset = "0x5BA4E90", VA = "0x5BA5E90")]
	public MobileInputSkinEditState(MobileInputSkin skin)
	{
	}

	[Token(Token = "0x60047CC")]
	[Address(RVA = "0x5BAA6B0", Offset = "0x5BA96B0", VA = "0x5BAA6B0")]
	public MobileInputSkin ToSkin()
	{
		return null;
	}
}
