// ==================== AoTTG2 cross-reference ====================
// Type: UnityEditor.Analytics.CollabOperationAnalytic
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
[Token(Token = "0x200000D")]
[UnityEngine.Scripting.RequiredByNativeCode(GenerateProxy = true)]
[ExcludeFromDocs]
public class CollabOperationAnalytic : AnalyticsEventBase
{
	[Token(Token = "0x4000021")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	public string category;

	[Token(Token = "0x4000022")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public string operation;

	[Token(Token = "0x4000023")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public string result;

	[Token(Token = "0x4000024")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	public long start_ts;

	[Token(Token = "0x4000025")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	public long duration;

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x6D17840", Offset = "0x6D16840", VA = "0x6D17840")]
	public CollabOperationAnalytic()
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x6D178A0", Offset = "0x6D168A0", VA = "0x6D178A0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static CollabOperationAnalytic CreateCollabOperationAnalytic()
	{
		return null;
	}
}
