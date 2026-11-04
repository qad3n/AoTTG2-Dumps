// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Analytics.AnalyticsEventBase
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Analytics;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000311")]
[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
public class AnalyticsEventBase
{
	[Token(Token = "0x40007BF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private string eventName;

	[Token(Token = "0x40007C0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int eventVersion;

	[Token(Token = "0x40007C1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string eventPrefix;

	[Token(Token = "0x40007C2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private SendEventOptions sendEventOptions;

	[Token(Token = "0x600126C")]
	[Address(RVA = "0x2F2DD50", Offset = "0x2F2C350", VA = "0x182F2DD50")]
	public AnalyticsEventBase(string eventName, int eventVersion, SendEventOptions sendEventOptions = SendEventOptions.kAppendNone, string eventPrefix = "")
	{
	}
}
