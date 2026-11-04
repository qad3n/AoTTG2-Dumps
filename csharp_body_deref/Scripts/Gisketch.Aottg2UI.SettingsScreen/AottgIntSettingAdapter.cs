// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgIntSettingAdapter
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgIntSettingAdapter.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Settings;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x200016A")]
internal sealed class AottgIntSettingAdapter : AottgSettingAdapter
{
	[Token(Token = "0x4000814")]
	[FieldOffset(Offset = "0x10")]
	private readonly IntSetting _setting;

	[Token(Token = "0x170000F4")]
	public override string TextValue
	{
		[Token(Token = "0x6000773")]
		[Address(RVA = "0x2304720", Offset = "0x2302D20", VA = "0x182304720", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F5")]
	public override float FloatValue
	{
		[Token(Token = "0x6000774")]
		[Address(RVA = "0x2304630", Offset = "0x2302C30", VA = "0x182304630", Slot = "17")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000F6")]
	public override float MinValue
	{
		[Token(Token = "0x6000775")]
		[Address(RVA = "0x23046F0", Offset = "0x2302CF0", VA = "0x1823046F0", Slot = "19")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000F7")]
	public override float MaxValue
	{
		[Token(Token = "0x6000776")]
		[Address(RVA = "0x23046C0", Offset = "0x2302CC0", VA = "0x1823046C0", Slot = "20")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000F8")]
	public override bool HasMinValue
	{
		[Token(Token = "0x6000777")]
		[Address(RVA = "0x23046A0", Offset = "0x2302CA0", VA = "0x1823046A0", Slot = "21")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F9")]
	public override bool HasMaxValue
	{
		[Token(Token = "0x6000778")]
		[Address(RVA = "0x2304680", Offset = "0x2302C80", VA = "0x182304680", Slot = "22")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FA")]
	public override int MaxCharacters
	{
		[Token(Token = "0x6000779")]
		[Address(RVA = "0x1B2A120", Offset = "0x1B28720", VA = "0x181B2A120", Slot = "23")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000772")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	public AottgIntSettingAdapter(IntSetting setting)
	{
	}

	[Token(Token = "0x600077A")]
	[Address(RVA = "0x2304520", Offset = "0x2302B20", VA = "0x182304520", Slot = "25")]
	public override void SetFloat(float value)
	{
	}

	[Token(Token = "0x600077B")]
	[Address(RVA = "0x2304580", Offset = "0x2302B80", VA = "0x182304580", Slot = "26")]
	public override void SetText(string value)
	{
	}
}
