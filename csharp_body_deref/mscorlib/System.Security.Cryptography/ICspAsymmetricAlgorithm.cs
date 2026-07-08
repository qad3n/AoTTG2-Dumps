using Il2CppDummyDll;

namespace System.Security.Cryptography;

[Token(Token = "0x20002B8")]
public interface ICspAsymmetricAlgorithm
{
	[Token(Token = "0x17000270")]
	CspKeyContainerInfo CspKeyContainerInfo
	{
		[Token(Token = "0x60017FB")]
		get;
	}

	[Token(Token = "0x60017FC")]
	byte[] ExportCspBlob(bool includePrivateParameters);

	[Token(Token = "0x60017FD")]
	void ImportCspBlob(byte[] rawData);
}
