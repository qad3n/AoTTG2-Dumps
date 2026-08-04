// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.PlayerConnectionInternal
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

[Token(Token = "0x2000128")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/PlayerConnection/PlayerConnectionInternal.bindings.h")]
internal class PlayerConnectionInternal : IPlayerEditorConnectionNative
{
	[Token(Token = "0x600090D")]
	[Address(RVA = "0x4DF1520", Offset = "0x4DF1520", VA = "0x4DF1520", Slot = "6")]
	private void UnityEngine_002EIPlayerEditorConnectionNative_002ESendMessage(Guid messageId, byte[] data, int playerId)
	{
	}

	[Token(Token = "0x600090E")]
	[Address(RVA = "0x4DF16E0", Offset = "0x4DF16E0", VA = "0x4DF16E0", Slot = "7")]
	private bool UnityEngine_002EIPlayerEditorConnectionNative_002ETrySendMessage(Guid messageId, byte[] data, int playerId)
	{
		return default(bool);
	}

	[Token(Token = "0x600090F")]
	[Address(RVA = "0x4DF18A0", Offset = "0x4DF18A0", VA = "0x4DF18A0", Slot = "8")]
	private void UnityEngine_002EIPlayerEditorConnectionNative_002EPoll()
	{
	}

	[Token(Token = "0x6000910")]
	[Address(RVA = "0x4DF1900", Offset = "0x4DF1900", VA = "0x4DF1900", Slot = "9")]
	private void UnityEngine_002EIPlayerEditorConnectionNative_002ERegisterInternal(Guid messageId)
	{
	}

	[Token(Token = "0x6000911")]
	[Address(RVA = "0x4DF19A0", Offset = "0x4DF19A0", VA = "0x4DF19A0", Slot = "10")]
	private void UnityEngine_002EIPlayerEditorConnectionNative_002EUnregisterInternal(Guid messageId)
	{
	}

	[Token(Token = "0x6000912")]
	[Address(RVA = "0x4DF1A40", Offset = "0x4DF1A40", VA = "0x4DF1A40", Slot = "4")]
	private void UnityEngine_002EIPlayerEditorConnectionNative_002EInitialize()
	{
	}

	[Token(Token = "0x6000913")]
	[Address(RVA = "0x4DF1AA0", Offset = "0x4DF1AA0", VA = "0x4DF1AA0", Slot = "11")]
	private bool UnityEngine_002EIPlayerEditorConnectionNative_002EIsConnected()
	{
		return default(bool);
	}

	[Token(Token = "0x6000914")]
	[Address(RVA = "0x4DF1B00", Offset = "0x4DF1B00", VA = "0x4DF1B00", Slot = "5")]
	private void UnityEngine_002EIPlayerEditorConnectionNative_002EDisconnectAll()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000915")]
	[Address(RVA = "0x4DF1AD0", Offset = "0x4DF1AD0", VA = "0x4DF1AD0")]
	[UnityEngine.Bindings.FreeFunction("PlayerConnection_Bindings::IsConnected")]
	private static extern bool IsConnected();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000916")]
	[Address(RVA = "0x4DF1A70", Offset = "0x4DF1A70", VA = "0x4DF1A70")]
	[UnityEngine.Bindings.FreeFunction("PlayerConnection_Bindings::Initialize")]
	private static extern void Initialize();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000917")]
	[Address(RVA = "0x4DF1970", Offset = "0x4DF1970", VA = "0x4DF1970")]
	[UnityEngine.Bindings.FreeFunction("PlayerConnection_Bindings::RegisterInternal")]
	private static extern void RegisterInternal(string messageId);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000918")]
	[Address(RVA = "0x4DF1A10", Offset = "0x4DF1A10", VA = "0x4DF1A10")]
	[UnityEngine.Bindings.FreeFunction("PlayerConnection_Bindings::UnregisterInternal")]
	private static extern void UnregisterInternal(string messageId);

	[Token(Token = "0x6000919")]
	[Address(RVA = "0x4DF1610", Offset = "0x4DF1610", VA = "0x4DF1610")]
	[UnityEngine.Bindings.FreeFunction("PlayerConnection_Bindings::SendMessage")]
	private static void SendMessage(string messageId, byte[] data, int playerId)
	{
	}

	[Token(Token = "0x600091A")]
	[Address(RVA = "0x4DF17D0", Offset = "0x4DF17D0", VA = "0x4DF17D0")]
	[UnityEngine.Bindings.FreeFunction("PlayerConnection_Bindings::TrySendMessage")]
	private static bool TrySendMessage(string messageId, byte[] data, int playerId)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600091B")]
	[Address(RVA = "0x4DF18D0", Offset = "0x4DF18D0", VA = "0x4DF18D0")]
	[UnityEngine.Bindings.FreeFunction("PlayerConnection_Bindings::PollInternal")]
	private static extern void PollInternal();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600091C")]
	[Address(RVA = "0x4DF1B30", Offset = "0x4DF1B30", VA = "0x4DF1B30")]
	[UnityEngine.Bindings.FreeFunction("PlayerConnection_Bindings::DisconnectAll")]
	private static extern void DisconnectAll();

	[Token(Token = "0x600091D")]
	[Address(RVA = "0x4DF1BE0", Offset = "0x4DF1BE0", VA = "0x4DF1BE0")]
	public PlayerConnectionInternal()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600091E")]
	[Address(RVA = "0x4DF1B60", Offset = "0x4DF1B60", VA = "0x4DF1B60")]
	private static extern void SendMessage_Injected(string messageId, ref ManagedSpanWrapper data, int playerId);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600091F")]
	[Address(RVA = "0x4DF1BA0", Offset = "0x4DF1BA0", VA = "0x4DF1BA0")]
	private static extern bool TrySendMessage_Injected(string messageId, ref ManagedSpanWrapper data, int playerId);
}
