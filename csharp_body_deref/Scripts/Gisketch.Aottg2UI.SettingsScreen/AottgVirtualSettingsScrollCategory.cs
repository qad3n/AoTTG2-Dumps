// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgVirtualSettingsScrollCategory
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgVirtualSettingsScrollCategory.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Game;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x20001A5")]
internal sealed class AottgVirtualSettingsScrollCategory : AottgComponent
{
	[Token(Token = "0x40008D5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly AottgScreenSectionContext _context;

	[Token(Token = "0x40008D6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly string _categoryId;

	[Token(Token = "0x40008D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly AottgSettingsGroup[] _groups;

	[Token(Token = "0x40008D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly string _contentId;

	[Token(Token = "0x40008D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly float _initialScrollOffset;

	[Token(Token = "0x40008DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	private readonly float _paddingTop;

	[Token(Token = "0x6000906")]
	[Address(RVA = "0x23A1E40", Offset = "0x23A0440", VA = "0x1823A1E40")]
	public AottgVirtualSettingsScrollCategory(AottgScreenSectionContext context, string categoryId, AottgSettingsGroup[] groups, [Optional] string contentId, [Optional][DefaultParameterValue(0f)] float initialScrollOffset, [Optional] float? paddingTop)
	{
	}

	[Token(Token = "0x6000907")]
	[Address(RVA = "0x23A17F0", Offset = "0x239FDF0", VA = "0x1823A17F0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}
}
