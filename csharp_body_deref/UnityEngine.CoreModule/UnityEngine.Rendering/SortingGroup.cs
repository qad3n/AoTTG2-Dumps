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

[Token(Token = "0x2000324")]
[RequireComponent(typeof(Transform))]
[UnityEngine.Bindings.NativeType(Header = "Runtime/2D/Sorting/SortingGroup.h")]
public sealed class SortingGroup : Behaviour
{
	[Token(Token = "0x170002BA")]
	[UnityEngine.Bindings.StaticAccessor("SortingGroup", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	internal static extern int invalidSortingGroupID
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600112C")]
		[Address(RVA = "0x4E366A0", Offset = "0x4E366A0", VA = "0x4E366A0")]
		get;
	}

	[Token(Token = "0x170002BB")]
	public int sortingLayerID
	{
		[Token(Token = "0x600112E")]
		[Address(RVA = "0x4E36700", Offset = "0x4E36700", VA = "0x4E36700")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002BC")]
	public int sortingOrder
	{
		[Token(Token = "0x600112F")]
		[Address(RVA = "0x4E367D0", Offset = "0x4E367D0", VA = "0x4E367D0")]
		get
		{
			return default(int);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600112D")]
	[Address(RVA = "0x4E366D0", Offset = "0x4E366D0", VA = "0x4E366D0")]
	[UnityEngine.Bindings.StaticAccessor("SortingGroup", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	internal static extern SortingGroup GetSortingGroupByIndex(int index);

	[Token(Token = "0x6001130")]
	[Address(RVA = "0x4E368A0", Offset = "0x4E368A0", VA = "0x4E368A0")]
	public SortingGroup()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001131")]
	[Address(RVA = "0x4E367A0", Offset = "0x4E367A0", VA = "0x4E367A0")]
	private static extern int get_sortingLayerID_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001132")]
	[Address(RVA = "0x4E36870", Offset = "0x4E36870", VA = "0x4E36870")]
	private static extern int get_sortingOrder_Injected(IntPtr _unity_self);
}
