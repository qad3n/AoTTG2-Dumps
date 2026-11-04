// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ModifiableContactPair
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000010")]
[UnityEngine.Bindings.NativeHeader("Modules/Physics/PhysicsCollisionGeometry.h")]
[UnityEngine.Bindings.NativeHeader("Modules/Physics/PhysXContactModification.h")]
public struct ModifiableContactPair
{
	[Token(Token = "0x4000021")]
	[FieldOffset(Offset = "0x0")]
	private IntPtr actor;

	[Token(Token = "0x4000022")]
	[FieldOffset(Offset = "0x8")]
	private IntPtr otherActor;

	[Token(Token = "0x4000023")]
	[FieldOffset(Offset = "0x10")]
	private IntPtr shape;

	[Token(Token = "0x4000024")]
	[FieldOffset(Offset = "0x18")]
	private IntPtr otherShape;

	[Token(Token = "0x4000025")]
	[FieldOffset(Offset = "0x20")]
	public Quaternion rotation;

	[Token(Token = "0x4000026")]
	[FieldOffset(Offset = "0x30")]
	public Vector3 position;

	[Token(Token = "0x4000027")]
	[FieldOffset(Offset = "0x3C")]
	public Quaternion otherRotation;

	[Token(Token = "0x4000028")]
	[FieldOffset(Offset = "0x4C")]
	public Vector3 otherPosition;

	[Token(Token = "0x4000029")]
	[FieldOffset(Offset = "0x58")]
	private int numContacts;

	[Token(Token = "0x400002A")]
	[FieldOffset(Offset = "0x60")]
	private IntPtr contacts;
}
