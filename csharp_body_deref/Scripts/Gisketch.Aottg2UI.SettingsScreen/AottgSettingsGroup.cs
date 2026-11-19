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

[Token(Token = "0x200018C")]
internal sealed class AottgSettingsGroup : AottgComponent, IAottgSettingsSearchable, IAottgSettingsStateSync
{
	[Token(Token = "0x40008BF")]
	internal const string SpacingBeforeValue = "SettingsSpacingBefore";

	[Token(Token = "0x40008C0")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x40008C1")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _title;

	[Token(Token = "0x40008C2")]
	[FieldOffset(Offset = "0x20")]
	private readonly string _titleKey;

	[Token(Token = "0x40008C3")]
	[FieldOffset(Offset = "0x28")]
	private readonly AottgSettingsRowBlock[] _blocks;

	[Token(Token = "0x40008C4")]
	[FieldOffset(Offset = "0x30")]
	private AottgSettingsSearchContext _searchContext;

	[Token(Token = "0x40008C5")]
	[FieldOffset(Offset = "0x58")]
	private bool _showHeader;

	[Token(Token = "0x17000110")]
	internal string Id
	{
		[Token(Token = "0x6000891")]
		[Address(RVA = "0x5D411E0", Offset = "0x5D401E0", VA = "0x5D411E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600088D")]
	[Address(RVA = "0x5D3AA10", Offset = "0x5D39A10", VA = "0x5D3AA10")]
	public AottgSettingsGroup(string id, params AottgComponent[] rows)
	{
	}

	[Token(Token = "0x600088E")]
	[Address(RVA = "0x5D40D50", Offset = "0x5D3FD50", VA = "0x5D40D50")]
	public AottgSettingsGroup(string id, params AottgSettingsRowBlock[] blocks)
	{
	}

	[Token(Token = "0x600088F")]
	[Address(RVA = "0x5D40EA0", Offset = "0x5D3FEA0", VA = "0x5D40EA0")]
	private AottgSettingsGroup(string id, string title, string titleKey, AottgSettingsRowBlock[] blocks)
	{
	}

	[Token(Token = "0x6000890")]
	[Address(RVA = "0x5D40F50", Offset = "0x5D3FF50", VA = "0x5D40F50")]
	internal static AottgSettingsGroup Untranslated(string id, string title, params AottgSettingDescriptor[] rows)
	{
		return null;
	}

	[Token(Token = "0x6000892")]
	[Address(RVA = "0x5D411F0", Offset = "0x5D401F0", VA = "0x5D411F0")]
	public AottgSettingsGroup HideHeader()
	{
		return null;
	}

	[Token(Token = "0x6000893")]
	[Address(RVA = "0x5D41200", Offset = "0x5D40200", VA = "0x5D41200")]
	public AottgSettingsGroup UseTwoColumnLayout()
	{
		return null;
	}

	[Token(Token = "0x6000894")]
	[Address(RVA = "0x5D41370", Offset = "0x5D40370", VA = "0x5D41370", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000895")]
	[Address(RVA = "0x5D419A0", Offset = "0x5D409A0", VA = "0x5D419A0", Slot = "5")]
	public void ApplySearchContext(AottgSettingsSearchContext context)
	{
	}

	[Token(Token = "0x6000896")]
	[Address(RVA = "0x5D3AFF0", Offset = "0x5D39FF0", VA = "0x5D3AFF0", Slot = "6")]
	public void SyncState(GisketchUIRoot root)
	{
	}

	[Token(Token = "0x6000897")]
	[Address(RVA = "0x5D41B10", Offset = "0x5D40B10", VA = "0x5D41B10")]
	internal void AddVirtualScrollItems(List<GisketchNodeDefinition> items, AottgUi owner, AottgSettingsSearchContext context, bool separateFromPreviousGroup)
	{
	}

	[Token(Token = "0x6000898")]
	[Address(RVA = "0x5D42160", Offset = "0x5D41160", VA = "0x5D42160")]
	private string BlockId(int index)
	{
		return null;
	}

	[Token(Token = "0x6000899")]
	[Address(RVA = "0x5D41DF0", Offset = "0x5D40DF0", VA = "0x5D41DF0")]
	private GisketchNodeDefinition HeaderNode(string title, AottgSettingsSearchContext groupContext, bool separateFromPreviousGroup)
	{
		return null;
	}

	[Token(Token = "0x600089A")]
	[Address(RVA = "0x5D41080", Offset = "0x5D40080", VA = "0x5D41080")]
	private static AottgComponent[] BuildRows(AottgSettingDescriptor[] rows)
	{
		return null;
	}

	[Token(Token = "0x600089B")]
	[Address(RVA = "0x5D417A0", Offset = "0x5D407A0", VA = "0x5D417A0")]
	private string LocalizedTitle()
	{
		return null;
	}

	[Token(Token = "0x600089C")]
	[Address(RVA = "0x5D40D80", Offset = "0x5D3FD80", VA = "0x5D40D80")]
	private static string GroupTitleKey(string id)
	{
		return null;
	}

	[Token(Token = "0x600089D")]
	[Address(RVA = "0x5D42350", Offset = "0x5D41350", VA = "0x5D42350")]
	internal static string Pascal(string value)
	{
		return null;
	}
}
