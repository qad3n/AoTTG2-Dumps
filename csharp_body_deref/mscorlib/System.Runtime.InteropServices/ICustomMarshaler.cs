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
