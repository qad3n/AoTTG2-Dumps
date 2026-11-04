// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicToken
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicToken.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/CustomLogicToken.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20005EA")]
public class CustomLogicToken
{
	[Token(Token = "0x4001A35")]
	[FieldOffset(Offset = "0x10")]
	public CustomLogicTokenType Type;

	[Token(Token = "0x4001A36")]
	[FieldOffset(Offset = "0x18")]
	public object Value;

	[Token(Token = "0x4001A37")]
	[FieldOffset(Offset = "0x20")]
	public int Line;

	[Token(Token = "0x60039FF")]
	[Address(RVA = "0x20EA1F0", Offset = "0x20E87F0", VA = "0x1820EA1F0")]
	public CustomLogicToken(CustomLogicTokenType type, object value, int line)
	{
	}
}
