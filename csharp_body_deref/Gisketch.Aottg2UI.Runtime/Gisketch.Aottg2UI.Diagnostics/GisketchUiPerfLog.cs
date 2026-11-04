// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Diagnostics.GisketchUiPerfLog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Diagnostics/GisketchUiPerfLog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Diagnostics;

[Token(Token = "0x2000057")]
public static class GisketchUiPerfLog
{
	[Token(Token = "0x2000058")]
	public readonly struct Scope : IDisposable
	{
		[Token(Token = "0x40001AD")]
		[FieldOffset(Offset = "0x0")]
		private readonly string _area;

		[Token(Token = "0x40001AE")]
		[FieldOffset(Offset = "0x8")]
		private readonly string _detail;

		[Token(Token = "0x40001AF")]
		[FieldOffset(Offset = "0x10")]
		private readonly long _startMs;

		[Token(Token = "0x40001B0")]
		[FieldOffset(Offset = "0x18")]
		private readonly bool _enabled;

		[Token(Token = "0x40001B1")]
		[FieldOffset(Offset = "0x19")]
		private readonly bool _hotLoop;

		[Token(Token = "0x600030D")]
		[Address(RVA = "0x18D8EE0", Offset = "0x18D74E0", VA = "0x1818D8EE0")]
		public Scope(string area, string detail)
		{
		}

		[Token(Token = "0x600030E")]
		[Address(RVA = "0x18D8CC0", Offset = "0x18D72C0", VA = "0x1818D8CC0", Slot = "4")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x40001A7")]
	[FieldOffset(Offset = "0x0")]
	public static bool Enabled;

	[Token(Token = "0x40001A8")]
	[FieldOffset(Offset = "0x1")]
	public static bool LogBegins;

	[Token(Token = "0x40001A9")]
	[FieldOffset(Offset = "0x2")]
	public static bool VerboseHotLoops;

	[Token(Token = "0x40001AA")]
	[FieldOffset(Offset = "0x4")]
	public static int SlowElapsedMs;

	[Token(Token = "0x40001AB")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Stopwatch Clock;

	[Token(Token = "0x40001AC")]
	[FieldOffset(Offset = "0x10")]
	private static long _lastMs;

	[Token(Token = "0x6000307")]
	[Address(RVA = "0x18D8870", Offset = "0x18D6E70", VA = "0x1818D8870")]
	public static long NowMs()
	{
		return default(long);
	}

	[Token(Token = "0x6000308")]
	[Address(RVA = "0x18D87B0", Offset = "0x18D6DB0", VA = "0x1818D87B0")]
	public static void Mark(string area, string detail)
	{
	}

	[Token(Token = "0x6000309")]
	[Address(RVA = "0x18D88D0", Offset = "0x18D6ED0", VA = "0x1818D88D0")]
	public static Scope Time(string area, string detail)
	{
		return default(Scope);
	}

	[Token(Token = "0x600030A")]
	[Address(RVA = "0x18D8900", Offset = "0x18D6F00", VA = "0x1818D8900")]
	private static void Write(string area, string detail)
	{
	}

	[Token(Token = "0x600030B")]
	[Address(RVA = "0x18D8700", Offset = "0x18D6D00", VA = "0x1818D8700")]
	private static bool IsHotLoop(string area)
	{
		return default(bool);
	}
}
