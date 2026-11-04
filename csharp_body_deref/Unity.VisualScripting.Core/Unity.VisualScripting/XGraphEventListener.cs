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
	[Address(RVA = "0x2DBF900", Offset = "0x2DBDF00", VA = "0x182DBF900")]
	public static void StartListening(this IGraphEventListener listener, GraphReference reference)
	{
	}

	[Token(Token = "0x6000423")]
	[Address(RVA = "0x2DBF9F0", Offset = "0x2DBDFF0", VA = "0x182DBF9F0")]
	public static void StopListening(this IGraphEventListener listener, GraphReference reference)
	{
	}

	[Token(Token = "0x6000424")]
	[Address(RVA = "0x2DBF640", Offset = "0x2DBDC40", VA = "0x182DBF640")]
	public static bool IsHierarchyListening(GraphReference reference)
	{
		return default(bool);
	}
}
