// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.XGraphEventListener
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000093")]
public static class XGraphEventListener
{
	[Token(Token = "0x6000422")]
	[Address(RVA = "0x67A38C0", Offset = "0x67A28C0", VA = "0x67A38C0")]
	public static void StartListening(this IGraphEventListener listener, GraphReference reference)
	{
	}

	[Token(Token = "0x6000423")]
	[Address(RVA = "0x67A3A70", Offset = "0x67A2A70", VA = "0x67A3A70")]
	public static void StopListening(this IGraphEventListener listener, GraphReference reference)
	{
	}

	[Token(Token = "0x6000424")]
	[Address(RVA = "0x67A3C30", Offset = "0x67A2C30", VA = "0x67A3C30")]
	public static bool IsHierarchyListening(GraphReference reference)
	{
		return default(bool);
	}
}
