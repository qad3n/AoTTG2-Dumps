// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.PropertyChangedEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001B7")]
public class PropertyChangedEventArgs : EventArgs
{
	[Token(Token = "0x4000690")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _propertyName;

	[Token(Token = "0x17000277")]
	public virtual string PropertyName
	{
		[Token(Token = "0x6000B61")]
		[Address(RVA = "0x624BF50", Offset = "0x624AF50", VA = "0x624BF50", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B60")]
	[Address(RVA = "0x624BEE0", Offset = "0x624AEE0", VA = "0x624BEE0")]
	public PropertyChangedEventArgs(string propertyName)
	{
	}
}
