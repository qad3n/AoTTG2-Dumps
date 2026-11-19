// ==================== AoTTG2 cross-reference ====================
// Type: Settings.BaseSetSetting
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/BaseSetSetting.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/BaseSetSetting.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x2000103")]
internal abstract class BaseSetSetting : BaseSettingsContainer
{
	[Token(Token = "0x4000630")]
	[FieldOffset(Offset = "0x30")]
	public StringSetting Name;

	[Token(Token = "0x4000631")]
	[FieldOffset(Offset = "0x38")]
	public BoolSetting Preset;

	[Token(Token = "0x4000632")]
	[FieldOffset(Offset = "0x40")]
	public StringSetting UniqueId;

	[Token(Token = "0x6000566")]
	[Address(RVA = "0x5A45250", Offset = "0x5A44250", VA = "0x5A45250")]
	protected BaseSetSetting()
	{
		// Lifted from source/cpp/Settings/BaseSetSetting.c (Settings.BaseSetSetting$$.ctor): clean
		StringSetting __this_00;
		BoolSetting __this_01;
		String defaultValue;
		MethodInfo method_00;
		Guid local_30;

		__this_00 = new StringSetting("Set 1", 0x7fffffff);
		this.Name = __this_00;
		__this_01 = new BoolSetting(false);
		this.Preset = __this_01;
		local_30 = Guid.NewGuid();
		defaultValue = local_30.ToString();
		method_00 = new StringSetting(defaultValue, 0x7fffffff);
		this.UniqueId = (StringSetting)method_00;
		base();
		return;
	}
}
