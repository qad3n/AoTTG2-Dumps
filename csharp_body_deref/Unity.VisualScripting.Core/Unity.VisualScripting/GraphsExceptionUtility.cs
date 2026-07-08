using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200007B")]
public static class GraphsExceptionUtility
{
	[Token(Token = "0x400011C")]
	private const string handledKey = "Bolt.Core.Handled";

	[Token(Token = "0x60003BD")]
	[Address(RVA = "0x498EBD0", Offset = "0x498EBD0", VA = "0x498EBD0")]
	public static Exception GetException(this IGraphElementWithDebugData element, GraphPointer pointer)
	{
		return null;
	}

	[Token(Token = "0x60003BE")]
	[Address(RVA = "0x498ECF0", Offset = "0x498ECF0", VA = "0x498ECF0")]
	public static void SetException(this IGraphElementWithDebugData element, GraphPointer pointer, Exception ex)
	{
	}

	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x498EE30", Offset = "0x498EE30", VA = "0x498EE30")]
	public static void HandleException(this IGraphElementWithDebugData element, GraphPointer pointer, Exception ex)
	{
	}

	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x498F160", Offset = "0x498F160", VA = "0x498F160")]
	private static bool HandledIn(this Exception ex, GraphReference reference)
	{
		return default(bool);
	}
}
