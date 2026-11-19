// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgIntSettingAdapter
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgIntSettingAdapter.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Settings;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000172")]
internal sealed class AottgIntSettingAdapter : AottgSettingAdapter
{
	[Token(Token = "0x400085D")]
	[FieldOffset(Offset = "0x10")]
	private readonly IntSetting _setting;

	[Token(Token = "0x170000F7")]
	public override string TextValue
	{
		[Token(Token = "0x60007E9")]
		[Address(RVA = "0x5CC5D90", Offset = "0x5CC4D90", VA = "0x5CC5D90", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000F8")]
	public override float FloatValue
	{
		[Token(Token = "0x60007EA")]
		[Address(RVA = "0x5CC5E20", Offset = "0x5CC4E20", VA = "0x5CC5E20", Slot = "17")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000F9")]
	public override float MinValue
	{
		[Token(Token = "0x60007EB")]
		[Address(RVA = "0x5CC5E60", Offset = "0x5CC4E60", VA = "0x5CC5E60", Slot = "19")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000FA")]
	public override float MaxValue
	{
		[Token(Token = "0x60007EC")]
		[Address(RVA = "0x5CC5E90", Offset = "0x5CC4E90", VA = "0x5CC5E90", Slot = "20")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000FB")]
	public override bool HasMinValue
	{
		[Token(Token = "0x60007ED")]
		[Address(RVA = "0x5CC5EC0", Offset = "0x5CC4EC0", VA = "0x5CC5EC0", Slot = "21")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FC")]
	public override bool HasMaxValue
	{
		[Token(Token = "0x60007EE")]
		[Address(RVA = "0x5CC5EE0", Offset = "0x5CC4EE0", VA = "0x5CC5EE0", Slot = "22")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000FD")]
	public override int MaxCharacters
	{
		[Token(Token = "0x60007EF")]
		[Address(RVA = "0x5CC5F00", Offset = "0x5CC4F00", VA = "0x5CC5F00", Slot = "23")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60007E8")]
	[Address(RVA = "0x5CC5D60", Offset = "0x5CC4D60", VA = "0x5CC5D60")]
	public AottgIntSettingAdapter(IntSetting setting)
	{
	}

	[Token(Token = "0x60007F0")]
	[Address(RVA = "0x5CC5F10", Offset = "0x5CC4F10", VA = "0x5CC5F10", Slot = "25")]
	public override void SetFloat(float value)
	{
	}

	[Token(Token = "0x60007F1")]
	[Address(RVA = "0x5CC5F70", Offset = "0x5CC4F70", VA = "0x5CC5F70", Slot = "26")]
	public override void SetText(string value)
	{
	}
}
