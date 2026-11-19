// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.IDataErrorInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000168")]
public interface IDataErrorInfo
{
	[Token(Token = "0x170001F3")]
	string this[string columnName]
	{
		[Token(Token = "0x6000927")]
		get;
	}

	[Token(Token = "0x170001F4")]
	string Error
	{
		[Token(Token = "0x6000928")]
		get;
	}
}
