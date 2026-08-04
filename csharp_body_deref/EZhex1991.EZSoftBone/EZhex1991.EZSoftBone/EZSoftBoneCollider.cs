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

[Token(Token = "0x200000B")]
[RequireComponent(typeof(Collider))]
public class EZSoftBoneCollider : EZSoftBoneColliderBase
{
	[Token(Token = "0x4000041")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private Collider m_ReferenceCollider;

	[Token(Token = "0x4000042")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	private float m_Margin;

	[Token(Token = "0x4000043")]
	[FieldOffset(Offset = "0x2C")]
	[SerializeField]
	private bool m_InsideMode;

	[Token(Token = "0x17000019")]
	public Collider referenceCollider
	{
		[Token(Token = "0x6000057")]
		[Address(RVA = "0x2396690", Offset = "0x2396690", VA = "0x2396690")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700001A")]
	public float margin
	{
		[Token(Token = "0x6000058")]
		[Address(RVA = "0x2396720", Offset = "0x2396720", VA = "0x2396720")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000059")]
		[Address(RVA = "0x2396730", Offset = "0x2396730", VA = "0x2396730")]
		set
		{
		}
	}

	[Token(Token = "0x1700001B")]
	public bool insideMode
	{
		[Token(Token = "0x600005A")]
		[Address(RVA = "0x2396740", Offset = "0x2396740", VA = "0x2396740")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600005B")]
		[Address(RVA = "0x2396750", Offset = "0x2396750", VA = "0x2396750")]
		set
		{
		}
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x2396760", Offset = "0x2396760", VA = "0x2396760", Slot = "4")]
	public override void Collide(ref Vector3 position, float spacing)
	{
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x2397930", Offset = "0x2397930", VA = "0x2397930")]
	private bool CheckConvex(MeshCollider meshCollider)
	{
		return default(bool);
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x23979B0", Offset = "0x23979B0", VA = "0x23979B0")]
	private void Reset()
	{
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x2397A00", Offset = "0x2397A00", VA = "0x2397A00")]
	public EZSoftBoneCollider()
	{
	}
}
