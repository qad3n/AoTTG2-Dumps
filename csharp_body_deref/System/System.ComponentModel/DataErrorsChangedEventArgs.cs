// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.DataErrorsChangedEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001F2")]
public class DataErrorsChangedEventArgs : EventArgs
{
	[Token(Token = "0x400075E")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _propertyName;

	[Token(Token = "0x170002A4")]
	public virtual string PropertyName
	{
		[Token(Token = "0x6000D17")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D16")]
	[Address(RVA = "0x28B0E00", Offset = "0x28AF400", VA = "0x1828B0E00")]
	public DataErrorsChangedEventArgs(string propertyName)
	{
	}
}
