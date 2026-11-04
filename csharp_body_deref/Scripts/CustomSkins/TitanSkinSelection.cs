// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.TitanSkinSelection
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/CustomSkins/TitanSkinSelection.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Characters;
using Il2CppDummyDll;
using Settings;

namespace CustomSkins;

[Token(Token = "0x2000379")]
internal class TitanSkinSelection
{
	[Token(Token = "0x4001206")]
	[FieldOffset(Offset = "0x10")]
	public int Body;

	[Token(Token = "0x4001207")]
	[FieldOffset(Offset = "0x14")]
	public int Head;

	[Token(Token = "0x4001208")]
	[FieldOffset(Offset = "0x18")]
	public int Eye;

	[Token(Token = "0x4001209")]
	[FieldOffset(Offset = "0x20")]
	public string Hair;

	[Token(Token = "0x400120A")]
	[FieldOffset(Offset = "0x28")]
	public int SkinSlot;

	[Token(Token = "0x60015F0")]
	[Address(RVA = "0x1E97920", Offset = "0x1E95F20", VA = "0x181E97920")]
	public TitanCustomSet CreateSet(BasicTitanSetup setup)
	{
		return null;
	}

	[Token(Token = "0x60015F1")]
	[Address(RVA = "0x1E97790", Offset = "0x1E95D90", VA = "0x181E97790")]
	public TitanCustomSet ApplyTo(TitanCustomSet set)
	{
		return null;
	}

	[Token(Token = "0x60015F2")]
	[Address(RVA = "0x1E979D0", Offset = "0x1E95FD0", VA = "0x181E979D0")]
	public TitanSkinSelection()
	{
	}
}
