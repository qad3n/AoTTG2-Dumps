// ==================== AoTTG2 cross-reference ====================
// Type: UnityEditor.Analytics.StallMarkerAnalytic
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
[Token(Token = "0x2000021")]
[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
[ExcludeFromDocs]
internal class StallMarkerAnalytic : AnalyticsEventBase
{
	[Token(Token = "0x400005B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public string Name;

	[Token(Token = "0x400005C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public bool HasProgressMarkup;

	[Token(Token = "0x400005D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public double Duration;

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x3307FF0", Offset = "0x33065F0", VA = "0x183307FF0")]
	public StallMarkerAnalytic()
	{
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x3307F60", Offset = "0x3306560", VA = "0x183307F60")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static StallMarkerAnalytic CreateStallMarkerAnalytic()
	{
		return null;
	}
}
