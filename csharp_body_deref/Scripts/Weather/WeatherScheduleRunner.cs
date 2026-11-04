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
	[Token(Token = "0x400017F")]
	private const int ScheduleMaxRecursion = 200;

	[Token(Token = "0x4000180")]
	[FieldOffset(Offset = "0x10")]
	private int _currentScheduleLine;

	[Token(Token = "0x4000181")]
	[FieldOffset(Offset = "0x18")]
	private LinkedList<int> _callerStack;

	[Token(Token = "0x4000182")]
	[FieldOffset(Offset = "0x20")]
	private Dictionary<string, int> _scheduleLabels;

	[Token(Token = "0x4000183")]
	[FieldOffset(Offset = "0x28")]
	private Dictionary<int, int> _repeatStartLines;

	[Token(Token = "0x4000184")]
	[FieldOffset(Offset = "0x30")]
	private Dictionary<int, int> _repeatCurrentCounts;

	[Token(Token = "0x4000185")]
	[FieldOffset(Offset = "0x38")]
	private WeatherManager _manager;

	[Token(Token = "0x4000186")]
	[FieldOffset(Offset = "0x40")]
	public WeatherSchedule Schedule;

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x1DD3540", Offset = "0x1DD1B40", VA = "0x181DD3540")]
	public WeatherScheduleRunner(WeatherManager manager)
	{
	}

	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x1DD3260", Offset = "0x1DD1860", VA = "0x181DD3260")]
	public void ProcessSchedule()
	{
	}

	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x1DD22F0", Offset = "0x1DD08F0", VA = "0x181DD22F0")]
	public void ConsumeSchedule()
	{
	}
}
