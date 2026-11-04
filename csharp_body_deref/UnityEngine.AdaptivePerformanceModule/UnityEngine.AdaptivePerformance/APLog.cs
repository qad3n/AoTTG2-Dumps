// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AdaptivePerformance.APLog
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Text;
using Il2CppDummyDll;

namespace UnityEngine.AdaptivePerformance;

[Token(Token = "0x2000008")]
internal static class APLog
{
	[Token(Token = "0x4000029")]
	[FieldOffset(Offset = "0x0")]
	public static bool enabled;

	[Token(Token = "0x400002A")]
	[FieldOffset(Offset = "0x8")]
	public static readonly StringBuilder s_LogBuilder;

	[Token(Token = "0x400002B")]
	[FieldOffset(Offset = "0x10")]
	private static readonly string s_AdaptivePerformancePrefix;

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x2E80AE0", Offset = "0x2E7F0E0", VA = "0x182E80AE0")]
	public static void Debug(string format, params object[] args)
	{
	}

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x2E80BA0", Offset = "0x2E7F1A0", VA = "0x182E80BA0")]
	public static void LogMessage(string format, params object[] args)
	{
	}

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x2E80C40", Offset = "0x2E7F240", VA = "0x182E80C40")]
	public static bool ShouldLog()
	{
		return default(bool);
	}
}
