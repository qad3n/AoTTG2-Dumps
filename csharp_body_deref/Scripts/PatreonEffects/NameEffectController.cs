// ==================== AoTTG2 cross-reference ====================
// Type: PatreonEffects.NameEffectController
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/PatreonEffects/NameEffectController.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using TMPro;
using UnityEngine;

namespace PatreonEffects;

[Token(Token = "0x2000087")]
public class NameEffectController : MonoBehaviour
{
	[Token(Token = "0x40002AF")]
	[FieldOffset(Offset = "0x20")]
	[Header("Auto Assigned")]
	[SerializeField]
	private TMP_Text text;

	[Token(Token = "0x40002B0")]
	[FieldOffset(Offset = "0x28")]
	[Header("Debug")]
	[SerializeField]
	private NameEffectType effect;

	[Token(Token = "0x40002B1")]
	[FieldOffset(Offset = "0x30")]
	private Material originalFontMaterial;

	[Token(Token = "0x40002B2")]
	[FieldOffset(Offset = "0x38")]
	private TMP_FontAsset originalFontAsset;

	[Token(Token = "0x40002B3")]
	[FieldOffset(Offset = "0x40")]
	private Material runtimeMat;

	[Token(Token = "0x40002B4")]
	[FieldOffset(Offset = "0x48")]
	private bool initialized;

	[Token(Token = "0x40002B5")]
	[FieldOffset(Offset = "0x50")]
	private TMP_Text popShadowText;

	[Token(Token = "0x40002B6")]
	[FieldOffset(Offset = "0x58")]
	private TMP_Text popExtrusionText;

	[Token(Token = "0x40002B7")]
	[FieldOffset(Offset = "0x60")]
	private bool popActive;

	[Token(Token = "0x40002B8")]
	[FieldOffset(Offset = "0x61")]
	private bool outlineActive;

	[Token(Token = "0x40002B9")]
	[FieldOffset(Offset = "0x62")]
	private bool popGradientHooked;

	[Token(Token = "0x40002BA")]
	[FieldOffset(Offset = "0x63")]
	private bool effectVertexDataHooked;

	[Token(Token = "0x40002BB")]
	[FieldOffset(Offset = "0x64")]
	private bool cleared;

	[Token(Token = "0x40002BC")]
	[FieldOffset(Offset = "0x68")]
	private Color popFaceA;

	[Token(Token = "0x40002BD")]
	[FieldOffset(Offset = "0x78")]
	private Color popFaceB;

	[Token(Token = "0x40002BE")]
	[FieldOffset(Offset = "0x88")]
	private Color popFaceC;

	[Token(Token = "0x40002BF")]
	[FieldOffset(Offset = "0x98")]
	private Color popShadowColor;

	[Token(Token = "0x40002C0")]
	[FieldOffset(Offset = "0xA8")]
	private Color popExtrusionColor;

	[Token(Token = "0x40002C1")]
	[FieldOffset(Offset = "0xB8")]
	private Vector2 popShadowOffset;

	[Token(Token = "0x40002C2")]
	[FieldOffset(Offset = "0xC0")]
	private Vector2 popExtrusionOffset;

	[Token(Token = "0x40002C3")]
	private const float PopOffsetReferenceFontSize = 48f;

	[Token(Token = "0x40002C4")]
	private const float OutlineWidth = 0.16f;

	[Token(Token = "0x40002C5")]
	private const float OutlineFaceDilate = 0.02f;

	[Token(Token = "0x40002C6")]
	[FieldOffset(Offset = "0x0")]
	private static readonly int FaceColor_ID;

	[Token(Token = "0x40002C7")]
	[FieldOffset(Offset = "0x4")]
	private static readonly int GradientA_ID;

	[Token(Token = "0x40002C8")]
	[FieldOffset(Offset = "0x8")]
	private static readonly int GradientB_ID;

	[Token(Token = "0x40002C9")]
	[FieldOffset(Offset = "0xC")]
	private static readonly int GradientC_ID;

	[Token(Token = "0x40002CA")]
	[FieldOffset(Offset = "0x10")]
	private static readonly int GradientD_ID;

	[Token(Token = "0x40002CB")]
	[FieldOffset(Offset = "0x14")]
	private static readonly int EffectGradientScale_ID;

	[Token(Token = "0x40002CC")]
	[FieldOffset(Offset = "0x18")]
	private static readonly int GradientSpeed_ID;

	[Token(Token = "0x40002CD")]
	[FieldOffset(Offset = "0x1C")]
	private static readonly int EffectMode_ID;

	[Token(Token = "0x40002CE")]
	[FieldOffset(Offset = "0x20")]
	private static readonly int Glow_ID;

	[Token(Token = "0x40002CF")]
	[FieldOffset(Offset = "0x24")]
	private static readonly int ScanlineStrength_ID;

	[Token(Token = "0x40002D0")]
	[FieldOffset(Offset = "0x28")]
	private static readonly int ScanlineDensity_ID;

	[Token(Token = "0x40002D1")]
	[FieldOffset(Offset = "0x2C")]
	private static readonly int ScanlineSpeed_ID;

	[Token(Token = "0x40002D2")]
	[FieldOffset(Offset = "0x30")]
	private static readonly int FlickerStrength_ID;

	[Token(Token = "0x40002D3")]
	[FieldOffset(Offset = "0x34")]
	private static readonly int FlickerSpeed_ID;

	[Token(Token = "0x40002D4")]
	[FieldOffset(Offset = "0x38")]
	private static readonly int Softness_ID;

	[Token(Token = "0x60003A6")]
	[Address(RVA = "0x58C2170", Offset = "0x58C1170", VA = "0x58C2170")]
	private void Awake()
	{
	}

	[Token(Token = "0x60003A7")]
	[Address(RVA = "0x58BF910", Offset = "0x58BE910", VA = "0x58BF910")]
	public void AutoConfigure()
	{
	}

	[Token(Token = "0x60003A8")]
	[Address(RVA = "0x58C22B0", Offset = "0x58C12B0", VA = "0x58C22B0")]
	private bool RefreshOriginalMaterial()
	{
		return default(bool);
	}

	[Token(Token = "0x60003A9")]
	[Address(RVA = "0x58C2580", Offset = "0x58C1580", VA = "0x58C2580")]
	private void EnsureShaderMaterial()
	{
	}

	[Token(Token = "0x60003AA")]
	[Address(RVA = "0x58BFBA0", Offset = "0x58BEBA0", VA = "0x58BFBA0")]
	public void Apply(NameEffectSettings settings)
	{
	}

	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x58C1F30", Offset = "0x58C0F30", VA = "0x58C1F30")]
	public void Clear()
	{
	}

	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x58C3500", Offset = "0x58C2500", VA = "0x58C3500")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60003AD")]
	[Address(RVA = "0x58C3510", Offset = "0x58C2510", VA = "0x58C3510")]
	[ContextMenu("Apply Holographic")]
	public void ApplyHolographic()
	{
	}

	[Token(Token = "0x60003AE")]
	[Address(RVA = "0x58C2180", Offset = "0x58C1180", VA = "0x58C2180")]
	private bool FindText()
	{
		return default(bool);
	}

	[Token(Token = "0x60003AF")]
	[Address(RVA = "0x58C2850", Offset = "0x58C1850", VA = "0x58C2850")]
	private void ApplyPop(NameEffectSettings settings)
	{
	}

	[Token(Token = "0x60003B0")]
	[Address(RVA = "0x58C3C70", Offset = "0x58C2C70", VA = "0x58C3C70")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x60003B1")]
	[Address(RVA = "0x58C3660", Offset = "0x58C2660", VA = "0x58C3660")]
	private void EnsurePopLayer(ref TMP_Text layer, string layerName, Color color)
	{
	}

	[Token(Token = "0x60003B2")]
	[Address(RVA = "0x58C3B80", Offset = "0x58C2B80", VA = "0x58C3B80")]
	private void SyncPopLayers()
	{
	}

	[Token(Token = "0x60003B3")]
	[Address(RVA = "0x58C2AE0", Offset = "0x58C1AE0", VA = "0x58C2AE0")]
	private void ApplyOutline(NameEffectSettings settings)
	{
	}

	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x58C4100", Offset = "0x58C3100", VA = "0x58C4100")]
	private static void ApplyTmpOutlineMaterial(Material material, NameEffectSettings settings)
	{
	}

	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x58C4300", Offset = "0x58C3300", VA = "0x58C4300")]
	private static void SetColorIfPresent(Material material, int propertyId, Color value)
	{
	}

	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x58C4350", Offset = "0x58C3350", VA = "0x58C4350")]
	private static void SetFloatIfPresent(Material material, int propertyId, float value)
	{
	}

	[Token(Token = "0x60003B7")]
	[Address(RVA = "0x58C40D0", Offset = "0x58C30D0", VA = "0x58C40D0")]
	private float PopOffsetScale()
	{
		return default(float);
	}

	[Token(Token = "0x60003B8")]
	[Address(RVA = "0x58C3D60", Offset = "0x58C2D60", VA = "0x58C3D60")]
	private void SyncPopLayer(TMP_Text layer, Vector2 offset, Color color)
	{
	}

	[Token(Token = "0x60003B9")]
	[Address(RVA = "0x58C3AB0", Offset = "0x58C2AB0", VA = "0x58C3AB0")]
	private void HookPopGradient()
	{
	}

	[Token(Token = "0x60003BA")]
	[Address(RVA = "0x58C2A80", Offset = "0x58C1A80", VA = "0x58C2A80")]
	private void ClearPop()
	{
	}

	[Token(Token = "0x60003BB")]
	[Address(RVA = "0x58C2820", Offset = "0x58C1820", VA = "0x58C2820")]
	private void ClearOutline()
	{
	}

	[Token(Token = "0x60003BC")]
	[Address(RVA = "0x58C43A0", Offset = "0x58C33A0", VA = "0x58C43A0")]
	private void ClearPopGradient()
	{
	}

	[Token(Token = "0x60003BD")]
	[Address(RVA = "0x58C2CD0", Offset = "0x58C1CD0", VA = "0x58C2CD0")]
	private void HookEffectVertexData()
	{
	}

	[Token(Token = "0x60003BE")]
	[Address(RVA = "0x58C2750", Offset = "0x58C1750", VA = "0x58C2750")]
	private void ClearEffectVertexData()
	{
	}

	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x58C4470", Offset = "0x58C3470", VA = "0x58C4470")]
	private static void DestroyPopLayer(ref TMP_Text layer)
	{
	}

	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x58C3430", Offset = "0x58C2430", VA = "0x58C3430")]
	private void ClearShaderMaterial()
	{
	}

	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x58C2490", Offset = "0x58C1490", VA = "0x58C2490")]
	private void DestroyRuntimeMaterial()
	{
	}

	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x58C2DA0", Offset = "0x58C1DA0", VA = "0x58C2DA0")]
	private void UpdateEffectVertexData(TMP_TextInfo textInfo)
	{
	}

	[Token(Token = "0x60003C3")]
	[Address(RVA = "0x58C49B0", Offset = "0x58C39B0", VA = "0x58C49B0")]
	private static byte ToByte(float value)
	{
		return default(byte);
	}

	[Token(Token = "0x60003C4")]
	[Address(RVA = "0x58C4900", Offset = "0x58C3900", VA = "0x58C4900")]
	private static int SafeCharacterCount(TMP_TextInfo textInfo)
	{
		return default(int);
	}

	[Token(Token = "0x60003C5")]
	[Address(RVA = "0x58C4920", Offset = "0x58C3920", VA = "0x58C4920")]
	private static bool TryGetMeshInfo(TMP_TextInfo textInfo, int materialReferenceIndex, out TMP_MeshInfo mesh)
	{
		return default(bool);
	}

	[Token(Token = "0x60003C6")]
	[Address(RVA = "0x58C4570", Offset = "0x58C3570", VA = "0x58C4570")]
	private static bool TryLocalBounds(TMP_TextInfo textInfo, out float minX, out float maxX, out float minY, out float maxY)
	{
		return default(bool);
	}

	[Token(Token = "0x60003C7")]
	[Address(RVA = "0x58C4AE0", Offset = "0x58C3AE0", VA = "0x58C4AE0")]
	private void ApplyPopFaceGradient(TMP_TextInfo textInfo)
	{
	}

	[Token(Token = "0x60003C8")]
	[Address(RVA = "0x58C56C0", Offset = "0x58C46C0", VA = "0x58C56C0")]
	private Color SampleFaceGradient(float t)
	{
		return default(Color);
	}

	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x58C5070", Offset = "0x58C4070", VA = "0x58C5070")]
	private bool TryPopFaceBounds(TMP_TextInfo textInfo, Camera camera, out float minX, out float maxX)
	{
		return default(bool);
	}

	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x58C4F90", Offset = "0x58C3F90", VA = "0x58C4F90")]
	private Camera PopCamera()
	{
		return null;
	}

	[Token(Token = "0x60003CB")]
	[Address(RVA = "0x58C5620", Offset = "0x58C4620", VA = "0x58C5620")]
	private float ScreenX(Vector3 localVertex, Camera camera)
	{
		return default(float);
	}

	[Token(Token = "0x60003CC")]
	[Address(RVA = "0x58C5760", Offset = "0x58C4760", VA = "0x58C5760")]
	public NameEffectController()
	{
	}
}
