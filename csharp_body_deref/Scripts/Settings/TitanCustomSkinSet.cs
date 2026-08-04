// ==================== AoTTG2 cross-reference ====================
// Type: Settings.TitanCustomSkinSet
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/TitanCustomSkinSet.c
// Prior real C# source (older reference): Assets/Scripts/Settings/CustomSkins/TitanCustomSkinSet.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x200006F")]
internal class TitanCustomSkinSet : BaseSetSetting
{
	[Token(Token = "0x4000235")]
	[FieldOffset(Offset = "0x38")]
	public BoolSetting RandomizedPairs;

	[Token(Token = "0x4000236")]
	[FieldOffset(Offset = "0x40")]
	public ListSetting<StringSetting> Hairs;

	[Token(Token = "0x4000237")]
	[FieldOffset(Offset = "0x48")]
	public ListSetting<IntSetting> HairModels;

	[Token(Token = "0x4000238")]
	[FieldOffset(Offset = "0x50")]
	public ListSetting<StringSetting> Bodies;

	[Token(Token = "0x4000239")]
	[FieldOffset(Offset = "0x58")]
	public ListSetting<StringSetting> BodyModels;

	[Token(Token = "0x400023A")]
	[FieldOffset(Offset = "0x60")]
	public ListSetting<StringSetting> Heads;

	[Token(Token = "0x400023B")]
	[FieldOffset(Offset = "0x68")]
	public ListSetting<IntSetting> HeadModels;

	[Token(Token = "0x400023C")]
	[FieldOffset(Offset = "0x70")]
	public ListSetting<StringSetting> Eyes;

	[Token(Token = "0x6000316")]
	[Address(RVA = "0x3F86340", Offset = "0x3F86340", VA = "0x3F86340", Slot = "12")]
	protected override bool Validate()
	{
		return default(bool);
	}

	[Token(Token = "0x6000317")]
	[Address(RVA = "0x3F86450", Offset = "0x3F86450", VA = "0x3F86450")]
	public TitanCustomSkinSet()
	{
	}
}
