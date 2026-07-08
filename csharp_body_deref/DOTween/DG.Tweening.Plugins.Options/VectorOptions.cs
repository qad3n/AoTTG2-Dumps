using Il2CppDummyDll;

namespace DG.Tweening.Plugins.Options;

[Token(Token = "0x2000092")]
public struct VectorOptions : IPlugOptions
{
	[Token(Token = "0x4000191")]
	[FieldOffset(Offset = "0x0")]
	public AxisConstraint axisConstraint;

	[Token(Token = "0x4000192")]
	[FieldOffset(Offset = "0x4")]
	public bool snapping;

	[Token(Token = "0x600037A")]
	[Address(RVA = "0x2319060", Offset = "0x2319060", VA = "0x2319060", Slot = "4")]
	public void Reset()
	{
	}
}
