// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.SortingLayer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000070")]
[UnityEngine.Bindings.NativeHeader("Runtime/BaseClasses/TagManager.h")]
public struct SortingLayer
{
	[Token(Token = "0x40000EA")]
	[FieldOffset(Offset = "0x0")]
	private int m_Id;

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x4DADF40", Offset = "0x4DADF40", VA = "0x4DADF40")]
	[UnityEngine.Bindings.FreeFunction("GetTagManager().GetSortingLayerValueFromUniqueID")]
	public static extern int GetLayerValueFromID(int id);
}
