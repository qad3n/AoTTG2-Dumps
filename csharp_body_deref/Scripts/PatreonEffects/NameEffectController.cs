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

[Token(Token = "0x20000F2")]
public class NameEffectController : MonoBehaviour
{
	[Token(Token = "0x40005A7")]
	[FieldOffset(Offset = "0x20")]
	[Header("Auto Assigned")]
	[SerializeField]
	private TMP_Text text;

	[Token(Token = "0x40005A8")]
	[FieldOffset(Offset = "0x28")]
	[Header("Debug")]
	[SerializeField]
	private NameEffectType effect;

	[Token(Token = "0x40005A9")]
	[FieldOffset(Offset = "0x30")]
	private Material originalFontMaterial;

	[Token(Token = "0x40005AA")]
	[FieldOffset(Offset = "0x38")]
	private TMP_FontAsset originalFontAsset;

	[Token(Token = "0x40005AB")]
	[FieldOffset(Offset = "0x40")]
	private Material runtimeMat;

	[Token(Token = "0x40005AC")]
	[FieldOffset(Offset = "0x48")]
	private bool initialized;

	[Token(Token = "0x40005AD")]
	[FieldOffset(Offset = "0x50")]
	private TMP_Text popShadowText;

	[Token(Token = "0x40005AE")]
	[FieldOffset(Offset = "0x58")]
	private TMP_Text popExtrusionText;

	[Token(Token = "0x40005AF")]
	[FieldOffset(Offset = "0x60")]
	private bool popActive;

	[Token(Token = "0x40005B0")]
	[FieldOffset(Offset = "0x61")]
	private bool outlineActive;

	[Token(Token = "0x40005B1")]
	[FieldOffset(Offset = "0x62")]
	private bool popGradientHooked;

	[Token(Token = "0x40005B2")]
	[FieldOffset(Offset = "0x63")]
	private bool effectVertexDataHooked;

	[Token(Token = "0x40005B3")]
	[FieldOffset(Offset = "0x64")]
	private bool cleared;

	[Token(Token = "0x40005B4")]
	[FieldOffset(Offset = "0x68")]
	private Color popFaceA;

	[Token(Token = "0x40005B5")]
	[FieldOffset(Offset = "0x78")]
	private Color popFaceB;

	[Token(Token = "0x40005B6")]
	[FieldOffset(Offset = "0x88")]
	private Color popFaceC;

	[Token(Token = "0x40005B7")]
	[FieldOffset(Offset = "0x98")]
	private Color popShadowColor;

	[Token(Token = "0x40005B8")]
	[FieldOffset(Offset = "0xA8")]
	private Color popExtrusionColor;

	[Token(Token = "0x40005B9")]
	[FieldOffset(Offset = "0xB8")]
	private Vector2 popShadowOffset;

	[Token(Token = "0x40005BA")]
	[FieldOffset(Offset = "0xC0")]
	private Vector2 popExtrusionOffset;

	[Token(Token = "0x40005BB")]
	private const float PopOffsetReferenceFontSize = 48f;

	[Token(Token = "0x40005BC")]
	private const float OutlineWidth = 0.16f;

	[Token(Token = "0x40005BD")]
	private const float OutlineFaceDilate = 0.02f;

	[Token(Token = "0x40005BE")]
	private const float OutlineGlowInner = 0.05f;

	[Token(Token = "0x40005BF")]
	private const float OutlineGlowOuter = 0.08f;

	[Token(Token = "0x40005C0")]
	private const float OutlineGlowPower = 0.72f;

	[Token(Token = "0x40005C1")]
	[FieldOffset(Offset = "0x0")]
	private static readonly int FaceColor_ID;

	[Token(Token = "0x40005C2")]
	[FieldOffset(Offset = "0x4")]
	private static readonly int GradientA_ID;

	[Token(Token = "0x40005C3")]
	[FieldOffset(Offset = "0x8")]
	private static readonly int GradientB_ID;

	[Token(Token = "0x40005C4")]
	[FieldOffset(Offset = "0xC")]
	private static readonly int GradientC_ID;

	[Token(Token = "0x40005C5")]
	[FieldOffset(Offset = "0x10")]
	private static readonly int GradientD_ID;

	[Token(Token = "0x40005C6")]
	[FieldOffset(Offset = "0x14")]
	private static readonly int EffectGradientScale_ID;

	[Token(Token = "0x40005C7")]
	[FieldOffset(Offset = "0x18")]
	private static readonly int GradientSpeed_ID;

	[Token(Token = "0x40005C8")]
	[FieldOffset(Offset = "0x1C")]
	private static readonly int EffectMode_ID;

	[Token(Token = "0x40005C9")]
	[FieldOffset(Offset = "0x20")]
	private static readonly int Glow_ID;

	[Token(Token = "0x40005CA")]
	[FieldOffset(Offset = "0x24")]
	private static readonly int ScanlineStrength_ID;

	[Token(Token = "0x40005CB")]
	[FieldOffset(Offset = "0x28")]
	private static readonly int ScanlineDensity_ID;

	[Token(Token = "0x40005CC")]
	[FieldOffset(Offset = "0x2C")]
	private static readonly int ScanlineSpeed_ID;

	[Token(Token = "0x40005CD")]
	[FieldOffset(Offset = "0x30")]
	private static readonly int FlickerStrength_ID;

	[Token(Token = "0x40005CE")]
	[FieldOffset(Offset = "0x34")]
	private static readonly int FlickerSpeed_ID;

	[Token(Token = "0x40005CF")]
	[FieldOffset(Offset = "0x38")]
	private static readonly int Softness_ID;

	[Token(Token = "0x600049E")]
	[Address(RVA = "0x4229400", Offset = "0x4229400", VA = "0x4229400")]
	private void Awake()
	{
	}

	[Token(Token = "0x600049F")]
	[Address(RVA = "0x4228B70", Offset = "0x4228B70", VA = "0x4228B70")]
	public void AutoConfigure()
	{
	}

	[Token(Token = "0x60004A0")]
	[Address(RVA = "0x4229570", Offset = "0x4229570", VA = "0x4229570")]
	private bool RefreshOriginalMaterial()
	{
		return default(bool);
	}

	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x4229740", Offset = "0x4229740", VA = "0x4229740")]
	private void EnsureShaderMaterial()
	{
	}

	[Token(Token = "0x60004A2")]
	[Address(RVA = "0x4228D30", Offset = "0x4228D30", VA = "0x4228D30")]
	public void Apply(NameEffectSettings settings)
	{
	}

	[Token(Token = "0x60004A3")]
	[Address(RVA = "0x42291C0", Offset = "0x42291C0", VA = "0x42291C0")]
	public void Clear()
	{
	}

	[Token(Token = "0x60004A4")]
	[Address(RVA = "0x422A7D0", Offset = "0x422A7D0", VA = "0x422A7D0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x422A7E0", Offset = "0x422A7E0", VA = "0x422A7E0")]
	[ContextMenu("Apply Holographic")]
	public void ApplyHolographic()
	{
	}

	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x4229440", Offset = "0x4229440", VA = "0x4229440")]
	private bool FindText()
	{
		return default(bool);
	}

	[Token(Token = "0x60004A7")]
	[Address(RVA = "0x4229A50", Offset = "0x4229A50", VA = "0x4229A50")]
	private void ApplyPop(NameEffectSettings settings)
	{
	}

	[Token(Token = "0x60004A8")]
	[Address(RVA = "0x422AF20", Offset = "0x422AF20", VA = "0x422AF20")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x60004A9")]
	[Address(RVA = "0x422A930", Offset = "0x422A930", VA = "0x422A930")]
	private void EnsurePopLayer(ref TMP_Text layer, string layerName, Color color)
	{
	}

	[Token(Token = "0x60004AA")]
	[Address(RVA = "0x422AE30", Offset = "0x422AE30", VA = "0x422AE30")]
	private void SyncPopLayers()
	{
	}

	[Token(Token = "0x60004AB")]
	[Address(RVA = "0x4229CF0", Offset = "0x4229CF0", VA = "0x4229CF0")]
	private void ApplyOutline(NameEffectSettings settings)
	{
	}

	[Token(Token = "0x60004AC")]
	[Address(RVA = "0x422B3B0", Offset = "0x422B3B0", VA = "0x422B3B0")]
	private static void ApplyTmpOutlineMaterial(Material material, NameEffectSettings settings)
	{
	}

	[Token(Token = "0x60004AD")]
	[Address(RVA = "0x422B750", Offset = "0x422B750", VA = "0x422B750")]
	private static void SetColorIfPresent(Material material, int propertyId, Color value)
	{
	}

	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x422B7A0", Offset = "0x422B7A0", VA = "0x422B7A0")]
	private static void SetFloatIfPresent(Material material, int propertyId, float value)
	{
	}

	[Token(Token = "0x60004AF")]
	[Address(RVA = "0x422B380", Offset = "0x422B380", VA = "0x422B380")]
	private float PopOffsetScale()
	{
		return default(float);
	}

	[Token(Token = "0x60004B0")]
	[Address(RVA = "0x422B010", Offset = "0x422B010", VA = "0x422B010")]
	private void SyncPopLayer(TMP_Text layer, Vector2 offset, Color color)
	{
	}

	[Token(Token = "0x60004B1")]
	[Address(RVA = "0x422AD60", Offset = "0x422AD60", VA = "0x422AD60")]
	private void HookPopGradient()
	{
	}

	[Token(Token = "0x60004B2")]
	[Address(RVA = "0x4229C80", Offset = "0x4229C80", VA = "0x4229C80")]
	private void ClearPop()
	{
	}

	[Token(Token = "0x60004B3")]
	[Address(RVA = "0x4229A20", Offset = "0x4229A20", VA = "0x4229A20")]
	private void ClearOutline()
	{
	}

	[Token(Token = "0x60004B4")]
	[Address(RVA = "0x422B7F0", Offset = "0x422B7F0", VA = "0x422B7F0")]
	private void ClearPopGradient()
	{
	}

	[Token(Token = "0x60004B5")]
	[Address(RVA = "0x4229EF0", Offset = "0x4229EF0", VA = "0x4229EF0")]
	private void HookEffectVertexData()
	{
	}

	[Token(Token = "0x60004B6")]
	[Address(RVA = "0x4229950", Offset = "0x4229950", VA = "0x4229950")]
	private void ClearEffectVertexData()
	{
	}

	[Token(Token = "0x60004B7")]
	[Address(RVA = "0x422B8C0", Offset = "0x422B8C0", VA = "0x422B8C0")]
	private static void DestroyPopLayer(ref TMP_Text layer)
	{
	}

	[Token(Token = "0x60004B8")]
	[Address(RVA = "0x422A650", Offset = "0x422A650", VA = "0x422A650")]
	private void ClearShaderMaterial()
	{
	}

	[Token(Token = "0x60004B9")]
	[Address(RVA = "0x4229FC0", Offset = "0x4229FC0", VA = "0x4229FC0")]
	private void UpdateEffectVertexData(TMP_TextInfo textInfo)
	{
	}

	[Token(Token = "0x60004BA")]
	[Address(RVA = "0x422BDF0", Offset = "0x422BDF0", VA = "0x422BDF0")]
	private static byte ToByte(float value)
	{
		return default(byte);
	}

	[Token(Token = "0x60004BB")]
	[Address(RVA = "0x422BD40", Offset = "0x422BD40", VA = "0x422BD40")]
	private static int SafeCharacterCount(TMP_TextInfo textInfo)
	{
		return default(int);
	}

	[Token(Token = "0x60004BC")]
	[Address(RVA = "0x422BD60", Offset = "0x422BD60", VA = "0x422BD60")]
	private static bool TryGetMeshInfo(TMP_TextInfo textInfo, int materialReferenceIndex, out TMP_MeshInfo mesh)
	{
		return default(bool);
	}

	[Token(Token = "0x60004BD")]
	[Address(RVA = "0x422B9B0", Offset = "0x422B9B0", VA = "0x422B9B0")]
	private static bool TryLocalBounds(TMP_TextInfo textInfo, out float minX, out float maxX, out float minY, out float maxY)
	{
		return default(bool);
	}

	[Token(Token = "0x60004BE")]
	[Address(RVA = "0x422BF20", Offset = "0x422BF20", VA = "0x422BF20")]
	private void ApplyPopFaceGradient(TMP_TextInfo textInfo)
	{
	}

	[Token(Token = "0x60004BF")]
	[Address(RVA = "0x422CB50", Offset = "0x422CB50", VA = "0x422CB50")]
	private Color SampleFaceGradient(float t)
	{
		return default(Color);
	}

	[Token(Token = "0x60004C0")]
	[Address(RVA = "0x422C500", Offset = "0x422C500", VA = "0x422C500")]
	private bool TryPopFaceBounds(TMP_TextInfo textInfo, Camera camera, out float minX, out float maxX)
	{
		return default(bool);
	}

	[Token(Token = "0x60004C1")]
	[Address(RVA = "0x422C420", Offset = "0x422C420", VA = "0x422C420")]
	private Camera PopCamera()
	{
		return null;
	}

	[Token(Token = "0x60004C2")]
	[Address(RVA = "0x422CAB0", Offset = "0x422CAB0", VA = "0x422CAB0")]
	private float ScreenX(Vector3 localVertex, Camera camera)
	{
		return default(float);
	}

	[Token(Token = "0x60004C3")]
	[Address(RVA = "0x422CBF0", Offset = "0x422CBF0", VA = "0x422CBF0")]
	public NameEffectController()
	{
	}
}
