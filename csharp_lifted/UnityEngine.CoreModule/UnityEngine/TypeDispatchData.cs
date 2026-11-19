// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TypeDispatchData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine;

[Token(Token = "0x200014D")]
internal struct TypeDispatchData : IDisposable
{
	[Token(Token = "0x4000587")]
	[FieldOffset(Offset = "0x0")]
	public Object[] changed;

	[Token(Token = "0x4000588")]
	[FieldOffset(Offset = "0x8")]
	public NativeArray<EntityId> changedID;

	[Token(Token = "0x4000589")]
	[FieldOffset(Offset = "0x18")]
	public NativeArray<EntityId> destroyedID;

	[Token(Token = "0x6000BF4")]
	[Address(RVA = "0x690AB00", Offset = "0x6909B00", VA = "0x690AB00", Slot = "4")]
	public void Dispose()
	{
	}
}
