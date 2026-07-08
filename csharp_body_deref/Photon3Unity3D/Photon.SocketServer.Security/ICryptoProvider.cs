using System;
using Il2CppDummyDll;

namespace Photon.SocketServer.Security;

[Token(Token = "0x200005B")]
internal interface ICryptoProvider : IDisposable
{
	[Token(Token = "0x170000CC")]
	bool IsInitialized
	{
		[Token(Token = "0x60003F6")]
		get;
	}

	[Token(Token = "0x170000CD")]
	byte[] PublicKey
	{
		[Token(Token = "0x60003F7")]
		get;
	}

	[Token(Token = "0x60003F8")]
	void DeriveSharedKey(byte[] otherPartyPublicKey);

	[Token(Token = "0x60003F9")]
	byte[] Encrypt(byte[] data);

	[Token(Token = "0x60003FA")]
	byte[] Encrypt(byte[] data, int offset, int count);

	[Token(Token = "0x60003FB")]
	byte[] Decrypt(byte[] data);

	[Token(Token = "0x60003FC")]
	byte[] Decrypt(byte[] data, int offset, int count);
}
