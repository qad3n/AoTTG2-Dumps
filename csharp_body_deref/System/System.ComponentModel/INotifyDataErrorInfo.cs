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
