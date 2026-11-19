// ==================== AoTTG2 cross-reference ====================
// Type: Settings.TitanCustomSkinSet
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/TitanCustomSkinSet.c
// Prior real C# source (older reference): Assets/Scripts/Settings/CustomSkins/TitanCustomSkinSet.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
		// Lifted from source/cpp/Settings/TitanCustomSkinSet.c (Settings.TitanCustomSkinSet$$Validate): clean
		ListSetting<TitanCustomSkinSlot> __this_00;
		int iVar1;

		__this_00 = this.Slots;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		iVar1 = __this_00.GetCount();
		return iVar1 < 0x15;
	}

	[Token(Token = "0x6000490")]
	[Address(RVA = "0x58D2510", Offset = "0x58D1510", VA = "0x58D2510")]
	public TitanCustomSkinSet()
	{
		// Lifted from source/cpp/Settings/TitanCustomSkinSet.c (Settings.TitanCustomSkinSet$$.ctor): clean
		MethodInfo method_00;
		TitanCustomSkinSlot __this_00;
		ListSetting<TitanCustomSkinSlot> __this_01;

		method_00 = new BoolSetting(false);
		this.OverrideModels = (BoolSetting)method_00;
		__this_00 = new TitanCustomSkinSlot();
		__this_01 = new ListSetting<TitanCustomSkinSlot>((object)__this_00);
		this.Slots = __this_01;
		base();
		return;
	}
}
