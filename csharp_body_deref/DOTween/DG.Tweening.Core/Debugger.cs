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
		[Address(RVA = "0x2384B20", Offset = "0x2384B20", VA = "0x2384B20")]
		public static void LogAddToNullSequence()
		{
		}

		[Token(Token = "0x60003E1")]
		[Address(RVA = "0x2384B50", Offset = "0x2384B50", VA = "0x2384B50")]
		public static void LogAddToInactiveSequence()
		{
		}

		[Token(Token = "0x60003E2")]
		[Address(RVA = "0x2384B80", Offset = "0x2384B80", VA = "0x2384B80")]
		public static void LogAddToLockedSequence()
		{
		}

		[Token(Token = "0x60003E3")]
		[Address(RVA = "0x2384BB0", Offset = "0x2384BB0", VA = "0x2384BB0")]
		public static void LogAddNullTween()
		{
		}

		[Token(Token = "0x60003E4")]
		[Address(RVA = "0x2384BE0", Offset = "0x2384BE0", VA = "0x2384BE0")]
		public static void LogAddInactiveTween(Tween t)
		{
		}

		[Token(Token = "0x60003E5")]
		[Address(RVA = "0x2384C20", Offset = "0x2384C20", VA = "0x2384C20")]
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
		[Address(RVA = "0x2383BB0", Offset = "0x2383BB0", VA = "0x2383BB0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60003CE")]
	[Address(RVA = "0x2383BF0", Offset = "0x2383BF0", VA = "0x2383BF0")]
	public static void Log(object message)
	{
	}

	[Token(Token = "0x60003CF")]
	[Address(RVA = "0x2383D10", Offset = "0x2383D10", VA = "0x2383D10")]
	public static void LogWarning(object message, [Optional] Tween t)
	{
	}

	[Token(Token = "0x60003D0")]
	[Address(RVA = "0x2383F70", Offset = "0x2383F70", VA = "0x2383F70")]
	public static void LogError(object message, [Optional] Tween t)
	{
	}

	[Token(Token = "0x60003D1")]
	[Address(RVA = "0x2384170", Offset = "0x2384170", VA = "0x2384170")]
	public static void LogSafeModeCapturedError(object message, [Optional] Tween t)
	{
	}

	[Token(Token = "0x60003D2")]
	[Address(RVA = "0x2384430", Offset = "0x2384430", VA = "0x2384430")]
	public static void LogReport(object message)
	{
	}

	[Token(Token = "0x60003D3")]
	[Address(RVA = "0x2384540", Offset = "0x2384540", VA = "0x2384540")]
	public static void LogSafeModeReport(object message)
	{
	}

	[Token(Token = "0x60003D4")]
	[Address(RVA = "0x2384650", Offset = "0x2384650", VA = "0x2384650")]
	public static void LogInvalidTween(Tween t)
	{
	}

	[Token(Token = "0x60003D5")]
	[Address(RVA = "0x2384680", Offset = "0x2384680", VA = "0x2384680")]
	public static void LogNestedTween(Tween t)
	{
	}

	[Token(Token = "0x60003D6")]
	[Address(RVA = "0x23846C0", Offset = "0x23846C0", VA = "0x23846C0")]
	public static void LogNullTween(Tween t)
	{
	}

	[Token(Token = "0x60003D7")]
	[Address(RVA = "0x23846F0", Offset = "0x23846F0", VA = "0x23846F0")]
	public static void LogNonPathTween(Tween t)
	{
	}

	[Token(Token = "0x60003D8")]
	[Address(RVA = "0x2384730", Offset = "0x2384730", VA = "0x2384730")]
	public static void LogMissingMaterialProperty(string propertyName)
	{
	}

	[Token(Token = "0x60003D9")]
	[Address(RVA = "0x2384770", Offset = "0x2384770", VA = "0x2384770")]
	public static void LogMissingMaterialProperty(int propertyId)
	{
	}

	[Token(Token = "0x60003DA")]
	[Address(RVA = "0x23847D0", Offset = "0x23847D0", VA = "0x23847D0")]
	public static void LogRemoveActiveTweenError(string errorInfo, Tween t)
	{
	}

	[Token(Token = "0x60003DB")]
	[Address(RVA = "0x2384820", Offset = "0x2384820", VA = "0x2384820")]
	public static void LogAddActiveTweenError(string errorInfo, Tween t)
	{
	}

	[Token(Token = "0x60003DC")]
	[Address(RVA = "0x2384870", Offset = "0x2384870", VA = "0x2384870")]
	public static void SetLogPriority(LogBehaviour logBehaviour)
	{
	}

	[Token(Token = "0x60003DD")]
	[Address(RVA = "0x23848D0", Offset = "0x23848D0", VA = "0x23848D0")]
	public static bool ShouldLogSafeModeCapturedError()
	{
		return default(bool);
	}

	[Token(Token = "0x60003DE")]
	[Address(RVA = "0x2383F20", Offset = "0x2383F20", VA = "0x2383F20")]
	private static string GetDebugDataMessage(Tween t)
	{
		return null;
	}

	[Token(Token = "0x60003DF")]
	[Address(RVA = "0x2384970", Offset = "0x2384970", VA = "0x2384970")]
	private static void AddDebugDataToMessage(ref string message, Tween t)
	{
	}
}
