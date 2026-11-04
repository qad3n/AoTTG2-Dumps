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
	[Token(Token = "0x400018A")]
	Array = 1,
	[Token(Token = "0x400018B")]
	Object = 2,
	[Token(Token = "0x400018C")]
	String = 3,
	[Token(Token = "0x400018D")]
	Number = 4,
	[Token(Token = "0x400018E")]
	NullValue = 5,
	[Token(Token = "0x400018F")]
	Boolean = 6,
	[Token(Token = "0x4000190")]
	None = 7,
	[Token(Token = "0x4000191")]
	Custom = 255
}
