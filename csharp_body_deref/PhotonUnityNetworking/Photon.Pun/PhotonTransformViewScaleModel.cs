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
[Token(Token = "0x200003E")]
public class PhotonTransformViewScaleModel
{
	[Token(Token = "0x200003F")]
	public enum InterpolateOptions
	{
		[Token(Token = "0x400014D")]
		Disabled,
		[Token(Token = "0x400014E")]
		MoveTowards,
		[Token(Token = "0x400014F")]
		Lerp
	}

	[Token(Token = "0x4000148")]
	[FieldOffset(Offset = "0x10")]
	public bool SynchronizeEnabled;

	[Token(Token = "0x4000149")]
	[FieldOffset(Offset = "0x14")]
	public InterpolateOptions InterpolateOption;

	[Token(Token = "0x400014A")]
	[FieldOffset(Offset = "0x18")]
	public float InterpolateMoveTowardsSpeed;

	[Token(Token = "0x400014B")]
	[FieldOffset(Offset = "0x1C")]
	public float InterpolateLerpSpeed;

	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x3F14740", Offset = "0x3F14740", VA = "0x3F14740")]
	public PhotonTransformViewScaleModel()
	{
	}
}
