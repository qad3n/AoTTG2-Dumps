using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000093")]
public static class XGraphEventListener
{
	[Token(Token = "0x6000418")]
	[Address(RVA = "0x49900E0", Offset = "0x49900E0", VA = "0x49900E0")]
	public static void StartListening(this IGraphEventListener listener, GraphReference reference)
	{
	}

	[Token(Token = "0x6000419")]
	[Address(RVA = "0x49902F0", Offset = "0x49902F0", VA = "0x49902F0")]
	public static void StopListening(this IGraphEventListener listener, GraphReference reference)
	{
	}

	[Token(Token = "0x600041A")]
	[Address(RVA = "0x4990500", Offset = "0x4990500", VA = "0x4990500")]
	public static bool IsHierarchyListening(GraphReference reference)
	{
		return default(bool);
	}
}
