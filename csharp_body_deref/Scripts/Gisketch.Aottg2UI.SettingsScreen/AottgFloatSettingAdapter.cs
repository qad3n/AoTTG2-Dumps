// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgFloatSettingAdapter
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgFloatSettingAdapter.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Settings;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x200016B")]
internal sealed class AottgFloatSettingAdapter : AottgSettingAdapter
{
	[Token(Token = "0x4000815")]
	[FieldOffset(Offset = "0x10")]
	private readonly FloatSetting _setting;

	[Token(Token = "0x170000FB")]
	public override string TextValue
	{
		[Token(Token = "0x600077D")]
		[Address(RVA = "0x2304470", Offset = "0x2302A70", VA = "0x182304470", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000FC")]
	public override float FloatValue
	{
		[Token(Token = "0x600077E")]
		[Address(RVA = "0x2304370", Offset = "0x2302970", VA = "0x182304370", Slot = "17")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000FD")]
	public override float MinValue
	{
		[Token(Token = "0x600077F")]
		[Address(RVA = "0x2304450", Offset = "0x2302A50", VA = "0x182304450", Slot = "19")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000FE")]
	public override float MaxValue
	{
		[Token(Token = "0x6000780")]
		[Address(RVA = "0x2304420", Offset = "0x2302A20", VA = "0x182304420", Slot = "20")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000FF")]
	public override bool HasMinValue
	{
		[Token(Token = "0x6000781")]
		[Address(RVA = "0x23043F0", Offset = "0x23029F0", VA = "0x1823043F0", Slot = "21")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000100")]
	public override bool HasMaxValue
	{
		[Token(Token = "0x6000782")]
		[Address(RVA = "0x23043C0", Offset = "0x23029C0", VA = "0x1823043C0", Slot = "22")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000101")]
	public override int MaxCharacters
	{
		[Token(Token = "0x6000783")]
		[Address(RVA = "0x847040", Offset = "0x845640", VA = "0x180847040", Slot = "23")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600077C")]
	[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
	public AottgFloatSettingAdapter(FloatSetting setting)
	{
	}

	[Token(Token = "0x6000784")]
	[Address(RVA = "0x2304250", Offset = "0x2302850", VA = "0x182304250", Slot = "25")]
	public override void SetFloat(float value)
	{
	}

	[Token(Token = "0x6000785")]
	[Address(RVA = "0x23042B0", Offset = "0x23028B0", VA = "0x1823042B0", Slot = "26")]
	public override void SetText(string value)
	{
	}
}
