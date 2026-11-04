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

[Token(Token = "0x2000169")]
internal sealed class AottgBoolSettingAdapter : AottgSettingAdapter
{
	[Token(Token = "0x4000813")]
	[FieldOffset(Offset = "0x10")]
	private readonly BoolSetting _setting;

	[Token(Token = "0x170000F1")]
	public override string TextValue
	{
		[Token(Token = "0x600076D")]
		[Address(RVA = "0x2303AA0", Offset = "0x23020A0", VA = "0x182303AA0", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F2")]
	public override bool BoolValue
	{
		[Token(Token = "0x600076E")]
		[Address(RVA = "0x2303A20", Offset = "0x2302020", VA = "0x182303A20", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F3")]
	public override float FloatValue
	{
		[Token(Token = "0x600076F")]
		[Address(RVA = "0x2303A70", Offset = "0x2302070", VA = "0x182303A70", Slot = "17")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x600076C")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	public AottgBoolSettingAdapter(BoolSetting setting)
	{
	}

	[Token(Token = "0x6000770")]
	[Address(RVA = "0x2303920", Offset = "0x2301F20", VA = "0x182303920", Slot = "24")]
	public override void SetBool(bool value)
	{
	}

	[Token(Token = "0x6000771")]
	[Address(RVA = "0x2303980", Offset = "0x2301F80", VA = "0x182303980", Slot = "26")]
	public override void SetText(string value)
	{
	}
}
