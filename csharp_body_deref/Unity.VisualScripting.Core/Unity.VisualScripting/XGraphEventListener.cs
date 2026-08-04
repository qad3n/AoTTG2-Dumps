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
	[Token(Token = "0x6000418")]
	[Address(RVA = "0x4CB4CB0", Offset = "0x4CB4CB0", VA = "0x4CB4CB0")]
	public static void StartListening(this IGraphEventListener listener, GraphReference reference)
	{
	}

	[Token(Token = "0x6000419")]
	[Address(RVA = "0x4CB4EC0", Offset = "0x4CB4EC0", VA = "0x4CB4EC0")]
	public static void StopListening(this IGraphEventListener listener, GraphReference reference)
	{
	}

	[Token(Token = "0x600041A")]
	[Address(RVA = "0x4CB50D0", Offset = "0x4CB50D0", VA = "0x4CB50D0")]
	public static bool IsHierarchyListening(GraphReference reference)
	{
		return default(bool);
	}
}
