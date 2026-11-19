// ==================== AoTTG2 cross-reference ====================
// Type: EZhex1991.EZSoftBone.EZSoftBoneColliderBase
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/EZhex1991/EZSoftBone/EZSoftBoneColliderBase.c
// Prior real C# source (older reference): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/EZSoftBoneColliderBase.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace EZhex1991.EZSoftBone;

[Token(Token = "0x200000A")]
public abstract class EZSoftBoneColliderBase : MonoBehaviour
{
	[Token(Token = "0x400003F")]
	[FieldOffset(Offset = "0x0")]
	public static HashSet<EZSoftBoneColliderBase> EnabledColliders;

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x31A7E40", Offset = "0x31A6E40", VA = "0x31A7E40")]
	protected void OnEnable()
	{
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x31A7EE0", Offset = "0x31A6EE0", VA = "0x31A7EE0")]
	protected void OnDisable()
	{
	}

	[Token(Token = "0x6000060")]
	public abstract void Collide(ref Vector3 position, float spacing);

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x31A7E30", Offset = "0x31A6E30", VA = "0x31A7E30")]
	protected EZSoftBoneColliderBase()
	{
	}
}
