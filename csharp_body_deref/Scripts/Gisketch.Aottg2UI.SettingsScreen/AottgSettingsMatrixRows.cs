// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsMatrixRows.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000189")]
internal sealed class AottgSettingsMatrixRows : AottgComponent, IAottgSettingsSearchable, IAottgSettingsStateSync, IAottgSettingsVirtualItemSource
{
	[Token(Token = "0x400089A")]
	internal const float ColumnGap = 72f;

	[Token(Token = "0x400089B")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x400089C")]
	[FieldOffset(Offset = "0x18")]
	private readonly AottgComponent[] _rows;

	[Token(Token = "0x6000849")]
	[Address(RVA = "0x238FF10", Offset = "0x238E510", VA = "0x18238FF10")]
	public AottgSettingsMatrixRows(string id, params AottgComponent[] rows)
	{
	}

	[Token(Token = "0x600084A")]
	[Address(RVA = "0x238F7D0", Offset = "0x238DDD0", VA = "0x18238F7D0", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x600084B")]
	[Address(RVA = "0x238F280", Offset = "0x238D880", VA = "0x18238F280", Slot = "5")]
	public void ApplySearchContext(AottgSettingsSearchContext context)
	{
	}

	[Token(Token = "0x600084C")]
	[Address(RVA = "0x238FDF0", Offset = "0x238E3F0", VA = "0x18238FDF0", Slot = "6")]
	public void SyncState(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x600084D")]
	[Address(RVA = "0x238F030", Offset = "0x238D630", VA = "0x18238F030", Slot = "7")]
	public void AddVirtualScrollItems(List<GisketchNodeDefinition> items, AottgUi owner, AottgSettingsSearchContext context)
	{
	}

	[Token(Token = "0x600084E")]
	[Address(RVA = "0x238F1E0", Offset = "0x238D7E0", VA = "0x18238F1E0")]
	private void ApplyCompactLayout()
	{
	}

	[Token(Token = "0x600084F")]
	[Address(RVA = "0x238FD60", Offset = "0x238E360", VA = "0x18238FD60")]
	private int RowsPerColumn()
	{
		return default(int);
	}

	[Token(Token = "0x6000850")]
	[Address(RVA = "0x238F490", Offset = "0x238DA90", VA = "0x18238F490")]
	private void BuildPair(AottgUi ui, int index)
	{
	}

	[Token(Token = "0x6000851")]
	[Address(RVA = "0x238F350", Offset = "0x238D950", VA = "0x18238F350")]
	private void BuildCell(AottgUi pair, int index)
	{
	}

	[Token(Token = "0x6000852")]
	[Address(RVA = "0x238F700", Offset = "0x238DD00", VA = "0x18238F700")]
	private void BuildSpacer(AottgUi pair, int index)
	{
	}

	[Token(Token = "0x6000853")]
	[Address(RVA = "0x238FBE0", Offset = "0x238E1E0", VA = "0x18238FBE0")]
	private string PairId(int index)
	{
		return null;
	}

	[Token(Token = "0x6000854")]
	[Address(RVA = "0x238F970", Offset = "0x238DF70", VA = "0x18238F970")]
	private string CellId(int index)
	{
		return null;
	}

	[Token(Token = "0x6000855")]
	[Address(RVA = "0x238FD90", Offset = "0x238E390", VA = "0x18238FD90")]
	private string SpacerId(int index)
	{
		return null;
	}

	[Token(Token = "0x6000856")]
	[Address(RVA = "0x238FAE0", Offset = "0x238E0E0", VA = "0x18238FAE0")]
	private static GisketchLayoutDefinition MatrixLayout()
	{
		return null;
	}

	[Token(Token = "0x6000857")]
	[Address(RVA = "0x238FC40", Offset = "0x238E240", VA = "0x18238FC40")]
	private static GisketchLayoutDefinition PairLayout()
	{
		return null;
	}

	[Token(Token = "0x6000858")]
	[Address(RVA = "0x238F9D0", Offset = "0x238DFD0", VA = "0x18238F9D0")]
	private static GisketchLayoutDefinition CellLayout()
	{
		return null;
	}
}
