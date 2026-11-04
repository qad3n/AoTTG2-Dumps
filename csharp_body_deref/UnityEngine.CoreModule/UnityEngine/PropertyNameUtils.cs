// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.PropertyNameUtils
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000161")]
[UnityEngine.Bindings.NativeHeader("Runtime/Utilities/PropertyName.h")]
internal class PropertyNameUtils
{
	[Token(Token = "0x6000C41")]
	[Address(RVA = "0x2F249B0", Offset = "0x2F22FB0", VA = "0x182F249B0")]
	[UnityEngine.Bindings.FreeFunction("PropertyNameFromStringICall", IsThreadSafe = true)]
	public static PropertyName PropertyNameFromString(string name)
	{
		return default(PropertyName);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C42")]
	[Address(RVA = "0x2F24960", Offset = "0x2F22F60", VA = "0x182F24960")]
	private static extern void PropertyNameFromString_Injected(ref ManagedSpanWrapper name, out PropertyName ret);
}
