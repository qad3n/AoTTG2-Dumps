// ==================== AoTTG2 cross-reference ====================
// Type: Characters.CameraDetection
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Characters/CameraDetection.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Detection/CameraDetection.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Cameras;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20006A0")]
internal class CameraDetection : BaseDetection
{
	[Token(Token = "0x4001DF2")]
	[FieldOffset(Offset = "0x78")]
	private InGameCamera _camera;

	[Token(Token = "0x4001DF3")]
	[FieldOffset(Offset = "0x80")]
	private BaseCharacter _follow;

	[Token(Token = "0x4001DF4")]
	[FieldOffset(Offset = "0x88")]
	private Vector3 _followPosition;

	[Token(Token = "0x4001DF5")]
	[FieldOffset(Offset = "0x94")]
	private bool _hasFollow;

	[Token(Token = "0x17000B1E")]
	protected override bool RequireValidTarget
	{
		[Token(Token = "0x6004056")]
		[Address(RVA = "0x5AE5EF0", Offset = "0x5AE4EF0", VA = "0x5AE5EF0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004055")]
	[Address(RVA = "0x5AE5EC0", Offset = "0x5AE4EC0", VA = "0x5AE5EC0")]
	public CameraDetection(InGameCamera camera)
	{
	}

	[Token(Token = "0x6004057")]
	[Address(RVA = "0x5AE5F00", Offset = "0x5AE4F00", VA = "0x5AE5F00", Slot = "5")]
	public override bool IsNullOrDead()
	{
		return default(bool);
	}

	[Token(Token = "0x6004058")]
	[Address(RVA = "0x5AE5F10", Offset = "0x5AE4F10", VA = "0x5AE5F10", Slot = "6")]
	public override void OnFixedUpdate()
	{
	}

	[Token(Token = "0x6004059")]
	[Address(RVA = "0x5AE5FD0", Offset = "0x5AE4FD0", VA = "0x5AE5FD0", Slot = "8")]
	protected override Vector3 GetPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x600405A")]
	[Address(RVA = "0x5AE6000", Offset = "0x5AE5000", VA = "0x5AE6000", Slot = "7")]
	protected override float GetSpeed()
	{
		return default(float);
	}

	[Token(Token = "0x600405B")]
	[Address(RVA = "0x5AE6030", Offset = "0x5AE5030", VA = "0x5AE6030")]
	public void RefreshFollow()
	{
	}

	[Token(Token = "0x600405C")]
	[Address(RVA = "0x5AE60D0", Offset = "0x5AE50D0", VA = "0x5AE60D0", Slot = "9")]
	protected override void OnRecalculate(BaseCharacter character, float distance)
	{
	}

	[Token(Token = "0x600405D")]
	[Address(RVA = "0x5AE6290", Offset = "0x5AE5290", VA = "0x5AE6290")]
	private float GetSoundDistance(BaseCharacter character, float cameraDistance)
	{
		return default(float);
	}
}
