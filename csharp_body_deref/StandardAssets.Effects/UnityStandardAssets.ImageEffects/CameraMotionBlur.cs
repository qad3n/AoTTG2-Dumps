// ==================== AoTTG2 cross-reference ====================
// Type: UnityStandardAssets.ImageEffects.CameraMotionBlur
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UnityStandardAssets/ImageEffects/CameraMotionBlur.c
// Prior real C# source (older reference): Assets/ThirdParty/Standard Assets/Effects/ImageEffects/Scripts/CameraMotionBlur.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace UnityStandardAssets.ImageEffects;

[Token(Token = "0x2000017")]
[ExecuteInEditMode]
[RequireComponent(typeof(Camera))]
[AddComponentMenu("Image Effects/Camera/Camera Motion Blur")]
public class CameraMotionBlur : PostEffectsBase
{
	[Token(Token = "0x2000018")]
	public enum MotionBlurFilter
	{
		[Token(Token = "0x40000BF")]
		CameraMotion,
		[Token(Token = "0x40000C0")]
		LocalBlur,
		[Token(Token = "0x40000C1")]
		Reconstruction,
		[Token(Token = "0x40000C2")]
		ReconstructionDX11,
		[Token(Token = "0x40000C3")]
		ReconstructionDisc
	}

	[Token(Token = "0x400009E")]
	[FieldOffset(Offset = "0x0")]
	private static float MAX_RADIUS;

	[Token(Token = "0x400009F")]
	[FieldOffset(Offset = "0x30")]
	public MotionBlurFilter filterType;

	[Token(Token = "0x40000A0")]
	[FieldOffset(Offset = "0x34")]
	public bool preview;

	[Token(Token = "0x40000A1")]
	[FieldOffset(Offset = "0x38")]
	public Vector3 previewScale;

	[Token(Token = "0x40000A2")]
	[FieldOffset(Offset = "0x44")]
	public float movementScale;

	[Token(Token = "0x40000A3")]
	[FieldOffset(Offset = "0x48")]
	public float rotationScale;

	[Token(Token = "0x40000A4")]
	[FieldOffset(Offset = "0x4C")]
	public float maxVelocity;

	[Token(Token = "0x40000A5")]
	[FieldOffset(Offset = "0x50")]
	public float minVelocity;

	[Token(Token = "0x40000A6")]
	[FieldOffset(Offset = "0x54")]
	public float velocityScale;

	[Token(Token = "0x40000A7")]
	[FieldOffset(Offset = "0x58")]
	public float softZDistance;

	[Token(Token = "0x40000A8")]
	[FieldOffset(Offset = "0x5C")]
	public int velocityDownsample;

	[Token(Token = "0x40000A9")]
	[FieldOffset(Offset = "0x60")]
	public LayerMask excludeLayers;

	[Token(Token = "0x40000AA")]
	[FieldOffset(Offset = "0x68")]
	private GameObject tmpCam;

	[Token(Token = "0x40000AB")]
	[FieldOffset(Offset = "0x70")]
	public Shader shader;

	[Token(Token = "0x40000AC")]
	[FieldOffset(Offset = "0x78")]
	public Shader dx11MotionBlurShader;

	[Token(Token = "0x40000AD")]
	[FieldOffset(Offset = "0x80")]
	public Shader replacementClear;

	[Token(Token = "0x40000AE")]
	[FieldOffset(Offset = "0x88")]
	private Material motionBlurMaterial;

	[Token(Token = "0x40000AF")]
	[FieldOffset(Offset = "0x90")]
	private Material dx11MotionBlurMaterial;

	[Token(Token = "0x40000B0")]
	[FieldOffset(Offset = "0x98")]
	public Texture2D noiseTexture;

	[Token(Token = "0x40000B1")]
	[FieldOffset(Offset = "0xA0")]
	public float jitter;

	[Token(Token = "0x40000B2")]
	[FieldOffset(Offset = "0xA4")]
	public bool showVelocity;

	[Token(Token = "0x40000B3")]
	[FieldOffset(Offset = "0xA8")]
	public float showVelocityScale;

	[Token(Token = "0x40000B4")]
	[FieldOffset(Offset = "0xAC")]
	private Matrix4x4 currentViewProjMat;

	[Token(Token = "0x40000B5")]
	[FieldOffset(Offset = "0xF0")]
	private Matrix4x4[] currentStereoViewProjMat;

	[Token(Token = "0x40000B6")]
	[FieldOffset(Offset = "0xF8")]
	private Matrix4x4 prevViewProjMat;

	[Token(Token = "0x40000B7")]
	[FieldOffset(Offset = "0x138")]
	private Matrix4x4[] prevStereoViewProjMat;

	[Token(Token = "0x40000B8")]
	[FieldOffset(Offset = "0x140")]
	private int prevFrameCount;

	[Token(Token = "0x40000B9")]
	[FieldOffset(Offset = "0x144")]
	private bool wasActive;

	[Token(Token = "0x40000BA")]
	[FieldOffset(Offset = "0x148")]
	private Vector3 prevFrameForward;

	[Token(Token = "0x40000BB")]
	[FieldOffset(Offset = "0x154")]
	private Vector3 prevFrameUp;

	[Token(Token = "0x40000BC")]
	[FieldOffset(Offset = "0x160")]
	private Vector3 prevFramePos;

	[Token(Token = "0x40000BD")]
	[FieldOffset(Offset = "0x170")]
	private Camera _camera;

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x447A6D0", Offset = "0x447A6D0", VA = "0x447A6D0")]
	private void CalculateViewProjection()
	{
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x447AEF0", Offset = "0x447AEF0", VA = "0x447AEF0")]
	private new void Start()
	{
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x447B270", Offset = "0x447B270", VA = "0x447B270")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x447B330", Offset = "0x447B330", VA = "0x447B330")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x447B490", Offset = "0x447B490", VA = "0x447B490", Slot = "4")]
	public override bool CheckResources()
	{
		return default(bool);
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x447B590", Offset = "0x447B590", VA = "0x447B590")]
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x447B030", Offset = "0x447B030", VA = "0x447B030")]
	private void Remember()
	{
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x447E110", Offset = "0x447E110", VA = "0x447E110")]
	private Camera GetTmpCam()
	{
		return null;
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x447E080", Offset = "0x447E080", VA = "0x447E080")]
	private void StartFrame()
	{
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x447E100", Offset = "0x447E100", VA = "0x447E100")]
	private static int divRoundUp(int x, int d)
	{
		return default(int);
	}

	[Token(Token = "0x600002F")]
	[Address(RVA = "0x447E4D0", Offset = "0x447E4D0", VA = "0x447E4D0")]
	public CameraMotionBlur()
	{
	}
}
