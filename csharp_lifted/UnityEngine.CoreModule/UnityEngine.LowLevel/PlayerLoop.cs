// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.LowLevel.PlayerLoop
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.LowLevel;

[Token(Token = "0x2000256")]
[MovedFrom("UnityEngine.Experimental.LowLevel")]
public class PlayerLoop
{
	[Token(Token = "0x60011E0")]
	[Address(RVA = "0x6937BA0", Offset = "0x6936BA0", VA = "0x6937BA0")]
	public static PlayerLoopSystem GetCurrentPlayerLoop()
	{
		return default(PlayerLoopSystem);
	}

	[Token(Token = "0x60011E1")]
	[Address(RVA = "0x6937F90", Offset = "0x6936F90", VA = "0x6937F90")]
	public static void SetPlayerLoop(PlayerLoopSystem loop)
	{
	}

	[Token(Token = "0x60011E2")]
	[Address(RVA = "0x6938070", Offset = "0x6937070", VA = "0x6938070")]
	private static int PlayerLoopSystemToInternal(PlayerLoopSystem sys, ref List<PlayerLoopSystemInternal> internalSys)
	{
		return default(int);
	}

	[Token(Token = "0x60011E3")]
	[Address(RVA = "0x6937C50", Offset = "0x6936C50", VA = "0x6937C50")]
	private static PlayerLoopSystem InternalToPlayerLoopSystem(PlayerLoopSystemInternal[] internalSys, ref int offset)
	{
		return default(PlayerLoopSystem);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011E4")]
	[Address(RVA = "0x6937C20", Offset = "0x6936C20", VA = "0x6937C20")]
	[UnityEngine.Bindings.NativeMethod(IsFreeFunction = true)]
	private static extern PlayerLoopSystemInternal[] GetCurrentPlayerLoopInternal();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011E5")]
	[Address(RVA = "0x69382F0", Offset = "0x69372F0", VA = "0x69382F0")]
	[UnityEngine.Bindings.NativeMethod(IsFreeFunction = true)]
	private static extern void SetPlayerLoopInternal(PlayerLoopSystemInternal[] loop);
}
