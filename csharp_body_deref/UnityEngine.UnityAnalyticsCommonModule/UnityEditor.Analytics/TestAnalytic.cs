// ==================== AoTTG2 cross-reference ====================
// Type: UnityEditor.Analytics.TestAnalytic
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
[Token(Token = "0x2000022")]
[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
[ExcludeFromDocs]
internal class TestAnalytic : AnalyticsEventBase
{
	[Token(Token = "0x400005E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public int param;

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x33085E0", Offset = "0x3306BE0", VA = "0x1833085E0")]
	public TestAnalytic()
	{
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x3308550", Offset = "0x3306B50", VA = "0x183308550")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static TestAnalytic CreateTestAnalytic()
	{
		return null;
	}
}
