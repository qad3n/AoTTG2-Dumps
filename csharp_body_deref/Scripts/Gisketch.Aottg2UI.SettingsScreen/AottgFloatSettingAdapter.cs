// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgFloatSettingAdapter
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgFloatSettingAdapter.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Settings;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000124")]
internal sealed class AottgFloatSettingAdapter : AottgSettingAdapter
{
	[Token(Token = "0x40006B9")]
	[FieldOffset(Offset = "0x10")]
	private readonly FloatSetting _setting;

	[Token(Token = "0x170000E2")]
	public override string TextValue
	{
		[Token(Token = "0x6000608")]
		[Address(RVA = "0x43603D0", Offset = "0x43603D0", VA = "0x43603D0", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E3")]
	public override float FloatValue
	{
		[Token(Token = "0x6000609")]
		[Address(RVA = "0x4360480", Offset = "0x4360480", VA = "0x4360480", Slot = "17")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000E4")]
	public override float MinValue
	{
		[Token(Token = "0x600060A")]
		[Address(RVA = "0x43604C0", Offset = "0x43604C0", VA = "0x43604C0", Slot = "19")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000E5")]
	public override float MaxValue
	{
		[Token(Token = "0x600060B")]
		[Address(RVA = "0x43604F0", Offset = "0x43604F0", VA = "0x43604F0", Slot = "20")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000E6")]
	public override bool HasMinValue
	{
		[Token(Token = "0x600060C")]
		[Address(RVA = "0x4360530", Offset = "0x4360530", VA = "0x4360530", Slot = "21")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000E7")]
	public override bool HasMaxValue
	{
		[Token(Token = "0x600060D")]
		[Address(RVA = "0x4360560", Offset = "0x4360560", VA = "0x4360560", Slot = "22")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000607")]
	[Address(RVA = "0x43603A0", Offset = "0x43603A0", VA = "0x43603A0")]
	public AottgFloatSettingAdapter(FloatSetting setting)
	{
	}

	[Token(Token = "0x600060E")]
	[Address(RVA = "0x4360590", Offset = "0x4360590", VA = "0x4360590", Slot = "25")]
	public override void SetFloat(float value)
	{
	}

	[Token(Token = "0x600060F")]
	[Address(RVA = "0x43605F0", Offset = "0x43605F0", VA = "0x43605F0", Slot = "26")]
	public override void SetText(string value)
	{
	}
}
