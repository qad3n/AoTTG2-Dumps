// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.Core.Debugger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3195190", Offset = "0x3194190", VA = "0x3195190")]
		public static void LogAddToNullSequence()
		{
		}

		[Token(Token = "0x60003E1")]
		[Address(RVA = "0x31951C0", Offset = "0x31941C0", VA = "0x31951C0")]
		public static void LogAddToInactiveSequence()
		{
		}

		[Token(Token = "0x60003E2")]
		[Address(RVA = "0x31951F0", Offset = "0x31941F0", VA = "0x31951F0")]
		public static void LogAddToLockedSequence()
		{
		}

		[Token(Token = "0x60003E3")]
		[Address(RVA = "0x3195220", Offset = "0x3194220", VA = "0x3195220")]
		public static void LogAddNullTween()
		{
		}

		[Token(Token = "0x60003E4")]
		[Address(RVA = "0x3195250", Offset = "0x3194250", VA = "0x3195250")]
		public static void LogAddInactiveTween(Tween t)
		{
		}

		[Token(Token = "0x60003E5")]
		[Address(RVA = "0x3195290", Offset = "0x3194290", VA = "0x3195290")]
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
		[Address(RVA = "0x3194230", Offset = "0x3193230", VA = "0x3194230")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60003CE")]
	[Address(RVA = "0x3194270", Offset = "0x3193270", VA = "0x3194270")]
	public static void Log(object message)
	{
	}

	[Token(Token = "0x60003CF")]
	[Address(RVA = "0x3194390", Offset = "0x3193390", VA = "0x3194390")]
	public static void LogWarning(object message, [Optional] Tween t)
	{
	}

	[Token(Token = "0x60003D0")]
	[Address(RVA = "0x31945F0", Offset = "0x31935F0", VA = "0x31945F0")]
	public static void LogError(object message, [Optional] Tween t)
	{
	}

	[Token(Token = "0x60003D1")]
	[Address(RVA = "0x31947F0", Offset = "0x31937F0", VA = "0x31947F0")]
	public static void LogSafeModeCapturedError(object message, [Optional] Tween t)
	{
	}

	[Token(Token = "0x60003D2")]
	[Address(RVA = "0x3194AB0", Offset = "0x3193AB0", VA = "0x3194AB0")]
	public static void LogReport(object message)
	{
	}

	[Token(Token = "0x60003D3")]
	[Address(RVA = "0x3194BC0", Offset = "0x3193BC0", VA = "0x3194BC0")]
	public static void LogSafeModeReport(object message)
	{
	}

	[Token(Token = "0x60003D4")]
	[Address(RVA = "0x3194CD0", Offset = "0x3193CD0", VA = "0x3194CD0")]
	public static void LogInvalidTween(Tween t)
	{
	}

	[Token(Token = "0x60003D5")]
	[Address(RVA = "0x3194D00", Offset = "0x3193D00", VA = "0x3194D00")]
	public static void LogNestedTween(Tween t)
	{
	}

	[Token(Token = "0x60003D6")]
	[Address(RVA = "0x3194D40", Offset = "0x3193D40", VA = "0x3194D40")]
	public static void LogNullTween(Tween t)
	{
	}

	[Token(Token = "0x60003D7")]
	[Address(RVA = "0x3194D70", Offset = "0x3193D70", VA = "0x3194D70")]
	public static void LogNonPathTween(Tween t)
	{
	}

	[Token(Token = "0x60003D8")]
	[Address(RVA = "0x3194DB0", Offset = "0x3193DB0", VA = "0x3194DB0")]
	public static void LogMissingMaterialProperty(string propertyName)
	{
	}

	[Token(Token = "0x60003D9")]
	[Address(RVA = "0x3194DF0", Offset = "0x3193DF0", VA = "0x3194DF0")]
	public static void LogMissingMaterialProperty(int propertyId)
	{
	}

	[Token(Token = "0x60003DA")]
	[Address(RVA = "0x3194E50", Offset = "0x3193E50", VA = "0x3194E50")]
	public static void LogRemoveActiveTweenError(string errorInfo, Tween t)
	{
	}

	[Token(Token = "0x60003DB")]
	[Address(RVA = "0x3194EA0", Offset = "0x3193EA0", VA = "0x3194EA0")]
	public static void LogAddActiveTweenError(string errorInfo, Tween t)
	{
	}

	[Token(Token = "0x60003DC")]
	[Address(RVA = "0x3194EF0", Offset = "0x3193EF0", VA = "0x3194EF0")]
	public static void SetLogPriority(LogBehaviour logBehaviour)
	{
	}

	[Token(Token = "0x60003DD")]
	[Address(RVA = "0x3194F40", Offset = "0x3193F40", VA = "0x3194F40")]
	public static bool ShouldLogSafeModeCapturedError()
	{
		return default(bool);
	}

	[Token(Token = "0x60003DE")]
	[Address(RVA = "0x31945A0", Offset = "0x31935A0", VA = "0x31945A0")]
	private static string GetDebugDataMessage(Tween t)
	{
		return null;
	}

	[Token(Token = "0x60003DF")]
	[Address(RVA = "0x3194FE0", Offset = "0x3193FE0", VA = "0x3194FE0")]
	private static void AddDebugDataToMessage(ref string message, Tween t)
	{
	}
}
