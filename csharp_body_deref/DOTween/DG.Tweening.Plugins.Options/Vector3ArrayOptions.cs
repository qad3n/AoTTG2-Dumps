// ==================== AoTTG2 cross-reference ====================
// Type: DG.Tweening.Plugins.Options.Vector3ArrayOptions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x237F8B0", Offset = "0x237F8B0", VA = "0x237F8B0", Slot = "4")]
	public void Reset()
	{
	}
}
