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

[Token(Token = "0x2000040")]
internal class WeatherScheduleRunner
{
	[Token(Token = "0x400018E")]
	private const int ScheduleMaxRecursion = 200;

	[Token(Token = "0x400018F")]
	[FieldOffset(Offset = "0x10")]
	private int _currentScheduleLine;

	[Token(Token = "0x4000190")]
	[FieldOffset(Offset = "0x18")]
	private LinkedList<int> _callerStack;

	[Token(Token = "0x4000191")]
	[FieldOffset(Offset = "0x20")]
	private Dictionary<string, int> _scheduleLabels;

	[Token(Token = "0x4000192")]
	[FieldOffset(Offset = "0x28")]
	private Dictionary<int, int> _repeatStartLines;

	[Token(Token = "0x4000193")]
	[FieldOffset(Offset = "0x30")]
	private Dictionary<int, int> _repeatCurrentCounts;

	[Token(Token = "0x4000194")]
	[FieldOffset(Offset = "0x38")]
	private WeatherManager _manager;

	[Token(Token = "0x4000195")]
	[FieldOffset(Offset = "0x40")]
	public WeatherSchedule Schedule;

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x57613D0", Offset = "0x57603D0", VA = "0x57613D0")]
	public WeatherScheduleRunner(WeatherManager manager)
	{
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x57615C0", Offset = "0x57605C0", VA = "0x57615C0")]
	public void ProcessSchedule()
	{
	}

	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x5761960", Offset = "0x5760960", VA = "0x5761960")]
	public void ConsumeSchedule()
	{
	}
}
