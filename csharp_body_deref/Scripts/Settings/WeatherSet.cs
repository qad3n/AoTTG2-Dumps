// ==================== AoTTG2 cross-reference ====================
// Type: Settings.WeatherSet
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/WeatherSet.c
// Prior real C# source (older reference): Assets/Scripts/Settings/InGame/WeatherSet.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
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
	}
}
