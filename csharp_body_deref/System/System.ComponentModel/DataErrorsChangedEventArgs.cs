// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.DataErrorsChangedEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002E7")]
public class DataErrorsChangedEventArgs : EventArgs
{
	[Token(Token = "0x4000E27")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _propertyName;

	[Token(Token = "0x17000435")]
	public virtual string PropertyName
	{
		[Token(Token = "0x60012CF")]
		[Address(RVA = "0x48ACAC0", Offset = "0x48ACAC0", VA = "0x48ACAC0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60012CE")]
	[Address(RVA = "0x48ACA50", Offset = "0x48ACA50", VA = "0x48ACA50")]
	public DataErrorsChangedEventArgs(string propertyName)
	{
	}
}
