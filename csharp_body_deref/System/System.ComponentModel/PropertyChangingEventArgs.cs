// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.PropertyChangingEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002ED")]
public class PropertyChangingEventArgs : EventArgs
{
	[Token(Token = "0x4000E29")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _propertyName;

	[Token(Token = "0x17000438")]
	public virtual string PropertyName
	{
		[Token(Token = "0x60012DF")]
		[Address(RVA = "0x48ACD20", Offset = "0x48ACD20", VA = "0x48ACD20", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60012DE")]
	[Address(RVA = "0x48ACCB0", Offset = "0x48ACCB0", VA = "0x48ACCB0")]
	public PropertyChangingEventArgs(string propertyName)
	{
	}
}
