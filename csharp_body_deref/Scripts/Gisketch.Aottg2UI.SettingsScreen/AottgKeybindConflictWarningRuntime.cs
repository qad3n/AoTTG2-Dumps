// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgKeybindConflictWarningRuntime
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000165")]
internal sealed class AottgKeybindConflictWarningRuntime : MonoBehaviour
{
	[Token(Token = "0x4000836")]
	public const string NodeType = "AottgKeybindConflictWarning";

	[Token(Token = "0x4000837")]
	private const string WarningSprite = "Icons/kenney-icons/warning";

	[Token(Token = "0x4000838")]
	private const char StateKeySeparator = '\n';

	[Token(Token = "0x4000839")]
	[FieldOffset(Offset = "0x20")]
	private GisketchTheme _theme;

	[Token(Token = "0x400083A")]
	[FieldOffset(Offset = "0x28")]
	private GisketchUIState _state;

	[Token(Token = "0x400083B")]
	[FieldOffset(Offset = "0x30")]
	private string _visibleStateKey;

	[Token(Token = "0x400083C")]
	[FieldOffset(Offset = "0x38")]
	private string _tooltipStateKey;

	[Token(Token = "0x400083D")]
	[FieldOffset(Offset = "0x40")]
	private CanvasGroup _group;

	[Token(Token = "0x400083E")]
	[FieldOffset(Offset = "0x48")]
	private GisketchTooltipTrigger _tooltip;

	[Token(Token = "0x6000785")]
	[Address(RVA = "0x5CC1DD0", Offset = "0x5CC0DD0", VA = "0x5CC1DD0")]
	public static void RegisterFactory()
	{
	}

	[Token(Token = "0x6000786")]
	[Address(RVA = "0x5CC1E90", Offset = "0x5CC0E90", VA = "0x5CC1E90")]
	private static bool Build(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		return default(bool);
	}

	[Token(Token = "0x6000787")]
	[Address(RVA = "0x5CC2230", Offset = "0x5CC1230", VA = "0x5CC2230")]
	internal static string StateKeys(string visibleStateKey, string tooltipStateKey)
	{
		return null;
	}

	[Token(Token = "0x6000788")]
	[Address(RVA = "0x5CC1F20", Offset = "0x5CC0F20", VA = "0x5CC1F20")]
	private void Setup(GisketchTheme theme, GisketchUIState state, string stateKeys)
	{
	}

	[Token(Token = "0x6000789")]
	[Address(RVA = "0x5CC2530", Offset = "0x5CC1530", VA = "0x5CC2530")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600078A")]
	[Address(RVA = "0x5CC25B0", Offset = "0x5CC15B0", VA = "0x5CC25B0")]
	private void OnStateChanged(string key)
	{
	}

	[Token(Token = "0x600078B")]
	[Address(RVA = "0x5CC22C0", Offset = "0x5CC12C0", VA = "0x5CC22C0")]
	private void ReadStateKeys(string stateKeys)
	{
	}

	[Token(Token = "0x600078C")]
	[Address(RVA = "0x5CC2390", Offset = "0x5CC1390", VA = "0x5CC2390")]
	private void RefreshVisibility()
	{
	}

	[Token(Token = "0x600078D")]
	[Address(RVA = "0x5CC2460", Offset = "0x5CC1460", VA = "0x5CC2460")]
	private void RefreshTooltip()
	{
	}

	[Token(Token = "0x600078E")]
	[Address(RVA = "0x5CC2600", Offset = "0x5CC1600", VA = "0x5CC2600")]
	public AottgKeybindConflictWarningRuntime()
	{
	}
}
