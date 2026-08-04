// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.NoAllocHelpers
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000175")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Scripting/NoAllocHelpers.bindings.h")]
internal sealed class NoAllocHelpers
{
	[Token(Token = "0x6000AC0")]
	public static void ResizeList<T>(List<T> list, int size)
	{
	}

	[Token(Token = "0x6000AC1")]
	public static void EnsureListElemCount<T>(List<T> list, int count)
	{
	}

	[Token(Token = "0x6000AC2")]
	[Address(RVA = "0x4DFE5C0", Offset = "0x4DFE5C0", VA = "0x4DFE5C0")]
	public static int SafeLength(Array values)
	{
		return default(int);
	}

	[Token(Token = "0x6000AC3")]
	public static int SafeLength<T>(List<T> values)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AC4")]
	[Address(RVA = "0x4DFE5D0", Offset = "0x4DFE5D0", VA = "0x4DFE5D0")]
	[UnityEngine.Bindings.FreeFunction("NoAllocHelpers_Bindings::Internal_ResizeList")]
	internal static extern void Internal_ResizeList(object list, int size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AC5")]
	[Address(RVA = "0x4DFE610", Offset = "0x4DFE610", VA = "0x4DFE610")]
	[UnityEngine.Bindings.FreeFunction("NoAllocHelpers_Bindings::ExtractArrayFromList")]
	public static extern Array ExtractArrayFromList(object list);
}
