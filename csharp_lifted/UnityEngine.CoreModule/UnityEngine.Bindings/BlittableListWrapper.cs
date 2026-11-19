// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Bindings.BlittableListWrapper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Bindings;

[Token(Token = "0x2000240")]
[UnityEngine.Bindings.VisibleToOtherModules]
internal ref struct BlittableListWrapper
{
	[Token(Token = "0x4000745")]
	[FieldOffset(Offset = "0x0")]
	private BlittableArrayWrapper arrayWrapper;

	[Token(Token = "0x4000746")]
	[FieldOffset(Offset = "0x10")]
	private int listSize;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001191")]
	[Address(RVA = "0x6935A40", Offset = "0x6934A40", VA = "0x6935A40")]
	public BlittableListWrapper(BlittableArrayWrapper arrayWrapper, int listSize)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001192")]
	internal void Unmarshal<T>(List<T> list) where T : struct
	{
	}
}
