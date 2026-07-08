using System.IO;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Token(Token = "0x20003DD")]
[ComVisible(true)]
public interface IFormatter
{
	[Token(Token = "0x6001F7D")]
	object Deserialize(Stream serializationStream);
}
