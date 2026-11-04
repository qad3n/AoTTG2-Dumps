// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingsGroup.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000183")]
internal sealed class AottgSettingsGroup : AottgComponent, IAottgSettingsSearchable, IAottgSettingsStateSync
{
	[Token(Token = "0x4000874")]
	internal const string SpacingBeforeValue = "SettingsSpacingBefore";

	[Token(Token = "0x4000875")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000876")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _title;

	[Token(Token = "0x4000877")]
	[FieldOffset(Offset = "0x20")]
	private readonly string _titleKey;

	[Token(Token = "0x4000878")]
	[FieldOffset(Offset = "0x28")]
	private readonly AottgSettingsRowBlock[] _blocks;

	[Token(Token = "0x4000879")]
	[FieldOffset(Offset = "0x30")]
	private AottgSettingsSearchContext _searchContext;

	[Token(Token = "0x400087A")]
	[FieldOffset(Offset = "0x58")]
	private bool _showHeader;

	[Token(Token = "0x1700010D")]
	internal string Id
	{
		[Token(Token = "0x600081B")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000818")]
	[Address(RVA = "0x231BA90", Offset = "0x231A090", VA = "0x18231BA90")]
	public AottgSettingsGroup(string id, string title, params AottgSettingDescriptor[] rows)
	{
	}

	[Token(Token = "0x6000819")]
	[Address(RVA = "0x231B9F0", Offset = "0x2319FF0", VA = "0x18231B9F0")]
	public AottgSettingsGroup(string id, string title, params AottgComponent[] rows)
	{
	}

	[Token(Token = "0x600081A")]
	[Address(RVA = "0x231B830", Offset = "0x2319E30", VA = "0x18231B830")]
	public AottgSettingsGroup(string id, string title, params AottgSettingsRowBlock[] blocks)
	{
	}

	[Token(Token = "0x600081C")]
	[Address(RVA = "0x231B520", Offset = "0x2319B20", VA = "0x18231B520")]
	public AottgSettingsGroup HideHeader()
	{
		return null;
	}

	[Token(Token = "0x600081D")]
	[Address(RVA = "0x231B7B0", Offset = "0x2319DB0", VA = "0x18231B7B0")]
	public AottgSettingsGroup UseTwoColumnLayout()
	{
		return null;
	}

	[Token(Token = "0x600081E")]
	[Address(RVA = "0x231AE10", Offset = "0x2319410", VA = "0x18231AE10", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x600081F")]
	[Address(RVA = "0x21EA430", Offset = "0x21E8A30", VA = "0x1821EA430", Slot = "5")]
	public void ApplySearchContext(AottgSettingsSearchContext context)
	{
	}

	[Token(Token = "0x6000820")]
	[Address(RVA = "0x231B6F0", Offset = "0x2319CF0", VA = "0x18231B6F0", Slot = "6")]
	public void SyncState(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x6000821")]
	[Address(RVA = "0x231AA50", Offset = "0x2319050", VA = "0x18231AA50")]
	internal void AddVirtualScrollItems(List<GisketchNodeDefinition> items, AottgUi owner, AottgSettingsSearchContext context, bool separateFromPreviousGroup)
	{
	}

	[Token(Token = "0x6000822")]
	[Address(RVA = "0x231AC60", Offset = "0x2319260", VA = "0x18231AC60")]
	private string BlockId(int index)
	{
		return null;
	}

	[Token(Token = "0x6000823")]
	[Address(RVA = "0x231B250", Offset = "0x2319850", VA = "0x18231B250")]
	private GisketchNodeDefinition HeaderNode(string title, AottgSettingsSearchContext groupContext, bool separateFromPreviousGroup)
	{
		return null;
	}

	[Token(Token = "0x6000824")]
	[Address(RVA = "0x231ACE0", Offset = "0x23192E0", VA = "0x18231ACE0")]
	private static AottgComponent[] BuildRows(AottgSettingDescriptor[] rows)
	{
		return null;
	}

	[Token(Token = "0x6000825")]
	[Address(RVA = "0x231B530", Offset = "0x2319B30", VA = "0x18231B530")]
	private string LocalizedTitle()
	{
		return null;
	}

	[Token(Token = "0x6000826")]
	[Address(RVA = "0x231B100", Offset = "0x2319700", VA = "0x18231B100")]
	private static string GroupTitleKey(string id)
	{
		return null;
	}

	[Token(Token = "0x6000827")]
	[Address(RVA = "0x231B5B0", Offset = "0x2319BB0", VA = "0x18231B5B0")]
	private static string Pascal(string value)
	{
		return null;
	}
}
