// ==================== AoTTG2 cross-reference ====================
// Type: Settings.FloatSetting
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/FloatSetting.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/FloatSetting.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Settings;

[Token(Token = "0x200010A")]
internal class FloatSetting : TypedSetting<float>
{
	[Token(Token = "0x4000646")]
	[FieldOffset(Offset = "0x20")]
	public float MinValue;

	[Token(Token = "0x4000647")]
	[FieldOffset(Offset = "0x24")]
	public float MaxValue;

	[Token(Token = "0x6000585")]
	[Address(RVA = "0x5A558A0", Offset = "0x5A548A0", VA = "0x5A558A0")]
	public FloatSetting()
	{
		// Lifted from source/cpp/Settings/FloatSetting.c (Settings.FloatSetting$$.ctor): clean
		this.MinValue = -3.4028235e+38;
		this.MaxValue = 3.4028235e+38;
		base(0.0);
		return;
	}

	[Token(Token = "0x6000586")]
	[Address(RVA = "0x5A411F0", Offset = "0x5A401F0", VA = "0x5A411F0")]
	public FloatSetting(float defaultValue, float minValue = -3.4028235E+38f, float maxValue = 3.4028235E+38f)
	{
		// Lifted from source/cpp/Settings/FloatSetting.c (Settings.FloatSetting$$.ctor): 3 lines keep C-only constructs
		Il2CppMethodPointer vtableDispatch;
		ulong extraout_RDX;
		float fVar1;

		this.MinValue = -3.4028235e+38;
		this.MaxValue = 3.4028235e+38;
		base();
		this.MinValue = minValue;
		this.MaxValue = maxValue;
		fVar1 = this.SanitizeValue(defaultValue);
		this.DefaultValue = fVar1;
		vtableDispatch = (this.klass.vtable)._4_SetDefault.methodPtr;
		(*vtableDispatch)(this,(this.klass.vtable)._4_SetDefault.method,extraout_RDX,vtableDispatch);
		return;
	}

	[Token(Token = "0x6000587")]
	[Address(RVA = "0x5A558F0", Offset = "0x5A548F0", VA = "0x5A558F0", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
		// Lifted from source/cpp/Settings/FloatSetting.c (Settings.FloatSetting$$DeserializeFromJsonObject): clean
		float value;

		if (json == null) {
			throw new NullReferenceException();
		}
		value = json.get_AsFloat();
		this.Value = value;
		return;
	}

	[Token(Token = "0x6000588")]
	[Address(RVA = "0x5A55950", Offset = "0x5A54950", VA = "0x5A55950", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		// Lifted from source/cpp/Settings/FloatSetting.c (Settings.FloatSetting$$SerializeToJsonObject): clean
		float fVar1;
		JSONNumber __this_00;

		fVar1 = this._value;
		__this_00 = new JSONNumber((double)fVar1);
		return (JSONNode)__this_00;
	}

	[Token(Token = "0x6000589")]
	[Address(RVA = "0x5A559C0", Offset = "0x5A549C0", VA = "0x5A559C0", Slot = "11")]
	protected override float SanitizeValue(float value)
	{
		// Lifted from source/cpp/Settings/FloatSetting.c (Settings.FloatSetting$$SanitizeValue): clean
		float fVar1;
		uint uVar2;
		float fVar3;

		fVar1 = this.MinValue;
		fVar3 = this.MaxValue;
		if (value <= fVar3) {
			fVar3 = value;
		}
		uVar2 = -(uint)(fVar1 <= value);
		return (float)(~uVar2 & (uint)fVar1 | (uint)fVar3 & uVar2);
	}
}
