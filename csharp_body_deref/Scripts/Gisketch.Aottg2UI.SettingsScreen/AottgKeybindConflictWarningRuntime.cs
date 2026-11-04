// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictWarningRuntime
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgKeybindConflictWarningRuntime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Data;
using Gisketch.Aottg2UI.Overlays;
using Gisketch.Aottg2UI.State;
using Gisketch.Aottg2UI.Styling;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x200015D")]
internal sealed class AottgKeybindConflictWarningRuntime : MonoBehaviour
{
	[Token(Token = "0x40007EB")]
	public const string NodeType = "AottgKeybindConflictWarning";

	[Token(Token = "0x40007EC")]
	private const string WarningSprite = "Icons/kenney-icons/warning";

	[Token(Token = "0x40007ED")]
	private const char StateKeySeparator = '\n';

	[Token(Token = "0x40007EE")]
	[FieldOffset(Offset = "0x20")]
	private GisketchTheme _theme;

	[Token(Token = "0x40007EF")]
	[FieldOffset(Offset = "0x28")]
	private GisketchUIState _state;

	[Token(Token = "0x40007F0")]
	[FieldOffset(Offset = "0x30")]
	private string _visibleStateKey;

	[Token(Token = "0x40007F1")]
	[FieldOffset(Offset = "0x38")]
	private string _tooltipStateKey;

	[Token(Token = "0x40007F2")]
	[FieldOffset(Offset = "0x40")]
	private CanvasGroup _group;

	[Token(Token = "0x40007F3")]
	[FieldOffset(Offset = "0x48")]
	private GisketchTooltipTrigger _tooltip;

	[Token(Token = "0x600070E")]
	[Address(RVA = "0x2307A20", Offset = "0x2306020", VA = "0x182307A20")]
	public static void RegisterFactory()
	{
	}

	[Token(Token = "0x600070F")]
	[Address(RVA = "0x2307620", Offset = "0x2305C20", VA = "0x182307620")]
	private static bool Build(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}

	[Token(Token = "0x6000710")]
	[Address(RVA = "0x2307E80", Offset = "0x2306480", VA = "0x182307E80")]
	internal static string StateKeys(string visibleStateKey, string tooltipStateKey)
	{
		return null;
	}

	[Token(Token = "0x6000711")]
	[Address(RVA = "0x2307AE0", Offset = "0x23060E0", VA = "0x182307AE0")]
	private void Setup(GisketchTheme theme, GisketchUIState state, string stateKeys)
	{
	}

	[Token(Token = "0x6000712")]
	[Address(RVA = "0x23076C0", Offset = "0x2305CC0", VA = "0x1823076C0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000713")]
	[Address(RVA = "0x2307750", Offset = "0x2305D50", VA = "0x182307750")]
	private void OnStateChanged(string key)
	{
	}

	[Token(Token = "0x6000714")]
	[Address(RVA = "0x23077B0", Offset = "0x2305DB0", VA = "0x1823077B0")]
	private void ReadStateKeys(string stateKeys)
	{
	}

	[Token(Token = "0x6000715")]
	[Address(RVA = "0x2307940", Offset = "0x2305F40", VA = "0x182307940")]
	private void RefreshVisibility()
	{
	}

	[Token(Token = "0x6000716")]
	[Address(RVA = "0x2307880", Offset = "0x2305E80", VA = "0x182307880")]
	private void RefreshTooltip()
	{
	}

	[Token(Token = "0x6000717")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public AottgKeybindConflictWarningRuntime()
	{
	}
}
