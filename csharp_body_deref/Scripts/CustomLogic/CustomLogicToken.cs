// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicToken
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicToken.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/CustomLogicToken.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000493")]
public class CustomLogicToken
{
	[Token(Token = "0x40013EC")]
	[FieldOffset(Offset = "0x10")]
	public CustomLogicTokenType Type;

	[Token(Token = "0x40013ED")]
	[FieldOffset(Offset = "0x18")]
	public object Value;

	[Token(Token = "0x40013EE")]
	[FieldOffset(Offset = "0x20")]
	public int Line;

	[Token(Token = "0x600307E")]
	[Address(RVA = "0x4167290", Offset = "0x4167290", VA = "0x4167290")]
	public CustomLogicToken(CustomLogicTokenType type, object value, int line)
	{
	}
}
