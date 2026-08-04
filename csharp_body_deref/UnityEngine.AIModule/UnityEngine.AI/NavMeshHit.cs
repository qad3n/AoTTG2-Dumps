// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AI.NavMeshHit
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.AI;

[Token(Token = "0x2000007")]
[MovedFrom("UnityEngine")]
public struct NavMeshHit
{
	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0x0")]
	private Vector3 m_Position;

	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0xC")]
	private Vector3 m_Normal;

	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x18")]
	private float m_Distance;

	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0x1C")]
	private int m_Mask;

	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x20")]
	private int m_Hit;

	[Token(Token = "0x17000019")]
	public Vector3 position
	{
		[Token(Token = "0x6000048")]
		[Address(RVA = "0x4D91A10", Offset = "0x4D91A10", VA = "0x4D91A10")]
		get
		{
			return default(Vector3);
		}
	}
}
