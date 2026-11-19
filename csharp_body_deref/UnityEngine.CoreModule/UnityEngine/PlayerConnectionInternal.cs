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

[Token(Token = "0x2000155")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/PlayerConnection/PlayerConnectionInternal.bindings.h")]
internal class PlayerConnectionInternal : IPlayerEditorConnectionNative
{
	[Token(Token = "0x6000C26")]
	[Address(RVA = "0x690C6A0", Offset = "0x690B6A0", VA = "0x690C6A0", Slot = "6")]
	private void UnityEngine_002EIPlayerEditorConnectionNative_002ESendMessage(Guid messageId, byte[] data, int playerId)
	{
	}

	[Token(Token = "0x6000C27")]
	[Address(RVA = "0x690C970", Offset = "0x690B970", VA = "0x690C970", Slot = "7")]
	private bool UnityEngine_002EIPlayerEditorConnectionNative_002ETrySendMessage(Guid messageId, byte[] data, int playerId)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C28")]
	[Address(RVA = "0x690CC50", Offset = "0x690BC50", VA = "0x690CC50", Slot = "8")]
	private void UnityEngine_002EIPlayerEditorConnectionNative_002EPoll()
	{
	}

	[Token(Token = "0x6000C29")]
	[Address(RVA = "0x690CCB0", Offset = "0x690BCB0", VA = "0x690CCB0", Slot = "9")]
	private void UnityEngine_002EIPlayerEditorConnectionNative_002ERegisterInternal(Guid messageId)
	{
	}

	[Token(Token = "0x6000C2A")]
	[Address(RVA = "0x690CE60", Offset = "0x690BE60", VA = "0x690CE60", Slot = "10")]
	private void UnityEngine_002EIPlayerEditorConnectionNative_002EUnregisterInternal(Guid messageId)
	{
	}

	[Token(Token = "0x6000C2B")]
	[Address(RVA = "0x690D010", Offset = "0x690C010", VA = "0x690D010", Slot = "4")]
	private void UnityEngine_002EIPlayerEditorConnectionNative_002EInitialize()
	{
	}

	[Token(Token = "0x6000C2C")]
	[Address(RVA = "0x690D070", Offset = "0x690C070", VA = "0x690D070", Slot = "11")]
	private bool UnityEngine_002EIPlayerEditorConnectionNative_002EIsConnected()
	{
		return default(bool);
	}

	[Token(Token = "0x6000C2D")]
	[Address(RVA = "0x690D0D0", Offset = "0x690C0D0", VA = "0x690D0D0", Slot = "5")]
	private void UnityEngine_002EIPlayerEditorConnectionNative_002EDisconnectAll()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C2E")]
	[Address(RVA = "0x690D0A0", Offset = "0x690C0A0", VA = "0x690D0A0")]
	[UnityEngine.Bindings.FreeFunction("PlayerConnection_Bindings::IsConnected")]
	private static extern bool IsConnected();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C2F")]
	[Address(RVA = "0x690D040", Offset = "0x690C040", VA = "0x690D040")]
	[UnityEngine.Bindings.FreeFunction("PlayerConnection_Bindings::Initialize")]
	private static extern void Initialize();

	[Token(Token = "0x6000C30")]
	[Address(RVA = "0x690CD00", Offset = "0x690BD00", VA = "0x690CD00")]
	[UnityEngine.Bindings.FreeFunction("PlayerConnection_Bindings::RegisterInternal")]
	private static void RegisterInternal(string messageId)
	{
	}

	[Token(Token = "0x6000C31")]
	[Address(RVA = "0x690CEB0", Offset = "0x690BEB0", VA = "0x690CEB0")]
	[UnityEngine.Bindings.FreeFunction("PlayerConnection_Bindings::UnregisterInternal")]
	private static void UnregisterInternal(string messageId)
	{
	}

	[Token(Token = "0x6000C32")]
	[Address(RVA = "0x690C790", Offset = "0x690B790", VA = "0x690C790")]
	[UnityEngine.Bindings.FreeFunction("PlayerConnection_Bindings::SendMessage")]
	private static void SendMessage(string messageId, byte[] data, int playerId)
	{
	}

	[Token(Token = "0x6000C33")]
	[Address(RVA = "0x690CA60", Offset = "0x690BA60", VA = "0x690CA60")]
	[UnityEngine.Bindings.FreeFunction("PlayerConnection_Bindings::TrySendMessage")]
	private static bool TrySendMessage(string messageId, byte[] data, int playerId)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C34")]
	[Address(RVA = "0x690CC80", Offset = "0x690BC80", VA = "0x690CC80")]
	[UnityEngine.Bindings.FreeFunction("PlayerConnection_Bindings::PollInternal")]
	private static extern void PollInternal();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C35")]
	[Address(RVA = "0x690D100", Offset = "0x690C100", VA = "0x690D100")]
	[UnityEngine.Bindings.FreeFunction("PlayerConnection_Bindings::DisconnectAll")]
	private static extern void DisconnectAll();

	[Token(Token = "0x6000C36")]
	[Address(RVA = "0x690D210", Offset = "0x690C210", VA = "0x690D210")]
	public PlayerConnectionInternal()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C37")]
	[Address(RVA = "0x690D130", Offset = "0x690C130", VA = "0x690D130")]
	private static extern void RegisterInternal_Injected(ref ManagedSpanWrapper messageId);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C38")]
	[Address(RVA = "0x690D160", Offset = "0x690C160", VA = "0x690D160")]
	private static extern void UnregisterInternal_Injected(ref ManagedSpanWrapper messageId);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C39")]
	[Address(RVA = "0x690D190", Offset = "0x690C190", VA = "0x690D190")]
	private static extern void SendMessage_Injected(ref ManagedSpanWrapper messageId, ref ManagedSpanWrapper data, int playerId);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000C3A")]
	[Address(RVA = "0x690D1D0", Offset = "0x690C1D0", VA = "0x690D1D0")]
	private static extern bool TrySendMessage_Injected(ref ManagedSpanWrapper messageId, ref ManagedSpanWrapper data, int playerId);
}
