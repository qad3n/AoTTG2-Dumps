// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.SortingGroup
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000315")]
[UnityEngine.Bindings.NativeType(Header = "Runtime/2D/Sorting/SortingGroup.h")]
[RequireComponent(typeof(Transform))]
public sealed class SortingGroup : Behaviour
{
	[Token(Token = "0x170002E9")]
	[UnityEngine.Bindings.StaticAccessor("SortingGroup", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	internal static extern int invalidSortingGroupID
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6001273")]
		[Address(RVA = "0x2F57AE0", Offset = "0x2F560E0", VA = "0x182F57AE0")]
		get;
	}

	[Token(Token = "0x170002EA")]
	public int sortingLayerID
	{
		[Token(Token = "0x6001275")]
		[Address(RVA = "0x2F57B50", Offset = "0x2F56150", VA = "0x182F57B50")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002EB")]
	public int sortingOrder
	{
		[Token(Token = "0x6001276")]
		[Address(RVA = "0x2F57C10", Offset = "0x2F56210", VA = "0x182F57C10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001274")]
	[Address(RVA = "0x2F57A80", Offset = "0x2F56080", VA = "0x182F57A80")]
	[UnityEngine.Bindings.StaticAccessor("SortingGroup", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	internal static SortingGroup GetSortingGroupByIndex(int index)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001277")]
	[Address(RVA = "0x2F57A40", Offset = "0x2F56040", VA = "0x182F57A40")]
	private static extern IntPtr GetSortingGroupByIndex_Injected(int index);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001278")]
	[Address(RVA = "0x2F57B10", Offset = "0x2F56110", VA = "0x182F57B10")]
	private static extern int get_sortingLayerID_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001279")]
	[Address(RVA = "0x2F57BD0", Offset = "0x2F561D0", VA = "0x182F57BD0")]
	private static extern int get_sortingOrder_Injected(IntPtr _unity_self);
}
