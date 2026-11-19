// ==================== AoTTG2 cross-reference ====================
// Type: Settings.WeatherSet
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/WeatherSet.c
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/WeatherSet.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000EC")]
internal class WeatherSet : BaseSetSetting
{
	[Token(Token = "0x400051F")]
	[FieldOffset(Offset = "0x48")]
	public StringSetting Skybox;

	[Token(Token = "0x4000520")]
	[FieldOffset(Offset = "0x50")]
	public ColorSetting SkyboxColor;

	[Token(Token = "0x4000521")]
	[FieldOffset(Offset = "0x58")]
	public ColorSetting Daylight;

	[Token(Token = "0x4000522")]
	[FieldOffset(Offset = "0x60")]
	public FloatSetting DaylightIntensity;

	[Token(Token = "0x4000523")]
	[FieldOffset(Offset = "0x68")]
	public Vector3Setting DaylightDirection;

	[Token(Token = "0x4000524")]
	[FieldOffset(Offset = "0x70")]
	public ColorSetting AmbientLight;

	[Token(Token = "0x4000525")]
	[FieldOffset(Offset = "0x78")]
	public ColorSetting Flashlight;

	[Token(Token = "0x4000526")]
	[FieldOffset(Offset = "0x80")]
	public FloatSetting FogDensity;

	[Token(Token = "0x4000527")]
	[FieldOffset(Offset = "0x88")]
	public ColorSetting FogColor;

	[Token(Token = "0x4000528")]
	[FieldOffset(Offset = "0x90")]
	public FloatSetting Rain;

	[Token(Token = "0x4000529")]
	[FieldOffset(Offset = "0x98")]
	public FloatSetting Thunder;

	[Token(Token = "0x400052A")]
	[FieldOffset(Offset = "0xA0")]
	public FloatSetting Snow;

	[Token(Token = "0x400052B")]
	[FieldOffset(Offset = "0xA8")]
	public FloatSetting Wind;

	[Token(Token = "0x400052C")]
	[FieldOffset(Offset = "0xB0")]
	public Vector3Setting WindDirection;

	[Token(Token = "0x400052D")]
	[FieldOffset(Offset = "0xB8")]
	public FloatSetting RainForce;

	[Token(Token = "0x400052E")]
	[FieldOffset(Offset = "0xC0")]
	public FloatSetting SnowForce;

	[Token(Token = "0x400052F")]
	[FieldOffset(Offset = "0xC8")]
	public FloatSetting WindForce;

	[Token(Token = "0x4000530")]
	[FieldOffset(Offset = "0xD0")]
	public BoolSetting UseSchedule;

	[Token(Token = "0x4000531")]
	[FieldOffset(Offset = "0xD8")]
	public BoolSetting ScheduleLoop;

	[Token(Token = "0x4000532")]
	[FieldOffset(Offset = "0xE0")]
	public StringSetting Schedule;

	[Token(Token = "0x600052F")]
	[Address(RVA = "0x5A4A1E0", Offset = "0x5A491E0", VA = "0x5A4A1E0")]
	public WeatherSet()
	{
		// Lifted from source/cpp/Settings/WeatherSet.c (Settings.WeatherSet$$.ctor): 2 lines keep C-only constructs
		String defaultValue;
		StringSetting __this_00;
		Color255 pUVar1;
		ColorSetting pSVar2;
		FloatSetting pSVar3;
		Vector3Setting pSVar4;
		BoolSetting pSVar5;
		MethodInfo method_00;
		float fVar6;

		__this_00 = new StringSetting("Day1", 0x7fffffff);
		this.Skybox = __this_00;
		pUVar1 = new Color255(0, 0, 0, 0xff);
		pSVar2 = new ColorSetting();
		pSVar2.MinAlpha = 0;
		pUVar1 = pSVar2.SanitizeValue(pUVar1);
		pSVar2.DefaultValue = pUVar1;
		pSVar2.Value = (object)pSVar2.DefaultValue;
		this.SkyboxColor = pSVar2;
		pUVar1 = new Color255(0xff, 0xff, 0xff, 0xff);
		pSVar2 = new ColorSetting();
		pSVar2.MinAlpha = 0;
		pUVar1 = pSVar2.SanitizeValue(pUVar1);
		pSVar2.DefaultValue = pUVar1;
		pSVar2.Value = (object)pSVar2.DefaultValue;
		this.Daylight = pSVar2;
		pSVar3.MinValue = -3.4028235e+38;
		pSVar3.MaxValue = 3.4028235e+38;
		pSVar3 = new FloatSetting();
		pSVar3.MinValue = 0.0;
		pSVar3.MaxValue = 2.0;
		fVar6 = pSVar3.SanitizeValue(1.0);
		pSVar3.DefaultValue = fVar6;
		pSVar3.SetDefault();
		this.DaylightIntensity = pSVar3;
		pSVar4 = new Vector3Setting((Vector3)ZEXT812(0x4234000042340000));
		this.DaylightDirection = pSVar4;
		pUVar1 = new Color255(0x7e, 0x7a, 0x72, 0xff);
		pSVar2 = new ColorSetting();
		pSVar2.MinAlpha = 0;
		pUVar1 = pSVar2.SanitizeValue(pUVar1);
		pSVar2.DefaultValue = pUVar1;
		pSVar2.Value = (object)pSVar2.DefaultValue;
		this.AmbientLight = pSVar2;
		pUVar1 = new Color255(0xff, 0xff, 0xff, 0);
		pSVar2 = new ColorSetting();
		pSVar2.MinAlpha = 0;
		pUVar1 = pSVar2.SanitizeValue(pUVar1);
		pSVar2.DefaultValue = pUVar1;
		pSVar2.Value = (object)pSVar2.DefaultValue;
		this.Flashlight = pSVar2;
		pSVar3.MinValue = -3.4028235e+38;
		pSVar3.MaxValue = 3.4028235e+38;
		pSVar3 = new FloatSetting();
		pSVar3.MinValue = 0.0;
		pSVar3.MaxValue = 1.0;
		fVar6 = pSVar3.SanitizeValue(0.0);
		pSVar3.DefaultValue = fVar6;
		pSVar3.SetDefault();
		this.FogDensity = pSVar3;
		pUVar1 = new Color255(0x80, 0x80, 0x80, 0xff);
		pSVar2 = new ColorSetting();
		pSVar2.MinAlpha = 0;
		pUVar1 = pSVar2.SanitizeValue(pUVar1);
		pSVar2.DefaultValue = pUVar1;
		pSVar2.Value = (object)pSVar2.DefaultValue;
		this.FogColor = pSVar2;
		pSVar3.MinValue = -3.4028235e+38;
		pSVar3.MaxValue = 3.4028235e+38;
		pSVar3 = new FloatSetting();
		pSVar3.MinValue = 0.0;
		pSVar3.MaxValue = 1.0;
		fVar6 = pSVar3.SanitizeValue(0.0);
		pSVar3.DefaultValue = fVar6;
		pSVar3.SetDefault();
		this.Rain = pSVar3;
		pSVar3.MinValue = -3.4028235e+38;
		pSVar3.MaxValue = 3.4028235e+38;
		pSVar3 = new FloatSetting();
		pSVar3.MinValue = 0.0;
		pSVar3.MaxValue = 1.0;
		fVar6 = pSVar3.SanitizeValue(0.0);
		pSVar3.DefaultValue = fVar6;
		pSVar3.SetDefault();
		this.Thunder = pSVar3;
		pSVar3.MinValue = -3.4028235e+38;
		pSVar3.MaxValue = 3.4028235e+38;
		pSVar3 = new FloatSetting();
		pSVar3.MinValue = 0.0;
		pSVar3.MaxValue = 1.0;
		fVar6 = pSVar3.SanitizeValue(0.0);
		pSVar3.DefaultValue = fVar6;
		pSVar3.SetDefault();
		this.Snow = pSVar3;
		pSVar3.MinValue = -3.4028235e+38;
		pSVar3.MaxValue = 3.4028235e+38;
		pSVar3 = new FloatSetting();
		pSVar3.MinValue = 0.0;
		pSVar3.MaxValue = 1.0;
		fVar6 = pSVar3.SanitizeValue(0.0);
		pSVar3.DefaultValue = fVar6;
		pSVar3.SetDefault();
		this.Wind = pSVar3;
		pSVar4 = new Vector3Setting((Vector3)ZEXT812(0x3f800000));
		this.WindDirection = pSVar4;
		pSVar3.MinValue = -3.4028235e+38;
		pSVar3.MaxValue = 3.4028235e+38;
		pSVar3 = new FloatSetting();
		pSVar3.MinValue = 0.0;
		pSVar3.MaxValue = 100000.0;
		fVar6 = pSVar3.SanitizeValue(0.0);
		pSVar3.DefaultValue = fVar6;
		pSVar3.SetDefault();
		this.RainForce = pSVar3;
		pSVar3.MinValue = -3.4028235e+38;
		pSVar3.MaxValue = 3.4028235e+38;
		pSVar3 = new FloatSetting();
		pSVar3.MinValue = 0.0;
		pSVar3.MaxValue = 100000.0;
		fVar6 = pSVar3.SanitizeValue(0.0);
		pSVar3.DefaultValue = fVar6;
		pSVar3.SetDefault();
		this.SnowForce = pSVar3;
		pSVar3.MinValue = -3.4028235e+38;
		pSVar3.MaxValue = 3.4028235e+38;
		pSVar3 = new FloatSetting();
		pSVar3.MinValue = 0.0;
		pSVar3.MaxValue = 100000.0;
		fVar6 = pSVar3.SanitizeValue(0.0);
		pSVar3.DefaultValue = fVar6;
		pSVar3.SetDefault();
		this.WindForce = pSVar3;
		pSVar5 = new BoolSetting(false);
		this.UseSchedule = pSVar5;
		pSVar5 = new BoolSetting(false);
		this.ScheduleLoop = pSVar5;
		defaultValue = (String)**(ulong*)(g_data_07556758 + 0xb8);
		method_00 = new StringSetting(defaultValue, 0x7fffffff);
		this.Schedule = (StringSetting)method_00;
		base();
		return;
	}
}
