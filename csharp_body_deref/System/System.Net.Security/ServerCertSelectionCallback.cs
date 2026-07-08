using System.Security.Cryptography.X509Certificates;
using Il2CppDummyDll;

namespace System.Net.Security;

[Token(Token = "0x2000238")]
internal delegate X509Certificate ServerCertSelectionCallback(string hostName);
