// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Analytics.AnalyticsEventBase
// Update status: unchanged since the previous dump
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
	[Token(Token = "0x40007BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private string eventName;

	[Token(Token = "0x40007BE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int eventVersion;

	[Token(Token = "0x40007BF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string eventPrefix;

	[Token(Token = "0x40007C0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private SendEventOptions sendEventOptions;

	[Token(Token = "0x6001280")]
	[Address(RVA = "0x693C3D0", Offset = "0x693B3D0", VA = "0x693C3D0")]
	public AnalyticsEventBase(string eventName, int eventVersion, SendEventOptions sendEventOptions = SendEventOptions.kAppendNone, string eventPrefix = "")
	{
	}
}
