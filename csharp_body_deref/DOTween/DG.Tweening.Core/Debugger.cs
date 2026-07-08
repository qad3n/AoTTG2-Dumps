using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace DG.Tweening.Core;

[Token(Token = "0x20000A3")]
public static class Debugger
{
	[Token(Token = "0x20000A4")]
	internal static class Sequence
	{
		[Token(Token = "0x60003E0")]
		[Address(RVA = "0x231E240", Offset = "0x231E240", VA = "0x231E240")]
		public static void LogAddToNullSequence()
		{
		}

		[Token(Token = "0x60003E1")]
		[Address(RVA = "0x231E270", Offset = "0x231E270", VA = "0x231E270")]
		public static void LogAddToInactiveSequence()
		{
		}

		[Token(Token = "0x60003E2")]
		[Address(RVA = "0x231E2A0", Offset = "0x231E2A0", VA = "0x231E2A0")]
		public static void LogAddToLockedSequence()
		{
		}

		[Token(Token = "0x60003E3")]
		[Address(RVA = "0x231E2D0", Offset = "0x231E2D0", VA = "0x231E2D0")]
		public static void LogAddNullTween()
		{
		}

		[Token(Token = "0x60003E4")]
		[Address(RVA = "0x231E300", Offset = "0x231E300", VA = "0x231E300")]
		public static void LogAddInactiveTween(Tween t)
		{
		}

		[Token(Token = "0x60003E5")]
		[Address(RVA = "0x231E340", Offset = "0x231E340", VA = "0x231E340")]
		public static void LogAddAlreadySequencedTween(Tween t)
		{
		}
	}

	[Token(Token = "0x40001C9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static int _logPriority;

	[Token(Token = "0x40001CA")]
	private const string _LogPrefix = "<color=#0099bc><b>DOTWEEN ► </b></color>";

	[Token(Token = "0x17000011")]
	public static int logPriority
	{
		[Token(Token = "0x60003CD")]
		[Address(RVA = "0x231D2D0", Offset = "0x231D2D0", VA = "0x231D2D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60003CE")]
	[Address(RVA = "0x231D310", Offset = "0x231D310", VA = "0x231D310")]
	public static void Log(object message)
	{
	}

	[Token(Token = "0x60003CF")]
	[Address(RVA = "0x231D430", Offset = "0x231D430", VA = "0x231D430")]
	public static void LogWarning(object message, [Optional] Tween t)
	{
	}

	[Token(Token = "0x60003D0")]
	[Address(RVA = "0x231D690", Offset = "0x231D690", VA = "0x231D690")]
	public static void LogError(object message, [Optional] Tween t)
	{
	}

	[Token(Token = "0x60003D1")]
	[Address(RVA = "0x231D890", Offset = "0x231D890", VA = "0x231D890")]
	public static void LogSafeModeCapturedError(object message, [Optional] Tween t)
	{
	}

	[Token(Token = "0x60003D2")]
	[Address(RVA = "0x231DB50", Offset = "0x231DB50", VA = "0x231DB50")]
	public static void LogReport(object message)
	{
	}

	[Token(Token = "0x60003D3")]
	[Address(RVA = "0x231DC60", Offset = "0x231DC60", VA = "0x231DC60")]
	public static void LogSafeModeReport(object message)
	{
	}

	[Token(Token = "0x60003D4")]
	[Address(RVA = "0x231DD70", Offset = "0x231DD70", VA = "0x231DD70")]
	public static void LogInvalidTween(Tween t)
	{
	}

	[Token(Token = "0x60003D5")]
	[Address(RVA = "0x231DDA0", Offset = "0x231DDA0", VA = "0x231DDA0")]
	public static void LogNestedTween(Tween t)
	{
	}

	[Token(Token = "0x60003D6")]
	[Address(RVA = "0x231DDE0", Offset = "0x231DDE0", VA = "0x231DDE0")]
	public static void LogNullTween(Tween t)
	{
	}

	[Token(Token = "0x60003D7")]
	[Address(RVA = "0x231DE10", Offset = "0x231DE10", VA = "0x231DE10")]
	public static void LogNonPathTween(Tween t)
	{
	}

	[Token(Token = "0x60003D8")]
	[Address(RVA = "0x231DE50", Offset = "0x231DE50", VA = "0x231DE50")]
	public static void LogMissingMaterialProperty(string propertyName)
	{
	}

	[Token(Token = "0x60003D9")]
	[Address(RVA = "0x231DE90", Offset = "0x231DE90", VA = "0x231DE90")]
	public static void LogMissingMaterialProperty(int propertyId)
	{
	}

	[Token(Token = "0x60003DA")]
	[Address(RVA = "0x231DEF0", Offset = "0x231DEF0", VA = "0x231DEF0")]
	public static void LogRemoveActiveTweenError(string errorInfo, Tween t)
	{
	}

	[Token(Token = "0x60003DB")]
	[Address(RVA = "0x231DF40", Offset = "0x231DF40", VA = "0x231DF40")]
	public static void LogAddActiveTweenError(string errorInfo, Tween t)
	{
	}

	[Token(Token = "0x60003DC")]
	[Address(RVA = "0x231DF90", Offset = "0x231DF90", VA = "0x231DF90")]
	public static void SetLogPriority(LogBehaviour logBehaviour)
	{
	}

	[Token(Token = "0x60003DD")]
	[Address(RVA = "0x231DFF0", Offset = "0x231DFF0", VA = "0x231DFF0")]
	public static bool ShouldLogSafeModeCapturedError()
	{
		return default(bool);
	}

	[Token(Token = "0x60003DE")]
	[Address(RVA = "0x231D640", Offset = "0x231D640", VA = "0x231D640")]
	private static string GetDebugDataMessage(Tween t)
	{
		return null;
	}

	[Token(Token = "0x60003DF")]
	[Address(RVA = "0x231E090", Offset = "0x231E090", VA = "0x231E090")]
	private static void AddDebugDataToMessage(ref string message, Tween t)
	{
	}
}
