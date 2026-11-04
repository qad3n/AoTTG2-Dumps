// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgStringSettingAdapter
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgStringSettingAdapter.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Settings;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x200016C")]
internal sealed class AottgStringSettingAdapter : AottgSettingAdapter
{
	[Token(Token = "0x4000816")]
	[FieldOffset(Offset = "0x10")]
	private readonly StringSetting _setting;

	[Token(Token = "0x17000102")]
	public override string TextValue
	{
		[Token(Token = "0x6000787")]
		[Address(RVA = "0x231F440", Offset = "0x231DA40", VA = "0x18231F440", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000103")]
	public override int MaxCharacters
	{
		[Token(Token = "0x6000788")]
		[Address(RVA = "0x231F420", Offset = "0x231DA20", VA = "0x18231F420", Slot = "23")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000786")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	public AottgStringSettingAdapter(StringSetting setting)
	{
	}

	[Token(Token = "0x6000789")]
	[Address(RVA = "0x231F3B0", Offset = "0x231D9B0", VA = "0x18231F3B0", Slot = "26")]
	public override void SetText(string value)
	{
	}
}
