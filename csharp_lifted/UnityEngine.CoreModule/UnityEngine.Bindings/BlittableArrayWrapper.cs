// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Bindings.BlittableArrayWrapper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Bindings;

[Token(Token = "0x200023E")]
[UnityEngine.Bindings.VisibleToOtherModules]
internal ref struct BlittableArrayWrapper
{
	[Token(Token = "0x200023F")]
	internal enum UpdateFlags
	{
		[Token(Token = "0x400073F")]
		NoUpdateNeeded,
		[Token(Token = "0x4000740")]
		SizeChanged,
		[Token(Token = "0x4000741")]
		DataIsNativePointer,
		[Token(Token = "0x4000742")]
		DataIsNativeOwnedMemory,
		[Token(Token = "0x4000743")]
		DataIsEmpty,
		[Token(Token = "0x4000744")]
		DataIsNull
	}

	[Token(Token = "0x400073B")]
	[FieldOffset(Offset = "0x0")]
	internal unsafe void* data;

	[Token(Token = "0x400073C")]
	[FieldOffset(Offset = "0x8")]
	internal int size;

	[Token(Token = "0x400073D")]
	[FieldOffset(Offset = "0xC")]
	internal UpdateFlags updateFlags;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600118F")]
	[Address(RVA = "0x6935A30", Offset = "0x6934A30", VA = "0x6935A30")]
	public unsafe BlittableArrayWrapper(void* data, int size)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001190")]
	internal void Unmarshal<T>(ref T[] array) where T : struct
	{
	}
}
