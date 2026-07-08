using Il2CppDummyDll;
using Utility;

namespace Map;

[Token(Token = "0x2000248")]
public class MapScriptReflectiveMaterial : MapScriptBasicMaterial
{
	[Token(Token = "0x4000CAC")]
	[FieldOffset(Offset = "0x38")]
	[Order(6)]
	public Color255 ReflectColor;

	[Token(Token = "0x6000DA9")]
	[Address(RVA = "0x3C9F3E0", Offset = "0x3C9F3E0", VA = "0x3C9F3E0")]
	public MapScriptReflectiveMaterial()
	{
	}
}
