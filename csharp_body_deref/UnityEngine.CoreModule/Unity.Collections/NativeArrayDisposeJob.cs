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

[Token(Token = "0x200004A")]
[UnityEngine.NativeClass(null)]
internal struct NativeArrayDisposeJob : IJob
{
	[Token(Token = "0x40000DA")]
	[FieldOffset(Offset = "0x0")]
	internal NativeArrayDispose Data;

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x4DAD690", Offset = "0x4DAD690", VA = "0x4DAD690", Slot = "4")]
	public void Execute()
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x4DAD6D0", Offset = "0x4DAD6D0", VA = "0x4DAD6D0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void RegisterNativeArrayDisposeJobReflectionData()
	{
	}
}
