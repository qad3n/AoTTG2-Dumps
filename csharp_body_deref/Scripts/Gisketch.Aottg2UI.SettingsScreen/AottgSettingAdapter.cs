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

[Token(Token = "0x2000170")]
internal abstract class AottgSettingAdapter : IAottgSettingAdapter
{
	[Token(Token = "0x170000EC")]
	public virtual string TextValue
	{
		[Token(Token = "0x60007D5")]
		[Address(RVA = "0x5CC5980", Offset = "0x5CC4980", VA = "0x5CC5980", Slot = "16")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000ED")]
	public virtual float FloatValue
	{
		[Token(Token = "0x60007D6")]
		[Address(RVA = "0x5CC59A0", Offset = "0x5CC49A0", VA = "0x5CC59A0", Slot = "17")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000EE")]
	public virtual bool BoolValue
	{
		[Token(Token = "0x60007D7")]
		[Address(RVA = "0x5CC59B0", Offset = "0x5CC49B0", VA = "0x5CC59B0", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000EF")]
	public virtual float MinValue
	{
		[Token(Token = "0x60007D8")]
		[Address(RVA = "0x5CC59C0", Offset = "0x5CC49C0", VA = "0x5CC59C0", Slot = "19")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000F0")]
	public virtual float MaxValue
	{
		[Token(Token = "0x60007D9")]
		[Address(RVA = "0x5CC59D0", Offset = "0x5CC49D0", VA = "0x5CC59D0", Slot = "20")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170000F1")]
	public virtual bool HasMinValue
	{
		[Token(Token = "0x60007DA")]
		[Address(RVA = "0x5CC59E0", Offset = "0x5CC49E0", VA = "0x5CC59E0", Slot = "21")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F2")]
	public virtual bool HasMaxValue
	{
		[Token(Token = "0x60007DB")]
		[Address(RVA = "0x5CC59F0", Offset = "0x5CC49F0", VA = "0x5CC59F0", Slot = "22")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000F3")]
	public virtual int MaxCharacters
	{
		[Token(Token = "0x60007DC")]
		[Address(RVA = "0x5CC5A00", Offset = "0x5CC4A00", VA = "0x5CC5A00", Slot = "23")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60007DD")]
	[Address(RVA = "0x5CC5A10", Offset = "0x5CC4A10", VA = "0x5CC5A10", Slot = "24")]
	public virtual void SetBool(bool value)
	{
	}

	[Token(Token = "0x60007DE")]
	[Address(RVA = "0x5CC5A20", Offset = "0x5CC4A20", VA = "0x5CC5A20", Slot = "25")]
	public virtual void SetFloat(float value)
	{
	}

	[Token(Token = "0x60007DF")]
	[Address(RVA = "0x5CC5A30", Offset = "0x5CC4A30", VA = "0x5CC5A30", Slot = "26")]
	public virtual void SetText(string value)
	{
	}

	[Token(Token = "0x60007E0")]
	[Address(RVA = "0x5CC5A40", Offset = "0x5CC4A40", VA = "0x5CC5A40", Slot = "15")]
	public void SetValueFromContext(GisketchActionContext context)
	{
	}

	[Token(Token = "0x60007E1")]
	[Address(RVA = "0x5CC5B60", Offset = "0x5CC4B60", VA = "0x5CC5B60")]
	protected AottgSettingAdapter()
	{
	}
}
