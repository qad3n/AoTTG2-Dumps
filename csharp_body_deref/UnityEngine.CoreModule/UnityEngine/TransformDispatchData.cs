// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TransformDispatchData
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using Unity.Collections;

namespace UnityEngine;

[Token(Token = "0x200014D")]
internal struct TransformDispatchData : IDisposable
{
	[Token(Token = "0x4000585")]
	[FieldOffset(Offset = "0x0")]
	public NativeArray<EntityId> transformedID;

	[Token(Token = "0x4000586")]
	[FieldOffset(Offset = "0x10")]
	public NativeArray<EntityId> parentID;

	[Token(Token = "0x4000587")]
	[FieldOffset(Offset = "0x20")]
	public NativeArray<Matrix4x4> localToWorldMatrices;

	[Token(Token = "0x4000588")]
	[FieldOffset(Offset = "0x30")]
	public NativeArray<Vector3> positions;

	[Token(Token = "0x4000589")]
	[FieldOffset(Offset = "0x40")]
	public NativeArray<Quaternion> rotations;

	[Token(Token = "0x400058A")]
	[FieldOffset(Offset = "0x50")]
	public NativeArray<Vector3> scales;

	[Token(Token = "0x6000BE3")]
	[Address(RVA = "0x2F2AE40", Offset = "0x2F29440", VA = "0x182F2AE40", Slot = "4")]
	public void Dispose()
	{
	}
}
