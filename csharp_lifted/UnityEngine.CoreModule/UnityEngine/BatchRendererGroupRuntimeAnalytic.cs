// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.BatchRendererGroupRuntimeAnalytic
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

namespace UnityEngine;

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x200009F")]
[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
[ExcludeFromDocs]
internal class BatchRendererGroupRuntimeAnalytic : AnalyticsEventBase
{
	[Token(Token = "0x40001AB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	private int brgRuntimeStatus;

	[Token(Token = "0x6000262")]
	[Address(RVA = "0x68BE4A0", Offset = "0x68BD4A0", VA = "0x68BE4A0")]
	private BatchRendererGroupRuntimeAnalytic()
	{
	}

	[Token(Token = "0x6000263")]
	[Address(RVA = "0x68BE500", Offset = "0x68BD500", VA = "0x68BE500")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	public static BatchRendererGroupRuntimeAnalytic CreateBatchRendererGroupRuntimeAnalytic()
	{
		return null;
	}
}
