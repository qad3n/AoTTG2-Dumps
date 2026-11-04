// ==================== AoTTG2 cross-reference ====================
// Type: Settings.TitanCustomSkinSet
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Settings/TitanCustomSkinSet.c
// Prior real C# source (older reference): Assets/Scripts/Settings/CustomSkins/TitanCustomSkinSet.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x200006F")]
internal class TitanCustomSkinSet : BaseSetSetting
{
	[Token(Token = "0x4000242")]
	public const int MaxSlots = 20;

	[Token(Token = "0x4000243")]
	[FieldOffset(Offset = "0x48")]
	public BoolSetting OverrideModels;

	[Token(Token = "0x4000244")]
	[FieldOffset(Offset = "0x50")]
	public ListSetting<TitanCustomSkinSlot> Slots;

	[Token(Token = "0x6000326")]
	[Address(RVA = "0x1DCF950", Offset = "0x1DCDF50", VA = "0x181DCF950", Slot = "13")]
	protected override bool Validate()
	{
		return default(bool);
	}

	[Token(Token = "0x6000327")]
	[Address(RVA = "0x1DCF9A0", Offset = "0x1DCDFA0", VA = "0x181DCF9A0")]
	public TitanCustomSkinSet()
	{
	}
}
