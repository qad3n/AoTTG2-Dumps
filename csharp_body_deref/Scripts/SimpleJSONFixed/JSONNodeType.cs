// ==================== AoTTG2 cross-reference ====================
// Type: SimpleJSONFixed.JSONNodeType
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Scripts/Utility/SimpleJSON.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace SimpleJSONFixed;

[Token(Token = "0x2000042")]
public enum JSONNodeType
{
	[Token(Token = "0x4000199")]
	Array = 1,
	[Token(Token = "0x400019A")]
	Object = 2,
	[Token(Token = "0x400019B")]
	String = 3,
	[Token(Token = "0x400019C")]
	Number = 4,
	[Token(Token = "0x400019D")]
	NullValue = 5,
	[Token(Token = "0x400019E")]
	Boolean = 6,
	[Token(Token = "0x400019F")]
	None = 7,
	[Token(Token = "0x40001A0")]
	Custom = 255
}
