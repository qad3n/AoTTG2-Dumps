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

[Token(Token = "0x2000045")]
public static class GisketchUiPerfLog
{
	[Token(Token = "0x2000046")]
	public readonly struct Scope : IDisposable
	{
		[Token(Token = "0x4000153")]
		[FieldOffset(Offset = "0x0")]
		private readonly string _area;

		[Token(Token = "0x4000154")]
		[FieldOffset(Offset = "0x8")]
		private readonly string _detail;

		[Token(Token = "0x4000155")]
		[FieldOffset(Offset = "0x10")]
		private readonly long _startMs;

		[Token(Token = "0x4000156")]
		[FieldOffset(Offset = "0x18")]
		private readonly bool _enabled;

		[Token(Token = "0x4000157")]
		[FieldOffset(Offset = "0x19")]
		private readonly bool _hotLoop;

		[Token(Token = "0x6000243")]
		[Address(RVA = "0x3A5AAB0", Offset = "0x3A5AAB0", VA = "0x3A5AAB0")]
		public Scope(string area, string detail)
		{
		}

		[Token(Token = "0x6000244")]
		[Address(RVA = "0x3A5AC90", Offset = "0x3A5AC90", VA = "0x3A5AC90", Slot = "4")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x400014D")]
	[FieldOffset(Offset = "0x0")]
	public static bool Enabled;

	[Token(Token = "0x400014E")]
	[FieldOffset(Offset = "0x1")]
	public static bool LogBegins;

	[Token(Token = "0x400014F")]
	[FieldOffset(Offset = "0x2")]
	public static bool VerboseHotLoops;

	[Token(Token = "0x4000150")]
	[FieldOffset(Offset = "0x4")]
	public static int SlowElapsedMs;

	[Token(Token = "0x4000151")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Stopwatch Clock;

	[Token(Token = "0x4000152")]
	[FieldOffset(Offset = "0x10")]
	private static long _lastMs;

	[Token(Token = "0x600023D")]
	[Address(RVA = "0x3A4FD50", Offset = "0x3A4FD50", VA = "0x3A4FD50")]
	public static long NowMs()
	{
		return default(long);
	}

	[Token(Token = "0x600023E")]
	[Address(RVA = "0x3A4DA30", Offset = "0x3A4DA30", VA = "0x3A4DA30")]
	public static void Mark(string area, string detail)
	{
	}

	[Token(Token = "0x600023F")]
	[Address(RVA = "0x3A4DA10", Offset = "0x3A4DA10", VA = "0x3A4DA10")]
	public static Scope Time(string area, string detail)
	{
		return default(Scope);
	}

	[Token(Token = "0x6000240")]
	[Address(RVA = "0x3A5A850", Offset = "0x3A5A850", VA = "0x3A5A850")]
	private static void Write(string area, string detail)
	{
	}

	[Token(Token = "0x6000241")]
	[Address(RVA = "0x3A5A7A0", Offset = "0x3A5A7A0", VA = "0x3A5A7A0")]
	private static bool IsHotLoop(string area)
	{
		return default(bool);
	}
}
