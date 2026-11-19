// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Bindings.Unmarshal
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.Bindings;

[Token(Token = "0x200023A")]
[UnityEngine.Bindings.VisibleToOtherModules]
internal struct Unmarshal
{
	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001188")]
	public static T UnmarshalUnityObject<T>(IntPtr gcHandlePtr) where T : Object
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001189")]
	[Address(RVA = "0x6935990", Offset = "0x6934990", VA = "0x6935990")]
	public static GCHandle FromIntPtrUnsafe(IntPtr gcHandle)
	{
		return default(GCHandle);
	}
}
