// ==================== AoTTG2 cross-reference ====================
// Type: CustomSkins.TitanSkinSelection
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomSkins/TitanSkinSelection.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Characters;
using Il2CppDummyDll;
using Settings;

namespace CustomSkins;

[Token(Token = "0x20003D4")]
internal class TitanSkinSelection
{
	[Token(Token = "0x4001397")]
	[FieldOffset(Offset = "0x10")]
	public int Body;

	[Token(Token = "0x4001398")]
	[FieldOffset(Offset = "0x14")]
	public int Head;

	[Token(Token = "0x4001399")]
	[FieldOffset(Offset = "0x18")]
	public int Eye;

	[Token(Token = "0x400139A")]
	[FieldOffset(Offset = "0x20")]
	public string Hair;

	[Token(Token = "0x400139B")]
	[FieldOffset(Offset = "0x28")]
	public int SkinSlot;

	[Token(Token = "0x6001853")]
	[Address(RVA = "0x5867450", Offset = "0x5866450", VA = "0x5867450")]
	public TitanCustomSet CreateSet(BasicTitanSetup setup)
	{
		return null;
	}

	[Token(Token = "0x6001854")]
	[Address(RVA = "0x5867500", Offset = "0x5866500", VA = "0x5867500")]
	public TitanCustomSet ApplyTo(TitanCustomSet set)
	{
		return null;
	}

	[Token(Token = "0x6001855")]
	[Address(RVA = "0x5867680", Offset = "0x5866680", VA = "0x5867680")]
	public TitanSkinSelection()
	{
	}
}
