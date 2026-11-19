// ==================== AoTTG2 cross-reference ====================
// Type: UnityEditor.Analytics.TestAnalytic
// Update status: unchanged since the previous dump
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
[Token(Token = "0x2000022")]
[ExcludeFromDocs]
[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
internal class TestAnalytic : AnalyticsEventBase
{
	[Token(Token = "0x400005E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	public int param;

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x6D18C50", Offset = "0x6D17C50", VA = "0x6D18C50")]
	public TestAnalytic()
	{
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x6D18CB0", Offset = "0x6D17CB0", VA = "0x6D18CB0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static TestAnalytic CreateTestAnalytic()
	{
		return null;
	}
}
