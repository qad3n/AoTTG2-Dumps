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

[Token(Token = "0x200000C")]
public abstract class EZSoftBoneColliderBase : MonoBehaviour
{
	[Token(Token = "0x4000044")]
	[FieldOffset(Offset = "0x0")]
	public static HashSet<EZSoftBoneColliderBase> EnabledColliders;

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x2397A80", Offset = "0x2397A80", VA = "0x2397A80")]
	protected void OnEnable()
	{
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x2397B20", Offset = "0x2397B20", VA = "0x2397B20")]
	protected void OnDisable()
	{
	}

	[Token(Token = "0x6000062")]
	public abstract void Collide(ref Vector3 position, float spacing);

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x2397A70", Offset = "0x2397A70", VA = "0x2397A70")]
	protected EZSoftBoneColliderBase()
	{
	}
}
