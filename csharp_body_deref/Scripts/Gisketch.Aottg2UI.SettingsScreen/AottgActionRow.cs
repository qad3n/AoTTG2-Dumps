// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgActionRow
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgActionRow.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000156")]
internal sealed class AottgActionRow : AottgComponent, IAottgSettingsSearchable, IAottgSettingRowLayoutAware
{
	[Token(Token = "0x2000157")]
	internal sealed class ActionButton
	{
		[Token(Token = "0x40007E7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly string TextKey;

		[Token(Token = "0x40007E8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public readonly Action<GisketchActionContext> Action;

		[Token(Token = "0x40007E9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public readonly AottgButtonVariant Variant;

		[Token(Token = "0x40007EA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
		public readonly bool Disabled;

		[Token(Token = "0x40007EB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public readonly string Icon;

		[Token(Token = "0x170000D9")]
		public bool IsIcon
		{
			[Token(Token = "0x600071B")]
			[Address(RVA = "0x5CBA630", Offset = "0x5CB9630", VA = "0x5CBA630")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x600071C")]
		[Address(RVA = "0x5CBA950", Offset = "0x5CB9950", VA = "0x5CBA950")]
		public ActionButton(string textKey, Action<GisketchActionContext> action, [Optional][DefaultParameterValue(1)] AottgButtonVariant variant, [Optional][DefaultParameterValue(false)] bool disabled, [Optional] string icon)
		{
		}
	}

	[Token(Token = "0x40007DD")]
	private const float DefaultButtonWidth = 140f;

	[Token(Token = "0x40007DE")]
	private const float TextButtonSlotWidth = 150f;

	[Token(Token = "0x40007DF")]
	internal const float IconButtonSize = 42f;

	[Token(Token = "0x40007E0")]
	private const float ButtonGap = 8f;

	[Token(Token = "0x40007E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x40007E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly string _label;

	[Token(Token = "0x40007E3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly string _labelKey;

	[Token(Token = "0x40007E4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly ActionButton[] _buttons;

	[Token(Token = "0x40007E5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private AottgSettingsSearchContext _searchContext;

	[Token(Token = "0x40007E6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private AottgSettingRowLayoutMode _layoutMode;

	[Token(Token = "0x6000712")]
	[Address(RVA = "0x5CBA000", Offset = "0x5CB9000", VA = "0x5CBA000")]
	public AottgActionRow(string id, string label, params ActionButton[] buttons)
	{
	}

	[Token(Token = "0x6000713")]
	[Address(RVA = "0x5CBA010", Offset = "0x5CB9010", VA = "0x5CBA010")]
	private AottgActionRow(string id, string label, string labelKey, ActionButton[] buttons)
	{
	}

	[Token(Token = "0x6000714")]
	[Address(RVA = "0x5CBA0C0", Offset = "0x5CB90C0", VA = "0x5CBA0C0")]
	public static AottgActionRow Keyed(string id, string labelKey, params ActionButton[] buttons)
	{
		return null;
	}

	[Token(Token = "0x6000715")]
	[Address(RVA = "0x5CBA160", Offset = "0x5CB9160", VA = "0x5CBA160", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x6000716")]
	[Address(RVA = "0x5CBA5F0", Offset = "0x5CB95F0", VA = "0x5CBA5F0", Slot = "5")]
	public void ApplySearchContext(AottgSettingsSearchContext context)
	{
	}

	[Token(Token = "0x6000717")]
	[Address(RVA = "0x5CBA620", Offset = "0x5CB9620", VA = "0x5CBA620", Slot = "6")]
	public void ApplyLayoutMode(AottgSettingRowLayoutMode mode)
	{
	}

	[Token(Token = "0x6000718")]
	[Address(RVA = "0x5CBA3A0", Offset = "0x5CB93A0", VA = "0x5CBA3A0")]
	private float ControlWidth()
	{
		return default(float);
	}

	[Token(Token = "0x6000719")]
	[Address(RVA = "0x5CBA640", Offset = "0x5CB9640", VA = "0x5CBA640")]
	private float TextButtonWidth()
	{
		return default(float);
	}

	[Token(Token = "0x600071A")]
	[Address(RVA = "0x5CBA770", Offset = "0x5CB9770", VA = "0x5CBA770")]
	private void BuildButtons(AottgUi control)
	{
	}
}
