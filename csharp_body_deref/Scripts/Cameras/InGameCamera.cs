// ==================== AoTTG2 cross-reference ====================
// Type: Cameras.InGameCamera
// Update status: CHANGED in this game update
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

[Token(Token = "0x20008EF")]
internal class InGameCamera : BaseCamera
{
	[Token(Token = "0x20008F0")]
	public enum SpecateMode
	{
		[Token(Token = "0x4002D66")]
		LiveSpectate,
		[Token(Token = "0x4002D67")]
		OrbitSpectate,
		[Token(Token = "0x4002D68")]
		FreeCam
	}

	[Token(Token = "0x4002D49")]
	[FieldOffset(Offset = "0x38")]
	public BaseCharacter _follow;

	[Token(Token = "0x4002D4A")]
	[FieldOffset(Offset = "0x40")]
	public Cycle<SpecateMode> SpecMode;

	[Token(Token = "0x4002D4B")]
	[FieldOffset(Offset = "0x48")]
	private InGameManager _inGameManager;

	[Token(Token = "0x4002D4C")]
	[FieldOffset(Offset = "0x50")]
	private InGameMenu _menu;

	[Token(Token = "0x4002D4D")]
	[FieldOffset(Offset = "0x58")]
	private GeneralInputSettings _input;

	[Token(Token = "0x4002D4E")]
	[FieldOffset(Offset = "0x60")]
	private CameraDetection _detection;

	[Token(Token = "0x4002D4F")]
	[FieldOffset(Offset = "0x68")]
	public CameraInputMode CurrentCameraMode;

	[Token(Token = "0x4002D50")]
	[FieldOffset(Offset = "0x6C")]
	public float _cameraDistance;

	[Token(Token = "0x4002D51")]
	[FieldOffset(Offset = "0x70")]
	private float _titanZoom;

	[Token(Token = "0x4002D52")]
	private const float TitanZoomStep = 0.1f;

	[Token(Token = "0x4002D53")]
	private const float MinTitanZoomDistance = 0.3f;

	[Token(Token = "0x4002D54")]
	private const float MaxTitanZoomDistance = 2f;

	[Token(Token = "0x4002D55")]
	[FieldOffset(Offset = "0x74")]
	private float _occlusionRadius;

	[Token(Token = "0x4002D56")]
	private const float OcclusionRadiusFactor = 0.45f;

	[Token(Token = "0x4002D57")]
	[FieldOffset(Offset = "0x78")]
	private float _heightDistance;

	[Token(Token = "0x4002D58")]
	[FieldOffset(Offset = "0x7C")]
	private float _anchorDistance;

	[Token(Token = "0x4002D59")]
	private const float DistanceMultiplier = 10f;

	[Token(Token = "0x4002D5A")]
	[FieldOffset(Offset = "0x80")]
	private bool _napeLock;

	[Token(Token = "0x4002D5B")]
	[FieldOffset(Offset = "0x88")]
	private BaseTitan _napeLockTitan;

	[Token(Token = "0x4002D5C")]
	[FieldOffset(Offset = "0x90")]
	private SnapshotHandler _snapshotHandler;

	[Token(Token = "0x4002D5D")]
	private const float ShakeDistance = 10f;

	[Token(Token = "0x4002D5E")]
	private const float ShakeDuration = 1f;

	[Token(Token = "0x4002D5F")]
	private const float ShakeDecay = 0.15f;

	[Token(Token = "0x4002D60")]
	[FieldOffset(Offset = "0x98")]
	private bool _shakeFlip;

	[Token(Token = "0x4002D61")]
	[FieldOffset(Offset = "0x9C")]
	private float _shakeTimeLeft;

	[Token(Token = "0x4002D62")]
	[FieldOffset(Offset = "0xA0")]
	private float _currentShakeDistance;

	[Token(Token = "0x4002D63")]
	[FieldOffset(Offset = "0x0")]
	private static LayerMask _clipMask;

	[Token(Token = "0x4002D64")]
	[FieldOffset(Offset = "0xA4")]
	private float _lastChangeSpectateID;

	[Token(Token = "0x17000ECF")]
	public bool UsesMouseLook
	{
		[Token(Token = "0x60054F6")]
		[Address(RVA = "0x5CCFDF0", Offset = "0x5CCEDF0", VA = "0x5CCFDF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60054F7")]
	[Address(RVA = "0x5CCFEF0", Offset = "0x5CCEEF0", VA = "0x5CCFEF0")]
	internal static bool ShouldUseMouseLook(CameraInputMode mode, bool originalWOWRotation, bool rotateHeld)
	{
		return default(bool);
	}

	[Token(Token = "0x60054F8")]
	[Address(RVA = "0x5CCFF20", Offset = "0x5CCEF20", VA = "0x5CCFF20")]
	private bool CheckSpectateRateLimit()
	{
		return default(bool);
	}

	[Token(Token = "0x60054F9")]
	[Address(RVA = "0x5CCFF80", Offset = "0x5CCEF80", VA = "0x5CCFF80")]
	public void SetCameraDistance(float distance)
	{
	}

	[Token(Token = "0x60054FA")]
	[Address(RVA = "0x5CCFF90", Offset = "0x5CCEF90", VA = "0x5CCFF90")]
	public void ApplyGraphicsSettings()
	{
	}

	[Token(Token = "0x60054FB")]
	[Address(RVA = "0x5CD0050", Offset = "0x5CCF050", VA = "0x5CD0050")]
	public void ApplyGeneralSettings()
	{
	}

	[Token(Token = "0x60054FC")]
	[Address(RVA = "0x5CD00C0", Offset = "0x5CCF0C0", VA = "0x5CD00C0")]
	public void ResetDistance()
	{
	}

	[Token(Token = "0x60054FD")]
	[Address(RVA = "0x5CD0210", Offset = "0x5CCF210", VA = "0x5CD0210")]
	public void ResetCameraMode()
	{
	}

	[Token(Token = "0x60054FE")]
	[Address(RVA = "0x5CD0270", Offset = "0x5CCF270", VA = "0x5CD0270")]
	private void SetCameraMode(CameraInputMode mode)
	{
	}

	[Token(Token = "0x60054FF")]
	[Address(RVA = "0x5CD0280", Offset = "0x5CCF280", VA = "0x5CD0280")]
	internal static CameraInputMode NextCameraMode(CameraInputMode current, CameraInputMode selected)
	{
		return default(CameraInputMode);
	}

	[Token(Token = "0x6005500")]
	[Address(RVA = "0x5CD02B0", Offset = "0x5CCF2B0", VA = "0x5CD02B0")]
	public float GetCameraDistance()
	{
		return default(float);
	}

	[Token(Token = "0x6005501")]
	[Address(RVA = "0x5CD03C0", Offset = "0x5CCF3C0", VA = "0x5CD03C0")]
	public void StartShake()
	{
	}

	[Token(Token = "0x6005502")]
	[Address(RVA = "0x5CD03E0", Offset = "0x5CCF3E0", VA = "0x5CD03E0", Slot = "6")]
	protected override void SetDefaultCameraPosition()
	{
	}

	[Token(Token = "0x6005503")]
	[Address(RVA = "0x5CD05E0", Offset = "0x5CCF5E0", VA = "0x5CD05E0")]
	public void SetFollow(BaseCharacter character, bool resetRotation = true)
	{
	}

	[Token(Token = "0x6005504")]
	[Address(RVA = "0x5CD0E00", Offset = "0x5CCFE00", VA = "0x5CD0E00", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6005505")]
	[Address(RVA = "0x5CD0F40", Offset = "0x5CCFF40", VA = "0x5CD0F40")]
	public void TakeSnapshot(Vector3 position, int damage)
	{
	}

	[Token(Token = "0x6005506")]
	[Address(RVA = "0x5CD0FE0", Offset = "0x5CCFFE0", VA = "0x5CD0FE0")]
	protected void Start()
	{
	}

	[Token(Token = "0x6005507")]
	[Address(RVA = "0x5CD11A0", Offset = "0x5CD01A0", VA = "0x5CD11A0")]
	public void SyncCustomPosition()
	{
	}

	[Token(Token = "0x6005508")]
	[Address(RVA = "0x5CD12E0", Offset = "0x5CD02E0", VA = "0x5CD12E0")]
	private void UpdateMapLights()
	{
	}

	[Token(Token = "0x6005509")]
	[Address(RVA = "0x5CD14F0", Offset = "0x5CD04F0", VA = "0x5CD14F0")]
	protected void FixedUpdate()
	{
	}

	[Token(Token = "0x600550A")]
	[Address(RVA = "0x5CD1520", Offset = "0x5CD0520", VA = "0x5CD1520", Slot = "7")]
	protected override void LateUpdate()
	{
	}

	[Token(Token = "0x600550B")]
	[Address(RVA = "0x5CD3F00", Offset = "0x5CD2F00", VA = "0x5CD3F00")]
	private void UpdateOcclusion()
	{
	}

	[Token(Token = "0x600550C")]
	[Address(RVA = "0x5CD47C0", Offset = "0x5CD37C0", VA = "0x5CD47C0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600550D")]
	[Address(RVA = "0x5CD4820", Offset = "0x5CD3820", VA = "0x5CD4820")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x600550E")]
	[Address(RVA = "0x5CD4550", Offset = "0x5CD3550", VA = "0x5CD4550")]
	private void UpdateNapeLockImage()
	{
	}

	[Token(Token = "0x600550F")]
	[Address(RVA = "0x5CD1B20", Offset = "0x5CD0B20", VA = "0x5CD1B20")]
	private void UpdateMain()
	{
	}

	[Token(Token = "0x6005510")]
	[Address(RVA = "0x5CD2C10", Offset = "0x5CD1C10", VA = "0x5CD2C10")]
	private void UpdateSpectate()
	{
	}

	[Token(Token = "0x6005511")]
	[Address(RVA = "0x5CD3920", Offset = "0x5CD2920", VA = "0x5CD3920")]
	private void UpdateFreeCam()
	{
	}

	[Token(Token = "0x6005512")]
	[Address(RVA = "0x5CD4880", Offset = "0x5CD3880", VA = "0x5CD4880")]
	private void UpdateTitanZoom()
	{
	}

	[Token(Token = "0x6005513")]
	[Address(RVA = "0x5CD4EE0", Offset = "0x5CD3EE0", VA = "0x5CD4EE0")]
	private float GetHeightDistance()
	{
		return default(float);
	}

	[Token(Token = "0x6005514")]
	[Address(RVA = "0x5CD3620", Offset = "0x5CD2620", VA = "0x5CD3620")]
	private void UpdateObstacles()
	{
	}

	[Token(Token = "0x6005515")]
	[Address(RVA = "0x5CD4150", Offset = "0x5CD3150", VA = "0x5CD4150")]
	private void UpdateFOV()
	{
	}

	[Token(Token = "0x6005516")]
	[Address(RVA = "0x5CD1AA0", Offset = "0x5CD0AA0", VA = "0x5CD1AA0")]
	private void FindNextSpectate()
	{
	}

	[Token(Token = "0x6005517")]
	[Address(RVA = "0x5CD5950", Offset = "0x5CD4950", VA = "0x5CD5950")]
	private int GetSpectateIndex(List<BaseCharacter> characters)
	{
		return default(int);
	}

	[Token(Token = "0x6005518")]
	[Address(RVA = "0x5CD4FA0", Offset = "0x5CD3FA0", VA = "0x5CD4FA0")]
	private float GetSensitivityDeltaTime(float sensitivity)
	{
		return default(float);
	}

	[Token(Token = "0x6005519")]
	[Address(RVA = "0x5CD4FC0", Offset = "0x5CD3FC0", VA = "0x5CD4FC0")]
	private void GetLookInput(float sensitivity, int invertY, out float inputX, out float inputY)
	{
	}

	[Token(Token = "0x600551A")]
	[Address(RVA = "0x5CD5A50", Offset = "0x5CD4A50", VA = "0x5CD5A50")]
	private void GetFreeCamLookInput(float camSpeed, out float inputX, out float inputY)
	{
	}

	[Token(Token = "0x600551B")]
	[Address(RVA = "0x5CD49B0", Offset = "0x5CD39B0", VA = "0x5CD49B0")]
	private BaseTitan GetNearestTitan()
	{
		return null;
	}

	[Token(Token = "0x600551C")]
	[Address(RVA = "0x5CD5210", Offset = "0x5CD4210", VA = "0x5CD5210")]
	private List<BaseCharacter> GetSortedCharacters()
	{
		return null;
	}

	[Token(Token = "0x600551D")]
	[Address(RVA = "0x5CD5060", Offset = "0x5CD4060", VA = "0x5CD5060")]
	private void UpdateShake()
	{
	}

	[Token(Token = "0x600551E")]
	[Address(RVA = "0x5CD5AD0", Offset = "0x5CD4AD0", VA = "0x5CD5AD0")]
	public InGameCamera()
	{
	}
}
