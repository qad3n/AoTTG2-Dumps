// ==================== AoTTG2 cross-reference ====================
// Type: UnityEditor.Analytics.StallSummaryAnalytic
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Analytics;
using UnityEngine.Internal;
using UnityEngine.Scripting;

namespace UnityEditor.Analytics;

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000020")]
[ExcludeFromDocs]
[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
public class StallSummaryAnalytic : AnalyticsEventBase
{
	[Token(Token = "0x400005A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public double Duration;

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x33080F0", Offset = "0x33066F0", VA = "0x1833080F0")]
	public StallSummaryAnalytic()
	{
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x3308060", Offset = "0x3306660", VA = "0x183308060")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static StallSummaryAnalytic CreateStallSummaryAnalytic()
	{
		return null;
	}
}
