// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Analytics.UaaLApplicationLaunchAnalytic
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Analytics;

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000313")]
[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
internal class UaaLApplicationLaunchAnalytic : AnalyticsEventBase
{
	[Token(Token = "0x40007C7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public int launch_type;

	[Token(Token = "0x40007C8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	public int launch_process_type;

	[Token(Token = "0x600126F")]
	[Address(RVA = "0x2F5D610", Offset = "0x2F5BC10", VA = "0x182F5D610")]
	public UaaLApplicationLaunchAnalytic()
	{
	}

	[Token(Token = "0x6001270")]
	[Address(RVA = "0x2F5D550", Offset = "0x2F5BB50", VA = "0x182F5D550")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static UaaLApplicationLaunchAnalytic CreateUaaLApplicationLaunchAnalytic()
	{
		return null;
	}
}
