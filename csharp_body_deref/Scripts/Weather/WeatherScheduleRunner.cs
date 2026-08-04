// ==================== AoTTG2 cross-reference ====================
// Type: Weather.WeatherScheduleRunner
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Weather/WeatherScheduleRunner.c
// Prior real C# source (older reference): Assets/Scripts/Weather/WeatherScheduleRunner.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Weather;

[Token(Token = "0x2000041")]
internal class WeatherScheduleRunner
{
	[Token(Token = "0x4000173")]
	private const int ScheduleMaxRecursion = 200;

	[Token(Token = "0x4000174")]
	[FieldOffset(Offset = "0x10")]
	private int _currentScheduleLine;

	[Token(Token = "0x4000175")]
	[FieldOffset(Offset = "0x18")]
	private LinkedList<int> _callerStack;

	[Token(Token = "0x4000176")]
	[FieldOffset(Offset = "0x20")]
	private Dictionary<string, int> _scheduleLabels;

	[Token(Token = "0x4000177")]
	[FieldOffset(Offset = "0x28")]
	private Dictionary<int, int> _repeatStartLines;

	[Token(Token = "0x4000178")]
	[FieldOffset(Offset = "0x30")]
	private Dictionary<int, int> _repeatCurrentCounts;

	[Token(Token = "0x4000179")]
	[FieldOffset(Offset = "0x38")]
	private WeatherManager _manager;

	[Token(Token = "0x400017A")]
	[FieldOffset(Offset = "0x40")]
	public WeatherSchedule Schedule;

	[Token(Token = "0x60001AC")]
	[Address(RVA = "0x3F77700", Offset = "0x3F77700", VA = "0x3F77700")]
	public WeatherScheduleRunner(WeatherManager manager)
	{
	}

	[Token(Token = "0x60001AD")]
	[Address(RVA = "0x3F778F0", Offset = "0x3F778F0", VA = "0x3F778F0")]
	public void ProcessSchedule()
	{
	}

	[Token(Token = "0x60001AE")]
	[Address(RVA = "0x3F77BD0", Offset = "0x3F77BD0", VA = "0x3F77BD0")]
	public void ConsumeSchedule()
	{
	}
}
