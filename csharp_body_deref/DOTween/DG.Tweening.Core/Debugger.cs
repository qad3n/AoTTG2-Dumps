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
		[Address(RVA = "0x571F60", Offset = "0x570560", VA = "0x180571F60")]
		public static void LogAddToNullSequence()
		{
		}

		[Token(Token = "0x60003E1")]
		[Address(RVA = "0x571EE0", Offset = "0x5704E0", VA = "0x180571EE0")]
		public static void LogAddToInactiveSequence()
		{
		}

		[Token(Token = "0x60003E2")]
		[Address(RVA = "0x571F20", Offset = "0x570520", VA = "0x180571F20")]
		public static void LogAddToLockedSequence()
		{
		}

		[Token(Token = "0x60003E3")]
		[Address(RVA = "0x571EA0", Offset = "0x5704A0", VA = "0x180571EA0")]
		public static void LogAddNullTween()
		{
		}

		[Token(Token = "0x60003E4")]
		[Address(RVA = "0x571E60", Offset = "0x570460", VA = "0x180571E60")]
		public static void LogAddInactiveTween(Tween t)
		{
		}

		[Token(Token = "0x60003E5")]
		[Address(RVA = "0x571E20", Offset = "0x570420", VA = "0x180571E20")]
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
		[Address(RVA = "0x5689C0", Offset = "0x566FC0", VA = "0x1805689C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60003CE")]
	[Address(RVA = "0x5687B0", Offset = "0x566DB0", VA = "0x1805687B0")]
	public static void Log(object message)
	{
	}

	[Token(Token = "0x60003CF")]
	[Address(RVA = "0x568610", Offset = "0x566C10", VA = "0x180568610")]
	public static void LogWarning(object message, [Optional] Tween t)
	{
	}

	[Token(Token = "0x60003D0")]
	[Address(RVA = "0x567E10", Offset = "0x566410", VA = "0x180567E10")]
	public static void LogError(object message, [Optional] Tween t)
	{
	}

	[Token(Token = "0x60003D1")]
	[Address(RVA = "0x5682D0", Offset = "0x5668D0", VA = "0x1805682D0")]
	public static void LogSafeModeCapturedError(object message, [Optional] Tween t)
	{
	}

	[Token(Token = "0x60003D2")]
	[Address(RVA = "0x5681C0", Offset = "0x5667C0", VA = "0x1805681C0")]
	public static void LogReport(object message)
	{
	}

	[Token(Token = "0x60003D3")]
	[Address(RVA = "0x568500", Offset = "0x566B00", VA = "0x180568500")]
	public static void LogSafeModeReport(object message)
	{
	}

	[Token(Token = "0x60003D4")]
	[Address(RVA = "0x567FB0", Offset = "0x5665B0", VA = "0x180567FB0")]
	public static void LogInvalidTween(Tween t)
	{
	}

	[Token(Token = "0x60003D5")]
	[Address(RVA = "0x5680A0", Offset = "0x5666A0", VA = "0x1805680A0")]
	public static void LogNestedTween(Tween t)
	{
	}

	[Token(Token = "0x60003D6")]
	[Address(RVA = "0x568120", Offset = "0x566720", VA = "0x180568120")]
	public static void LogNullTween(Tween t)
	{
	}

	[Token(Token = "0x60003D7")]
	[Address(RVA = "0x5680E0", Offset = "0x5666E0", VA = "0x1805680E0")]
	public static void LogNonPathTween(Tween t)
	{
	}

	[Token(Token = "0x60003D8")]
	[Address(RVA = "0x567FF0", Offset = "0x5665F0", VA = "0x180567FF0")]
	public static void LogMissingMaterialProperty(string propertyName)
	{
	}

	[Token(Token = "0x60003D9")]
	[Address(RVA = "0x568040", Offset = "0x566640", VA = "0x180568040")]
	public static void LogMissingMaterialProperty(int propertyId)
	{
	}

	[Token(Token = "0x60003DA")]
	[Address(RVA = "0x568160", Offset = "0x566760", VA = "0x180568160")]
	public static void LogRemoveActiveTweenError(string errorInfo, Tween t)
	{
	}

	[Token(Token = "0x60003DB")]
	[Address(RVA = "0x567DB0", Offset = "0x5663B0", VA = "0x180567DB0")]
	public static void LogAddActiveTweenError(string errorInfo, Tween t)
	{
	}

	[Token(Token = "0x60003DC")]
	[Address(RVA = "0x5688D0", Offset = "0x566ED0", VA = "0x1805688D0")]
	public static void SetLogPriority(LogBehaviour logBehaviour)
	{
	}

	[Token(Token = "0x60003DD")]
	[Address(RVA = "0x568930", Offset = "0x566F30", VA = "0x180568930")]
	public static bool ShouldLogSafeModeCapturedError()
	{
		return default(bool);
	}

	[Token(Token = "0x60003DE")]
	[Address(RVA = "0x567B90", Offset = "0x566190", VA = "0x180567B90")]
	private static string GetDebugDataMessage(Tween t)
	{
		return null;
	}

	[Token(Token = "0x60003DF")]
	[Address(RVA = "0x5679C0", Offset = "0x565FC0", VA = "0x1805679C0")]
	private static void AddDebugDataToMessage(ref string message, Tween t)
	{
	}
}
