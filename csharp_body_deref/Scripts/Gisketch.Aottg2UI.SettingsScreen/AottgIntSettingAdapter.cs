// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgIntSettingAdapter
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgIntSettingAdapter.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Settings;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000123")]
internal sealed class AottgIntSettingAdapter : AottgSettingAdapter
{
	[Token(Token = "0x40006B8")]
	[FieldOffset(Offset = "0x10")]
	private readonly IntSetting _setting;

	[Token(Token = "0x170000DC")]
	public override string TextValue
	{
		[Token(Token = "0x60005FF")]
		[Address(RVA = "0x4360110", Offset = "0x4360110", VA = "0x4360110", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000DD")]
	public override float FloatValue
	{
		[Token(Token = "0x6000600")]
		[Address(RVA = "0x43601B0", Offset = "0x43601B0", VA = "0x43601B0", Slot = "17")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000DE")]
	public override float MinValue
	{
		[Token(Token = "0x6000601")]
		[Address(RVA = "0x43601F0", Offset = "0x43601F0", VA = "0x43601F0", Slot = "19")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000DF")]
	public override float MaxValue
	{
		[Token(Token = "0x6000602")]
		[Address(RVA = "0x4360220", Offset = "0x4360220", VA = "0x4360220", Slot = "20")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000E0")]
	public override bool HasMinValue
	{
		[Token(Token = "0x6000603")]
		[Address(RVA = "0x4360250", Offset = "0x4360250", VA = "0x4360250", Slot = "21")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E1")]
	public override bool HasMaxValue
	{
		[Token(Token = "0x6000604")]
		[Address(RVA = "0x4360270", Offset = "0x4360270", VA = "0x4360270", Slot = "22")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60005FE")]
	[Address(RVA = "0x43600E0", Offset = "0x43600E0", VA = "0x43600E0")]
	public AottgIntSettingAdapter(IntSetting setting)
	{
	}

	[Token(Token = "0x6000605")]
	[Address(RVA = "0x4360290", Offset = "0x4360290", VA = "0x4360290", Slot = "25")]
	public override void SetFloat(float value)
	{
	}

	[Token(Token = "0x6000606")]
	[Address(RVA = "0x43602F0", Offset = "0x43602F0", VA = "0x43602F0", Slot = "26")]
	public override void SetText(string value)
	{
	}
}
