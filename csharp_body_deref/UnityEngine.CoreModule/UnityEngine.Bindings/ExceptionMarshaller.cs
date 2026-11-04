// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Bindings.ExceptionMarshaller
// Update status: NEW in this game update
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
	[Token(Token = "0x4000749")]
	[ThreadStatic]
	private static Exception s_pendingException;

	[Token(Token = "0x600117F")]
	[Address(RVA = "0x2F49140", Offset = "0x2F47740", VA = "0x182F49140")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void SetPendingException(Exception ex)
	{
	}
}
