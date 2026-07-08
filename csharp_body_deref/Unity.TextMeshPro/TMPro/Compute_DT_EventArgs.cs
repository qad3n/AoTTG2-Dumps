using Il2CppDummyDll;
using UnityEngine;

namespace TMPro;

[Token(Token = "0x2000093")]
public class Compute_DT_EventArgs
{
	[Token(Token = "0x4000528")]
	[FieldOffset(Offset = "0x10")]
	public Compute_DistanceTransform_EventTypes EventType;

	[Token(Token = "0x4000529")]
	[FieldOffset(Offset = "0x14")]
	public float ProgressPercentage;

	[Token(Token = "0x400052A")]
	[FieldOffset(Offset = "0x18")]
	public Color[] Colors;

	[Token(Token = "0x600056D")]
	[Address(RVA = "0x4966910", Offset = "0x4966910", VA = "0x4966910")]
	public Compute_DT_EventArgs(Compute_DistanceTransform_EventTypes type, float progress)
	{
	}

	[Token(Token = "0x600056E")]
	[Address(RVA = "0x4966940", Offset = "0x4966940", VA = "0x4966940")]
	public Compute_DT_EventArgs(Compute_DistanceTransform_EventTypes type, Color[] colors)
	{
	}
}
