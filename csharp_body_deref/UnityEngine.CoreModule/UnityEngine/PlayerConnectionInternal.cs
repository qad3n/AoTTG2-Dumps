using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000125")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/PlayerConnection/PlayerConnectionInternal.bindings.h")]
internal class PlayerConnectionInternal : IPlayerEditorConnectionNative
{
	[Token(Token = "0x600090B")]
	[Address(RVA = "0x4AC9BF0", Offset = "0x4AC9BF0", VA = "0x4AC9BF0", Slot = "6")]
	private void UnityEngine_002EIPlayerEditorConnectionNative_002ESendMessage(Guid messageId, byte[] data, int playerId)
	{
	}

	[Token(Token = "0x600090C")]
	[Address(RVA = "0x4AC9DB0", Offset = "0x4AC9DB0", VA = "0x4AC9DB0", Slot = "7")]
	private bool UnityEngine_002EIPlayerEditorConnectionNative_002ETrySendMessage(Guid messageId, byte[] data, int playerId)
	{
		return default(bool);
	}

	[Token(Token = "0x600090D")]
	[Address(RVA = "0x4AC9F70", Offset = "0x4AC9F70", VA = "0x4AC9F70", Slot = "8")]
	private void UnityEngine_002EIPlayerEditorConnectionNative_002EPoll()
	{
	}

	[Token(Token = "0x600090E")]
	[Address(RVA = "0x4AC9FD0", Offset = "0x4AC9FD0", VA = "0x4AC9FD0", Slot = "9")]
	private void UnityEngine_002EIPlayerEditorConnectionNative_002ERegisterInternal(Guid messageId)
	{
	}

	[Token(Token = "0x600090F")]
	[Address(RVA = "0x4ACA070", Offset = "0x4ACA070", VA = "0x4ACA070", Slot = "10")]
	private void UnityEngine_002EIPlayerEditorConnectionNative_002EUnregisterInternal(Guid messageId)
	{
	}

	[Token(Token = "0x6000910")]
	[Address(RVA = "0x4ACA110", Offset = "0x4ACA110", VA = "0x4ACA110", Slot = "4")]
	private void UnityEngine_002EIPlayerEditorConnectionNative_002EInitialize()
	{
	}

	[Token(Token = "0x6000911")]
	[Address(RVA = "0x4ACA170", Offset = "0x4ACA170", VA = "0x4ACA170", Slot = "11")]
	private bool UnityEngine_002EIPlayerEditorConnectionNative_002EIsConnected()
	{
		return default(bool);
	}

	[Token(Token = "0x6000912")]
	[Address(RVA = "0x4ACA1D0", Offset = "0x4ACA1D0", VA = "0x4ACA1D0", Slot = "5")]
	private void UnityEngine_002EIPlayerEditorConnectionNative_002EDisconnectAll()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000913")]
	[Address(RVA = "0x4ACA1A0", Offset = "0x4ACA1A0", VA = "0x4ACA1A0")]
	[UnityEngine.Bindings.FreeFunction("PlayerConnection_Bindings::IsConnected")]
	private static extern bool IsConnected();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000914")]
	[Address(RVA = "0x4ACA140", Offset = "0x4ACA140", VA = "0x4ACA140")]
	[UnityEngine.Bindings.FreeFunction("PlayerConnection_Bindings::Initialize")]
	private static extern void Initialize();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000915")]
	[Address(RVA = "0x4ACA040", Offset = "0x4ACA040", VA = "0x4ACA040")]
	[UnityEngine.Bindings.FreeFunction("PlayerConnection_Bindings::RegisterInternal")]
	private static extern void RegisterInternal(string messageId);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000916")]
	[Address(RVA = "0x4ACA0E0", Offset = "0x4ACA0E0", VA = "0x4ACA0E0")]
	[UnityEngine.Bindings.FreeFunction("PlayerConnection_Bindings::UnregisterInternal")]
	private static extern void UnregisterInternal(string messageId);

	[Token(Token = "0x6000917")]
	[Address(RVA = "0x4AC9CE0", Offset = "0x4AC9CE0", VA = "0x4AC9CE0")]
	[UnityEngine.Bindings.FreeFunction("PlayerConnection_Bindings::SendMessage")]
	private static void SendMessage(string messageId, byte[] data, int playerId)
	{
	}

	[Token(Token = "0x6000918")]
	[Address(RVA = "0x4AC9EA0", Offset = "0x4AC9EA0", VA = "0x4AC9EA0")]
	[UnityEngine.Bindings.FreeFunction("PlayerConnection_Bindings::TrySendMessage")]
	private static bool TrySendMessage(string messageId, byte[] data, int playerId)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000919")]
	[Address(RVA = "0x4AC9FA0", Offset = "0x4AC9FA0", VA = "0x4AC9FA0")]
	[UnityEngine.Bindings.FreeFunction("PlayerConnection_Bindings::PollInternal")]
	private static extern void PollInternal();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600091A")]
	[Address(RVA = "0x4ACA200", Offset = "0x4ACA200", VA = "0x4ACA200")]
	[UnityEngine.Bindings.FreeFunction("PlayerConnection_Bindings::DisconnectAll")]
	private static extern void DisconnectAll();

	[Token(Token = "0x600091B")]
	[Address(RVA = "0x4ACA2B0", Offset = "0x4ACA2B0", VA = "0x4ACA2B0")]
	public PlayerConnectionInternal()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600091C")]
	[Address(RVA = "0x4ACA230", Offset = "0x4ACA230", VA = "0x4ACA230")]
	private static extern void SendMessage_Injected(string messageId, ref ManagedSpanWrapper data, int playerId);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600091D")]
	[Address(RVA = "0x4ACA270", Offset = "0x4ACA270", VA = "0x4ACA270")]
	private static extern bool TrySendMessage_Injected(string messageId, ref ManagedSpanWrapper data, int playerId);
}
