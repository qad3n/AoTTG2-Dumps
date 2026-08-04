// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.PropertyChangedEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002EB")]
public class PropertyChangedEventArgs : EventArgs
{
	[Token(Token = "0x4000E28")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _propertyName;

	[Token(Token = "0x17000437")]
	public virtual string PropertyName
	{
		[Token(Token = "0x60012D9")]
		[Address(RVA = "0x48ACB40", Offset = "0x48ACB40", VA = "0x48ACB40", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60012D8")]
	[Address(RVA = "0x48ACAD0", Offset = "0x48ACAD0", VA = "0x48ACAD0")]
	public PropertyChangedEventArgs(string propertyName)
	{
	}
}
