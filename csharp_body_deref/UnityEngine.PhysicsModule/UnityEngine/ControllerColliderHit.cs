// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ControllerColliderHit
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000005")]
[UnityEngine.Scripting.RequiredByNativeCode]
public class ControllerColliderHit
{
	[Token(Token = "0x4000015")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal CharacterController m_Controller;

	[Token(Token = "0x4000016")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal Collider m_Collider;

	[Token(Token = "0x4000017")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal Vector3 m_Point;

	[Token(Token = "0x4000018")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	internal Vector3 m_Normal;

	[Token(Token = "0x4000019")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	internal Vector3 m_MoveDirection;

	[Token(Token = "0x400001A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
	internal float m_MoveLength;

	[Token(Token = "0x400001B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	internal int m_Push;
}
