// ==================== AoTTG2 cross-reference ====================
// Type: Settings.WeatherSettings
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Settings/WeatherSettings.c
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/WeatherSettings.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000ED")]
internal class WeatherSettings : PresetSettingsContainer
{
	[Token(Token = "0x4000533")]
	[FieldOffset(Offset = "0x38")]
	public SetSettingsContainer<WeatherSet> WeatherSets;

	[Token(Token = "0x170000B6")]
	protected override string FileName
	{
		[Token(Token = "0x6000530")]
		[Address(RVA = "0x5A4AD50", Offset = "0x5A49D50", VA = "0x5A4AD50", Slot = "15")]
		get
		{
			// Lifted from source/cpp/Settings/WeatherSettings.c (Settings.WeatherSettings$$get_FileName): clean
			return "Weather.json";
		}
	}

	[Token(Token = "0x6000531")]
	[Address(RVA = "0x5A3C510", Offset = "0x5A3B510", VA = "0x5A3C510")]
	public static bool IsWeatherSetting(string id)
	{
		// Lifted from source/cpp/Settings/WeatherSettings.c (Settings.WeatherSettings$$IsWeatherSetting): clean
		bool bVar1;

		bVar1 = String.Equals(id, "general.Weather", 5);
		if (bVar1) {
			return true;
		}
		bVar1 = String.Equals(id, "general.WeatherIndex", 5);
		return bVar1;
	}

	[Token(Token = "0x6000532")]
	[Address(RVA = "0x5A4AD80", Offset = "0x5A49D80", VA = "0x5A4AD80")]
	public int FindWeatherIndex(string name)
	{
		// Lifted from source/cpp/Settings/WeatherSettings.c (Settings.WeatherSettings$$FindWeatherIndex): 2 lines keep C-only constructs
		SetSettingsContainer<WeatherSet> __this_00;
		int iVar1;
		WeatherSettings.c__DisplayClass4_0 __this_01;
		String[] array;
		Predicate<T> pSVar2;

		__this_01 = new WeatherSettings.c__DisplayClass4_0();
		if (__this_01 != null) {
			__this_01.name = name;
			__this_00 = this.WeatherSets;
			if (__this_00 != null) {
				array = __this_00.GetSetNames();
				pSVar2 = new Predicate<string>((object)__this_01, (intptr_t)MethodInfo_Settings_WeatherSettings_c__DisplayClass4_0_FindWeatherIndex_b__0);
				iVar1 = Array.FindIndex<string>((Object[])array, pSVar2);
				if (iVar1 < 0) {
					pSVar2 = new Predicate<string>((object)__this_01, (intptr_t)MethodInfo_Settings_WeatherSettings_c__DisplayClass4_0_FindWeatherIndex_b__1);
					iVar1 = Array.FindIndex<string>((Object[])array, pSVar2);
					return iVar1;
				}
				return iVar1;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000533")]
	[Address(RVA = "0x5A4AEE0", Offset = "0x5A49EE0", VA = "0x5A4AEE0")]
	public WeatherSettings()
	{
		// Lifted from source/cpp/Settings/WeatherSettings.c (Settings.WeatherSettings$$.ctor): clean
		SetSettingsContainer<WeatherSet> __this_00;

		__this_00 = new SetSettingsContainer<WeatherSet>();
		this.WeatherSets = __this_00;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Settings/WeatherSettings.c.

	// Settings.WeatherSettings.<>c__DisplayClass4_0$$.ctor: clean
	private void c__DisplayClass4_0__ctor()
	{
		base();
		return;
	}

	// Settings.WeatherSettings.<>c__DisplayClass4_0$$<FindWeatherIndex>b__0: clean
	private bool c__DisplayClass4_0__FindWeatherIndex_b__0(String value)
	{
		bool bVar1;

		bVar1 = String.Equals(value, this.name, 5);
		return bVar1;
	}

	// Settings.WeatherSettings.<>c__DisplayClass4_0$$<FindWeatherIndex>b__1: clean
	private bool c__DisplayClass4_0__FindWeatherIndex_b__1(String value)
	{
		bool bVar1;
		String a;

		if (value == null) {
			throw new NullReferenceException();
		}
		a = value.TrimEnd(0x2a);
		bVar1 = String.Equals(a, this.name, 5);
		return bVar1;
	}
}
