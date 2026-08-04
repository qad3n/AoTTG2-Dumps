// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgBoolSettingAdapter
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgBoolSettingAdapter.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Settings;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000122")]
internal sealed class AottgBoolSettingAdapter : AottgSettingAdapter
{
	[Token(Token = "0x40006B7")]
	[FieldOffset(Offset = "0x10")]
	private readonly BoolSetting _setting;

	[Token(Token = "0x170000D9")]
	public override string TextValue
	{
		[Token(Token = "0x60005F9")]
		[Address(RVA = "0x435FF20", Offset = "0x435FF20", VA = "0x435FF20", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DA")]
	public override bool BoolValue
	{
		[Token(Token = "0x60005FA")]
		[Address(RVA = "0x435FF80", Offset = "0x435FF80", VA = "0x435FF80", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000DB")]
	public override float FloatValue
	{
		[Token(Token = "0x60005FB")]
		[Address(RVA = "0x435FFC0", Offset = "0x435FFC0", VA = "0x435FFC0", Slot = "17")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60005F8")]
	[Address(RVA = "0x435FEF0", Offset = "0x435FEF0", VA = "0x435FEF0")]
	public AottgBoolSettingAdapter(BoolSetting setting)
	{
	}

	[Token(Token = "0x60005FC")]
	[Address(RVA = "0x435FFF0", Offset = "0x435FFF0", VA = "0x435FFF0", Slot = "24")]
	public override void SetBool(bool value)
	{
	}

	[Token(Token = "0x60005FD")]
	[Address(RVA = "0x4360040", Offset = "0x4360040", VA = "0x4360040", Slot = "26")]
	public override void SetText(string value)
	{
	}
}
