// ==================== AoTTG2 cross-reference ====================
// Type: Settings.TitanCustomSkinSet
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/TitanCustomSkinSet.c
// Prior real C# source (older reference): Assets/Scripts/Settings/CustomSkins/TitanCustomSkinSet.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000A6")]
internal class TitanCustomSkinSet : BaseSetSetting
{
	[Token(Token = "0x400036F")]
	public const int MaxSlots = 20;

	[Token(Token = "0x4000370")]
	[FieldOffset(Offset = "0x48")]
	public BoolSetting OverrideModels;

	[Token(Token = "0x4000371")]
	[FieldOffset(Offset = "0x50")]
	public ListSetting<TitanCustomSkinSlot> Slots;

	[Token(Token = "0x600048F")]
	[Address(RVA = "0x58D24C0", Offset = "0x58D14C0", VA = "0x58D24C0", Slot = "13")]
	protected override bool Validate()
	{
		return default(bool);
	}

	[Token(Token = "0x6000490")]
	[Address(RVA = "0x58D2510", Offset = "0x58D1510", VA = "0x58D2510")]
	public TitanCustomSkinSet()
	{
	}
}
