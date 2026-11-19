// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Analytics.SubsystemsAnalyticBase
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Internal;
using UnityEngine.Scripting;

namespace UnityEngine.Analytics;

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000002")]
[ExcludeFromDocs]
[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
public class SubsystemsAnalyticBase : AnalyticsEventBase
{
	[Token(Token = "0x4000001")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public string subsystem;

	[Token(Token = "0x6000001")]
	[Address(RVA = "0x6D16EC0", Offset = "0x6D15EC0", VA = "0x6D16EC0")]
	public SubsystemsAnalyticBase(string eventName)
	{
	}
}
