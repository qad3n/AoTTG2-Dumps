// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingRowFrame.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x200012B")]
internal sealed class AottgSettingRowFrame : AottgComponent
{
	[Token(Token = "0x40006DB")]
	private const float TooltipIconGap = 8f;

	[Token(Token = "0x40006DC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x40006DD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly string _label;

	[Token(Token = "0x40006DE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly float _controlWidth;

	[Token(Token = "0x40006DF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	private readonly float _controlVisualWidth;

	[Token(Token = "0x40006E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly string _tooltip;

	[Token(Token = "0x40006E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly string _searchTitle;

	[Token(Token = "0x40006E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly string _searchKeywords;

	[Token(Token = "0x40006E3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly string _icon;

	[Token(Token = "0x40006E4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly Action<AottgUi> _buildControl;

	[Token(Token = "0x6000630")]
	[Address(RVA = "0x435BB70", Offset = "0x435BB70", VA = "0x435BB70")]
	public AottgSettingRowFrame(string id, string label, float controlWidth, Action<AottgUi> buildControl, [Optional] string tooltip, [Optional] string searchTitle, [Optional] string searchKeywords, [Optional] string icon, [Optional] float? controlVisualWidth)
	{
	}

	[Token(Token = "0x6000631")]
	[Address(RVA = "0x4362D50", Offset = "0x4362D50", VA = "0x4362D50", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000632")]
	[Address(RVA = "0x4362F30", Offset = "0x4362F30", VA = "0x4362F30")]
	private void BuildLabel(AottgUi row)
	{
	}

	[Token(Token = "0x6000633")]
	[Address(RVA = "0x43630D0", Offset = "0x43630D0", VA = "0x43630D0")]
	private void BuildTooltip(AottgUi control)
	{
	}

	[Token(Token = "0x6000634")]
	[Address(RVA = "0x4363320", Offset = "0x4363320", VA = "0x4363320")]
	private static GisketchLayoutDefinition ControlLayout()
	{
		return null;
	}

	[Token(Token = "0x6000635")]
	[Address(RVA = "0x43633E0", Offset = "0x43633E0", VA = "0x43633E0")]
	private GisketchLayoutDefinition ControlShellLayout()
	{
		return null;
	}

	[Token(Token = "0x6000636")]
	[Address(RVA = "0x4363300", Offset = "0x4363300", VA = "0x4363300")]
	private float TooltipIconOffsetX()
	{
		return default(float);
	}
}
