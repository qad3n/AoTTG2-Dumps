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

[Token(Token = "0x2000205")]
[MovedFrom("UnityEngine.Experimental.LowLevel")]
public class PlayerLoop
{
	[Token(Token = "0x6000DCC")]
	[Address(RVA = "0x4E15520", Offset = "0x4E15520", VA = "0x4E15520")]
	public static PlayerLoopSystem GetCurrentPlayerLoop()
	{
		return default(PlayerLoopSystem);
	}

	[Token(Token = "0x6000DCD")]
	[Address(RVA = "0x4E15940", Offset = "0x4E15940", VA = "0x4E15940")]
	public static void SetPlayerLoop(PlayerLoopSystem loop)
	{
	}

	[Token(Token = "0x6000DCE")]
	[Address(RVA = "0x4E15A20", Offset = "0x4E15A20", VA = "0x4E15A20")]
	private static int PlayerLoopSystemToInternal(PlayerLoopSystem sys, ref List<PlayerLoopSystemInternal> internalSys)
	{
		return default(int);
	}

	[Token(Token = "0x6000DCF")]
	[Address(RVA = "0x4E155E0", Offset = "0x4E155E0", VA = "0x4E155E0")]
	private static PlayerLoopSystem InternalToPlayerLoopSystem(PlayerLoopSystemInternal[] internalSys, ref int offset)
	{
		return default(PlayerLoopSystem);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DD0")]
	[Address(RVA = "0x4E155B0", Offset = "0x4E155B0", VA = "0x4E155B0")]
	[UnityEngine.Bindings.NativeMethod(IsFreeFunction = true)]
	private static extern PlayerLoopSystemInternal[] GetCurrentPlayerLoopInternal();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DD1")]
	[Address(RVA = "0x4E15D20", Offset = "0x4E15D20", VA = "0x4E15D20")]
	[UnityEngine.Bindings.NativeMethod(IsFreeFunction = true)]
	private static extern void SetPlayerLoopInternal(PlayerLoopSystemInternal[] loop);
}
