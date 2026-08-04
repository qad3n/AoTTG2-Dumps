// ==================== AoTTG2 cross-reference ====================
// Type: System.ByReference
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x200014D")]
internal ref struct ByReference<T>
{
	[Token(Token = "0x4000510")]
	[FieldOffset(Offset = "0x0")]
	private IntPtr _value;

	[Token(Token = "0x17000125")]
	public unsafe ref T Value
	{
		[Token(Token = "0x6000D53")]
		[System.Runtime.CompilerServices.Intrinsic]
		get
		{
			return ref *(T*)null;
		}
	}

	[Token(Token = "0x6000D52")]
	[System.Runtime.CompilerServices.Intrinsic]
	public ByReference(ref T value)
	{
	}
}
