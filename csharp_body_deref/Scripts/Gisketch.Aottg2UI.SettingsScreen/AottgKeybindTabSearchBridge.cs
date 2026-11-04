// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgKeybindTabSearchBridge
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindTabSearchBridge.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Data;
using Gisketch.Aottg2UI.State;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000160")]
internal sealed class AottgKeybindTabSearchBridge : MonoBehaviour, IGisketchSearchTargetPreparer
{
	[Token(Token = "0x4000801")]
	public const string NodeType = "AottgKeybindTabSearchBridge";

	[Token(Token = "0x4000802")]
	[FieldOffset(Offset = "0x0")]
	private static bool _registered;

	[Token(Token = "0x4000803")]
	[FieldOffset(Offset = "0x20")]
	private string[] _tabIds;

	[Token(Token = "0x4000804")]
	[FieldOffset(Offset = "0x28")]
	private GisketchUIState _state;

	[Token(Token = "0x4000805")]
	[FieldOffset(Offset = "0x30")]
	private GisketchUIRoot _root;

	[Token(Token = "0x6000728")]
	[Address(RVA = "0x2309050", Offset = "0x2307650", VA = "0x182309050")]
	public static void RegisterFactory()
	{
	}

	[Token(Token = "0x6000729")]
	[Address(RVA = "0x2308E00", Offset = "0x2307400", VA = "0x182308E00")]
	private static bool Build(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}

	[Token(Token = "0x600072A")]
	[Address(RVA = "0x23092C0", Offset = "0x23078C0", VA = "0x1823092C0", Slot = "4")]
	public bool TryPrepareSearchTarget(string targetId)
	{
		return default(bool);
	}

	[Token(Token = "0x600072B")]
	[Address(RVA = "0x2308F40", Offset = "0x2307540", VA = "0x182308F40")]
	private string OwningTab(string targetId)
	{
		return null;
	}

	[Token(Token = "0x600072C")]
	[Address(RVA = "0x2309150", Offset = "0x2307750", VA = "0x182309150")]
	private void SaveScroll(string tabId)
	{
	}

	[Token(Token = "0x600072D")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public AottgKeybindTabSearchBridge()
	{
	}
}
