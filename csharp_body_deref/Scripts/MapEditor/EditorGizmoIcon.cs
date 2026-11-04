// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.EditorGizmoIcon
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/MapEditor/EditorGizmoIcon.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace MapEditor;

[Token(Token = "0x2000143")]
public class EditorGizmoIcon : MonoBehaviour
{
	[Token(Token = "0x4000738")]
	[FieldOffset(Offset = "0x20")]
	private GameObject _iconObject;

	[Token(Token = "0x4000739")]
	[FieldOffset(Offset = "0x28")]
	private GameObject _colliderObject;

	[Token(Token = "0x400073A")]
	[FieldOffset(Offset = "0x30")]
	private SphereCollider _collider;

	[Token(Token = "0x6000638")]
	[Address(RVA = "0x21EF390", Offset = "0x21ED990", VA = "0x1821EF390")]
	public void Setup()
	{
	}

	[Token(Token = "0x6000639")]
	[Address(RVA = "0x21EF190", Offset = "0x21ED790", VA = "0x1821EF190")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x600063A")]
	[Address(RVA = "0x21EF2C0", Offset = "0x21ED8C0", VA = "0x1821EF2C0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600063B")]
	[Address(RVA = "0x20FDCE0", Offset = "0x20FC2E0", VA = "0x1820FDCE0")]
	private static bool IsFinite(Vector3 value)
	{
		return default(bool);
	}

	[Token(Token = "0x600063C")]
	[Address(RVA = "0x1EAC170", Offset = "0x1EAA770", VA = "0x181EAC170")]
	private static bool IsFinite(float value)
	{
		return default(bool);
	}

	[Token(Token = "0x600063D")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public EditorGizmoIcon()
	{
	}
}
