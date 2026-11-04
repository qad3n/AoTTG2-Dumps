// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.PhotonTransformViewRotationModel
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/Code/Views/PhotonTransformViewClassic.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Photon.Pun;

[Serializable]
[Token(Token = "0x2000039")]
public class PhotonTransformViewRotationModel
{
	[Token(Token = "0x200003A")]
	public enum InterpolateOptions
	{
		[Token(Token = "0x400013E")]
		Disabled,
		[Token(Token = "0x400013F")]
		RotateTowards,
		[Token(Token = "0x4000140")]
		Lerp
	}

	[Token(Token = "0x4000139")]
	[FieldOffset(Offset = "0x10")]
	public bool SynchronizeEnabled;

	[Token(Token = "0x400013A")]
	[FieldOffset(Offset = "0x14")]
	public InterpolateOptions InterpolateOption;

	[Token(Token = "0x400013B")]
	[FieldOffset(Offset = "0x18")]
	public float InterpolateRotateTowardsSpeed;

	[Token(Token = "0x400013C")]
	[FieldOffset(Offset = "0x1C")]
	public float InterpolateLerpSpeed;

	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x1D66560", Offset = "0x1D64B60", VA = "0x181D66560")]
	public PhotonTransformViewRotationModel()
	{
	}
}
