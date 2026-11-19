// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Analytics.BatchRenderGroupUsageAnalytic
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
[Token(Token = "0x2000312")]
[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
internal class BatchRenderGroupUsageAnalytic : AnalyticsEventBase
{
	[Token(Token = "0x40007C1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	public int maxBRGInstance;

	[Token(Token = "0x40007C2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public int maxMeshCount;

	[Token(Token = "0x40007C3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	public int maxMaterialCount;

	[Token(Token = "0x40007C4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public int maxDrawCommandBatch;

	[Token(Token = "0x6001281")]
	[Address(RVA = "0x693C430", Offset = "0x693B430", VA = "0x693C430")]
	public BatchRenderGroupUsageAnalytic()
	{
	}

	[Token(Token = "0x6001282")]
	[Address(RVA = "0x693C4C0", Offset = "0x693B4C0", VA = "0x693C4C0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static BatchRenderGroupUsageAnalytic CreateBatchRenderGroupUsageAnalytic()
	{
		return null;
	}
}
