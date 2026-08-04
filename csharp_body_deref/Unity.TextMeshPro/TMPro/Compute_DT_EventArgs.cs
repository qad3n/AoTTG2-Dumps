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

[Token(Token = "0x2000014")]
public class Compute_DT_EventArgs
{
	[Token(Token = "0x4000098")]
	[FieldOffset(Offset = "0x10")]
	public Compute_DistanceTransform_EventTypes EventType;

	[Token(Token = "0x4000099")]
	[FieldOffset(Offset = "0x14")]
	public float ProgressPercentage;

	[Token(Token = "0x400009A")]
	[FieldOffset(Offset = "0x18")]
	public Color[] Colors;

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x4C43A40", Offset = "0x4C43A40", VA = "0x4C43A40")]
	public Compute_DT_EventArgs(Compute_DistanceTransform_EventTypes type, float progress)
	{
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x4C43A70", Offset = "0x4C43A70", VA = "0x4C43A70")]
	public Compute_DT_EventArgs(Compute_DistanceTransform_EventTypes type, Color[] colors)
	{
	}
}
