// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame
// Update status: unchanged since the previous dump
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

[Token(Token = "0x200017A")]
internal sealed class AottgSettingRowFrame : AottgComponent
{
	[Token(Token = "0x4000889")]
	private const float TooltipIconGap = 8f;

	[Token(Token = "0x400088A")]
	private const float DirtyMarkerWidth = 18f;

	[Token(Token = "0x400088B")]
	private const float LabelGap = 6f;

	[Token(Token = "0x400088C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x400088D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly string _label;

	[Token(Token = "0x400088E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _labelKey;

	[Token(Token = "0x400088F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly string _labelBindKey;

	[Token(Token = "0x4000890")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly float _controlWidth;

	[Token(Token = "0x4000891")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	private readonly float _controlVisualWidth;

	[Token(Token = "0x4000892")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly string _tooltip;

	[Token(Token = "0x4000893")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly string _tooltipKey;

	[Token(Token = "0x4000894")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly string _searchTitle;

	[Token(Token = "0x4000895")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private readonly string _searchKeywords;

	[Token(Token = "0x4000896")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private readonly string _icon;

	[Token(Token = "0x4000897")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private readonly string _warningVisibleKey;

	[Token(Token = "0x4000898")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private readonly string _warningTooltipKey;

	[Token(Token = "0x4000899")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private readonly AottgSettingsSearchContext _searchContext;

	[Token(Token = "0x400089A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private readonly Func<string> _dirtyValue;

	[Token(Token = "0x400089B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private readonly Action<AottgUi> _buildControl;

	[Token(Token = "0x400089C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private readonly AottgSettingRowLayoutMode _layoutMode;

	[Token(Token = "0x600082D")]
	[Address(RVA = "0x5CBA430", Offset = "0x5CB9430", VA = "0x5CBA430")]
	public AottgSettingRowFrame(string id, string label, float controlWidth, Action<AottgUi> buildControl, [Optional] string tooltip, [Optional] string searchTitle, [Optional] string searchKeywords, [Optional] string icon, [Optional] float? controlVisualWidth, [Optional] string labelKey, [Optional] string tooltipKey, [Optional] string labelBindKey, [Optional] AottgSettingsSearchContext searchContext, [Optional] Func<string> dirtyValue, [Optional] string warningVisibleKey, [Optional] string warningTooltipKey, AottgSettingRowLayoutMode layoutMode = AottgSettingRowLayoutMode.Standard)
	{
	}

	[Token(Token = "0x600082E")]
	[Address(RVA = "0x5CC9CA0", Offset = "0x5CC8CA0", VA = "0x5CC9CA0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x600082F")]
	[Address(RVA = "0x5CCA150", Offset = "0x5CC9150", VA = "0x5CCA150")]
	private void BuildControlShell(AottgUi control)
	{
	}

	[Token(Token = "0x6000830")]
	[Address(RVA = "0x5CCA330", Offset = "0x5CC9330", VA = "0x5CCA330")]
	private void BuildLabel(AottgUi row)
	{
	}

	[Token(Token = "0x6000831")]
	[Address(RVA = "0x5CCA060", Offset = "0x5CC9060", VA = "0x5CCA060")]
	private string SearchTitle()
	{
		return null;
	}

	[Token(Token = "0x6000832")]
	[Address(RVA = "0x5CCA0A0", Offset = "0x5CC90A0", VA = "0x5CCA0A0")]
	private string SearchKeywords()
	{
		return null;
	}

	[Token(Token = "0x6000833")]
	[Address(RVA = "0x5CCA0B0", Offset = "0x5CC90B0", VA = "0x5CCA0B0")]
	private string DirtyPath()
	{
		return null;
	}

	[Token(Token = "0x6000834")]
	[Address(RVA = "0x5CCA5D0", Offset = "0x5CC95D0", VA = "0x5CCA5D0")]
	private void BuildDirtyMarker(AottgUi row)
	{
	}

	[Token(Token = "0x6000835")]
	[Address(RVA = "0x5CCA7E0", Offset = "0x5CC97E0", VA = "0x5CCA7E0")]
	private void BuildTooltip(AottgUi control)
	{
	}

	[Token(Token = "0x6000836")]
	[Address(RVA = "0x5CCAB40", Offset = "0x5CC9B40", VA = "0x5CCAB40")]
	private void BuildWarning(AottgUi control)
	{
	}

	[Token(Token = "0x6000837")]
	[Address(RVA = "0x5CCAE90", Offset = "0x5CC9E90", VA = "0x5CCAE90")]
	private GisketchLayoutDefinition ControlLayout()
	{
		return null;
	}

	[Token(Token = "0x6000838")]
	[Address(RVA = "0x5CCA230", Offset = "0x5CC9230", VA = "0x5CCA230")]
	private GisketchLayoutDefinition ControlShellLayout()
	{
		return null;
	}

	[Token(Token = "0x6000839")]
	[Address(RVA = "0x5CCAF80", Offset = "0x5CC9F80", VA = "0x5CCAF80")]
	private static GisketchLayoutDefinition ControlLaneLayout()
	{
		return null;
	}

	[Token(Token = "0x600083A")]
	[Address(RVA = "0x5CC9F10", Offset = "0x5CC8F10", VA = "0x5CC9F10")]
	private GisketchLayoutDefinition RootLayout()
	{
		return null;
	}

	[Token(Token = "0x600083B")]
	[Address(RVA = "0x5CCA410", Offset = "0x5CC9410", VA = "0x5CCA410")]
	private GisketchLayoutDefinition LabelLayout()
	{
		return null;
	}

	[Token(Token = "0x600083C")]
	[Address(RVA = "0x5CCAAA0", Offset = "0x5CC9AA0", VA = "0x5CCAAA0")]
	private float TooltipIconOffsetX()
	{
		return default(float);
	}

	[Token(Token = "0x600083D")]
	[Address(RVA = "0x5CCADC0", Offset = "0x5CC9DC0", VA = "0x5CCADC0")]
	private float WarningIconOffsetX()
	{
		return default(float);
	}
}
