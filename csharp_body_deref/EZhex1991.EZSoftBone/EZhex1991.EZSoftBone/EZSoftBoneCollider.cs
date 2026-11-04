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
		[Address(RVA = "0x584AD0", Offset = "0x5830D0", VA = "0x180584AD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001A")]
	public float margin
	{
		[Token(Token = "0x6000056")]
		[Address(RVA = "0x584AC0", Offset = "0x5830C0", VA = "0x180584AC0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000057")]
		[Address(RVA = "0x584B70", Offset = "0x583170", VA = "0x180584B70")]
		set
		{
		}
	}

	[Token(Token = "0x1700001B")]
	public bool insideMode
	{
		[Token(Token = "0x6000058")]
		[Address(RVA = "0x584AB0", Offset = "0x5830B0", VA = "0x180584AB0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000059")]
		[Address(RVA = "0x584B60", Offset = "0x583160", VA = "0x180584B60")]
		set
		{
		}
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x584340", Offset = "0x582940", VA = "0x180584340", Slot = "4")]
	public override void Collide(ref Vector3 position, float spacing)
	{
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x5842B0", Offset = "0x5828B0", VA = "0x1805842B0")]
	private bool CheckConvex(MeshCollider meshCollider)
	{
		return default(bool);
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x584A10", Offset = "0x583010", VA = "0x180584A10")]
	private void Reset()
	{
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x584A60", Offset = "0x583060", VA = "0x180584A60")]
	public EZSoftBoneCollider()
	{
	}
}
