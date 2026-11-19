// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TransformDispatchData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine;

[Token(Token = "0x200014E")]
internal struct TransformDispatchData : IDisposable
{
	[Token(Token = "0x400058A")]
	[FieldOffset(Offset = "0x0")]
	public NativeArray<EntityId> transformedID;

	[Token(Token = "0x400058B")]
	[FieldOffset(Offset = "0x10")]
	public NativeArray<EntityId> parentID;

	[Token(Token = "0x400058C")]
	[FieldOffset(Offset = "0x20")]
	public NativeArray<Matrix4x4> localToWorldMatrices;

	[Token(Token = "0x400058D")]
	[FieldOffset(Offset = "0x30")]
	public NativeArray<Vector3> positions;

	[Token(Token = "0x400058E")]
	[FieldOffset(Offset = "0x40")]
	public NativeArray<Quaternion> rotations;

	[Token(Token = "0x400058F")]
	[FieldOffset(Offset = "0x50")]
	public NativeArray<Vector3> scales;

	[Token(Token = "0x6000BF5")]
	[Address(RVA = "0x690AB60", Offset = "0x6909B60", VA = "0x690AB60", Slot = "4")]
	public void Dispose()
	{
	}
}
