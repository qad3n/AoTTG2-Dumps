// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Analytics.AnalyticsSessionInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Analytics;

[Token(Token = "0x2000009")]
[UnityEngine.Bindings.NativeHeader("UnityAnalyticsScriptingClasses.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Modules/UnityAnalytics/Public/UnityAnalytics.h")]
public static class AnalyticsSessionInfo
{
	[Token(Token = "0x200000A")]
	public delegate void SessionStateChanged(AnalyticsSessionState sessionState, long sessionId, long sessionElapsedTime, bool sessionChanged);

	[Token(Token = "0x200000B")]
	public delegate void IdentityTokenChanged(string token);

	[Token(Token = "0x4000017")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static SessionStateChanged sessionStateChanged;

	[Token(Token = "0x4000018")]
	[FieldOffset(Offset = "0x8")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static IdentityTokenChanged identityTokenChanged;

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x3308A60", Offset = "0x3307060", VA = "0x183308A60")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void CallSessionStateChanged(AnalyticsSessionState sessionState, long sessionId, long sessionElapsedTime, bool sessionChanged)
	{
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x3308A00", Offset = "0x3307000", VA = "0x183308A00")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void CallIdentityTokenChanged(string token)
	{
	}
}
