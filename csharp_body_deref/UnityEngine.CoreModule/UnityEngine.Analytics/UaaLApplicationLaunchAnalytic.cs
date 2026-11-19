// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Analytics.UaaLApplicationLaunchAnalytic
// Update status: unchanged since the previous dump
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
	[Token(Token = "0x40007C5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	public int launch_type;

	[Token(Token = "0x40007C6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public int launch_process_type;

	[Token(Token = "0x6001283")]
	[Address(RVA = "0x693C580", Offset = "0x693B580", VA = "0x693C580")]
	public UaaLApplicationLaunchAnalytic()
	{
	}

	[Token(Token = "0x6001284")]
	[Address(RVA = "0x693C610", Offset = "0x693B610", VA = "0x693C610")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static UaaLApplicationLaunchAnalytic CreateUaaLApplicationLaunchAnalytic()
	{
		return null;
	}
}
