// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.NameFormatter
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x20001E1")]
[UnityEngine.Bindings.NativeHeader("Runtime/NameFormatter/NameFormatter.h")]
[UnityEngine.Bindings.VisibleToOtherModules]
internal sealed class NameFormatter
{
	[Token(Token = "0x6000FC8")]
	[Address(RVA = "0x2F4B6B0", Offset = "0x2F49CB0", VA = "0x182F4B6B0")]
	[UnityEngine.Bindings.FreeFunction]
	public static string FormatVariableName(string name)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FC9")]
	[Address(RVA = "0x2F4B660", Offset = "0x2F49C60", VA = "0x182F4B660")]
	private static extern void FormatVariableName_Injected(ref ManagedSpanWrapper name, out ManagedSpanWrapper ret);
}
