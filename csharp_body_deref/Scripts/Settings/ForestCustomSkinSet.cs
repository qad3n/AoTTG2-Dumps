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
	[Token(Token = "0x400020B")]
	[FieldOffset(Offset = "0x38")]
	public BoolSetting RandomizedPairs;

	[Token(Token = "0x400020C")]
	[FieldOffset(Offset = "0x40")]
	public ListSetting<StringSetting> TreeTrunks;

	[Token(Token = "0x400020D")]
	[FieldOffset(Offset = "0x48")]
	public ListSetting<StringSetting> TreeLeafs;

	[Token(Token = "0x400020E")]
	[FieldOffset(Offset = "0x50")]
	public StringSetting Ground;

	[Token(Token = "0x600030D")]
	[Address(RVA = "0x3F857F0", Offset = "0x3F857F0", VA = "0x3F857F0", Slot = "12")]
	protected override bool Validate()
	{
		return default(bool);
	}

	[Token(Token = "0x600030E")]
	[Address(RVA = "0x3F85860", Offset = "0x3F85860", VA = "0x3F85860")]
	public ForestCustomSkinSet()
	{
	}
}
