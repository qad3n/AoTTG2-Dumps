using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000082")]
internal class UnsupportedPlatformException : Exception
{
	[Token(Token = "0x60002CA")]
	[Address(RVA = "0x3C399F0", Offset = "0x3C399F0", VA = "0x3C399F0")]
	public UnsupportedPlatformException(string subject, [Optional] string platform)
	{
	}
}
