// ==================== AoTTG2 cross-reference ====================
// Type: UnityEditor.Analytics.VCProviderAnalytics
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
[Token(Token = "0x2000023")]
[ExcludeFromDocs]
[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
public class VCProviderAnalytics : AnalyticsEventBase
{
	[Token(Token = "0x400005F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public string Mode;

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x33086E0", Offset = "0x3306CE0", VA = "0x1833086E0")]
	public VCProviderAnalytics()
	{
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x3308650", Offset = "0x3306C50", VA = "0x183308650")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static VCProviderAnalytics CreateVCProviderAnalytics()
	{
		return null;
	}
}
