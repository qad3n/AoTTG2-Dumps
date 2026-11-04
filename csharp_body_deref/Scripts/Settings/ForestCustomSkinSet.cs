// ==================== AoTTG2 cross-reference ====================
// Type: Settings.ForestCustomSkinSet
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/ForestCustomSkinSet.c
// Prior real C# source (older reference): Assets/Scripts/Settings/CustomSkins/ForestCustomSkinSet.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000069")]
internal class ForestCustomSkinSet : BaseSetSetting
{
	[Token(Token = "0x4000217")]
	[FieldOffset(Offset = "0x48")]
	public BoolSetting RandomizedPairs;

	[Token(Token = "0x4000218")]
	[FieldOffset(Offset = "0x50")]
	public ListSetting<StringSetting> TreeTrunks;

	[Token(Token = "0x4000219")]
	[FieldOffset(Offset = "0x58")]
	public ListSetting<StringSetting> TreeLeafs;

	[Token(Token = "0x400021A")]
	[FieldOffset(Offset = "0x60")]
	public StringSetting Ground;

	[Token(Token = "0x600031D")]
	[Address(RVA = "0x1DBF930", Offset = "0x1DBDF30", VA = "0x181DBF930", Slot = "13")]
	protected override bool Validate()
	{
		return default(bool);
	}

	[Token(Token = "0x600031E")]
	[Address(RVA = "0x1DBF9B0", Offset = "0x1DBDFB0", VA = "0x181DBF9B0")]
	public ForestCustomSkinSet()
	{
	}
}
