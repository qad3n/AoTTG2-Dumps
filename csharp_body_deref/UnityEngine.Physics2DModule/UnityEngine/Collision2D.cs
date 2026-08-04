// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Collision2D
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
[Token(Token = "0x2000006")]
[UnityEngine.Scripting.RequiredByNativeCode]
public class Collision2D
{
	[Token(Token = "0x4000011")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal int m_Collider;

	[Token(Token = "0x4000012")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	internal int m_OtherCollider;

	[Token(Token = "0x4000013")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal int m_Rigidbody;

	[Token(Token = "0x4000014")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	internal int m_OtherRigidbody;

	[Token(Token = "0x4000015")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal Vector2 m_RelativeVelocity;

	[Token(Token = "0x4000016")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	internal int m_Enabled;

	[Token(Token = "0x4000017")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
	internal int m_ContactCount;

	[Token(Token = "0x4000018")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	internal ContactPoint2D[] m_ReusedContacts;

	[Token(Token = "0x4000019")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	internal ContactPoint2D[] m_LegacyContacts;
}
