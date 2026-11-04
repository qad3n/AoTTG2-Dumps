// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Bindings.Unmarshal
// Update status: NEW in this game update
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
	[Token(Token = "0x6001174")]
	public static T UnmarshalUnityObject<T>(IntPtr gcHandlePtr) where T : Object
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6001175")]
	[Address(RVA = "0x2F5EC70", Offset = "0x2F5D270", VA = "0x182F5EC70")]
	public static GCHandle FromIntPtrUnsafe(IntPtr gcHandle)
	{
		return default(GCHandle);
	}
}
