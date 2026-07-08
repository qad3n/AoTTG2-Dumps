using System.Collections;
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Token(Token = "0x200041E")]
internal sealed class SerObjectInfoInit
{
	[Token(Token = "0x4001181")]
	[FieldOffset(Offset = "0x10")]
	internal Hashtable seenBeforeTable;

	[Token(Token = "0x4001182")]
	[FieldOffset(Offset = "0x18")]
	internal int objectInfoIdCount;

	[Token(Token = "0x4001183")]
	[FieldOffset(Offset = "0x20")]
	internal System.Runtime.Serialization.Formatters.Binary.SerStack oiPool;

	[Token(Token = "0x6002109")]
	[Address(RVA = "0x4EC8280", Offset = "0x4EC8280", VA = "0x4EC8280")]
	public SerObjectInfoInit()
	{
	}
}
