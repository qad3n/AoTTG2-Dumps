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

[Token(Token = "0x2000127")]
internal interface IPlayerEditorConnectionNative
{
	[Token(Token = "0x6000905")]
	void Initialize();

	[Token(Token = "0x6000906")]
	void DisconnectAll();

	[Token(Token = "0x6000907")]
	void SendMessage(Guid messageId, byte[] data, int playerId);

	[Token(Token = "0x6000908")]
	bool TrySendMessage(Guid messageId, byte[] data, int playerId);

	[Token(Token = "0x6000909")]
	void Poll();

	[Token(Token = "0x600090A")]
	void RegisterInternal(Guid messageId);

	[Token(Token = "0x600090B")]
	void UnregisterInternal(Guid messageId);

	[Token(Token = "0x600090C")]
	bool IsConnected();
}
