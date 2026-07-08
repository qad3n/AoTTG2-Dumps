using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting.APIUpdating;

namespace UnityEngine.LowLevel;

[Token(Token = "0x2000202")]
[MovedFrom("UnityEngine.Experimental.LowLevel")]
public class PlayerLoop
{
	[Token(Token = "0x6000DCA")]
	[Address(RVA = "0x4AEDBF0", Offset = "0x4AEDBF0", VA = "0x4AEDBF0")]
	public static PlayerLoopSystem GetCurrentPlayerLoop()
	{
		return default(PlayerLoopSystem);
	}

	[Token(Token = "0x6000DCB")]
	[Address(RVA = "0x4AEE010", Offset = "0x4AEE010", VA = "0x4AEE010")]
	public static void SetPlayerLoop(PlayerLoopSystem loop)
	{
	}

	[Token(Token = "0x6000DCC")]
	[Address(RVA = "0x4AEE0F0", Offset = "0x4AEE0F0", VA = "0x4AEE0F0")]
	private static int PlayerLoopSystemToInternal(PlayerLoopSystem sys, ref List<PlayerLoopSystemInternal> internalSys)
	{
		return default(int);
	}

	[Token(Token = "0x6000DCD")]
	[Address(RVA = "0x4AEDCB0", Offset = "0x4AEDCB0", VA = "0x4AEDCB0")]
	private static PlayerLoopSystem InternalToPlayerLoopSystem(PlayerLoopSystemInternal[] internalSys, ref int offset)
	{
		return default(PlayerLoopSystem);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DCE")]
	[Address(RVA = "0x4AEDC80", Offset = "0x4AEDC80", VA = "0x4AEDC80")]
	[UnityEngine.Bindings.NativeMethod(IsFreeFunction = true)]
	private static extern PlayerLoopSystemInternal[] GetCurrentPlayerLoopInternal();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000DCF")]
	[Address(RVA = "0x4AEE3F0", Offset = "0x4AEE3F0", VA = "0x4AEE3F0")]
	[UnityEngine.Bindings.NativeMethod(IsFreeFunction = true)]
	private static extern void SetPlayerLoopInternal(PlayerLoopSystemInternal[] loop);
}
