// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgKeybindTabSearchBridge
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000168")]
internal sealed class AottgKeybindTabSearchBridge : MonoBehaviour, IGisketchSearchTargetPreparer
{
	[Token(Token = "0x400084B")]
	public const string NodeType = "AottgKeybindTabSearchBridge";

	[Token(Token = "0x400084C")]
	[FieldOffset(Offset = "0x0")]
	private static bool _registered;

	[Token(Token = "0x400084D")]
	[FieldOffset(Offset = "0x20")]
	private string[] _tabIds;

	[Token(Token = "0x400084E")]
	[FieldOffset(Offset = "0x28")]
	private GisketchUIState _state;

	[Token(Token = "0x400084F")]
	[FieldOffset(Offset = "0x30")]
	private GisketchUIRoot _root;

	[Token(Token = "0x600079E")]
	[Address(RVA = "0x5CC3110", Offset = "0x5CC2110", VA = "0x5CC3110")]
	public static void RegisterFactory()
	{
	}

	[Token(Token = "0x600079F")]
	[Address(RVA = "0x5CC3200", Offset = "0x5CC2200", VA = "0x5CC3200")]
	private static bool Build(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}

	[Token(Token = "0x60007A0")]
	[Address(RVA = "0x5CC3330", Offset = "0x5CC2330", VA = "0x5CC3330", Slot = "4")]
	public bool TryPrepareSearchTarget(string targetId)
	{
		return default(bool);
	}

	[Token(Token = "0x60007A1")]
	[Address(RVA = "0x5CC3470", Offset = "0x5CC2470", VA = "0x5CC3470")]
	private string OwningTab(string targetId)
	{
		return null;
	}

	[Token(Token = "0x60007A2")]
	[Address(RVA = "0x5CC3590", Offset = "0x5CC2590", VA = "0x5CC3590")]
	private void SaveScroll(string tabId)
	{
	}

	[Token(Token = "0x60007A3")]
	[Address(RVA = "0x5CC3700", Offset = "0x5CC2700", VA = "0x5CC3700")]
	public AottgKeybindTabSearchBridge()
	{
	}
}
