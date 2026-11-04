// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Bindings.BlittableListWrapper
// Update status: NEW in this game update
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
	[Token(Token = "0x4000747")]
	[FieldOffset(Offset = "0x0")]
	private BlittableArrayWrapper arrayWrapper;

	[Token(Token = "0x4000748")]
	[FieldOffset(Offset = "0x10")]
	private int listSize;

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600117D")]
	[Address(RVA = "0x1028C90", Offset = "0x1027290", VA = "0x181028C90")]
	public BlittableListWrapper(BlittableArrayWrapper arrayWrapper, int listSize)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600117E")]
	internal void Unmarshal<T>(List<T> list) where T : struct
	{
	}
}
