// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsRowBlock.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x200019A")]
internal sealed class AottgSettingsRowBlock : IAottgSettingsStateSync
{
	[Token(Token = "0x40008FB")]
	[FieldOffset(Offset = "0x10")]
	private readonly AottgComponent[] _rows;

	[Token(Token = "0x40008FC")]
	[FieldOffset(Offset = "0x18")]
	private AottgSettingsGroupLayoutMode _layoutMode;

	[Token(Token = "0x17000111")]
	internal AottgSettingsGroupLayoutMode LayoutMode
	{
		[Token(Token = "0x60008ED")]
		[Address(RVA = "0x5D49A30", Offset = "0x5D48A30", VA = "0x5D49A30")]
		get
		{
			return default(AottgSettingsGroupLayoutMode);
		}
	}

	[Token(Token = "0x60008EA")]
	[Address(RVA = "0x5D499B0", Offset = "0x5D489B0", VA = "0x5D499B0")]
	private AottgSettingsRowBlock(AottgSettingsGroupLayoutMode layoutMode, AottgComponent[] rows)
	{
	}

	[Token(Token = "0x60008EB")]
	[Address(RVA = "0x5D48ED0", Offset = "0x5D47ED0", VA = "0x5D48ED0")]
	internal static AottgSettingsRowBlock SingleColumn(params AottgComponent[] rows)
	{
		return null;
	}

	[Token(Token = "0x60008EC")]
	[Address(RVA = "0x5D40CA0", Offset = "0x5D3FCA0", VA = "0x5D40CA0")]
	internal static AottgSettingsRowBlock TwoColumn(params AottgComponent[] rows)
	{
		return null;
	}

	[Token(Token = "0x60008EE")]
	[Address(RVA = "0x5D41270", Offset = "0x5D40270", VA = "0x5D41270")]
	internal void SetLayoutMode(AottgSettingsGroupLayoutMode layoutMode)
	{
	}

	[Token(Token = "0x60008EF")]
	[Address(RVA = "0x5D426E0", Offset = "0x5D416E0", VA = "0x5D426E0")]
	internal void Build(AottgUi ui, string id, AottgSettingsSearchContext context)
	{
	}

	[Token(Token = "0x60008F0")]
	[Address(RVA = "0x5D421D0", Offset = "0x5D411D0", VA = "0x5D421D0")]
	internal void AddVirtualScrollItems(List<GisketchNodeDefinition> items, AottgUi owner, string id, AottgSettingsSearchContext context, bool separateFromPreviousBlock)
	{
	}

	[Token(Token = "0x60008F1")]
	[Address(RVA = "0x5D419D0", Offset = "0x5D409D0", VA = "0x5D419D0", Slot = "4")]
	public void SyncState(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x60008F2")]
	[Address(RVA = "0x5D49B30", Offset = "0x5D48B30", VA = "0x5D49B30")]
	private void AddSingleColumnItems(List<GisketchNodeDefinition> items, AottgUi owner, string id, AottgSettingsSearchContext context)
	{
	}

	[Token(Token = "0x60008F3")]
	[Address(RVA = "0x5D49A50", Offset = "0x5D48A50", VA = "0x5D49A50")]
	private AottgSettingsMatrixRows MatrixRows(string id)
	{
		return null;
	}

	[Token(Token = "0x60008F4")]
	[Address(RVA = "0x5D49ED0", Offset = "0x5D48ED0", VA = "0x5D49ED0")]
	private static GisketchNodeDefinition SpacedItem(GisketchNodeDefinition item, string id)
	{
		return null;
	}

	[Token(Token = "0x60008F5")]
	[Address(RVA = "0x5D4A100", Offset = "0x5D49100", VA = "0x5D4A100")]
	private static void AddItemNodes(List<GisketchNodeDefinition> items, GisketchNodeDefinition[] nodes, string id)
	{
	}
}
