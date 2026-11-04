// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Analytics.BatchRenderGroupUsageAnalytic
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
[Token(Token = "0x2000312")]
[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
internal class BatchRenderGroupUsageAnalytic : AnalyticsEventBase
{
	[Token(Token = "0x40007C3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public int maxBRGInstance;

	[Token(Token = "0x40007C4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
	public int maxMeshCount;

	[Token(Token = "0x40007C5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public int maxMaterialCount;

	[Token(Token = "0x40007C6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3C")]
	public int maxDrawCommandBatch;

	[Token(Token = "0x600126D")]
	[Address(RVA = "0x2F2F5F0", Offset = "0x2F2DBF0", VA = "0x182F2F5F0")]
	public BatchRenderGroupUsageAnalytic()
	{
	}

	[Token(Token = "0x600126E")]
	[Address(RVA = "0x2F2F530", Offset = "0x2F2DB30", VA = "0x182F2F530")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static BatchRenderGroupUsageAnalytic CreateBatchRenderGroupUsageAnalytic()
	{
		return null;
	}
}
