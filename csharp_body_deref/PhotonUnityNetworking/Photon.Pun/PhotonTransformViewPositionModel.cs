// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.PhotonTransformViewPositionModel
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/Code/Views/PhotonTransformViewClassic.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Photon.Pun;

[Serializable]
[Token(Token = "0x2000037")]
public class PhotonTransformViewPositionModel
{
	[Token(Token = "0x2000038")]
	public enum InterpolateOptions
	{
		[Token(Token = "0x400012C")]
		Disabled,
		[Token(Token = "0x400012D")]
		FixedSpeed,
		[Token(Token = "0x400012E")]
		EstimatedSpeed,
		[Token(Token = "0x400012F")]
		SynchronizeValues,
		[Token(Token = "0x4000130")]
		Lerp
	}

	[Token(Token = "0x2000039")]
	public enum ExtrapolateOptions
	{
		[Token(Token = "0x4000132")]
		Disabled,
		[Token(Token = "0x4000133")]
		SynchronizeValues,
		[Token(Token = "0x4000134")]
		EstimateSpeedAndTurn,
		[Token(Token = "0x4000135")]
		FixedSpeed
	}

	[Token(Token = "0x4000121")]
	[FieldOffset(Offset = "0x10")]
	public bool SynchronizeEnabled;

	[Token(Token = "0x4000122")]
	[FieldOffset(Offset = "0x11")]
	public bool TeleportEnabled;

	[Token(Token = "0x4000123")]
	[FieldOffset(Offset = "0x14")]
	public float TeleportIfDistanceGreaterThan;

	[Token(Token = "0x4000124")]
	[FieldOffset(Offset = "0x18")]
	public InterpolateOptions InterpolateOption;

	[Token(Token = "0x4000125")]
	[FieldOffset(Offset = "0x1C")]
	public float InterpolateMoveTowardsSpeed;

	[Token(Token = "0x4000126")]
	[FieldOffset(Offset = "0x20")]
	public float InterpolateLerpSpeed;

	[Token(Token = "0x4000127")]
	[FieldOffset(Offset = "0x24")]
	public ExtrapolateOptions ExtrapolateOption;

	[Token(Token = "0x4000128")]
	[FieldOffset(Offset = "0x28")]
	public float ExtrapolateSpeed;

	[Token(Token = "0x4000129")]
	[FieldOffset(Offset = "0x2C")]
	public bool ExtrapolateIncludingRoundTripTime;

	[Token(Token = "0x400012A")]
	[FieldOffset(Offset = "0x30")]
	public int ExtrapolateNumberOfStoredPositions;

	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x3F146F0", Offset = "0x3F146F0", VA = "0x3F146F0")]
	public PhotonTransformViewPositionModel()
	{
	}
}
