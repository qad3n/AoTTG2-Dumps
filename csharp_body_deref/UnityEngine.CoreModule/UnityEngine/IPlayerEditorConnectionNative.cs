// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.IPlayerEditorConnectionNative
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000153")]
internal interface IPlayerEditorConnectionNative
{
	[Token(Token = "0x6000C0C")]
	void Initialize();

	[Token(Token = "0x6000C0D")]
	void DisconnectAll();

	[Token(Token = "0x6000C0E")]
	void SendMessage(Guid messageId, byte[] data, int playerId);

	[Token(Token = "0x6000C0F")]
	bool TrySendMessage(Guid messageId, byte[] data, int playerId);

	[Token(Token = "0x6000C10")]
	void Poll();

	[Token(Token = "0x6000C11")]
	void RegisterInternal(Guid messageId);

	[Token(Token = "0x6000C12")]
	void UnregisterInternal(Guid messageId);

	[Token(Token = "0x6000C13")]
	bool IsConnected();
}
