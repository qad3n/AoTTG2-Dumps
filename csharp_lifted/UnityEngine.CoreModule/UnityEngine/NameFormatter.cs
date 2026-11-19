// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.NameFormatter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x20001E2")]
[UnityEngine.Bindings.NativeHeader("Runtime/NameFormatter/NameFormatter.h")]
[UnityEngine.Bindings.VisibleToOtherModules]
internal sealed class NameFormatter
{
	[Token(Token = "0x6000FDE")]
	[Address(RVA = "0x69297A0", Offset = "0x69287A0", VA = "0x69297A0")]
	[UnityEngine.Bindings.FreeFunction]
	public static string FormatVariableName(string name)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FDF")]
	[Address(RVA = "0x69299E0", Offset = "0x69289E0", VA = "0x69299E0")]
	private static extern void FormatVariableName_Injected(ref ManagedSpanWrapper name, out ManagedSpanWrapper ret);
}
