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

[Token(Token = "0x200007B")]
public static class GraphsExceptionUtility
{
	[Token(Token = "0x400011A")]
	private const string handledKey = "Bolt.Core.Handled";

	[Token(Token = "0x60003C7")]
	[Address(RVA = "0x2DB1000", Offset = "0x2DAF600", VA = "0x182DB1000")]
	public static Exception GetException(this IGraphElementWithDebugData element, GraphPointer pointer)
	{
		return null;
	}

	[Token(Token = "0x60003C8")]
	[Address(RVA = "0x2DB16D0", Offset = "0x2DAFCD0", VA = "0x182DB16D0")]
	public static void SetException(this IGraphElementWithDebugData element, GraphPointer pointer, Exception ex)
	{
	}

	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x2DB1140", Offset = "0x2DAF740", VA = "0x182DB1140")]
	public static void HandleException(this IGraphElementWithDebugData element, GraphPointer pointer, Exception ex)
	{
	}

	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x2DB1420", Offset = "0x2DAFA20", VA = "0x182DB1420")]
	private static bool HandledIn(this Exception ex, GraphReference reference)
	{
		return default(bool);
	}
}
