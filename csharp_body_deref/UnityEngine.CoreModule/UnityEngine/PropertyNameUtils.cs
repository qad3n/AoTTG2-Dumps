using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000133")]
[UnityEngine.Bindings.NativeHeader("Runtime/Utilities/PropertyName.h")]
internal class PropertyNameUtils
{
	[Token(Token = "0x6000933")]
	[Address(RVA = "0x4ACA740", Offset = "0x4ACA740", VA = "0x4ACA740")]
	[UnityEngine.Bindings.FreeFunction(IsThreadSafe = true)]
	public static PropertyName PropertyNameFromString([UnityEngine.Bindings.Unmarshalled] string name)
	{
		return default(PropertyName);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000934")]
	[Address(RVA = "0x4ACA790", Offset = "0x4ACA790", VA = "0x4ACA790")]
	private static extern void PropertyNameFromString_Injected(string name, out PropertyName ret);
}
