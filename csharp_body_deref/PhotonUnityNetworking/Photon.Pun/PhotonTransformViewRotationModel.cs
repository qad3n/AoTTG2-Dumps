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
[Token(Token = "0x200003B")]
public class PhotonTransformViewRotationModel
{
	[Token(Token = "0x200003C")]
	public enum InterpolateOptions
	{
		[Token(Token = "0x4000143")]
		Disabled,
		[Token(Token = "0x4000144")]
		RotateTowards,
		[Token(Token = "0x4000145")]
		Lerp
	}

	[Token(Token = "0x400013E")]
	[FieldOffset(Offset = "0x10")]
	public bool SynchronizeEnabled;

	[Token(Token = "0x400013F")]
	[FieldOffset(Offset = "0x14")]
	public InterpolateOptions InterpolateOption;

	[Token(Token = "0x4000140")]
	[FieldOffset(Offset = "0x18")]
	public float InterpolateRotateTowardsSpeed;

	[Token(Token = "0x4000141")]
	[FieldOffset(Offset = "0x1C")]
	public float InterpolateLerpSpeed;

	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x3F14720", Offset = "0x3F14720", VA = "0x3F14720")]
	public PhotonTransformViewRotationModel()
	{
	}
}
