// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.PropertyChangingEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001F8")]
public class PropertyChangingEventArgs : EventArgs
{
	[Token(Token = "0x4000760")]
	[FieldOffset(Offset = "0x10")]
	private readonly string _propertyName;

	[Token(Token = "0x170002A7")]
	public virtual string PropertyName
	{
		[Token(Token = "0x6000D27")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D26")]
	[Address(RVA = "0x28B61C0", Offset = "0x28B47C0", VA = "0x1828B61C0")]
	public PropertyChangingEventArgs(string propertyName)
	{
	}
}
