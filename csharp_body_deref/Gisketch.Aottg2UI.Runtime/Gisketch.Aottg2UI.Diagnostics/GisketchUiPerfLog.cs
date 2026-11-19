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

[Token(Token = "0x200005D")]
public static class GisketchUiPerfLog
{
	[Token(Token = "0x200005E")]
	public readonly struct Scope : IDisposable
	{
		[Token(Token = "0x40001D1")]
		[FieldOffset(Offset = "0x0")]
		private readonly string _area;

		[Token(Token = "0x40001D2")]
		[FieldOffset(Offset = "0x8")]
		private readonly string _detail;

		[Token(Token = "0x40001D3")]
		[FieldOffset(Offset = "0x10")]
		private readonly long _startMs;

		[Token(Token = "0x40001D4")]
		[FieldOffset(Offset = "0x18")]
		private readonly bool _enabled;

		[Token(Token = "0x40001D5")]
		[FieldOffset(Offset = "0x19")]
		private readonly bool _hotLoop;

		[Token(Token = "0x6000358")]
		[Address(RVA = "0x5260900", Offset = "0x525F900", VA = "0x5260900")]
		public Scope(string area, string detail)
		{
		}

		[Token(Token = "0x6000359")]
		[Address(RVA = "0x5260AE0", Offset = "0x525FAE0", VA = "0x5260AE0", Slot = "4")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x40001CB")]
	[FieldOffset(Offset = "0x0")]
	public static bool Enabled;

	[Token(Token = "0x40001CC")]
	[FieldOffset(Offset = "0x1")]
	public static bool LogBegins;

	[Token(Token = "0x40001CD")]
	[FieldOffset(Offset = "0x2")]
	public static bool VerboseHotLoops;

	[Token(Token = "0x40001CE")]
	[FieldOffset(Offset = "0x4")]
	public static int SlowElapsedMs;

	[Token(Token = "0x40001CF")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Stopwatch Clock;

	[Token(Token = "0x40001D0")]
	[FieldOffset(Offset = "0x10")]
	private static long _lastMs;

	[Token(Token = "0x6000352")]
	[Address(RVA = "0x5251E10", Offset = "0x5250E10", VA = "0x5251E10")]
	public static long NowMs()
	{
		return default(long);
	}

	[Token(Token = "0x6000353")]
	[Address(RVA = "0x524DF60", Offset = "0x524CF60", VA = "0x524DF60")]
	public static void Mark(string area, string detail)
	{
	}

	[Token(Token = "0x6000354")]
	[Address(RVA = "0x524DF40", Offset = "0x524CF40", VA = "0x524DF40")]
	public static Scope Time(string area, string detail)
	{
		return default(Scope);
	}

	[Token(Token = "0x6000355")]
	[Address(RVA = "0x52606A0", Offset = "0x525F6A0", VA = "0x52606A0")]
	private static void Write(string area, string detail)
	{
	}

	[Token(Token = "0x6000356")]
	[Address(RVA = "0x52605F0", Offset = "0x525F5F0", VA = "0x52605F0")]
	private static bool IsHotLoop(string area)
	{
		return default(bool);
	}
}
