// ==================== AoTTG2 cross-reference ====================
// Type: MapEditor.EditorGizmoIcon
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/MapEditor/EditorGizmoIcon.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace MapEditor;

[Token(Token = "0x200014B")]
public class EditorGizmoIcon : MonoBehaviour
{
	[Token(Token = "0x4000784")]
	[FieldOffset(Offset = "0x20")]
	private GameObject _iconObject;

	[Token(Token = "0x4000785")]
	[FieldOffset(Offset = "0x28")]
	private GameObject _colliderObject;

	[Token(Token = "0x4000786")]
	[FieldOffset(Offset = "0x30")]
	private SphereCollider _collider;

	[Token(Token = "0x60006A4")]
	[Address(RVA = "0x5B92460", Offset = "0x5B91460", VA = "0x5B92460")]
	public void Setup()
	{
	}

	[Token(Token = "0x60006A5")]
	[Address(RVA = "0x5B92B10", Offset = "0x5B91B10", VA = "0x5B92B10")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x60006A6")]
	[Address(RVA = "0x5B92C40", Offset = "0x5B91C40", VA = "0x5B92C40")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60006A7")]
	[Address(RVA = "0x5B92AE0", Offset = "0x5B91AE0", VA = "0x5B92AE0")]
	private static bool IsFinite(Vector3 value)
	{
		return default(bool);
	}

	[Token(Token = "0x60006A8")]
	[Address(RVA = "0x5B92D00", Offset = "0x5B91D00", VA = "0x5B92D00")]
	private static bool IsFinite(float value)
	{
		return default(bool);
	}

	[Token(Token = "0x60006A9")]
	[Address(RVA = "0x5B92D10", Offset = "0x5B91D10", VA = "0x5B92D10")]
	public EditorGizmoIcon()
	{
	}
}
