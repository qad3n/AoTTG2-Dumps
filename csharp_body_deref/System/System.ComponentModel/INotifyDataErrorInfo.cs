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

[Token(Token = "0x20002E8")]
public interface INotifyDataErrorInfo
{
	[Token(Token = "0x17000436")]
	bool HasErrors
	{
		[Token(Token = "0x60012D0")]
		get;
	}

	[Token(Token = "0x1400000A")]
	event EventHandler<DataErrorsChangedEventArgs> ErrorsChanged;

	[Token(Token = "0x60012D1")]
	IEnumerable GetErrors(string propertyName);
}
