using Il2CppDummyDll;

namespace DG.Tweening.Plugins.Options;

[Token(Token = "0x200008C")]
public struct Vector3ArrayOptions : IPlugOptions
{
	[Token(Token = "0x4000186")]
	[FieldOffset(Offset = "0x0")]
	public AxisConstraint axisConstraint;

	[Token(Token = "0x4000187")]
	[FieldOffset(Offset = "0x4")]
	public bool snapping;

	[Token(Token = "0x4000188")]
	[FieldOffset(Offset = "0x8")]
	internal float[] durations;

	[Token(Token = "0x6000374")]
	[Address(RVA = "0x2318FD0", Offset = "0x2318FD0", VA = "0x2318FD0", Slot = "4")]
	public void Reset()
	{
	}
}
