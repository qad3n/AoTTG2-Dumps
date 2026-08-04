// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.ContactFilter2D
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Serializable]
[Token(Token = "0x2000005")]
[UnityEngine.NativeClass("ContactFilter", "struct ContactFilter;")]
[UnityEngine.Scripting.RequiredByNativeCode(Optional = true, GenerateProxy = true)]
[UnityEngine.Bindings.NativeHeader("Modules/Physics2D/Public/Collider2D.h")]
public struct ContactFilter2D
{
	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x0")]
	[UnityEngine.Bindings.NativeName("m_UseTriggers")]
	public bool useTriggers;

	[Token(Token = "0x4000007")]
	[FieldOffset(Offset = "0x1")]
	[UnityEngine.Bindings.NativeName("m_UseLayerMask")]
	public bool useLayerMask;

	[Token(Token = "0x4000008")]
	[FieldOffset(Offset = "0x2")]
	[UnityEngine.Bindings.NativeName("m_UseDepth")]
	public bool useDepth;

	[Token(Token = "0x4000009")]
	[FieldOffset(Offset = "0x3")]
	[UnityEngine.Bindings.NativeName("m_UseOutsideDepth")]
	public bool useOutsideDepth;

	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0x4")]
	[UnityEngine.Bindings.NativeName("m_UseNormalAngle")]
	public bool useNormalAngle;

	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x5")]
	[UnityEngine.Bindings.NativeName("m_UseOutsideNormalAngle")]
	public bool useOutsideNormalAngle;

	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x8")]
	[UnityEngine.Bindings.NativeName("m_LayerMask")]
	public LayerMask layerMask;

	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0xC")]
	[UnityEngine.Bindings.NativeName("m_MinDepth")]
	public float minDepth;

	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x10")]
	[UnityEngine.Bindings.NativeName("m_MaxDepth")]
	public float maxDepth;

	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x14")]
	[UnityEngine.Bindings.NativeName("m_MinNormalAngle")]
	public float minNormalAngle;

	[Token(Token = "0x4000010")]
	[FieldOffset(Offset = "0x18")]
	[UnityEngine.Bindings.NativeName("m_MaxNormalAngle")]
	public float maxNormalAngle;

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000025")]
	[Address(RVA = "0x4E752E0", Offset = "0x4E752E0", VA = "0x4E752E0")]
	private extern void CheckConsistency();

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x4E75310", Offset = "0x4E75310", VA = "0x4E75310")]
	public void SetLayerMask(LayerMask layerMask)
	{
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x4E75320", Offset = "0x4E75320", VA = "0x4E75320")]
	public void SetDepth(float minDepth, float maxDepth)
	{
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x4E739A0", Offset = "0x4E739A0", VA = "0x4E739A0")]
	internal static ContactFilter2D CreateLegacyFilter(int layerMask, float minDepth, float maxDepth)
	{
		return default(ContactFilter2D);
	}
}
