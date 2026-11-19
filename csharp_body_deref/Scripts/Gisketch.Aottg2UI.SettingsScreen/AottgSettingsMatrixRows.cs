// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsMatrixRows
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsMatrixRows.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000192")]
internal sealed class AottgSettingsMatrixRows : AottgComponent, IAottgSettingsSearchable, IAottgSettingsStateSync, IAottgSettingsVirtualItemSource
{
	[Token(Token = "0x40008E7")]
	internal const float ColumnGap = 72f;

	[Token(Token = "0x40008E8")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x40008E9")]
	[FieldOffset(Offset = "0x18")]
	private readonly AottgComponent[] _rows;

	[Token(Token = "0x60008C7")]
	[Address(RVA = "0x5D472A0", Offset = "0x5D462A0", VA = "0x5D472A0")]
	public AottgSettingsMatrixRows(string id, params AottgComponent[] rows)
	{
	}

	[Token(Token = "0x60008C8")]
	[Address(RVA = "0x5D47420", Offset = "0x5D46420", VA = "0x5D47420", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x60008C9")]
	[Address(RVA = "0x5D475A0", Offset = "0x5D465A0", VA = "0x5D475A0", Slot = "5")]
	public void ApplySearchContext(AottgSettingsSearchContext context)
	{
	}

	[Token(Token = "0x60008CA")]
	[Address(RVA = "0x5D476C0", Offset = "0x5D466C0", VA = "0x5D476C0", Slot = "6")]
	public void SyncState(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x60008CB")]
	[Address(RVA = "0x5D477C0", Offset = "0x5D467C0", VA = "0x5D477C0", Slot = "7")]
	public void AddVirtualScrollItems(List<GisketchNodeDefinition> items, AottgUi owner, AottgSettingsSearchContext context)
	{
	}

	[Token(Token = "0x60008CC")]
	[Address(RVA = "0x5D47320", Offset = "0x5D46320", VA = "0x5D47320")]
	private void ApplyCompactLayout()
	{
	}

	[Token(Token = "0x60008CD")]
	[Address(RVA = "0x5D47AB0", Offset = "0x5D46AB0", VA = "0x5D47AB0")]
	private int RowsPerColumn()
	{
		return default(int);
	}

	[Token(Token = "0x60008CE")]
	[Address(RVA = "0x5D47AE0", Offset = "0x5D46AE0", VA = "0x5D47AE0")]
	private void BuildPair(AottgUi ui, int index)
	{
	}

	[Token(Token = "0x60008CF")]
	[Address(RVA = "0x5D47D40", Offset = "0x5D46D40", VA = "0x5D47D40")]
	private void BuildCell(AottgUi pair, int index)
	{
	}

	[Token(Token = "0x60008D0")]
	[Address(RVA = "0x5D47FC0", Offset = "0x5D46FC0", VA = "0x5D47FC0")]
	private void BuildSpacer(AottgUi pair, int index)
	{
	}

	[Token(Token = "0x60008D1")]
	[Address(RVA = "0x5D47A50", Offset = "0x5D46A50", VA = "0x5D47A50")]
	private string PairId(int index)
	{
		return null;
	}

	[Token(Token = "0x60008D2")]
	[Address(RVA = "0x5D47EA0", Offset = "0x5D46EA0", VA = "0x5D47EA0")]
	private string CellId(int index)
	{
		return null;
	}

	[Token(Token = "0x60008D3")]
	[Address(RVA = "0x5D48080", Offset = "0x5D47080", VA = "0x5D48080")]
	private string SpacerId(int index)
	{
		return null;
	}

	[Token(Token = "0x60008D4")]
	[Address(RVA = "0x5D474D0", Offset = "0x5D464D0", VA = "0x5D474D0")]
	private static GisketchLayoutDefinition MatrixLayout()
	{
		return null;
	}

	[Token(Token = "0x60008D5")]
	[Address(RVA = "0x5D47C60", Offset = "0x5D46C60", VA = "0x5D47C60")]
	private static GisketchLayoutDefinition PairLayout()
	{
		return null;
	}

	[Token(Token = "0x60008D6")]
	[Address(RVA = "0x5D47F00", Offset = "0x5D46F00", VA = "0x5D47F00")]
	private static GisketchLayoutDefinition CellLayout()
	{
		return null;
	}
}
