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
	[Address(RVA = "0x4A86720", Offset = "0x4A86720", VA = "0x4A86720")]
	[UnityEngine.Bindings.FreeFunction("GetTagManager().GetSortingLayerValueFromUniqueID")]
	public static extern int GetLayerValueFromID(int id);
}
