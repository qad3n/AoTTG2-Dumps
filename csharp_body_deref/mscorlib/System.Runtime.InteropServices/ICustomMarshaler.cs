// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.InteropServices.ICustomMarshaler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.InteropServices;

[Token(Token = "0x2000468")]
public interface ICustomMarshaler
{
	[Token(Token = "0x6002235")]
	object MarshalNativeToManaged(IntPtr pNativeData);

	[Token(Token = "0x6002236")]
	IntPtr MarshalManagedToNative(object ManagedObj);

	[Token(Token = "0x6002237")]
	void CleanUpNativeData(IntPtr pNativeData);

	[Token(Token = "0x6002238")]
	void CleanUpManagedData(object ManagedObj);

	[Token(Token = "0x6002239")]
	int GetNativeDataSize();
}
