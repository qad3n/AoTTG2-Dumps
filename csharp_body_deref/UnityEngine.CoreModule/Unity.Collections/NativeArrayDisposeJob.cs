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
	[Address(RVA = "0x4A85E70", Offset = "0x4A85E70", VA = "0x4A85E70", Slot = "4")]
	public void Execute()
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x4A85EB0", Offset = "0x4A85EB0", VA = "0x4A85EB0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void RegisterNativeArrayDisposeJobReflectionData()
	{
	}
}
