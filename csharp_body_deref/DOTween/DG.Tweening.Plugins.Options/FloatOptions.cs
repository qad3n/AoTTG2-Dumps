using Il2CppDummyDll;

namespace DG.Tweening.Plugins.Options;

[Token(Token = "0x200008F")]
public struct FloatOptions : IPlugOptions
{
	[Token(Token = "0x400018A")]
	[FieldOffset(Offset = "0x0")]
	public bool snapping;

	[Token(Token = "0x6000377")]
	[Address(RVA = "0x2319010", Offset = "0x2319010", VA = "0x2319010", Slot = "4")]
	public void Reset()
	{
	}
}
