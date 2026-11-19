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

[Token(Token = "0x2000162")]
[UnityEngine.Bindings.NativeHeader("Runtime/Utilities/PropertyName.h")]
internal class PropertyNameUtils
{
	[Token(Token = "0x6000C53")]
	[Address(RVA = "0x690DE60", Offset = "0x690CE60", VA = "0x690DE60")]
	[UnityEngine.Bindings.FreeFunction("PropertyNameFromStringICall", IsThreadSafe = true)]
	public static PropertyName PropertyNameFromString(string name)
	{
		return default(PropertyName);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C54")]
	[Address(RVA = "0x690DFE0", Offset = "0x690CFE0", VA = "0x690DFE0")]
	private static extern void PropertyNameFromString_Injected(ref ManagedSpanWrapper name, out PropertyName ret);
}
