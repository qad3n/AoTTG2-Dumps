// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.IIntellisenseBuilder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200029E")]
public interface IIntellisenseBuilder
{
	[Token(Token = "0x170003B5")]
	string Name
	{
		[Token(Token = "0x60010A2")]
		get;
	}

	[Token(Token = "0x60010A3")]
	bool Show(string language, string value, ref string newValue);
}
