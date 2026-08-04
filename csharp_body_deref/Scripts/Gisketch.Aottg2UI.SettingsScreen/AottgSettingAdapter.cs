// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingAdapter
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingAdapter.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Actions;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000121")]
internal abstract class AottgSettingAdapter : IAottgSettingAdapter
{
	[Token(Token = "0x170000D1")]
	public virtual string TextValue
	{
		[Token(Token = "0x60005EB")]
		[Address(RVA = "0x435FD00", Offset = "0x435FD00", VA = "0x435FD00", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D2")]
	public virtual float FloatValue
	{
		[Token(Token = "0x60005EC")]
		[Address(RVA = "0x435FD20", Offset = "0x435FD20", VA = "0x435FD20", Slot = "17")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000D3")]
	public virtual bool BoolValue
	{
		[Token(Token = "0x60005ED")]
		[Address(RVA = "0x435FD30", Offset = "0x435FD30", VA = "0x435FD30", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D4")]
	public virtual float MinValue
	{
		[Token(Token = "0x60005EE")]
		[Address(RVA = "0x435FD40", Offset = "0x435FD40", VA = "0x435FD40", Slot = "19")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000D5")]
	public virtual float MaxValue
	{
		[Token(Token = "0x60005EF")]
		[Address(RVA = "0x435FD50", Offset = "0x435FD50", VA = "0x435FD50", Slot = "20")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000D6")]
	public virtual bool HasMinValue
	{
		[Token(Token = "0x60005F0")]
		[Address(RVA = "0x435FD60", Offset = "0x435FD60", VA = "0x435FD60", Slot = "21")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D7")]
	public virtual bool HasMaxValue
	{
		[Token(Token = "0x60005F1")]
		[Address(RVA = "0x435FD70", Offset = "0x435FD70", VA = "0x435FD70", Slot = "22")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D8")]
	public virtual int MaxCharacters
	{
		[Token(Token = "0x60005F2")]
		[Address(RVA = "0x435FD80", Offset = "0x435FD80", VA = "0x435FD80", Slot = "23")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60005F3")]
	[Address(RVA = "0x435FD90", Offset = "0x435FD90", VA = "0x435FD90", Slot = "24")]
	public virtual void SetBool(bool value)
	{
	}

	[Token(Token = "0x60005F4")]
	[Address(RVA = "0x435FDA0", Offset = "0x435FDA0", VA = "0x435FDA0", Slot = "25")]
	public virtual void SetFloat(float value)
	{
	}

	[Token(Token = "0x60005F5")]
	[Address(RVA = "0x435FDB0", Offset = "0x435FDB0", VA = "0x435FDB0", Slot = "26")]
	public virtual void SetText(string value)
	{
	}

	[Token(Token = "0x60005F6")]
	[Address(RVA = "0x435FDC0", Offset = "0x435FDC0", VA = "0x435FDC0", Slot = "15")]
	public void SetValueFromContext(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60005F7")]
	[Address(RVA = "0x435FEE0", Offset = "0x435FEE0", VA = "0x435FEE0")]
	protected AottgSettingAdapter()
	{
	}
}
