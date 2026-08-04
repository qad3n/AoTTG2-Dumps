// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgColorSettingRow
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgColorSettingRow.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000116")]
internal sealed class AottgColorSettingRow : AottgComponent
{
	[Token(Token = "0x4000699")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly AottgSettingDescriptor _descriptor;

	[Token(Token = "0x60005A7")]
	[Address(RVA = "0x435CE80", Offset = "0x435CE80", VA = "0x435CE80")]
	public AottgColorSettingRow(AottgSettingDescriptor descriptor)
	{
	}

	[Token(Token = "0x60005A8")]
	[Address(RVA = "0x435CEB0", Offset = "0x435CEB0", VA = "0x435CEB0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x60005A9")]
	[Address(RVA = "0x435CFE0", Offset = "0x435CFE0", VA = "0x435CFE0")]
	private void BuildPicker(AottgUi control)
	{
	}

	[Token(Token = "0x60005AA")]
	[Address(RVA = "0x435D080", Offset = "0x435D080", VA = "0x435D080")]
	internal static void BuildPicker(AottgUi control, IAottgSettingAdapter adapter, bool disabled, [Optional] string id, [Optional] Action<GisketchActionContext> changed)
	{
	}
}
