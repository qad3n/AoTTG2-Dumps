// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.PlayerConnectionInternal
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

[Token(Token = "0x2000154")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/PlayerConnection/PlayerConnectionInternal.bindings.h")]
internal class PlayerConnectionInternal : IPlayerEditorConnectionNative
{
	[Token(Token = "0x6000C14")]
	[Address(RVA = "0x2F23A50", Offset = "0x2F22050", VA = "0x182F23A50", Slot = "6")]
	private void UnityEngine_002EIPlayerEditorConnectionNative_002ESendMessage(Guid messageId, byte[] data, int playerId)
	{
	}

	[Token(Token = "0x6000C15")]
	[Address(RVA = "0x2F23B40", Offset = "0x2F22140", VA = "0x182F23B40", Slot = "7")]
	private bool UnityEngine_002EIPlayerEditorConnectionNative_002ETrySendMessage(Guid messageId, byte[] data, int playerId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C16")]
	[Address(RVA = "0x2F232E0", Offset = "0x2F218E0", VA = "0x182F232E0", Slot = "8")]
	private void UnityEngine_002EIPlayerEditorConnectionNative_002EPoll()
	{
	}

	[Token(Token = "0x6000C17")]
	[Address(RVA = "0x2F23A00", Offset = "0x2F22000", VA = "0x182F23A00", Slot = "9")]
	private void UnityEngine_002EIPlayerEditorConnectionNative_002ERegisterInternal(Guid messageId)
	{
	}

	[Token(Token = "0x6000C18")]
	[Address(RVA = "0x2F23C30", Offset = "0x2F22230", VA = "0x182F23C30", Slot = "10")]
	private void UnityEngine_002EIPlayerEditorConnectionNative_002EUnregisterInternal(Guid messageId)
	{
	}

	[Token(Token = "0x6000C19")]
	[Address(RVA = "0x2F23280", Offset = "0x2F21880", VA = "0x182F23280", Slot = "4")]
	private void UnityEngine_002EIPlayerEditorConnectionNative_002EInitialize()
	{
	}

	[Token(Token = "0x6000C1A")]
	[Address(RVA = "0x2F232B0", Offset = "0x2F218B0", VA = "0x182F232B0", Slot = "11")]
	private bool UnityEngine_002EIPlayerEditorConnectionNative_002EIsConnected()
	{
		return default(bool);
	}

	[Token(Token = "0x6000C1B")]
	[Address(RVA = "0x2F23250", Offset = "0x2F21850", VA = "0x182F23250", Slot = "5")]
	private void UnityEngine_002EIPlayerEditorConnectionNative_002EDisconnectAll()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C1C")]
	[Address(RVA = "0x2F232B0", Offset = "0x2F218B0", VA = "0x182F232B0")]
	[UnityEngine.Bindings.FreeFunction("PlayerConnection_Bindings::IsConnected")]
	private static extern bool IsConnected();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C1D")]
	[Address(RVA = "0x2F23280", Offset = "0x2F21880", VA = "0x182F23280")]
	[UnityEngine.Bindings.FreeFunction("PlayerConnection_Bindings::Initialize")]
	private static extern void Initialize();

	[Token(Token = "0x6000C1E")]
	[Address(RVA = "0x2F23350", Offset = "0x2F21950", VA = "0x182F23350")]
	[UnityEngine.Bindings.FreeFunction("PlayerConnection_Bindings::RegisterInternal")]
	private static void RegisterInternal(string messageId)
	{
	}

	[Token(Token = "0x6000C1F")]
	[Address(RVA = "0x2F23CC0", Offset = "0x2F222C0", VA = "0x182F23CC0")]
	[UnityEngine.Bindings.FreeFunction("PlayerConnection_Bindings::UnregisterInternal")]
	private static void UnregisterInternal(string messageId)
	{
	}

	[Token(Token = "0x6000C20")]
	[Address(RVA = "0x2F23530", Offset = "0x2F21B30", VA = "0x182F23530")]
	[UnityEngine.Bindings.FreeFunction("PlayerConnection_Bindings::SendMessage")]
	private static void SendMessage(string messageId, byte[] data, int playerId)
	{
	}

	[Token(Token = "0x6000C21")]
	[Address(RVA = "0x2F237C0", Offset = "0x2F21DC0", VA = "0x182F237C0")]
	[UnityEngine.Bindings.FreeFunction("PlayerConnection_Bindings::TrySendMessage")]
	private static bool TrySendMessage(string messageId, byte[] data, int playerId)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C22")]
	[Address(RVA = "0x2F232E0", Offset = "0x2F218E0", VA = "0x182F232E0")]
	[UnityEngine.Bindings.FreeFunction("PlayerConnection_Bindings::PollInternal")]
	private static extern void PollInternal();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C23")]
	[Address(RVA = "0x2F23250", Offset = "0x2F21850", VA = "0x182F23250")]
	[UnityEngine.Bindings.FreeFunction("PlayerConnection_Bindings::DisconnectAll")]
	private static extern void DisconnectAll();

	[Token(Token = "0x6000C24")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public PlayerConnectionInternal()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C25")]
	[Address(RVA = "0x2F23310", Offset = "0x2F21910", VA = "0x182F23310")]
	private static extern void RegisterInternal_Injected(ref ManagedSpanWrapper messageId);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C26")]
	[Address(RVA = "0x2F23C80", Offset = "0x2F22280", VA = "0x182F23C80")]
	private static extern void UnregisterInternal_Injected(ref ManagedSpanWrapper messageId);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C27")]
	[Address(RVA = "0x2F234D0", Offset = "0x2F21AD0", VA = "0x182F234D0")]
	private static extern void SendMessage_Injected(ref ManagedSpanWrapper messageId, ref ManagedSpanWrapper data, int playerId);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C28")]
	[Address(RVA = "0x2F23760", Offset = "0x2F21D60", VA = "0x182F23760")]
	private static extern bool TrySendMessage_Injected(ref ManagedSpanWrapper messageId, ref ManagedSpanWrapper data, int playerId);
}
