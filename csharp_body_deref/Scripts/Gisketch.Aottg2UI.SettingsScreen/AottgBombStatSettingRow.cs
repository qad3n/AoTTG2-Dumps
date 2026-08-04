// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgBombStatSettingRow
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgBombStatSettingRow.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Il2CppDummyDll;
using Settings;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000114")]
internal sealed class AottgBombStatSettingRow : AottgComponent
{
	[Token(Token = "0x2000115")]
	internal enum StatKind
	{
		[Token(Token = "0x4000695")]
		Radius,
		[Token(Token = "0x4000696")]
		Range,
		[Token(Token = "0x4000697")]
		Speed,
		[Token(Token = "0x4000698")]
		Cooldown
	}

	[Token(Token = "0x400068F")]
	private const int MaxTotal = 20;

	[Token(Token = "0x4000690")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _id;

	[Token(Token = "0x4000691")]
	[FieldOffset(Offset = "0x18")]
	private readonly string _label;

	[Token(Token = "0x4000692")]
	[FieldOffset(Offset = "0x20")]
	private readonly IntSetting _setting;

	[Token(Token = "0x4000693")]
	[FieldOffset(Offset = "0x28")]
	private readonly StatKind _kind;

	[Token(Token = "0x600059B")]
	[Address(RVA = "0x435C0C0", Offset = "0x435C0C0", VA = "0x435C0C0")]
	public AottgBombStatSettingRow(string id, string label, IntSetting setting, StatKind kind)
	{
	}

	[Token(Token = "0x600059C")]
	[Address(RVA = "0x435C120", Offset = "0x435C120", VA = "0x435C120", Slot = "4")]
	public override void Build(AottgUi ui)
	{
	}

	[Token(Token = "0x600059D")]
	[Address(RVA = "0x435C2D0", Offset = "0x435C2D0", VA = "0x435C2D0")]
	private void BuildStepper(AottgUi control)
	{
	}

	[Token(Token = "0x600059E")]
	[Address(RVA = "0x435C260", Offset = "0x435C260", VA = "0x435C260")]
	private string LabelText()
	{
		return null;
	}

	[Token(Token = "0x600059F")]
	[Address(RVA = "0x435C470", Offset = "0x435C470", VA = "0x435C470")]
	private string StatValue()
	{
		return null;
	}

	[Token(Token = "0x60005A0")]
	[Address(RVA = "0x435C710", Offset = "0x435C710", VA = "0x435C710")]
	private void Change(GisketchActionContext context, int delta)
	{
	}

	[Token(Token = "0x60005A1")]
	[Address(RVA = "0x435C800", Offset = "0x435C800", VA = "0x435C800")]
	private bool CanIncrement()
	{
		return default(bool);
	}

	[Token(Token = "0x60005A2")]
	[Address(RVA = "0x435C850", Offset = "0x435C850", VA = "0x435C850")]
	internal static int TotalPoints()
	{
		return default(int);
	}

	[Token(Token = "0x60005A3")]
	[Address(RVA = "0x435C8D0", Offset = "0x435C8D0", VA = "0x435C8D0")]
	internal static int UnusedPoints()
	{
		return default(int);
	}
}
