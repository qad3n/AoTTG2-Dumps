// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.SortingGroup
// Update status: unchanged since the previous dump
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
	[Token(Token = "0x170002EE")]
	[UnityEngine.Bindings.StaticAccessor("SortingGroup", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	internal static extern int invalidSortingGroupID
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6001287")]
		[Address(RVA = "0x693C860", Offset = "0x693B860", VA = "0x693C860")]
		get;
	}

	[Token(Token = "0x170002EF")]
	public int sortingLayerID
	{
		[Token(Token = "0x6001289")]
		[Address(RVA = "0x693C920", Offset = "0x693B920", VA = "0x693C920")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002F0")]
	public int sortingOrder
	{
		[Token(Token = "0x600128A")]
		[Address(RVA = "0x693C9C0", Offset = "0x693B9C0", VA = "0x693C9C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001288")]
	[Address(RVA = "0x693C890", Offset = "0x693B890", VA = "0x693C890")]
	[UnityEngine.Bindings.StaticAccessor("SortingGroup", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	internal static SortingGroup GetSortingGroupByIndex(int index)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600128B")]
	[Address(RVA = "0x693C8F0", Offset = "0x693B8F0", VA = "0x693C8F0")]
	private static extern IntPtr GetSortingGroupByIndex_Injected(int index);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600128C")]
	[Address(RVA = "0x693C990", Offset = "0x693B990", VA = "0x693C990")]
	private static extern int get_sortingLayerID_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600128D")]
	[Address(RVA = "0x693CA30", Offset = "0x693BA30", VA = "0x693CA30")]
	private static extern int get_sortingOrder_Injected(IntPtr _unity_self);
}
