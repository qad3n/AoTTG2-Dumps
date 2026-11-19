// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategory
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgVirtualSettingsScrollCategory.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x20001B4")]
internal sealed class AottgVirtualSettingsScrollCategory : AottgComponent
{
	[Token(Token = "0x4000931")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly AottgScreenSectionContext _context;

	[Token(Token = "0x4000932")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly string _categoryId;

	[Token(Token = "0x4000933")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly AottgSettingsGroup[] _groups;

	[Token(Token = "0x4000934")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly string _contentId;

	[Token(Token = "0x4000935")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly float _initialScrollOffset;

	[Token(Token = "0x4000936")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	private readonly float _paddingTop;

	[Token(Token = "0x6000999")]
	[Address(RVA = "0x5D58160", Offset = "0x5D57160", VA = "0x5D58160")]
	public AottgVirtualSettingsScrollCategory(AottgScreenSectionContext context, string categoryId, AottgSettingsGroup[] groups, [Optional] string contentId, [Optional][DefaultParameterValue(0f)] float initialScrollOffset, [Optional] float? paddingTop)
	{
	}

	[Token(Token = "0x600099A")]
	[Address(RVA = "0x5D58280", Offset = "0x5D57280", VA = "0x5D58280", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}
}
