// ==================== AoTTG2 cross-reference ====================
// Type: UnityEditor.Analytics.SendGameBuildAnalytic
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
[Token(Token = "0x2000013")]
[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
[ExcludeFromDocs]
public class SendGameBuildAnalytic : AnalyticsEventBase
{
	[Token(Token = "0x4000038")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	private int navmesh_count;

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x6D17DE0", Offset = "0x6D16DE0", VA = "0x6D17DE0")]
	public SendGameBuildAnalytic()
	{
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x6D17E40", Offset = "0x6D16E40", VA = "0x6D17E40")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static SendGameBuildAnalytic CreateSendGameBuildAnalytic()
	{
		return null;
	}
}
