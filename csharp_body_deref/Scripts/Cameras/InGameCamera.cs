using System.Collections.Generic;
using Characters;
using GameManagers;
using Il2CppDummyDll;
using Settings;
using UI;
using UnityEngine;
using Utility;

namespace Cameras;

[Token(Token = "0x20006B8")]
internal class InGameCamera : BaseCamera
{
	[Token(Token = "0x20006B9")]
	public enum SpecateMode
	{
		[Token(Token = "0x40020A5")]
		LiveSpectate,
		[Token(Token = "0x40020A6")]
		OrbitSpectate,
		[Token(Token = "0x40020A7")]
		FreeCam
	}

	[Token(Token = "0x400208D")]
	[FieldOffset(Offset = "0x38")]
	public BaseCharacter _follow;

	[Token(Token = "0x400208E")]
	[FieldOffset(Offset = "0x40")]
	public Cycle<SpecateMode> SpecMode;

	[Token(Token = "0x400208F")]
	[FieldOffset(Offset = "0x48")]
	private InGameManager _inGameManager;

	[Token(Token = "0x4002090")]
	[FieldOffset(Offset = "0x50")]
	private InGameMenu _menu;

	[Token(Token = "0x4002091")]
	[FieldOffset(Offset = "0x58")]
	private GeneralInputSettings _input;

	[Token(Token = "0x4002092")]
	[FieldOffset(Offset = "0x60")]
	private CameraDetection _detection;

	[Token(Token = "0x4002093")]
	[FieldOffset(Offset = "0x68")]
	public CameraInputMode CurrentCameraMode;

	[Token(Token = "0x4002094")]
	[FieldOffset(Offset = "0x6C")]
	public float _cameraDistance;

	[Token(Token = "0x4002095")]
	[FieldOffset(Offset = "0x70")]
	private float _heightDistance;

	[Token(Token = "0x4002096")]
	[FieldOffset(Offset = "0x74")]
	private float _anchorDistance;

	[Token(Token = "0x4002097")]
	private const float DistanceMultiplier = 10f;

	[Token(Token = "0x4002098")]
	[FieldOffset(Offset = "0x78")]
	private bool _napeLock;

	[Token(Token = "0x4002099")]
	[FieldOffset(Offset = "0x80")]
	private BaseTitan _napeLockTitan;

	[Token(Token = "0x400209A")]
	[FieldOffset(Offset = "0x88")]
	private SnapshotHandler _snapshotHandler;

	[Token(Token = "0x400209B")]
	private const float ShakeDistance = 10f;

	[Token(Token = "0x400209C")]
	private const float ShakeDuration = 1f;

	[Token(Token = "0x400209D")]
	private const float ShakeDecay = 0.15f;

	[Token(Token = "0x400209E")]
	[FieldOffset(Offset = "0x90")]
	private bool _shakeFlip;

	[Token(Token = "0x400209F")]
	[FieldOffset(Offset = "0x94")]
	private float _shakeTimeLeft;

	[Token(Token = "0x40020A0")]
	[FieldOffset(Offset = "0x98")]
	private float _currentShakeDistance;

	[Token(Token = "0x40020A1")]
	[FieldOffset(Offset = "0x0")]
	private static LayerMask _clipMask;

	[Token(Token = "0x40020A2")]
	[FieldOffset(Offset = "0x9C")]
	private bool _freeCam;

	[Token(Token = "0x40020A3")]
	[FieldOffset(Offset = "0xA0")]
	private float _lastChangeSpectateID;

	[Token(Token = "0x6004308")]
	[Address(RVA = "0x40432F0", Offset = "0x40432F0", VA = "0x40432F0")]
	private bool CheckSpectateRateLimit()
	{
		return default(bool);
	}

	[Token(Token = "0x6004309")]
	[Address(RVA = "0x4043340", Offset = "0x4043340", VA = "0x4043340")]
	public void SetCameraDistance(float distance)
	{
	}

	[Token(Token = "0x600430A")]
	[Address(RVA = "0x4043350", Offset = "0x4043350", VA = "0x4043350")]
	public void ApplyGraphicsSettings()
	{
	}

	[Token(Token = "0x600430B")]
	[Address(RVA = "0x4043470", Offset = "0x4043470", VA = "0x4043470")]
	public void ApplyGeneralSettings()
	{
	}

	[Token(Token = "0x600430C")]
	[Address(RVA = "0x40434E0", Offset = "0x40434E0", VA = "0x40434E0")]
	public void ResetDistance()
	{
	}

	[Token(Token = "0x600430D")]
	[Address(RVA = "0x4043630", Offset = "0x4043630", VA = "0x4043630")]
	public void ResetCameraMode()
	{
	}

	[Token(Token = "0x600430E")]
	[Address(RVA = "0x4043690", Offset = "0x4043690", VA = "0x4043690")]
	public float GetCameraDistance()
	{
		return default(float);
	}

	[Token(Token = "0x600430F")]
	[Address(RVA = "0x4043790", Offset = "0x4043790", VA = "0x4043790")]
	public void StartShake()
	{
	}

	[Token(Token = "0x6004310")]
	[Address(RVA = "0x40437B0", Offset = "0x40437B0", VA = "0x40437B0", Slot = "6")]
	protected override void SetDefaultCameraPosition()
	{
	}

	[Token(Token = "0x6004311")]
	[Address(RVA = "0x40439A0", Offset = "0x40439A0", VA = "0x40439A0")]
	public void SetFollow(BaseCharacter character, bool resetRotation = true)
	{
	}

	[Token(Token = "0x6004312")]
	[Address(RVA = "0x40443B0", Offset = "0x40443B0", VA = "0x40443B0", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6004313")]
	[Address(RVA = "0x40444F0", Offset = "0x40444F0", VA = "0x40444F0")]
	public void TakeSnapshot(Vector3 position, int damage)
	{
	}

	[Token(Token = "0x6004314")]
	[Address(RVA = "0x4044590", Offset = "0x4044590", VA = "0x4044590")]
	protected void Start()
	{
	}

	[Token(Token = "0x6004315")]
	[Address(RVA = "0x4044750", Offset = "0x4044750", VA = "0x4044750")]
	public void SyncCustomPosition()
	{
	}

	[Token(Token = "0x6004316")]
	[Address(RVA = "0x4044880", Offset = "0x4044880", VA = "0x4044880")]
	private void UpdateMapLights()
	{
	}

	[Token(Token = "0x6004317")]
	[Address(RVA = "0x4044A10", Offset = "0x4044A10", VA = "0x4044A10")]
	protected void FixedUpdate()
	{
	}

	[Token(Token = "0x6004318")]
	[Address(RVA = "0x4044A40", Offset = "0x4044A40", VA = "0x4044A40", Slot = "7")]
	protected override void LateUpdate()
	{
	}

	[Token(Token = "0x6004319")]
	[Address(RVA = "0x4047710", Offset = "0x4047710", VA = "0x4047710")]
	private void UpdateNapeLockImage()
	{
	}

	[Token(Token = "0x600431A")]
	[Address(RVA = "0x4044FF0", Offset = "0x4044FF0", VA = "0x4044FF0")]
	private void UpdateMain()
	{
	}

	[Token(Token = "0x600431B")]
	[Address(RVA = "0x4046060", Offset = "0x4046060", VA = "0x4046060")]
	private void UpdateSpectate()
	{
	}

	[Token(Token = "0x600431C")]
	[Address(RVA = "0x4046D40", Offset = "0x4046D40", VA = "0x4046D40")]
	private void UpdateFreeCam()
	{
	}

	[Token(Token = "0x600431D")]
	[Address(RVA = "0x4047FD0", Offset = "0x4047FD0", VA = "0x4047FD0")]
	private float GetHeightDistance()
	{
		return default(float);
	}

	[Token(Token = "0x600431E")]
	[Address(RVA = "0x4046A90", Offset = "0x4046A90", VA = "0x4046A90")]
	private void UpdateObstacles()
	{
	}

	[Token(Token = "0x600431F")]
	[Address(RVA = "0x4047320", Offset = "0x4047320", VA = "0x4047320")]
	private void UpdateFOV()
	{
	}

	[Token(Token = "0x6004320")]
	[Address(RVA = "0x4044F70", Offset = "0x4044F70", VA = "0x4044F70")]
	private void FindNextSpectate()
	{
	}

	[Token(Token = "0x6004321")]
	[Address(RVA = "0x4048990", Offset = "0x4048990", VA = "0x4048990")]
	private int GetSpectateIndex(List<BaseCharacter> characters)
	{
		return default(int);
	}

	[Token(Token = "0x6004322")]
	[Address(RVA = "0x4048090", Offset = "0x4048090", VA = "0x4048090")]
	private float GetSensitivityDeltaTime(float sensitivity)
	{
		return default(float);
	}

	[Token(Token = "0x6004323")]
	[Address(RVA = "0x4047970", Offset = "0x4047970", VA = "0x4047970")]
	private BaseTitan GetNearestTitan()
	{
		return null;
	}

	[Token(Token = "0x6004324")]
	[Address(RVA = "0x40481E0", Offset = "0x40481E0", VA = "0x40481E0")]
	private List<BaseCharacter> GetSortedCharacters()
	{
		return null;
	}

	[Token(Token = "0x6004325")]
	[Address(RVA = "0x40480B0", Offset = "0x40480B0", VA = "0x40480B0")]
	private void UpdateShake()
	{
	}

	[Token(Token = "0x6004326")]
	[Address(RVA = "0x4048A90", Offset = "0x4048A90", VA = "0x4048A90")]
	public InGameCamera()
	{
	}
}
