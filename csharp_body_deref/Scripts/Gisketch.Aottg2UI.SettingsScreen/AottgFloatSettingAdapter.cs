// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgFloatSettingAdapter
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgFloatSettingAdapter.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Settings;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000173")]
internal sealed class AottgFloatSettingAdapter : AottgSettingAdapter
{
	[Token(Token = "0x400085E")]
	[FieldOffset(Offset = "0x10")]
	private readonly FloatSetting _setting;

	[Token(Token = "0x170000FE")]
	public override string TextValue
	{
		[Token(Token = "0x60007F3")]
		[Address(RVA = "0x5CC6050", Offset = "0x5CC5050", VA = "0x5CC6050", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FF")]
	public override float FloatValue
	{
		[Token(Token = "0x60007F4")]
		[Address(RVA = "0x5CC6100", Offset = "0x5CC5100", VA = "0x5CC6100", Slot = "17")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000100")]
	public override float MinValue
	{
		[Token(Token = "0x60007F5")]
		[Address(RVA = "0x5CC6140", Offset = "0x5CC5140", VA = "0x5CC6140", Slot = "19")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000101")]
	public override float MaxValue
	{
		[Token(Token = "0x60007F6")]
		[Address(RVA = "0x5CC6170", Offset = "0x5CC5170", VA = "0x5CC6170", Slot = "20")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000102")]
	public override bool HasMinValue
	{
		[Token(Token = "0x60007F7")]
		[Address(RVA = "0x5CC61A0", Offset = "0x5CC51A0", VA = "0x5CC61A0", Slot = "21")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000103")]
	public override bool HasMaxValue
	{
		[Token(Token = "0x60007F8")]
		[Address(RVA = "0x5CC61D0", Offset = "0x5CC51D0", VA = "0x5CC61D0", Slot = "22")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000104")]
	public override int MaxCharacters
	{
		[Token(Token = "0x60007F9")]
		[Address(RVA = "0x5CC6200", Offset = "0x5CC5200", VA = "0x5CC6200", Slot = "23")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60007F2")]
	[Address(RVA = "0x5CC6020", Offset = "0x5CC5020", VA = "0x5CC6020")]
	public AottgFloatSettingAdapter(FloatSetting setting)
	{
	}

	[Token(Token = "0x60007FA")]
	[Address(RVA = "0x5CC6210", Offset = "0x5CC5210", VA = "0x5CC6210", Slot = "25")]
	public override void SetFloat(float value)
	{
	}

	[Token(Token = "0x60007FB")]
	[Address(RVA = "0x5CC6270", Offset = "0x5CC5270", VA = "0x5CC6270", Slot = "26")]
	public override void SetText(string value)
	{
	}
}
