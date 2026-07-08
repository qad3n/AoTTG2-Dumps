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
	[Address(RVA = "0x2359970", Offset = "0x2359970", VA = "0x2359970")]
	protected void OnEnable()
	{
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x2359A10", Offset = "0x2359A10", VA = "0x2359A10")]
	protected void OnDisable()
	{
	}

	[Token(Token = "0x6000062")]
	public abstract void Collide(ref Vector3 position, float spacing);

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x2359960", Offset = "0x2359960", VA = "0x2359960")]
	protected EZSoftBoneColliderBase()
	{
	}
}
