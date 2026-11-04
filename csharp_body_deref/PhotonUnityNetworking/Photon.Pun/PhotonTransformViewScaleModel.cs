// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.PhotonTransformViewScaleModel
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/Code/Views/PhotonTransformViewClassic.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Photon.Pun;

[Serializable]
[Token(Token = "0x200003C")]
public class PhotonTransformViewScaleModel
{
	[Token(Token = "0x200003D")]
	public enum InterpolateOptions
	{
		[Token(Token = "0x4000148")]
		Disabled,
		[Token(Token = "0x4000149")]
		MoveTowards,
		[Token(Token = "0x400014A")]
		Lerp
	}

	[Token(Token = "0x4000143")]
	[FieldOffset(Offset = "0x10")]
	public bool SynchronizeEnabled;

	[Token(Token = "0x4000144")]
	[FieldOffset(Offset = "0x14")]
	public InterpolateOptions InterpolateOption;

	[Token(Token = "0x4000145")]
	[FieldOffset(Offset = "0x18")]
	public float InterpolateMoveTowardsSpeed;

	[Token(Token = "0x4000146")]
	[FieldOffset(Offset = "0x1C")]
	public float InterpolateLerpSpeed;

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x1D668C0", Offset = "0x1D64EC0", VA = "0x181D668C0")]
	public PhotonTransformViewScaleModel()
	{
	}
}
