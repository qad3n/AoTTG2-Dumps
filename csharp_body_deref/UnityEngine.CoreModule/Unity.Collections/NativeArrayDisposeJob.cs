// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.NativeArrayDisposeJob
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Unity.Jobs;
using UnityEngine;
using UnityEngine.Scripting;

namespace Unity.Collections;

[Token(Token = "0x200005E")]
[UnityEngine.NativeClass(null)]
internal struct NativeArrayDisposeJob : IJob
{
	[Token(Token = "0x400010F")]
	[FieldOffset(Offset = "0x0")]
	internal NativeArrayDispose Data;

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x2ECD8E0", Offset = "0x2ECBEE0", VA = "0x182ECD8E0", Slot = "4")]
	public void Execute()
	{
	}

	[Token(Token = "0x6000130")]
	[Address(RVA = "0x2ECD930", Offset = "0x2ECBF30", VA = "0x182ECD930")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void RegisterNativeArrayDisposeJobReflectionData()
	{
	}
}
