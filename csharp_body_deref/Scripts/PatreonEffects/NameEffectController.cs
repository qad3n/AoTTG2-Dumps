using Il2CppDummyDll;
using TMPro;
using UnityEngine;

namespace PatreonEffects;

[Token(Token = "0x20000F1")]
public class NameEffectController : MonoBehaviour
{
	[Token(Token = "0x40005A0")]
	[FieldOffset(Offset = "0x20")]
	[Header("Auto Assigned")]
	[SerializeField]
	private TMP_Text text;

	[Token(Token = "0x40005A1")]
	[FieldOffset(Offset = "0x28")]
	[Header("Debug")]
	[SerializeField]
	private NameEffectType effect;

	[Token(Token = "0x40005A2")]
	[FieldOffset(Offset = "0x30")]
	private Material originalFontMaterial;

	[Token(Token = "0x40005A3")]
	[FieldOffset(Offset = "0x38")]
	private Material runtimeMat;

	[Token(Token = "0x40005A4")]
	[FieldOffset(Offset = "0x40")]
	private bool initialized;

	[Token(Token = "0x40005A5")]
	[FieldOffset(Offset = "0x48")]
	private TMP_Text popShadowText;

	[Token(Token = "0x40005A6")]
	[FieldOffset(Offset = "0x50")]
	private TMP_Text popExtrusionText;

	[Token(Token = "0x40005A7")]
	[FieldOffset(Offset = "0x58")]
	private bool popActive;

	[Token(Token = "0x40005A8")]
	[FieldOffset(Offset = "0x59")]
	private bool outlineActive;

	[Token(Token = "0x40005A9")]
	[FieldOffset(Offset = "0x5A")]
	private bool popGradientHooked;

	[Token(Token = "0x40005AA")]
	[FieldOffset(Offset = "0x5B")]
	private bool effectVertexDataHooked;

	[Token(Token = "0x40005AB")]
	[FieldOffset(Offset = "0x5C")]
	private bool cleared;

	[Token(Token = "0x40005AC")]
	[FieldOffset(Offset = "0x60")]
	private Color popFaceA;

	[Token(Token = "0x40005AD")]
	[FieldOffset(Offset = "0x70")]
	private Color popFaceB;

	[Token(Token = "0x40005AE")]
	[FieldOffset(Offset = "0x80")]
	private Color popFaceC;

	[Token(Token = "0x40005AF")]
	[FieldOffset(Offset = "0x90")]
	private Color popShadowColor;

	[Token(Token = "0x40005B0")]
	[FieldOffset(Offset = "0xA0")]
	private Color popExtrusionColor;

	[Token(Token = "0x40005B1")]
	[FieldOffset(Offset = "0xB0")]
	private Vector2 popShadowOffset;

	[Token(Token = "0x40005B2")]
	[FieldOffset(Offset = "0xB8")]
	private Vector2 popExtrusionOffset;

	[Token(Token = "0x40005B3")]
	private const float PopOffsetReferenceFontSize = 48f;

	[Token(Token = "0x40005B4")]
	private const float OutlineWidth = 0.16f;

	[Token(Token = "0x40005B5")]
	private const float OutlineFaceDilate = 0.02f;

	[Token(Token = "0x40005B6")]
	private const float OutlineGlowInner = 0.05f;

	[Token(Token = "0x40005B7")]
	private const float OutlineGlowOuter = 0.08f;

	[Token(Token = "0x40005B8")]
	private const float OutlineGlowPower = 0.72f;

	[Token(Token = "0x40005B9")]
	[FieldOffset(Offset = "0x0")]
	private static readonly int FaceColor_ID;

	[Token(Token = "0x40005BA")]
	[FieldOffset(Offset = "0x4")]
	private static readonly int GradientA_ID;

	[Token(Token = "0x40005BB")]
	[FieldOffset(Offset = "0x8")]
	private static readonly int GradientB_ID;

	[Token(Token = "0x40005BC")]
	[FieldOffset(Offset = "0xC")]
	private static readonly int GradientC_ID;

	[Token(Token = "0x40005BD")]
	[FieldOffset(Offset = "0x10")]
	private static readonly int GradientD_ID;

	[Token(Token = "0x40005BE")]
	[FieldOffset(Offset = "0x14")]
	private static readonly int GradientScale_ID;

	[Token(Token = "0x40005BF")]
	[FieldOffset(Offset = "0x18")]
	private static readonly int GradientSpeed_ID;

	[Token(Token = "0x40005C0")]
	[FieldOffset(Offset = "0x1C")]
	private static readonly int EffectMode_ID;

	[Token(Token = "0x40005C1")]
	[FieldOffset(Offset = "0x20")]
	private static readonly int Glow_ID;

	[Token(Token = "0x40005C2")]
	[FieldOffset(Offset = "0x24")]
	private static readonly int ScanlineStrength_ID;

	[Token(Token = "0x40005C3")]
	[FieldOffset(Offset = "0x28")]
	private static readonly int ScanlineDensity_ID;

	[Token(Token = "0x40005C4")]
	[FieldOffset(Offset = "0x2C")]
	private static readonly int ScanlineSpeed_ID;

	[Token(Token = "0x40005C5")]
	[FieldOffset(Offset = "0x30")]
	private static readonly int FlickerStrength_ID;

	[Token(Token = "0x40005C6")]
	[FieldOffset(Offset = "0x34")]
	private static readonly int FlickerSpeed_ID;

	[Token(Token = "0x40005C7")]
	[FieldOffset(Offset = "0x38")]
	private static readonly int Softness_ID;

	[Token(Token = "0x6000495")]
	[Address(RVA = "0x3F33CD0", Offset = "0x3F33CD0", VA = "0x3F33CD0")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000496")]
	[Address(RVA = "0x3F33CE0", Offset = "0x3F33CE0", VA = "0x3F33CE0")]
	public void AutoConfigure()
	{
	}

	[Token(Token = "0x6000497")]
	[Address(RVA = "0x3F33FC0", Offset = "0x3F33FC0", VA = "0x3F33FC0")]
	public void Apply(NameEffectSettings settings)
	{
	}

	[Token(Token = "0x6000498")]
	[Address(RVA = "0x3F35050", Offset = "0x3F35050", VA = "0x3F35050")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000499")]
	[Address(RVA = "0x3F352F0", Offset = "0x3F352F0", VA = "0x3F352F0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x600049A")]
	[Address(RVA = "0x3F35300", Offset = "0x3F35300", VA = "0x3F35300")]
	[ContextMenu("Apply Holographic")]
	public void ApplyHolographic()
	{
	}

	[Token(Token = "0x600049B")]
	[Address(RVA = "0x3F33E90", Offset = "0x3F33E90", VA = "0x3F33E90")]
	private bool FindText()
	{
		return default(bool);
	}

	[Token(Token = "0x600049C")]
	[Address(RVA = "0x3F34550", Offset = "0x3F34550", VA = "0x3F34550")]
	private void ApplyPop(NameEffectSettings settings)
	{
	}

	[Token(Token = "0x600049D")]
	[Address(RVA = "0x3F35A40", Offset = "0x3F35A40", VA = "0x3F35A40")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x600049E")]
	[Address(RVA = "0x3F35450", Offset = "0x3F35450", VA = "0x3F35450")]
	private void EnsurePopLayer(ref TMP_Text layer, string layerName, Color color)
	{
	}

	[Token(Token = "0x600049F")]
	[Address(RVA = "0x3F35950", Offset = "0x3F35950", VA = "0x3F35950")]
	private void SyncPopLayers()
	{
	}

	[Token(Token = "0x60004A0")]
	[Address(RVA = "0x3F347F0", Offset = "0x3F347F0", VA = "0x3F347F0")]
	private void ApplyOutline(NameEffectSettings settings)
	{
	}

	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x3F35ED0", Offset = "0x3F35ED0", VA = "0x3F35ED0")]
	private static void ApplyTmpOutlineMaterial(Material material, NameEffectSettings settings)
	{
	}

	[Token(Token = "0x60004A2")]
	[Address(RVA = "0x3F36270", Offset = "0x3F36270", VA = "0x3F36270")]
	private static void SetColorIfPresent(Material material, int propertyId, Color value)
	{
	}

	[Token(Token = "0x60004A3")]
	[Address(RVA = "0x3F362C0", Offset = "0x3F362C0", VA = "0x3F362C0")]
	private static void SetFloatIfPresent(Material material, int propertyId, float value)
	{
	}

	[Token(Token = "0x60004A4")]
	[Address(RVA = "0x3F35EA0", Offset = "0x3F35EA0", VA = "0x3F35EA0")]
	private float PopOffsetScale()
	{
		return default(float);
	}

	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x3F35B30", Offset = "0x3F35B30", VA = "0x3F35B30")]
	private void SyncPopLayer(TMP_Text layer, Vector2 offset, Color color)
	{
	}

	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x3F35880", Offset = "0x3F35880", VA = "0x3F35880")]
	private void HookPopGradient()
	{
	}

	[Token(Token = "0x60004A7")]
	[Address(RVA = "0x3F34780", Offset = "0x3F34780", VA = "0x3F34780")]
	private void ClearPop()
	{
	}

	[Token(Token = "0x60004A8")]
	[Address(RVA = "0x3F34520", Offset = "0x3F34520", VA = "0x3F34520")]
	private void ClearOutline()
	{
	}

	[Token(Token = "0x60004A9")]
	[Address(RVA = "0x3F36310", Offset = "0x3F36310", VA = "0x3F36310")]
	private void ClearPopGradient()
	{
	}

	[Token(Token = "0x60004AA")]
	[Address(RVA = "0x3F34A40", Offset = "0x3F34A40", VA = "0x3F34A40")]
	private void HookEffectVertexData()
	{
	}

	[Token(Token = "0x60004AB")]
	[Address(RVA = "0x3F34450", Offset = "0x3F34450", VA = "0x3F34450")]
	private void ClearEffectVertexData()
	{
	}

	[Token(Token = "0x60004AC")]
	[Address(RVA = "0x3F363E0", Offset = "0x3F363E0", VA = "0x3F363E0")]
	private static void DestroyPopLayer(ref TMP_Text layer)
	{
	}

	[Token(Token = "0x60004AD")]
	[Address(RVA = "0x3F35170", Offset = "0x3F35170", VA = "0x3F35170")]
	private void ClearShaderMaterial()
	{
	}

	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x3F34B10", Offset = "0x3F34B10", VA = "0x3F34B10")]
	private void UpdateEffectVertexData(TMP_TextInfo textInfo)
	{
	}

	[Token(Token = "0x60004AF")]
	[Address(RVA = "0x3F36710", Offset = "0x3F36710", VA = "0x3F36710")]
	private static byte ToByte(float value)
	{
		return default(byte);
	}

	[Token(Token = "0x60004B0")]
	[Address(RVA = "0x3F364D0", Offset = "0x3F364D0", VA = "0x3F364D0")]
	private static bool TryLocalBounds(TMP_TextInfo textInfo, out float minX, out float maxX, out float minY, out float maxY)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B1")]
	[Address(RVA = "0x3F36840", Offset = "0x3F36840", VA = "0x3F36840")]
	private void ApplyPopFaceGradient(TMP_TextInfo textInfo)
	{
	}

	[Token(Token = "0x60004B2")]
	[Address(RVA = "0x3F37190", Offset = "0x3F37190", VA = "0x3F37190")]
	private Color SampleFaceGradient(float t)
	{
		return default(Color);
	}

	[Token(Token = "0x60004B3")]
	[Address(RVA = "0x3F36C90", Offset = "0x3F36C90", VA = "0x3F36C90")]
	private bool TryPopFaceBounds(TMP_TextInfo textInfo, Camera camera, out float minX, out float maxX)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B4")]
	[Address(RVA = "0x3F36BB0", Offset = "0x3F36BB0", VA = "0x3F36BB0")]
	private Camera PopCamera()
	{
		return null;
	}

	[Token(Token = "0x60004B5")]
	[Address(RVA = "0x3F370F0", Offset = "0x3F370F0", VA = "0x3F370F0")]
	private float ScreenX(Vector3 localVertex, Camera camera)
	{
		return default(float);
	}

	[Token(Token = "0x60004B6")]
	[Address(RVA = "0x3F37230", Offset = "0x3F37230", VA = "0x3F37230")]
	public NameEffectController()
	{
	}
}
