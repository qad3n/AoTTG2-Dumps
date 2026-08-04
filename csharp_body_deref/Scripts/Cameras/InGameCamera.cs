// ==================== AoTTG2 cross-reference ====================
// Type: Cameras.InGameCamera
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Cameras/InGameCamera.c
// Prior real C# source (older reference): Assets/Scripts/Cameras/InGameCamera.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Characters;
using GameManagers;
using Il2CppDummyDll;
using Settings;
using UI;
using UnityEngine;
using Utility;

namespace Cameras;

[Token(Token = "0x2000706")]
internal class InGameCamera : BaseCamera
{
	[Token(Token = "0x2000707")]
	public enum SpecateMode
	{
		[Token(Token = "0x4002202")]
		LiveSpectate,
		[Token(Token = "0x4002203")]
		OrbitSpectate,
		[Token(Token = "0x4002204")]
		FreeCam
	}

	[Token(Token = "0x40021EA")]
	[FieldOffset(Offset = "0x38")]
	public BaseCharacter _follow;

	[Token(Token = "0x40021EB")]
	[FieldOffset(Offset = "0x40")]
	public Cycle<SpecateMode> SpecMode;

	[Token(Token = "0x40021EC")]
	[FieldOffset(Offset = "0x48")]
	private InGameManager _inGameManager;

	[Token(Token = "0x40021ED")]
	[FieldOffset(Offset = "0x50")]
	private InGameMenu _menu;

	[Token(Token = "0x40021EE")]
	[FieldOffset(Offset = "0x58")]
	private GeneralInputSettings _input;

	[Token(Token = "0x40021EF")]
	[FieldOffset(Offset = "0x60")]
	private CameraDetection _detection;

	[Token(Token = "0x40021F0")]
	[FieldOffset(Offset = "0x68")]
	public CameraInputMode CurrentCameraMode;

	[Token(Token = "0x40021F1")]
	[FieldOffset(Offset = "0x6C")]
	public float _cameraDistance;

	[Token(Token = "0x40021F2")]
	[FieldOffset(Offset = "0x70")]
	private float _heightDistance;

	[Token(Token = "0x40021F3")]
	[FieldOffset(Offset = "0x74")]
	private float _anchorDistance;

	[Token(Token = "0x40021F4")]
	private const float DistanceMultiplier = 10f;

	[Token(Token = "0x40021F5")]
	[FieldOffset(Offset = "0x78")]
	private bool _napeLock;

	[Token(Token = "0x40021F6")]
	[FieldOffset(Offset = "0x80")]
	private BaseTitan _napeLockTitan;

	[Token(Token = "0x40021F7")]
	[FieldOffset(Offset = "0x88")]
	private SnapshotHandler _snapshotHandler;

	[Token(Token = "0x40021F8")]
	private const float ShakeDistance = 10f;

	[Token(Token = "0x40021F9")]
	private const float ShakeDuration = 1f;

	[Token(Token = "0x40021FA")]
	private const float ShakeDecay = 0.15f;

	[Token(Token = "0x40021FB")]
	[FieldOffset(Offset = "0x90")]
	private bool _shakeFlip;

	[Token(Token = "0x40021FC")]
	[FieldOffset(Offset = "0x94")]
	private float _shakeTimeLeft;

	[Token(Token = "0x40021FD")]
	[FieldOffset(Offset = "0x98")]
	private float _currentShakeDistance;

	[Token(Token = "0x40021FE")]
	[FieldOffset(Offset = "0x0")]
	private static LayerMask _clipMask;

	[Token(Token = "0x40021FF")]
	[FieldOffset(Offset = "0x9C")]
	private bool _freeCam;

	[Token(Token = "0x4002200")]
	[FieldOffset(Offset = "0xA0")]
	private float _lastChangeSpectateID;

	[Token(Token = "0x6004570")]
	[Address(RVA = "0x4376300", Offset = "0x4376300", VA = "0x4376300")]
	private bool CheckSpectateRateLimit()
	{
		return default(bool);
	}

	[Token(Token = "0x6004571")]
	[Address(RVA = "0x4376350", Offset = "0x4376350", VA = "0x4376350")]
	public void SetCameraDistance(float distance)
	{
	}

	[Token(Token = "0x6004572")]
	[Address(RVA = "0x4376360", Offset = "0x4376360", VA = "0x4376360")]
	public void ApplyGraphicsSettings()
	{
	}

	[Token(Token = "0x6004573")]
	[Address(RVA = "0x4376480", Offset = "0x4376480", VA = "0x4376480")]
	public void ApplyGeneralSettings()
	{
	}

	[Token(Token = "0x6004574")]
	[Address(RVA = "0x43764F0", Offset = "0x43764F0", VA = "0x43764F0")]
	public void ResetDistance()
	{
	}

	[Token(Token = "0x6004575")]
	[Address(RVA = "0x4376640", Offset = "0x4376640", VA = "0x4376640")]
	public void ResetCameraMode()
	{
	}

	[Token(Token = "0x6004576")]
	[Address(RVA = "0x43766A0", Offset = "0x43766A0", VA = "0x43766A0")]
	public float GetCameraDistance()
	{
		return default(float);
	}

	[Token(Token = "0x6004577")]
	[Address(RVA = "0x43767A0", Offset = "0x43767A0", VA = "0x43767A0")]
	public void StartShake()
	{
	}

	[Token(Token = "0x6004578")]
	[Address(RVA = "0x43767C0", Offset = "0x43767C0", VA = "0x43767C0", Slot = "6")]
	protected override void SetDefaultCameraPosition()
	{
	}

	[Token(Token = "0x6004579")]
	[Address(RVA = "0x43769B0", Offset = "0x43769B0", VA = "0x43769B0")]
	public void SetFollow(BaseCharacter character, bool resetRotation = true)
	{
	}

	[Token(Token = "0x600457A")]
	[Address(RVA = "0x43773C0", Offset = "0x43773C0", VA = "0x43773C0", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x600457B")]
	[Address(RVA = "0x4377500", Offset = "0x4377500", VA = "0x4377500")]
	public void TakeSnapshot(Vector3 position, int damage)
	{
	}

	[Token(Token = "0x600457C")]
	[Address(RVA = "0x43775A0", Offset = "0x43775A0", VA = "0x43775A0")]
	protected void Start()
	{
	}

	[Token(Token = "0x600457D")]
	[Address(RVA = "0x4377760", Offset = "0x4377760", VA = "0x4377760")]
	public void SyncCustomPosition()
	{
	}

	[Token(Token = "0x600457E")]
	[Address(RVA = "0x4377890", Offset = "0x4377890", VA = "0x4377890")]
	private void UpdateMapLights()
	{
	}

	[Token(Token = "0x600457F")]
	[Address(RVA = "0x4377A20", Offset = "0x4377A20", VA = "0x4377A20")]
	protected void FixedUpdate()
	{
	}

	[Token(Token = "0x6004580")]
	[Address(RVA = "0x4377A50", Offset = "0x4377A50", VA = "0x4377A50", Slot = "7")]
	protected override void LateUpdate()
	{
	}

	[Token(Token = "0x6004581")]
	[Address(RVA = "0x437A720", Offset = "0x437A720", VA = "0x437A720")]
	private void UpdateNapeLockImage()
	{
	}

	[Token(Token = "0x6004582")]
	[Address(RVA = "0x4378000", Offset = "0x4378000", VA = "0x4378000")]
	private void UpdateMain()
	{
	}

	[Token(Token = "0x6004583")]
	[Address(RVA = "0x4379070", Offset = "0x4379070", VA = "0x4379070")]
	private void UpdateSpectate()
	{
	}

	[Token(Token = "0x6004584")]
	[Address(RVA = "0x4379D50", Offset = "0x4379D50", VA = "0x4379D50")]
	private void UpdateFreeCam()
	{
	}

	[Token(Token = "0x6004585")]
	[Address(RVA = "0x437AFE0", Offset = "0x437AFE0", VA = "0x437AFE0")]
	private float GetHeightDistance()
	{
		return default(float);
	}

	[Token(Token = "0x6004586")]
	[Address(RVA = "0x4379AA0", Offset = "0x4379AA0", VA = "0x4379AA0")]
	private void UpdateObstacles()
	{
	}

	[Token(Token = "0x6004587")]
	[Address(RVA = "0x437A330", Offset = "0x437A330", VA = "0x437A330")]
	private void UpdateFOV()
	{
	}

	[Token(Token = "0x6004588")]
	[Address(RVA = "0x4377F80", Offset = "0x4377F80", VA = "0x4377F80")]
	private void FindNextSpectate()
	{
	}

	[Token(Token = "0x6004589")]
	[Address(RVA = "0x437B9A0", Offset = "0x437B9A0", VA = "0x437B9A0")]
	private int GetSpectateIndex(List<BaseCharacter> characters)
	{
		return default(int);
	}

	[Token(Token = "0x600458A")]
	[Address(RVA = "0x437B0A0", Offset = "0x437B0A0", VA = "0x437B0A0")]
	private float GetSensitivityDeltaTime(float sensitivity)
	{
		return default(float);
	}

	[Token(Token = "0x600458B")]
	[Address(RVA = "0x437A980", Offset = "0x437A980", VA = "0x437A980")]
	private BaseTitan GetNearestTitan()
	{
		return null;
	}

	[Token(Token = "0x600458C")]
	[Address(RVA = "0x437B1F0", Offset = "0x437B1F0", VA = "0x437B1F0")]
	private List<BaseCharacter> GetSortedCharacters()
	{
		return null;
	}

	[Token(Token = "0x600458D")]
	[Address(RVA = "0x437B0C0", Offset = "0x437B0C0", VA = "0x437B0C0")]
	private void UpdateShake()
	{
	}

	[Token(Token = "0x600458E")]
	[Address(RVA = "0x437BAA0", Offset = "0x437BAA0", VA = "0x437BAA0")]
	public InGameCamera()
	{
	}
}
