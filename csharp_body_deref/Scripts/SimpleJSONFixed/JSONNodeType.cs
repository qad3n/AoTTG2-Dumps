// ==================== AoTTG2 cross-reference ====================
// Type: SimpleJSONFixed.JSONNodeType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Scripts/Utility/SimpleJSON.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace SimpleJSONFixed;

[Token(Token = "0x2000043")]
public enum JSONNodeType
{
	[Token(Token = "0x400017E")]
	Array = 1,
	[Token(Token = "0x400017F")]
	Object = 2,
	[Token(Token = "0x4000180")]
	String = 3,
	[Token(Token = "0x4000181")]
	Number = 4,
	[Token(Token = "0x4000182")]
	NullValue = 5,
	[Token(Token = "0x4000183")]
	Boolean = 6,
	[Token(Token = "0x4000184")]
	None = 7,
	[Token(Token = "0x4000185")]
	Custom = 255
}
