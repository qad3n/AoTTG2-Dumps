// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.INotifyDataErrorInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001F3")]
public interface INotifyDataErrorInfo
{
	[Token(Token = "0x170002A5")]
	bool HasErrors
	{
		[Token(Token = "0x6000D18")]
		get;
	}

	[Token(Token = "0x1400000A")]
	event EventHandler<DataErrorsChangedEventArgs> ErrorsChanged;

	[Token(Token = "0x6000D19")]
	IEnumerable GetErrors(string propertyName);
}
