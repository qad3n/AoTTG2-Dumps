using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000321")]
[RequireComponent(typeof(Transform))]
[UnityEngine.Bindings.NativeType(Header = "Runtime/2D/Sorting/SortingGroup.h")]
public sealed class SortingGroup : Behaviour
{
	[Token(Token = "0x170002B9")]
	[UnityEngine.Bindings.StaticAccessor("SortingGroup", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	internal static extern int invalidSortingGroupID
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600112A")]
		[Address(RVA = "0x4B0ED70", Offset = "0x4B0ED70", VA = "0x4B0ED70")]
		get;
	}

	[Token(Token = "0x170002BA")]
	public int sortingLayerID
	{
		[Token(Token = "0x600112C")]
		[Address(RVA = "0x4B0EDD0", Offset = "0x4B0EDD0", VA = "0x4B0EDD0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002BB")]
	public int sortingOrder
	{
		[Token(Token = "0x600112D")]
		[Address(RVA = "0x4B0EEA0", Offset = "0x4B0EEA0", VA = "0x4B0EEA0")]
		get
		{
			return default(int);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600112B")]
	[Address(RVA = "0x4B0EDA0", Offset = "0x4B0EDA0", VA = "0x4B0EDA0")]
	[UnityEngine.Bindings.StaticAccessor("SortingGroup", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	internal static extern SortingGroup GetSortingGroupByIndex(int index);

	[Token(Token = "0x600112E")]
	[Address(RVA = "0x4B0EF70", Offset = "0x4B0EF70", VA = "0x4B0EF70")]
	public SortingGroup()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600112F")]
	[Address(RVA = "0x4B0EE70", Offset = "0x4B0EE70", VA = "0x4B0EE70")]
	private static extern int get_sortingLayerID_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001130")]
	[Address(RVA = "0x4B0EF40", Offset = "0x4B0EF40", VA = "0x4B0EF40")]
	private static extern int get_sortingOrder_Injected(IntPtr _unity_self);
}
