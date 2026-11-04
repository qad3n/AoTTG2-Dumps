// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.BatchRendererGroupRuntimeAnalytic
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

namespace UnityEngine;

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x200009F")]
[ExcludeFromDocs]
[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
internal class BatchRendererGroupRuntimeAnalytic : AnalyticsEventBase
{
	[Token(Token = "0x40001AB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private int brgRuntimeStatus;

	[Token(Token = "0x600025E")]
	[Address(RVA = "0x2EBBAA0", Offset = "0x2EBA0A0", VA = "0x182EBBAA0")]
	private BatchRendererGroupRuntimeAnalytic()
	{
	}

	[Token(Token = "0x600025F")]
	[Address(RVA = "0x2EBBA10", Offset = "0x2EBA010", VA = "0x182EBBA10")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static BatchRendererGroupRuntimeAnalytic CreateBatchRendererGroupRuntimeAnalytic()
	{
		return null;
	}
}
