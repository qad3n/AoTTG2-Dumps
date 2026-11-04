// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.SubsystemDescriptorBindings
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000007")]
internal static class SubsystemDescriptorBindings
{
	[Token(Token = "0x600000D")]
	[Address(RVA = "0x2FF7730", Offset = "0x2FF5D30", VA = "0x182FF7730")]
	public static string GetId(IntPtr descriptorPtr)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000E")]
	[Address(RVA = "0x2FF76E0", Offset = "0x2FF5CE0", VA = "0x182FF76E0")]
	private static extern void GetId_Injected(IntPtr descriptorPtr, out UnityEngine.Bindings.ManagedSpanWrapper ret);
}
