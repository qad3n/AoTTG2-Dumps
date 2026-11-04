// ==================== AoTTG2 cross-reference ====================
// Type: TMPro.Compute_DT_EventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Token(Token = "0x20000A5")]
public class Compute_DT_EventArgs
{
	[Token(Token = "0x40005A9")]
	[FieldOffset(Offset = "0x10")]
	public Compute_DistanceTransform_EventTypes EventType;

	[Token(Token = "0x40005AA")]
	[FieldOffset(Offset = "0x14")]
	public float ProgressPercentage;

	[Token(Token = "0x40005AB")]
	[FieldOffset(Offset = "0x18")]
	public Color[] Colors;

	[Token(Token = "0x600063A")]
	[Address(RVA = "0x2D60E30", Offset = "0x2D5F430", VA = "0x182D60E30")]
	public Compute_DT_EventArgs(Compute_DistanceTransform_EventTypes type, float progress)
	{
	}

	[Token(Token = "0x600063B")]
	[Address(RVA = "0xC83FB0", Offset = "0xC825B0", VA = "0x180C83FB0")]
	public Compute_DT_EventArgs(Compute_DistanceTransform_EventTypes type, Color[] colors)
	{
	}
}
