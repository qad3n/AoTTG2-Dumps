// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.SubsystemDescriptorBindings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000009")]
internal static class SubsystemDescriptorBindings
{
	[Token(Token = "0x600000E")]
	[Address(RVA = "0x69F1CF0", Offset = "0x69F0CF0", VA = "0x69F1CF0")]
	public static string GetId(IntPtr descriptorPtr)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600000F")]
	[Address(RVA = "0x69F1DD0", Offset = "0x69F0DD0", VA = "0x69F1DD0")]
	private static extern void GetId_Injected(IntPtr descriptorPtr, out UnityEngine.Bindings.ManagedSpanWrapper ret);
}
