// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.GraphsExceptionUtility
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000078")]
public static class GraphsExceptionUtility
{
	[Token(Token = "0x4000116")]
	private const string handledKey = "Bolt.Core.Handled";

	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x4CB2ED0", Offset = "0x4CB2ED0", VA = "0x4CB2ED0")]
	public static Exception GetException(this IGraphElementWithDebugData element, GraphPointer pointer)
	{
		return null;
	}

	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x4CB2FF0", Offset = "0x4CB2FF0", VA = "0x4CB2FF0")]
	public static void SetException(this IGraphElementWithDebugData element, GraphPointer pointer, Exception ex)
	{
	}

	[Token(Token = "0x60003AD")]
	[Address(RVA = "0x4CB3130", Offset = "0x4CB3130", VA = "0x4CB3130")]
	public static void HandleException(this IGraphElementWithDebugData element, GraphPointer pointer, Exception ex)
	{
	}

	[Token(Token = "0x60003AE")]
	[Address(RVA = "0x4CB3460", Offset = "0x4CB3460", VA = "0x4CB3460")]
	private static bool HandledIn(this Exception ex, GraphReference reference)
	{
		return default(bool);
	}
}
