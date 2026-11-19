// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgMultiplayerRows
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgMultiplayerRows.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.SettingsScreen;
using Il2CppDummyDll;
using Settings;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20002C0")]
internal static class AottgMultiplayerRows
{
	[Token(Token = "0x4000DFA")]
	public const float DialogWidth = 920f;

	[Token(Token = "0x60010A4")]
	[Address(RVA = "0x57C7260", Offset = "0x57C6260", VA = "0x57C7260")]
	public static AottgComponent Input(string id, string labelKey, StringSetting setting, [Optional] Action<GisketchActionContext> committed)
	{
		return null;
	}

	[Token(Token = "0x60010A5")]
	[Address(RVA = "0x57C72E0", Offset = "0x57C62E0", VA = "0x57C72E0")]
	public static AottgComponent Input(string id, string labelKey, IntSetting setting, [Optional] Action<GisketchActionContext> committed)
	{
		return null;
	}

	[Token(Token = "0x60010A6")]
	[Address(RVA = "0x57C7360", Offset = "0x57C6360", VA = "0x57C7360")]
	public static AottgComponent Switch(string id, string labelKey, BoolSetting setting, [Optional] string tooltipKey, [Optional] Action<GisketchActionContext> changed)
	{
		return null;
	}

	[Token(Token = "0x60010A7")]
	[Address(RVA = "0x57C7870", Offset = "0x57C6870", VA = "0x57C7870")]
	public static AottgComponent Select(string id, string category, string sub, string item, IntSetting setting)
	{
		return null;
	}

	[Token(Token = "0x60010A8")]
	[Address(RVA = "0x57C7A10", Offset = "0x57C6A10", VA = "0x57C7A10")]
	public static string Key(string category, string sub, string item)
	{
		return null;
	}

	[Token(Token = "0x60010A9")]
	[Address(RVA = "0x57C77A0", Offset = "0x57C67A0", VA = "0x57C77A0")]
	private static AottgComponent Row(string id, string labelKey, AottgSettingControlKind kind, IAottgSettingAdapter adapter, [Optional] string tooltipKey, [Optional] Action<GisketchActionContext> changed, [Optional] Action<GisketchActionContext> committed)
	{
		return null;
	}

	[Token(Token = "0x60010AA")]
	[Address(RVA = "0x57C7BD0", Offset = "0x57C6BD0", VA = "0x57C7BD0")]
	private static AottgComponent SyncedRow(AottgSettingDescriptor descriptor)
	{
		return null;
	}

	[Token(Token = "0x60010AB")]
	[Address(RVA = "0x57C7B10", Offset = "0x57C6B10", VA = "0x57C7B10")]
	private static AottgSettingDescriptor Descriptor(string id, string labelKey, AottgSettingControlKind kind, IAottgSettingAdapter adapter)
	{
		return null;
	}
}
