using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000172")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/Scripting/NoAllocHelpers.bindings.h")]
internal sealed class NoAllocHelpers
{
	[Token(Token = "0x6000ABE")]
	public static void ResizeList<T>(List<T> list, int size)
	{
	}

	[Token(Token = "0x6000ABF")]
	public static void EnsureListElemCount<T>(List<T> list, int count)
	{
	}

	[Token(Token = "0x6000AC0")]
	[Address(RVA = "0x4AD6C90", Offset = "0x4AD6C90", VA = "0x4AD6C90")]
	public static int SafeLength(Array values)
	{
		return default(int);
	}

	[Token(Token = "0x6000AC1")]
	public static int SafeLength<T>(List<T> values)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AC2")]
	[Address(RVA = "0x4AD6CA0", Offset = "0x4AD6CA0", VA = "0x4AD6CA0")]
	[UnityEngine.Bindings.FreeFunction("NoAllocHelpers_Bindings::Internal_ResizeList")]
	internal static extern void Internal_ResizeList(object list, int size);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000AC3")]
	[Address(RVA = "0x4AD6CE0", Offset = "0x4AD6CE0", VA = "0x4AD6CE0")]
	[UnityEngine.Bindings.FreeFunction("NoAllocHelpers_Bindings::ExtractArrayFromList")]
	public static extern Array ExtractArrayFromList(object list);
}
