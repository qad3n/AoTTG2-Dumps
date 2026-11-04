// ==================== AoTTG2 cross-reference ====================
// Type: UnityEditor.Analytics.CollabOperationAnalytic
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
	[Address(RVA = "0x3306F10", Offset = "0x3305510", VA = "0x183306F10")]
	public CollabOperationAnalytic()
	{
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x3306E80", Offset = "0x3305480", VA = "0x183306E80")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static CollabOperationAnalytic CreateCollabOperationAnalytic()
	{
		return null;
	}
}
