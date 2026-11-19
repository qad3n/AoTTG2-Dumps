// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Bindings.ExceptionMarshaller
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Bindings;

[Token(Token = "0x2000241")]
[UnityEngine.Bindings.VisibleToOtherModules]
internal static class ExceptionMarshaller
{
	[Token(Token = "0x4000747")]
	[ThreadStatic]
	private static Exception s_pendingException;

	[Token(Token = "0x6001193")]
	[Address(RVA = "0x6935A50", Offset = "0x6934A50", VA = "0x6935A50")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void SetPendingException(Exception ex)
	{
	}
}
