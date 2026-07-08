using Il2CppDummyDll;
using UnityEngine;

namespace MapEditor;

[Token(Token = "0x200010B")]
public class EditorGizmoIcon : MonoBehaviour
{
	[Token(Token = "0x4000648")]
	[FieldOffset(Offset = "0x20")]
	private GameObject _iconObject;

	[Token(Token = "0x4000649")]
	[FieldOffset(Offset = "0x28")]
	private SphereCollider _collider;

	[Token(Token = "0x600054C")]
	[Address(RVA = "0x3F47080", Offset = "0x3F47080", VA = "0x3F47080")]
	public void Setup()
	{
	}

	[Token(Token = "0x600054D")]
	[Address(RVA = "0x3F47500", Offset = "0x3F47500", VA = "0x3F47500")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x600054E")]
	[Address(RVA = "0x3F47630", Offset = "0x3F47630", VA = "0x3F47630")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600054F")]
	[Address(RVA = "0x3F476B0", Offset = "0x3F476B0", VA = "0x3F476B0")]
	public EditorGizmoIcon()
	{
	}
}
