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

[Token(Token = "0x2000889")]
internal class InGameCamera : BaseCamera
{
	[Token(Token = "0x200088A")]
	public enum SpecateMode
	{
		[Token(Token = "0x4002ABE")]
		LiveSpectate,
		[Token(Token = "0x4002ABF")]
		OrbitSpectate,
		[Token(Token = "0x4002AC0")]
		FreeCam
	}

	[Token(Token = "0x4002AA1")]
	[FieldOffset(Offset = "0x38")]
	public BaseCharacter _follow;

	[Token(Token = "0x4002AA2")]
	[FieldOffset(Offset = "0x40")]
	public Cycle<SpecateMode> SpecMode;

	[Token(Token = "0x4002AA3")]
	[FieldOffset(Offset = "0x48")]
	private InGameManager _inGameManager;

	[Token(Token = "0x4002AA4")]
	[FieldOffset(Offset = "0x50")]
	private InGameMenu _menu;

	[Token(Token = "0x4002AA5")]
	[FieldOffset(Offset = "0x58")]
	private GeneralInputSettings _input;

	[Token(Token = "0x4002AA6")]
	[FieldOffset(Offset = "0x60")]
	private CameraDetection _detection;

	[Token(Token = "0x4002AA7")]
	[FieldOffset(Offset = "0x68")]
	public CameraInputMode CurrentCameraMode;

	[Token(Token = "0x4002AA8")]
	[FieldOffset(Offset = "0x6C")]
	public float _cameraDistance;

	[Token(Token = "0x4002AA9")]
	[FieldOffset(Offset = "0x70")]
	private float _titanZoom;

	[Token(Token = "0x4002AAA")]
	private const float TitanZoomStep = 0.1f;

	[Token(Token = "0x4002AAB")]
	private const float MinTitanZoomDistance = 0.3f;

	[Token(Token = "0x4002AAC")]
	private const float MaxTitanZoomDistance = 2f;

	[Token(Token = "0x4002AAD")]
	[FieldOffset(Offset = "0x74")]
	private float _occlusionRadius;

	[Token(Token = "0x4002AAE")]
	private const float OcclusionRadiusFactor = 0.45f;

	[Token(Token = "0x4002AAF")]
	[FieldOffset(Offset = "0x78")]
	private float _heightDistance;

	[Token(Token = "0x4002AB0")]
	[FieldOffset(Offset = "0x7C")]
	private float _anchorDistance;

	[Token(Token = "0x4002AB1")]
	private const float DistanceMultiplier = 10f;

	[Token(Token = "0x4002AB2")]
	[FieldOffset(Offset = "0x80")]
	private bool _napeLock;

	[Token(Token = "0x4002AB3")]
	[FieldOffset(Offset = "0x88")]
	private BaseTitan _napeLockTitan;

	[Token(Token = "0x4002AB4")]
	[FieldOffset(Offset = "0x90")]
	private SnapshotHandler _snapshotHandler;

	[Token(Token = "0x4002AB5")]
	private const float ShakeDistance = 10f;

	[Token(Token = "0x4002AB6")]
	private const float ShakeDuration = 1f;

	[Token(Token = "0x4002AB7")]
	private const float ShakeDecay = 0.15f;

	[Token(Token = "0x4002AB8")]
	[FieldOffset(Offset = "0x98")]
	private bool _shakeFlip;

	[Token(Token = "0x4002AB9")]
	[FieldOffset(Offset = "0x9C")]
	private float _shakeTimeLeft;

	[Token(Token = "0x4002ABA")]
	[FieldOffset(Offset = "0xA0")]
	private float _currentShakeDistance;

	[Token(Token = "0x4002ABB")]
	[FieldOffset(Offset = "0x0")]
	private static LayerMask _clipMask;

	[Token(Token = "0x4002ABC")]
	[FieldOffset(Offset = "0xA4")]
	private float _lastChangeSpectateID;

	[Token(Token = "0x17000EF0")]
	public bool UsesMouseLook
	{
		[Token(Token = "0x60051BE")]
		[Address(RVA = "0x22F5BF0", Offset = "0x22F41F0", VA = "0x1822F5BF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60051BF")]
	[Address(RVA = "0x22F1AE0", Offset = "0x22F00E0", VA = "0x1822F1AE0")]
	internal static bool ShouldUseMouseLook(CameraInputMode mode, bool originalWOWRotation, bool rotateHeld)
	{
		return default(bool);
	}

	[Token(Token = "0x60051C0")]
	[Address(RVA = "0x22EF890", Offset = "0x22EDE90", VA = "0x1822EF890")]
	private bool CheckSpectateRateLimit()
	{
		return default(bool);
	}

	[Token(Token = "0x60051C1")]
	[Address(RVA = "0x12BF1F0", Offset = "0x12BD7F0", VA = "0x1812BF1F0")]
	public void SetCameraDistance(float distance)
	{
	}

	[Token(Token = "0x60051C2")]
	[Address(RVA = "0x22EF490", Offset = "0x22EDA90", VA = "0x1822EF490")]
	public void ApplyGraphicsSettings()
	{
	}

	[Token(Token = "0x60051C3")]
	[Address(RVA = "0x22EF2E0", Offset = "0x22ED8E0", VA = "0x1822EF2E0")]
	public void ApplyGeneralSettings()
	{
	}

	[Token(Token = "0x60051C4")]
	[Address(RVA = "0x22F0E80", Offset = "0x22EF480", VA = "0x1822F0E80")]
	public void ResetDistance()
	{
	}

	[Token(Token = "0x60051C5")]
	[Address(RVA = "0x22F0E10", Offset = "0x22EF410", VA = "0x1822F0E10")]
	public void ResetCameraMode()
	{
	}

	[Token(Token = "0x60051C6")]
	[Address(RVA = "0x22F0D60", Offset = "0x22EF360", VA = "0x1822F0D60")]
	internal static CameraInputMode NextCameraMode(CameraInputMode current, CameraInputMode selected)
	{
		return default(CameraInputMode);
	}

	[Token(Token = "0x60051C7")]
	[Address(RVA = "0x22EF9B0", Offset = "0x22EDFB0", VA = "0x1822EF9B0")]
	public float GetCameraDistance()
	{
		return default(float);
	}

	[Token(Token = "0x60051C8")]
	[Address(RVA = "0x22F1B10", Offset = "0x22F0110", VA = "0x1822F1B10")]
	public void StartShake()
	{
	}

	[Token(Token = "0x60051C9")]
	[Address(RVA = "0x22F0FD0", Offset = "0x22EF5D0", VA = "0x1822F0FD0", Slot = "6")]
	protected override void SetDefaultCameraPosition()
	{
	}

	[Token(Token = "0x60051CA")]
	[Address(RVA = "0x22F1220", Offset = "0x22EF820", VA = "0x1822F1220")]
	public void SetFollow(BaseCharacter character, bool resetRotation = true)
	{
	}

	[Token(Token = "0x60051CB")]
	[Address(RVA = "0x22EF550", Offset = "0x22EDB50", VA = "0x1822EF550", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x60051CC")]
	[Address(RVA = "0x22F1EA0", Offset = "0x22F04A0", VA = "0x1822F1EA0")]
	public void TakeSnapshot(Vector3 position, int damage)
	{
	}

	[Token(Token = "0x60051CD")]
	[Address(RVA = "0x22F1B30", Offset = "0x22F0130", VA = "0x1822F1B30")]
	protected void Start()
	{
	}

	[Token(Token = "0x60051CE")]
	[Address(RVA = "0x22F1D20", Offset = "0x22F0320", VA = "0x1822F1D20")]
	public void SyncCustomPosition()
	{
	}

	[Token(Token = "0x60051CF")]
	[Address(RVA = "0x22F4020", Offset = "0x22F2620", VA = "0x1822F4020")]
	private void UpdateMapLights()
	{
	}

	[Token(Token = "0x60051D0")]
	[Address(RVA = "0x22EF970", Offset = "0x22EDF70", VA = "0x1822EF970")]
	protected void FixedUpdate()
	{
	}

	[Token(Token = "0x60051D1")]
	[Address(RVA = "0x22F0680", Offset = "0x22EEC80", VA = "0x1822F0680", Slot = "7")]
	protected override void LateUpdate()
	{
	}

	[Token(Token = "0x60051D2")]
	[Address(RVA = "0x22F47B0", Offset = "0x22F2DB0", VA = "0x1822F47B0")]
	private void UpdateOcclusion()
	{
	}

	[Token(Token = "0x60051D3")]
	[Address(RVA = "0x22F0D90", Offset = "0x22EF390", VA = "0x1822F0D90")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60051D4")]
	[Address(RVA = "0x22F0DD0", Offset = "0x22EF3D0", VA = "0x1822F0DD0")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x60051D5")]
	[Address(RVA = "0x22F4220", Offset = "0x22F2820", VA = "0x1822F4220")]
	private void UpdateNapeLockImage()
	{
	}

	[Token(Token = "0x60051D6")]
	[Address(RVA = "0x22F2940", Offset = "0x22F0F40", VA = "0x1822F2940")]
	private void UpdateMain()
	{
	}

	[Token(Token = "0x60051D7")]
	[Address(RVA = "0x22F4D70", Offset = "0x22F3370", VA = "0x1822F4D70")]
	private void UpdateSpectate()
	{
	}

	[Token(Token = "0x60051D8")]
	[Address(RVA = "0x22F22C0", Offset = "0x22F08C0", VA = "0x1822F22C0")]
	private void UpdateFreeCam()
	{
	}

	[Token(Token = "0x60051D9")]
	[Address(RVA = "0x22F5970", Offset = "0x22F3F70", VA = "0x1822F5970")]
	private void UpdateTitanZoom()
	{
	}

	[Token(Token = "0x60051DA")]
	[Address(RVA = "0x22EFAE0", Offset = "0x22EE0E0", VA = "0x1822EFAE0")]
	private float GetHeightDistance()
	{
		return default(float);
	}

	[Token(Token = "0x60051DB")]
	[Address(RVA = "0x22F44C0", Offset = "0x22F2AC0", VA = "0x1822F44C0")]
	private void UpdateObstacles()
	{
	}

	[Token(Token = "0x60051DC")]
	[Address(RVA = "0x22F1F40", Offset = "0x22F0540", VA = "0x1822F1F40")]
	private void UpdateFOV()
	{
	}

	[Token(Token = "0x60051DD")]
	[Address(RVA = "0x22EF8E0", Offset = "0x22EDEE0", VA = "0x1822EF8E0")]
	private void FindNextSpectate()
	{
	}

	[Token(Token = "0x60051DE")]
	[Address(RVA = "0x22F0580", Offset = "0x22EEB80", VA = "0x1822F0580")]
	private int GetSpectateIndex(List<BaseCharacter> characters)
	{
		return default(int);
	}

	[Token(Token = "0x60051DF")]
	[Address(RVA = "0x22F0030", Offset = "0x22EE630", VA = "0x1822F0030")]
	private float GetSensitivityDeltaTime(float sensitivity)
	{
		return default(float);
	}

	[Token(Token = "0x60051E0")]
	[Address(RVA = "0x22EFBB0", Offset = "0x22EE1B0", VA = "0x1822EFBB0")]
	private BaseTitan GetNearestTitan()
	{
		return null;
	}

	[Token(Token = "0x60051E1")]
	[Address(RVA = "0x22F0060", Offset = "0x22EE660", VA = "0x1822F0060")]
	private List<BaseCharacter> GetSortedCharacters()
	{
		return null;
	}

	[Token(Token = "0x60051E2")]
	[Address(RVA = "0x22F4BA0", Offset = "0x22F31A0", VA = "0x1822F4BA0")]
	private void UpdateShake()
	{
	}

	[Token(Token = "0x60051E3")]
	[Address(RVA = "0x22F5B70", Offset = "0x22F4170", VA = "0x1822F5B70")]
	public InGameCamera()
	{
	}
}
