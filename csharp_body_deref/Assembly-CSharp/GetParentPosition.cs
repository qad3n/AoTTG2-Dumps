// ==================== AoTTG2 cross-reference ====================
// Type: GetParentPosition
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/GetParentPosition.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

[Token(Token = "0x2000004")]
[ExecuteAlways]
[RequireComponent(typeof(Renderer))]
public class GetParentPosition : MonoBehaviour
{
	[Token(Token = "0x4000003")]
	[FieldOffset(Offset = "0x0")]
	private static readonly int ParentScale;

	[Token(Token = "0x4000004")]
	[FieldOffset(Offset = "0x4")]
	private static readonly int ParentWorldPosition;

	[Token(Token = "0x4000005")]
	[FieldOffset(Offset = "0x20")]
	private Renderer _renderer;

	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x28")]
	private MaterialPropertyBlock _properties;

	[Token(Token = "0x4000007")]
	[FieldOffset(Offset = "0x30")]
	private Vector3 _lastPosition;

	[Token(Token = "0x4000008")]
	[FieldOffset(Offset = "0x3C")]
	private Vector3 _lastScale;

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x5280B0", Offset = "0x5266B0", VA = "0x1805280B0")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x5280A0", Offset = "0x5266A0", VA = "0x1805280A0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x528150", Offset = "0x526750", VA = "0x180528150")]
	private void UpdateProperties(bool force)
	{
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public GetParentPosition()
	{
	}
}
