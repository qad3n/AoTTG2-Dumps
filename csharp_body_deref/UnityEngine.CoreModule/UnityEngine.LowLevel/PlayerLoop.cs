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
	[Token(Token = "0x60011CC")]
	[Address(RVA = "0x2F50560", Offset = "0x2F4EB60", VA = "0x182F50560")]
	public static PlayerLoopSystem GetCurrentPlayerLoop()
	{
		return default(PlayerLoopSystem);
	}

	[Token(Token = "0x60011CD")]
	[Address(RVA = "0x2F50BB0", Offset = "0x2F4F1B0", VA = "0x182F50BB0")]
	public static void SetPlayerLoop(PlayerLoopSystem loop)
	{
	}

	[Token(Token = "0x60011CE")]
	[Address(RVA = "0x2F508C0", Offset = "0x2F4EEC0", VA = "0x182F508C0")]
	private static int PlayerLoopSystemToInternal(PlayerLoopSystem sys, ref List<PlayerLoopSystemInternal> internalSys)
	{
		return default(int);
	}

	[Token(Token = "0x60011CF")]
	[Address(RVA = "0x2F505E0", Offset = "0x2F4EBE0", VA = "0x182F505E0")]
	private static PlayerLoopSystem InternalToPlayerLoopSystem(PlayerLoopSystemInternal[] internalSys, ref int offset)
	{
		return default(PlayerLoopSystem);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011D0")]
	[Address(RVA = "0x2F50530", Offset = "0x2F4EB30", VA = "0x182F50530")]
	[UnityEngine.Bindings.NativeMethod(IsFreeFunction = true)]
	private static extern PlayerLoopSystemInternal[] GetCurrentPlayerLoopInternal();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60011D1")]
	[Address(RVA = "0x2F50B70", Offset = "0x2F4F170", VA = "0x182F50B70")]
	[UnityEngine.Bindings.NativeMethod(IsFreeFunction = true)]
	private static extern void SetPlayerLoopInternal(PlayerLoopSystemInternal[] loop);
}
