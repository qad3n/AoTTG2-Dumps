using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer;

[Token(Token = "0x2000201")]
public static class fsGlobalConfig
{
	[Token(Token = "0x4000989")]
	[FieldOffset(Offset = "0x0")]
	public static bool IsCaseSensitive;

	[Token(Token = "0x400098A")]
	[FieldOffset(Offset = "0x1")]
	public static bool AllowInternalExceptions;

	[Token(Token = "0x400098B")]
	[FieldOffset(Offset = "0x8")]
	public static string InternalFieldPrefix;
}
