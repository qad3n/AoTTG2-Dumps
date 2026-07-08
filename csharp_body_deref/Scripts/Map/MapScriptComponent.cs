using System.Collections.Generic;
using Il2CppDummyDll;
using Utility;

namespace Map;

[Token(Token = "0x200023F")]
public class MapScriptComponent : BaseCSVRowItem
{
	[Token(Token = "0x4000C99")]
	[FieldOffset(Offset = "0x10")]
	[Order(1)]
	public string ComponentName;

	[Token(Token = "0x4000C9A")]
	[FieldOffset(Offset = "0x18")]
	[Order(2)]
	public List<string> Parameters;

	[Token(Token = "0x6000D9B")]
	[Address(RVA = "0x3C9AC70", Offset = "0x3C9AC70", VA = "0x3C9AC70")]
	public MapScriptComponent()
	{
	}
}
