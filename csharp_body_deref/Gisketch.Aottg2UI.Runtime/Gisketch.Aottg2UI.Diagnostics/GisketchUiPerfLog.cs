using System;
using System.Diagnostics;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Diagnostics;

[Token(Token = "0x2000043")]
public static class GisketchUiPerfLog
{
	[Token(Token = "0x2000044")]
	public readonly struct Scope : IDisposable
	{
		[Token(Token = "0x400014C")]
		[FieldOffset(Offset = "0x0")]
		private readonly string _area;

		[Token(Token = "0x400014D")]
		[FieldOffset(Offset = "0x8")]
		private readonly string _detail;

		[Token(Token = "0x400014E")]
		[FieldOffset(Offset = "0x10")]
		private readonly long _startMs;

		[Token(Token = "0x400014F")]
		[FieldOffset(Offset = "0x18")]
		private readonly bool _enabled;

		[Token(Token = "0x4000150")]
		[FieldOffset(Offset = "0x19")]
		private readonly bool _hotLoop;

		[Token(Token = "0x6000234")]
		[Address(RVA = "0x39EFD30", Offset = "0x39EFD30", VA = "0x39EFD30")]
		public Scope(string area, string detail)
		{
		}

		[Token(Token = "0x6000235")]
		[Address(RVA = "0x39EFF10", Offset = "0x39EFF10", VA = "0x39EFF10", Slot = "4")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x4000146")]
	[FieldOffset(Offset = "0x0")]
	public static bool Enabled;

	[Token(Token = "0x4000147")]
	[FieldOffset(Offset = "0x1")]
	public static bool LogBegins;

	[Token(Token = "0x4000148")]
	[FieldOffset(Offset = "0x2")]
	public static bool VerboseHotLoops;

	[Token(Token = "0x4000149")]
	[FieldOffset(Offset = "0x4")]
	public static int SlowElapsedMs;

	[Token(Token = "0x400014A")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Stopwatch Clock;

	[Token(Token = "0x400014B")]
	[FieldOffset(Offset = "0x10")]
	private static long _lastMs;

	[Token(Token = "0x600022E")]
	[Address(RVA = "0x39E56D0", Offset = "0x39E56D0", VA = "0x39E56D0")]
	public static long NowMs()
	{
		return default(long);
	}

	[Token(Token = "0x600022F")]
	[Address(RVA = "0x39E33B0", Offset = "0x39E33B0", VA = "0x39E33B0")]
	public static void Mark(string area, string detail)
	{
	}

	[Token(Token = "0x6000230")]
	[Address(RVA = "0x39E3390", Offset = "0x39E3390", VA = "0x39E3390")]
	public static Scope Time(string area, string detail)
	{
		return default(Scope);
	}

	[Token(Token = "0x6000231")]
	[Address(RVA = "0x39EFAD0", Offset = "0x39EFAD0", VA = "0x39EFAD0")]
	private static void Write(string area, string detail)
	{
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x39EFA20", Offset = "0x39EFA20", VA = "0x39EFA20")]
	private static bool IsHotLoop(string area)
	{
		return default(bool);
	}
}
