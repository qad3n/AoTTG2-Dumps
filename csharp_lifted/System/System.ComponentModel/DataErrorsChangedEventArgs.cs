// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.DataErrorsChangedEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001B3")]
public class DataErrorsChangedEventArgs : EventArgs
{
	[Token(Token = "0x400068F")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _propertyName;

	[Token(Token = "0x17000275")]
	public virtual string PropertyName
	{
		[Token(Token = "0x6000B57")]
		[Address(RVA = "0x624BED0", Offset = "0x624AED0", VA = "0x624BED0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B56")]
	[Address(RVA = "0x624BE60", Offset = "0x624AE60", VA = "0x624BE60")]
	public DataErrorsChangedEventArgs(string propertyName)
	{
	}
}
