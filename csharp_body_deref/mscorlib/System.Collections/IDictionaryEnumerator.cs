// ==================== AoTTG2 cross-reference ====================
// Type: System.Collections.IDictionaryEnumerator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Collections;

[Token(Token = "0x20005CF")]
public interface IDictionaryEnumerator : IEnumerator
{
	[Token(Token = "0x170006B4")]
	object Key
	{
		[Token(Token = "0x6002BD1")]
		get;
	}

	[Token(Token = "0x170006B5")]
	object Value
	{
		[Token(Token = "0x6002BD2")]
		get;
	}

	[Token(Token = "0x170006B6")]
	DictionaryEntry Entry
	{
		[Token(Token = "0x6002BD3")]
		get;
	}
}
