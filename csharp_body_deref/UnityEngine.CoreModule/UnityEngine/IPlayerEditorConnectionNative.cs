using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000124")]
internal interface IPlayerEditorConnectionNative
{
	[Token(Token = "0x6000903")]
	void Initialize();

	[Token(Token = "0x6000904")]
	void DisconnectAll();

	[Token(Token = "0x6000905")]
	void SendMessage(Guid messageId, byte[] data, int playerId);

	[Token(Token = "0x6000906")]
	bool TrySendMessage(Guid messageId, byte[] data, int playerId);

	[Token(Token = "0x6000907")]
	void Poll();

	[Token(Token = "0x6000908")]
	void RegisterInternal(Guid messageId);

	[Token(Token = "0x6000909")]
	void UnregisterInternal(Guid messageId);

	[Token(Token = "0x600090A")]
	bool IsConnected();
}
