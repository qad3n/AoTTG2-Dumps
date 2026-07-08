using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Analytics;

[Token(Token = "0x2000008")]
[UnityEngine.Scripting.RequiredByNativeCode]
public enum AnalyticsSessionState
{
	[Token(Token = "0x4000013")]
	kSessionStopped,
	[Token(Token = "0x4000014")]
	kSessionStarted,
	[Token(Token = "0x4000015")]
	kSessionPaused,
	[Token(Token = "0x4000016")]
	kSessionResumed
}
