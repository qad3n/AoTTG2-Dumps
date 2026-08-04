// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.InteropServices.ICustomMarshaler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.InteropServices;

[Token(Token = "0x2000439")]
public interface ICustomMarshaler
{
	[Token(Token = "0x60021C5")]
	object MarshalNativeToManaged(IntPtr pNativeData);

	[Token(Token = "0x60021C6")]
	IntPtr MarshalManagedToNative(object ManagedObj);

	[Token(Token = "0x60021C7")]
	void CleanUpNativeData(IntPtr pNativeData);

	[Token(Token = "0x60021C8")]
	void CleanUpManagedData(object ManagedObj);

	[Token(Token = "0x60021C9")]
	int GetNativeDataSize();
}
