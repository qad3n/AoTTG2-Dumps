// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgBoolSettingAdapter
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgBoolSettingAdapter.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Settings;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000171")]
internal sealed class AottgBoolSettingAdapter : AottgSettingAdapter
{
	[Token(Token = "0x400085C")]
	[FieldOffset(Offset = "0x10")]
	private readonly BoolSetting _setting;

	[Token(Token = "0x170000F4")]
	public override string TextValue
	{
		[Token(Token = "0x60007E3")]
		[Address(RVA = "0x5CC5BA0", Offset = "0x5CC4BA0", VA = "0x5CC5BA0", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F5")]
	public override bool BoolValue
	{
		[Token(Token = "0x60007E4")]
		[Address(RVA = "0x5CC5C00", Offset = "0x5CC4C00", VA = "0x5CC5C00", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F6")]
	public override float FloatValue
	{
		[Token(Token = "0x60007E5")]
		[Address(RVA = "0x5CC5C40", Offset = "0x5CC4C40", VA = "0x5CC5C40", Slot = "17")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x60007E2")]
	[Address(RVA = "0x5CC5B70", Offset = "0x5CC4B70", VA = "0x5CC5B70")]
	public AottgBoolSettingAdapter(BoolSetting setting)
	{
	}

	[Token(Token = "0x60007E6")]
	[Address(RVA = "0x5CC5C70", Offset = "0x5CC4C70", VA = "0x5CC5C70", Slot = "24")]
	public override void SetBool(bool value)
	{
	}

	[Token(Token = "0x60007E7")]
	[Address(RVA = "0x5CC5CC0", Offset = "0x5CC4CC0", VA = "0x5CC5CC0", Slot = "26")]
	public override void SetText(string value)
	{
	}
}
