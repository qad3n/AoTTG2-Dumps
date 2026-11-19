// ==================== AoTTG2 cross-reference ====================
// Type: EZhex1991.EZSoftBone.EZSoftBoneCollider
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/EZhex1991/EZSoftBone/EZSoftBoneCollider.c
// Prior real C# source (older reference): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/EZSoftBoneCollider.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace EZhex1991.EZSoftBone;

[Token(Token = "0x2000009")]
[RequireComponent(typeof(Collider))]
public class EZSoftBoneCollider : EZSoftBoneColliderBase
{
	[Token(Token = "0x400003C")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private Collider m_ReferenceCollider;

	[Token(Token = "0x400003D")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private float m_Margin;

	[Token(Token = "0x400003E")]
	[FieldOffset(Offset = "0x2C")]
	[SerializeField]
	private bool m_InsideMode;

	[Token(Token = "0x17000019")]
	public Collider referenceCollider
	{
		[Token(Token = "0x6000055")]
		[Address(RVA = "0x31A6C50", Offset = "0x31A5C50", VA = "0x31A6C50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001A")]
	public float margin
	{
		[Token(Token = "0x6000056")]
		[Address(RVA = "0x31A6CE0", Offset = "0x31A5CE0", VA = "0x31A6CE0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000057")]
		[Address(RVA = "0x31A6CF0", Offset = "0x31A5CF0", VA = "0x31A6CF0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001B")]
	public bool insideMode
	{
		[Token(Token = "0x6000058")]
		[Address(RVA = "0x31A6D00", Offset = "0x31A5D00", VA = "0x31A6D00")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000059")]
		[Address(RVA = "0x31A6D10", Offset = "0x31A5D10", VA = "0x31A6D10")]
		set
		{
		}
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x31A6D20", Offset = "0x31A5D20", VA = "0x31A6D20", Slot = "4")]
	public override void Collide(ref Vector3 position, float spacing)
	{
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x31A7CF0", Offset = "0x31A6CF0", VA = "0x31A7CF0")]
	private bool CheckConvex(MeshCollider meshCollider)
	{
		return default(bool);
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x31A7D70", Offset = "0x31A6D70", VA = "0x31A7D70")]
	private void Reset()
	{
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x31A7DC0", Offset = "0x31A6DC0", VA = "0x31A7DC0")]
	public EZSoftBoneCollider()
	{
	}
}
