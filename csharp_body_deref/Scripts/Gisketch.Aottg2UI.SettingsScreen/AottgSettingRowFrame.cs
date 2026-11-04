// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingRowFrame
// Update status: CHANGED in this game update
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

[Token(Token = "0x2000172")]
internal sealed class AottgSettingRowFrame : AottgComponent
{
	[Token(Token = "0x400083F")]
	private const float TooltipIconGap = 8f;

	[Token(Token = "0x4000840")]
	private const float DirtyMarkerWidth = 18f;

	[Token(Token = "0x4000841")]
	private const float LabelGap = 6f;

	[Token(Token = "0x4000842")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000843")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly string _label;

	[Token(Token = "0x4000844")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _labelKey;

	[Token(Token = "0x4000845")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly string _labelBindKey;

	[Token(Token = "0x4000846")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private readonly float _controlWidth;

	[Token(Token = "0x4000847")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	private readonly float _controlVisualWidth;

	[Token(Token = "0x4000848")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private readonly string _tooltip;

	[Token(Token = "0x4000849")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private readonly string _tooltipKey;

	[Token(Token = "0x400084A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private readonly string _searchTitle;

	[Token(Token = "0x400084B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private readonly string _searchKeywords;

	[Token(Token = "0x400084C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private readonly string _icon;

	[Token(Token = "0x400084D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private readonly string _warningVisibleKey;

	[Token(Token = "0x400084E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private readonly string _warningTooltipKey;

	[Token(Token = "0x400084F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private readonly AottgSettingsSearchContext _searchContext;

	[Token(Token = "0x4000850")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private readonly Func<string> _dirtyValue;

	[Token(Token = "0x4000851")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private readonly Action<AottgUi> _buildControl;

	[Token(Token = "0x4000852")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private readonly AottgSettingRowLayoutMode _layoutMode;

	[Token(Token = "0x60007B8")]
	[Address(RVA = "0x230EC90", Offset = "0x230D290", VA = "0x18230EC90")]
	public AottgSettingRowFrame(string id, string label, float controlWidth, Action<AottgUi> buildControl, [Optional] string tooltip, [Optional] string searchTitle, [Optional] string searchKeywords, [Optional] string icon, [Optional] float? controlVisualWidth, [Optional] string labelKey, [Optional] string tooltipKey, [Optional] string labelBindKey, [Optional] AottgSettingsSearchContext searchContext, [Optional] Func<string> dirtyValue, [Optional] string warningVisibleKey, [Optional] string warningTooltipKey, AottgSettingRowLayoutMode layoutMode = AottgSettingRowLayoutMode.Standard)
	{
	}

	[Token(Token = "0x60007B9")]
	[Address(RVA = "0x230D430", Offset = "0x230BA30", VA = "0x18230D430", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x60007BA")]
	[Address(RVA = "0x230C600", Offset = "0x230AC00", VA = "0x18230C600")]
	private void BuildControlShell(AottgUi control)
	{
	}

	[Token(Token = "0x60007BB")]
	[Address(RVA = "0x230CB00", Offset = "0x230B100", VA = "0x18230CB00")]
	private void BuildLabel(AottgUi row)
	{
	}

	[Token(Token = "0x60007BC")]
	[Address(RVA = "0x230E270", Offset = "0x230C870", VA = "0x18230E270")]
	private string SearchTitle()
	{
		return null;
	}

	[Token(Token = "0x60007BD")]
	[Address(RVA = "0x230E260", Offset = "0x230C860", VA = "0x18230E260")]
	private string SearchKeywords()
	{
		return null;
	}

	[Token(Token = "0x60007BE")]
	[Address(RVA = "0x230DE50", Offset = "0x230C450", VA = "0x18230DE50")]
	private string DirtyPath()
	{
		return null;
	}

	[Token(Token = "0x60007BF")]
	[Address(RVA = "0x230C800", Offset = "0x230AE00", VA = "0x18230C800")]
	private void BuildDirtyMarker(AottgUi row)
	{
	}

	[Token(Token = "0x60007C0")]
	[Address(RVA = "0x230CDD0", Offset = "0x230B3D0", VA = "0x18230CDD0")]
	private void BuildTooltip(AottgUi control)
	{
	}

	[Token(Token = "0x60007C1")]
	[Address(RVA = "0x230D090", Offset = "0x230B690", VA = "0x18230D090")]
	private void BuildWarning(AottgUi control)
	{
	}

	[Token(Token = "0x60007C2")]
	[Address(RVA = "0x230DB60", Offset = "0x230C160", VA = "0x18230DB60")]
	private GisketchLayoutDefinition ControlLayout()
	{
		return null;
	}

	[Token(Token = "0x60007C3")]
	[Address(RVA = "0x230DD00", Offset = "0x230C300", VA = "0x18230DD00")]
	private GisketchLayoutDefinition ControlShellLayout()
	{
		return null;
	}

	[Token(Token = "0x60007C4")]
	[Address(RVA = "0x230DA50", Offset = "0x230C050", VA = "0x18230DA50")]
	private static GisketchLayoutDefinition ControlLaneLayout()
	{
		return null;
	}

	[Token(Token = "0x60007C5")]
	[Address(RVA = "0x230E0E0", Offset = "0x230C6E0", VA = "0x18230E0E0")]
	private GisketchLayoutDefinition RootLayout()
	{
		return null;
	}

	[Token(Token = "0x60007C6")]
	[Address(RVA = "0x230DEF0", Offset = "0x230C4F0", VA = "0x18230DEF0")]
	private GisketchLayoutDefinition LabelLayout()
	{
		return null;
	}

	[Token(Token = "0x60007C7")]
	[Address(RVA = "0x230E2C0", Offset = "0x230C8C0", VA = "0x18230E2C0")]
	private float TooltipIconOffsetX()
	{
		return default(float);
	}

	[Token(Token = "0x60007C8")]
	[Address(RVA = "0x230EC20", Offset = "0x230D220", VA = "0x18230EC20")]
	private float WarningIconOffsetX()
	{
		return default(float);
	}
}
