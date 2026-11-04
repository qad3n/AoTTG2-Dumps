// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TypeDispatchData
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine;

[Token(Token = "0x200014C")]
internal struct TypeDispatchData : IDisposable
{
	[Token(Token = "0x4000582")]
	[FieldOffset(Offset = "0x0")]
	public Object[] changed;

	[Token(Token = "0x4000583")]
	[FieldOffset(Offset = "0x8")]
	public NativeArray<EntityId> changedID;

	[Token(Token = "0x4000584")]
	[FieldOffset(Offset = "0x18")]
	public NativeArray<EntityId> destroyedID;

	[Token(Token = "0x6000BE2")]
	[Address(RVA = "0x2F2AEF0", Offset = "0x2F294F0", VA = "0x182F2AEF0", Slot = "4")]
	public void Dispose()
	{
	}
}
