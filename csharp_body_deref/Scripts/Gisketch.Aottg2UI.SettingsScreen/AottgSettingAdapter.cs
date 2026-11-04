// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingAdapter
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/SettingsScreen/AottgSettingAdapter.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Actions;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000168")]
internal abstract class AottgSettingAdapter : IAottgSettingAdapter
{
	[Token(Token = "0x170000E9")]
	public virtual string TextValue
	{
		[Token(Token = "0x600075F")]
		[Address(RVA = "0x18C6010", Offset = "0x18C4610", VA = "0x1818C6010", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000EA")]
	public virtual float FloatValue
	{
		[Token(Token = "0x6000760")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "17")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000EB")]
	public virtual bool BoolValue
	{
		[Token(Token = "0x6000761")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000EC")]
	public virtual float MinValue
	{
		[Token(Token = "0x6000762")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "19")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000ED")]
	public virtual float MaxValue
	{
		[Token(Token = "0x6000763")]
		[Address(RVA = "0x20CF430", Offset = "0x20CDA30", VA = "0x1820CF430", Slot = "20")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000EE")]
	public virtual bool HasMinValue
	{
		[Token(Token = "0x6000764")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "21")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000EF")]
	public virtual bool HasMaxValue
	{
		[Token(Token = "0x6000765")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "22")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F0")]
	public virtual int MaxCharacters
	{
		[Token(Token = "0x6000766")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "23")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000767")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "24")]
	public virtual void SetBool(bool value)
	{
	}

	[Token(Token = "0x6000768")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "25")]
	public virtual void SetFloat(float value)
	{
	}

	[Token(Token = "0x6000769")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "26")]
	public virtual void SetText(string value)
	{
	}

	[Token(Token = "0x600076A")]
	[Address(RVA = "0x230BD60", Offset = "0x230A360", VA = "0x18230BD60", Slot = "15")]
	public void SetValueFromContext(GisketchActionContext context)
	{
	}

	[Token(Token = "0x600076B")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected AottgSettingAdapter()
	{
	}
}
