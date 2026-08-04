// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgStringSettingAdapter
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgStringSettingAdapter.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Settings;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000125")]
internal sealed class AottgStringSettingAdapter : AottgSettingAdapter
{
	[Token(Token = "0x40006BA")]
	[FieldOffset(Offset = "0x10")]
	private readonly StringSetting _setting;

	[Token(Token = "0x170000E8")]
	public override string TextValue
	{
		[Token(Token = "0x6000611")]
		[Address(RVA = "0x43606D0", Offset = "0x43606D0", VA = "0x43606D0", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E9")]
	public override int MaxCharacters
	{
		[Token(Token = "0x6000612")]
		[Address(RVA = "0x4360720", Offset = "0x4360720", VA = "0x4360720", Slot = "23")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000610")]
	[Address(RVA = "0x43606A0", Offset = "0x43606A0", VA = "0x43606A0")]
	public AottgStringSettingAdapter(StringSetting setting)
	{
	}

	[Token(Token = "0x6000613")]
	[Address(RVA = "0x4360740", Offset = "0x4360740", VA = "0x4360740", Slot = "26")]
	public override void SetText(string value)
	{
	}
}
