// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.PropertyNameUtils
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000136")]
[UnityEngine.Bindings.NativeHeader("Runtime/Utilities/PropertyName.h")]
internal class PropertyNameUtils
{
	[Token(Token = "0x6000935")]
	[Address(RVA = "0x4DF2070", Offset = "0x4DF2070", VA = "0x4DF2070")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static PropertyName PropertyNameFromString([UnityEngine.Bindings.Unmarshalled] string name)
	{
		return default(PropertyName);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000936")]
	[Address(RVA = "0x4DF20C0", Offset = "0x4DF20C0", VA = "0x4DF20C0")]
	private static extern void PropertyNameFromString_Injected(string name, out PropertyName ret);
}
