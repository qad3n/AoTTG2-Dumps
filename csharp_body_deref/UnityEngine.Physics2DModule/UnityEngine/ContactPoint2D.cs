// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ContactPoint2D
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000007")]
[UnityEngine.Scripting.RequiredByNativeCode(Optional = false, GenerateProxy = true)]
[UnityEngine.NativeClass("ScriptingContactPoint2D", "struct ScriptingContactPoint2D;")]
[UnityEngine.Bindings.NativeHeader("Modules/Physics2D/Public/PhysicsScripting2D.h")]
public struct ContactPoint2D
{
	[Token(Token = "0x400001A")]
	[FieldOffset(Offset = "0x0")]
	[UnityEngine.Bindings.NativeName("point")]
	private Vector2 m_Point;

	[Token(Token = "0x400001B")]
	[FieldOffset(Offset = "0x8")]
	[UnityEngine.Bindings.NativeName("normal")]
	private Vector2 m_Normal;

	[Token(Token = "0x400001C")]
	[FieldOffset(Offset = "0x10")]
	[UnityEngine.Bindings.NativeName("relativeVelocity")]
	private Vector2 m_RelativeVelocity;

	[Token(Token = "0x400001D")]
	[FieldOffset(Offset = "0x18")]
	[UnityEngine.Bindings.NativeName("separation")]
	private float m_Separation;

	[Token(Token = "0x400001E")]
	[FieldOffset(Offset = "0x1C")]
	[UnityEngine.Bindings.NativeName("normalImpulse")]
	private float m_NormalImpulse;

	[Token(Token = "0x400001F")]
	[FieldOffset(Offset = "0x20")]
	[UnityEngine.Bindings.NativeName("tangentImpulse")]
	private float m_TangentImpulse;

	[Token(Token = "0x4000020")]
	[FieldOffset(Offset = "0x24")]
	[UnityEngine.Bindings.NativeName("collider")]
	private int m_Collider;

	[Token(Token = "0x4000021")]
	[FieldOffset(Offset = "0x28")]
	[UnityEngine.Bindings.NativeName("otherCollider")]
	private int m_OtherCollider;

	[Token(Token = "0x4000022")]
	[FieldOffset(Offset = "0x2C")]
	[UnityEngine.Bindings.NativeName("rigidbody")]
	private int m_Rigidbody;

	[Token(Token = "0x4000023")]
	[FieldOffset(Offset = "0x30")]
	[UnityEngine.Bindings.NativeName("otherRigidbody")]
	private int m_OtherRigidbody;

	[Token(Token = "0x4000024")]
	[FieldOffset(Offset = "0x34")]
	[UnityEngine.Bindings.NativeName("enabled")]
	private int m_Enabled;
}
