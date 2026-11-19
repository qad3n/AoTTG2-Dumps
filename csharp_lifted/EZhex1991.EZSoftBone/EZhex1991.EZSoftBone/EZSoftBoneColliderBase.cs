// ==================== AoTTG2 cross-reference ====================
// Type: EZhex1991.EZSoftBone.EZSoftBoneColliderBase
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/EZhex1991/EZSoftBone/EZSoftBoneColliderBase.c
// Prior real C# source (older reference): Assets/ThirdParty/EZhex1991/EZSoftBone/Runtime/EZSoftBoneColliderBase.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneColliderBase.c (EZhex1991.EZSoftBone.EZSoftBoneColliderBase$$OnEnable): clean
		uint uVar1;
		HashSet<object> __this_00;

		if (Il2CppMethodInitialized_0753e815 == false) {
			Il2CppMethodInitialized_0753e815 = true;
			uVar1 = (typeof(EZSoftBoneColliderBase)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(EZSoftBoneColliderBase)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this_00 = (HashSet<object>)EZSoftBoneColliderBase.EnabledColliders;
		}
		else {
			__this_00 = *(HashSet<object>*)(typeof(EZSoftBoneColliderBase)).static_fields;
		}
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Add((object)this);
		return;
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x31A7EE0", Offset = "0x31A6EE0", VA = "0x31A7EE0")]
	protected void OnDisable()
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneColliderBase.c (EZhex1991.EZSoftBone.EZSoftBoneColliderBase$$OnDisable): clean
		uint uVar1;
		HashSet<object> __this_00;

		if (Il2CppMethodInitialized_0753e816 == false) {
			Il2CppMethodInitialized_0753e816 = true;
			uVar1 = (typeof(EZSoftBoneColliderBase)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(EZSoftBoneColliderBase)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this_00 = (HashSet<object>)EZSoftBoneColliderBase.EnabledColliders;
		}
		else {
			__this_00 = *(HashSet<object>*)(typeof(EZSoftBoneColliderBase)).static_fields;
		}
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Remove((object)this);
		return;
	}

	[Token(Token = "0x6000060")]
	public abstract void Collide(ref Vector3 position, float spacing);

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x31A7E30", Offset = "0x31A6E30", VA = "0x31A7E30")]
	protected EZSoftBoneColliderBase()
	{
		// Lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneColliderBase.c (EZhex1991.EZSoftBone.EZSoftBoneColliderBase$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/EZhex1991/EZSoftBone/EZSoftBoneColliderBase.c.

	// EZhex1991.EZSoftBone.EZSoftBoneColliderBase$$.cctor: clean
	static EZSoftBoneColliderBase()
	{
		HashSet<EZSoftBoneColliderBase> __this;

		__this = new HashSet<EZSoftBoneColliderBase>();
		EZSoftBoneColliderBase.EnabledColliders = __this;
		return;
	}
}
