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

[Token(Token = "0x2000154")]
internal interface IPlayerEditorConnectionNative
{
	[Token(Token = "0x6000C1E")]
	void Initialize();

	[Token(Token = "0x6000C1F")]
	void DisconnectAll();

	[Token(Token = "0x6000C20")]
	void SendMessage(Guid messageId, byte[] data, int playerId);

	[Token(Token = "0x6000C21")]
	bool TrySendMessage(Guid messageId, byte[] data, int playerId);

	[Token(Token = "0x6000C22")]
	void Poll();

	[Token(Token = "0x6000C23")]
	void RegisterInternal(Guid messageId);

	[Token(Token = "0x6000C24")]
	void UnregisterInternal(Guid messageId);

	[Token(Token = "0x6000C25")]
	bool IsConnected();
}
