// ==================== AoTTG2 cross-reference ====================
// Type: Settings.IntSetting
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/IntSetting.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/IntSetting.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Settings;

[Token(Token = "0x2000110")]
internal class IntSetting : TypedSetting<int>
{
	[Token(Token = "0x4000653")]
	[FieldOffset(Offset = "0x20")]
	public int MinValue;

	[Token(Token = "0x4000654")]
	[FieldOffset(Offset = "0x24")]
	public int MaxValue;

	[Token(Token = "0x60005B1")]
	[Address(RVA = "0x5A56F00", Offset = "0x5A55F00", VA = "0x5A56F00")]
	public IntSetting()
	{
		// Lifted from source/cpp/Settings/IntSetting.c (Settings.IntSetting$$.ctor): clean
		this.MinValue = -0x80000000;
		this.MaxValue = 0x7fffffff;
		base(0);
		return;
	}

	[Token(Token = "0x60005B2")]
	[Address(RVA = "0x5A412E0", Offset = "0x5A402E0", VA = "0x5A412E0")]
	public IntSetting(int defaultValue, int minValue = -2147483648, int maxValue = 2147483647)
	{
		// Lifted from source/cpp/Settings/IntSetting.c (Settings.IntSetting$$.ctor): clean
		int iVar1;

		this.MinValue = -0x80000000;
		this.MaxValue = 0x7fffffff;
		base();
		this.MinValue = minValue;
		this.MaxValue = maxValue;
		iVar1 = this.SanitizeValue(defaultValue);
		this.DefaultValue = iVar1;
		this.SetDefault();
		return;
	}

	[Token(Token = "0x60005B3")]
	[Address(RVA = "0x5A56F50", Offset = "0x5A55F50", VA = "0x5A56F50", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
		// Lifted from source/cpp/Settings/IntSetting.c (Settings.IntSetting$$DeserializeFromJsonObject): clean
		int value;

		if (json == null) {
			throw new NullReferenceException();
		}
		value = json.get_AsInt();
		this.Value = value;
		return;
	}

	[Token(Token = "0x60005B4")]
	[Address(RVA = "0x5A56FB0", Offset = "0x5A55FB0", VA = "0x5A56FB0", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		// Lifted from source/cpp/Settings/IntSetting.c (Settings.IntSetting$$SerializeToJsonObject): clean
		int iVar1;
		JSONNumber __this_00;

		iVar1 = this._value;
		__this_00 = new JSONNumber((double)iVar1);
		return (JSONNode)__this_00;
	}

	[Token(Token = "0x60005B5")]
	[Address(RVA = "0x5A57020", Offset = "0x5A56020", VA = "0x5A57020", Slot = "11")]
	protected override int SanitizeValue(int value)
	{
		// Lifted from source/cpp/Settings/IntSetting.c (Settings.IntSetting$$SanitizeValue): clean
		int iVar1;

		iVar1 = this.MaxValue;
		iVar1 = Math.Min(value, iVar1);
		iVar1 = Math.Max(iVar1, this.MinValue);
		return iVar1;
	}
}
