using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.Analytics;

[Token(Token = "0x2000009")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("UnityAnalyticsScriptingClasses.h")]
[UnityEngine.Bindings.NativeHeader("Modules/UnityAnalytics/Public/UnityAnalytics.h")]
public static class AnalyticsSessionInfo
{
	[Token(Token = "0x200000A")]
	public delegate void SessionStateChanged(AnalyticsSessionState sessionState, long sessionId, long sessionElapsedTime, bool sessionChanged);

	[Token(Token = "0x200000B")]
	public delegate void IdentityTokenChanged(string token);

	[Token(Token = "0x4000017")]
	[FieldOffset(Offset = "0x0")]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	[CompilerGenerated]
	private static SessionStateChanged sessionStateChanged;

	[Token(Token = "0x4000018")]
	[FieldOffset(Offset = "0x8")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static IdentityTokenChanged identityTokenChanged;

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x4DDCAE0", Offset = "0x4DDCAE0", VA = "0x4DDCAE0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void CallSessionStateChanged(AnalyticsSessionState sessionState, long sessionId, long sessionElapsedTime, bool sessionChanged)
	{
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x4DDCB60", Offset = "0x4DDCB60", VA = "0x4DDCB60")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void CallIdentityTokenChanged(string token)
	{
	}
}
