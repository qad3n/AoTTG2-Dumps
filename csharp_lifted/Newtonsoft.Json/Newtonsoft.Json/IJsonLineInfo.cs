// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.IJsonLineInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Newtonsoft.Json;

[Token(Token = "0x2000016")]
public interface IJsonLineInfo
{
	[Token(Token = "0x17000003")]
	int LineNumber
	{
		[Token(Token = "0x6000018")]
		get;
	}

	[Token(Token = "0x17000004")]
	int LinePosition
	{
		[Token(Token = "0x6000019")]
		get;
	}

	[Token(Token = "0x6000017")]
	bool HasLineInfo();
}
