// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.AI.NavMeshBuildSource
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine.AI;

[Token(Token = "0x2000010")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Modules/AI/Public/NavMeshBindingTypes.h")]
public struct NavMeshBuildSource
{
	[Token(Token = "0x4000022")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private Matrix4x4 m_Transform;

	[Token(Token = "0x4000023")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private Vector3 m_Size;

	[Token(Token = "0x4000024")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	private NavMeshBuildSourceShape m_Shape;

	[Token(Token = "0x4000025")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private int m_Area;

	[Token(Token = "0x4000026")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
	private int m_InstanceID;

	[Token(Token = "0x4000027")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private int m_ComponentID;

	[Token(Token = "0x4000028")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	private int m_GenerateLinks;

	[Token(Token = "0x1700001E")]
	public Component component
	{
		[Token(Token = "0x6000069")]
		[Address(RVA = "0x2E977F0", Offset = "0x2E95DF0", VA = "0x182E977F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x2E976F0", Offset = "0x2E95CF0", VA = "0x182E976F0")]
	[UnityEngine.Bindings.StaticAccessor("NavMeshBuildSource", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	private static Component InternalGetComponent(EntityId instanceID)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600006B")]
	[Address(RVA = "0x2E976B0", Offset = "0x2E95CB0", VA = "0x182E976B0")]
	private static extern IntPtr InternalGetComponent_Injected([In] ref EntityId instanceID);
}
