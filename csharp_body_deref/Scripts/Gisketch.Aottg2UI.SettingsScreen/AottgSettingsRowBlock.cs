// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsRowBlock
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsRowBlock.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x200018D")]
internal sealed class AottgSettingsRowBlock : IAottgSettingsStateSync
{
	[Token(Token = "0x40008A5")]
	[FieldOffset(Offset = "0x10")]
	private readonly AottgComponent[] _rows;

	[Token(Token = "0x40008A6")]
	[FieldOffset(Offset = "0x18")]
	private AottgSettingsGroupLayoutMode _layoutMode;

	[Token(Token = "0x1700010E")]
	internal AottgSettingsGroupLayoutMode LayoutMode
	{
		[Token(Token = "0x6000863")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		get
		{
			return default(AottgSettingsGroupLayoutMode);
		}
	}

	[Token(Token = "0x6000860")]
	[Address(RVA = "0x2391210", Offset = "0x238F810", VA = "0x182391210")]
	private AottgSettingsRowBlock(AottgSettingsGroupLayoutMode layoutMode, AottgComponent[] rows)
	{
	}

	[Token(Token = "0x6000861")]
	[Address(RVA = "0x2390C80", Offset = "0x238F280", VA = "0x182390C80")]
	internal static AottgSettingsRowBlock SingleColumn(params AottgComponent[] rows)
	{
		return null;
	}

	[Token(Token = "0x6000862")]
	[Address(RVA = "0x23910E0", Offset = "0x238F6E0", VA = "0x1823910E0")]
	internal static AottgSettingsRowBlock TwoColumn(params AottgComponent[] rows)
	{
		return null;
	}

	[Token(Token = "0x6000864")]
	[Address(RVA = "0x2390BC0", Offset = "0x238F1C0", VA = "0x182390BC0")]
	internal void SetLayoutMode(AottgSettingsGroupLayoutMode layoutMode)
	{
	}

	[Token(Token = "0x6000865")]
	[Address(RVA = "0x2390820", Offset = "0x238EE20", VA = "0x182390820")]
	internal void Build(AottgUi ui, string id, AottgSettingsSearchContext context)
	{
	}

	[Token(Token = "0x6000866")]
	[Address(RVA = "0x2390540", Offset = "0x238EB40", VA = "0x182390540")]
	internal void AddVirtualScrollItems(List<GisketchNodeDefinition> items, AottgUi owner, string id, AottgSettingsSearchContext context, bool separateFromPreviousBlock)
	{
	}

	[Token(Token = "0x6000867")]
	[Address(RVA = "0x2391000", Offset = "0x238F600", VA = "0x182391000", Slot = "4")]
	public void SyncState(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x6000868")]
	[Address(RVA = "0x2390270", Offset = "0x238E870", VA = "0x182390270")]
	private void AddSingleColumnItems(List<GisketchNodeDefinition> items, AottgUi owner, string id, AottgSettingsSearchContext context)
	{
	}

	[Token(Token = "0x6000869")]
	[Address(RVA = "0x2390A50", Offset = "0x238F050", VA = "0x182390A50")]
	private AottgSettingsMatrixRows MatrixRows(string id)
	{
		return null;
	}

	[Token(Token = "0x600086A")]
	[Address(RVA = "0x2390DB0", Offset = "0x238F3B0", VA = "0x182390DB0")]
	private static GisketchNodeDefinition SpacedItem(GisketchNodeDefinition item, string id)
	{
		return null;
	}

	[Token(Token = "0x600086B")]
	[Address(RVA = "0x2390020", Offset = "0x238E620", VA = "0x182390020")]
	private static void AddItemNodes(List<GisketchNodeDefinition> items, GisketchNodeDefinition[] nodes, string id)
	{
	}
}
