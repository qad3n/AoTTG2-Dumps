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

[Token(Token = "0x2000113")]
public class NameEffectController : MonoBehaviour
{
	[Token(Token = "0x4000649")]
	[FieldOffset(Offset = "0x20")]
	[Header("Auto Assigned")]
	[SerializeField]
	private TMP_Text text;

	[Token(Token = "0x400064A")]
	[FieldOffset(Offset = "0x28")]
	[Header("Debug")]
	[SerializeField]
	private NameEffectType effect;

	[Token(Token = "0x400064B")]
	[FieldOffset(Offset = "0x30")]
	private Material originalFontMaterial;

	[Token(Token = "0x400064C")]
	[FieldOffset(Offset = "0x38")]
	private TMP_FontAsset originalFontAsset;

	[Token(Token = "0x400064D")]
	[FieldOffset(Offset = "0x40")]
	private Material runtimeMat;

	[Token(Token = "0x400064E")]
	[FieldOffset(Offset = "0x48")]
	private bool initialized;

	[Token(Token = "0x400064F")]
	[FieldOffset(Offset = "0x50")]
	private TMP_Text popShadowText;

	[Token(Token = "0x4000650")]
	[FieldOffset(Offset = "0x58")]
	private TMP_Text popExtrusionText;

	[Token(Token = "0x4000651")]
	[FieldOffset(Offset = "0x60")]
	private bool popActive;

	[Token(Token = "0x4000652")]
	[FieldOffset(Offset = "0x61")]
	private bool outlineActive;

	[Token(Token = "0x4000653")]
	[FieldOffset(Offset = "0x62")]
	private bool popGradientHooked;

	[Token(Token = "0x4000654")]
	[FieldOffset(Offset = "0x63")]
	private bool effectVertexDataHooked;

	[Token(Token = "0x4000655")]
	[FieldOffset(Offset = "0x64")]
	private bool cleared;

	[Token(Token = "0x4000656")]
	[FieldOffset(Offset = "0x68")]
	private Color popFaceA;

	[Token(Token = "0x4000657")]
	[FieldOffset(Offset = "0x78")]
	private Color popFaceB;

	[Token(Token = "0x4000658")]
	[FieldOffset(Offset = "0x88")]
	private Color popFaceC;

	[Token(Token = "0x4000659")]
	[FieldOffset(Offset = "0x98")]
	private Color popShadowColor;

	[Token(Token = "0x400065A")]
	[FieldOffset(Offset = "0xA8")]
	private Color popExtrusionColor;

	[Token(Token = "0x400065B")]
	[FieldOffset(Offset = "0xB8")]
	private Vector2 popShadowOffset;

	[Token(Token = "0x400065C")]
	[FieldOffset(Offset = "0xC0")]
	private Vector2 popExtrusionOffset;

	[Token(Token = "0x400065D")]
	private const float PopOffsetReferenceFontSize = 48f;

	[Token(Token = "0x400065E")]
	private const float OutlineWidth = 0.16f;

	[Token(Token = "0x400065F")]
	private const float OutlineFaceDilate = 0.02f;

	[Token(Token = "0x4000660")]
	[FieldOffset(Offset = "0x0")]
	private static readonly int FaceColor_ID;

	[Token(Token = "0x4000661")]
	[FieldOffset(Offset = "0x4")]
	private static readonly int GradientA_ID;

	[Token(Token = "0x4000662")]
	[FieldOffset(Offset = "0x8")]
	private static readonly int GradientB_ID;

	[Token(Token = "0x4000663")]
	[FieldOffset(Offset = "0xC")]
	private static readonly int GradientC_ID;

	[Token(Token = "0x4000664")]
	[FieldOffset(Offset = "0x10")]
	private static readonly int GradientD_ID;

	[Token(Token = "0x4000665")]
	[FieldOffset(Offset = "0x14")]
	private static readonly int EffectGradientScale_ID;

	[Token(Token = "0x4000666")]
	[FieldOffset(Offset = "0x18")]
	private static readonly int GradientSpeed_ID;

	[Token(Token = "0x4000667")]
	[FieldOffset(Offset = "0x1C")]
	private static readonly int EffectMode_ID;

	[Token(Token = "0x4000668")]
	[FieldOffset(Offset = "0x20")]
	private static readonly int Glow_ID;

	[Token(Token = "0x4000669")]
	[FieldOffset(Offset = "0x24")]
	private static readonly int ScanlineStrength_ID;

	[Token(Token = "0x400066A")]
	[FieldOffset(Offset = "0x28")]
	private static readonly int ScanlineDensity_ID;

	[Token(Token = "0x400066B")]
	[FieldOffset(Offset = "0x2C")]
	private static readonly int ScanlineSpeed_ID;

	[Token(Token = "0x400066C")]
	[FieldOffset(Offset = "0x30")]
	private static readonly int FlickerStrength_ID;

	[Token(Token = "0x400066D")]
	[FieldOffset(Offset = "0x34")]
	private static readonly int FlickerSpeed_ID;

	[Token(Token = "0x400066E")]
	[FieldOffset(Offset = "0x38")]
	private static readonly int Softness_ID;

	[Token(Token = "0x600053D")]
	[Address(RVA = "0x20C5F90", Offset = "0x20C4590", VA = "0x1820C5F90")]
	private void Awake()
	{
	}

	[Token(Token = "0x600053E")]
	[Address(RVA = "0x20C5F90", Offset = "0x20C4590", VA = "0x1820C5F90")]
	public void AutoConfigure()
	{
	}

	[Token(Token = "0x600053F")]
	[Address(RVA = "0x20C70A0", Offset = "0x20C56A0", VA = "0x1820C70A0")]
	private bool RefreshOriginalMaterial()
	{
		return default(bool);
	}

	[Token(Token = "0x6000540")]
	[Address(RVA = "0x20C6A70", Offset = "0x20C5070", VA = "0x1820C6A70")]
	private void EnsureShaderMaterial()
	{
	}

	[Token(Token = "0x6000541")]
	[Address(RVA = "0x20C5930", Offset = "0x20C3F30", VA = "0x1820C5930")]
	public void Apply(NameEffectSettings settings)
	{
	}

	[Token(Token = "0x6000542")]
	[Address(RVA = "0x20C63D0", Offset = "0x20C49D0", VA = "0x1820C63D0")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000543")]
	[Address(RVA = "0x20C6F60", Offset = "0x20C5560", VA = "0x1820C6F60")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6000544")]
	[Address(RVA = "0x20C4E20", Offset = "0x20C3420", VA = "0x1820C4E20")]
	[ContextMenu("Apply Holographic")]
	public void ApplyHolographic()
	{
	}

	[Token(Token = "0x6000545")]
	[Address(RVA = "0x20C6C60", Offset = "0x20C5260", VA = "0x1820C6C60")]
	private bool FindText()
	{
		return default(bool);
	}

	[Token(Token = "0x6000546")]
	[Address(RVA = "0x20C5580", Offset = "0x20C3B80", VA = "0x1820C5580")]
	private void ApplyPop(NameEffectSettings settings)
	{
	}

	[Token(Token = "0x6000547")]
	[Address(RVA = "0x20C6F50", Offset = "0x20C5550", VA = "0x1820C6F50")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6000548")]
	[Address(RVA = "0x20C6600", Offset = "0x20C4C00", VA = "0x1820C6600")]
	private void EnsurePopLayer(ref TMP_Text layer, string layerName, Color color)
	{
	}

	[Token(Token = "0x6000549")]
	[Address(RVA = "0x20C79D0", Offset = "0x20C5FD0", VA = "0x1820C79D0")]
	private void SyncPopLayers()
	{
	}

	[Token(Token = "0x600054A")]
	[Address(RVA = "0x20C4E80", Offset = "0x20C3480", VA = "0x1820C4E80")]
	private void ApplyOutline(NameEffectSettings settings)
	{
	}

	[Token(Token = "0x600054B")]
	[Address(RVA = "0x20C5710", Offset = "0x20C3D10", VA = "0x1820C5710")]
	private static void ApplyTmpOutlineMaterial(Material material, NameEffectSettings settings)
	{
	}

	[Token(Token = "0x600054C")]
	[Address(RVA = "0x20C7500", Offset = "0x20C5B00", VA = "0x1820C7500")]
	private static void SetColorIfPresent(Material material, int propertyId, Color value)
	{
	}

	[Token(Token = "0x600054D")]
	[Address(RVA = "0x20C7560", Offset = "0x20C5B60", VA = "0x1820C7560")]
	private static void SetFloatIfPresent(Material material, int propertyId, float value)
	{
	}

	[Token(Token = "0x600054E")]
	[Address(RVA = "0x20C7060", Offset = "0x20C5660", VA = "0x1820C7060")]
	private float PopOffsetScale()
	{
		return default(float);
	}

	[Token(Token = "0x600054F")]
	[Address(RVA = "0x20C75B0", Offset = "0x20C5BB0", VA = "0x1820C75B0")]
	private void SyncPopLayer(TMP_Text layer, Vector2 offset, Color color)
	{
	}

	[Token(Token = "0x6000550")]
	[Address(RVA = "0x20C6E70", Offset = "0x20C5470", VA = "0x1820C6E70")]
	private void HookPopGradient()
	{
	}

	[Token(Token = "0x6000551")]
	[Address(RVA = "0x20C61E0", Offset = "0x20C47E0", VA = "0x1820C61E0")]
	private void ClearPop()
	{
	}

	[Token(Token = "0x6000552")]
	[Address(RVA = "0x20C60C0", Offset = "0x20C46C0", VA = "0x1820C60C0")]
	private void ClearOutline()
	{
	}

	[Token(Token = "0x6000553")]
	[Address(RVA = "0x20C6100", Offset = "0x20C4700", VA = "0x1820C6100")]
	private void ClearPopGradient()
	{
	}

	[Token(Token = "0x6000554")]
	[Address(RVA = "0x20C6D90", Offset = "0x20C5390", VA = "0x1820C6D90")]
	private void HookEffectVertexData()
	{
	}

	[Token(Token = "0x6000555")]
	[Address(RVA = "0x20C5FE0", Offset = "0x20C45E0", VA = "0x1820C5FE0")]
	private void ClearEffectVertexData()
	{
	}

	[Token(Token = "0x6000556")]
	[Address(RVA = "0x20C6500", Offset = "0x20C4B00", VA = "0x1820C6500")]
	private static void DestroyPopLayer(ref TMP_Text layer)
	{
	}

	[Token(Token = "0x6000557")]
	[Address(RVA = "0x20C6250", Offset = "0x20C4850", VA = "0x1820C6250")]
	private void ClearShaderMaterial()
	{
	}

	[Token(Token = "0x6000558")]
	[Address(RVA = "0x20C8330", Offset = "0x20C6930", VA = "0x1820C8330")]
	private void UpdateEffectVertexData(TMP_TextInfo textInfo)
	{
	}

	[Token(Token = "0x6000559")]
	[Address(RVA = "0x20C7AE0", Offset = "0x20C60E0", VA = "0x1820C7AE0")]
	private static byte ToByte(float value)
	{
		return default(byte);
	}

	[Token(Token = "0x600055A")]
	[Address(RVA = "0x20C72A0", Offset = "0x20C58A0", VA = "0x1820C72A0")]
	private static int SafeCharacterCount(TMP_TextInfo textInfo)
	{
		return default(int);
	}

	[Token(Token = "0x600055B")]
	[Address(RVA = "0x20C7C00", Offset = "0x20C6200", VA = "0x1820C7C00")]
	private static bool TryGetMeshInfo(TMP_TextInfo textInfo, int materialReferenceIndex, out TMP_MeshInfo mesh)
	{
		return default(bool);
	}

	[Token(Token = "0x600055C")]
	[Address(RVA = "0x20C7CB0", Offset = "0x20C62B0", VA = "0x1820C7CB0")]
	private static bool TryLocalBounds(TMP_TextInfo textInfo, out float minX, out float maxX, out float minY, out float maxY)
	{
		return default(bool);
	}

	[Token(Token = "0x600055D")]
	[Address(RVA = "0x20C50A0", Offset = "0x20C36A0", VA = "0x1820C50A0")]
	private void ApplyPopFaceGradient(TMP_TextInfo textInfo)
	{
	}

	[Token(Token = "0x600055E")]
	[Address(RVA = "0x20C72D0", Offset = "0x20C58D0", VA = "0x1820C72D0")]
	private Color SampleFaceGradient(float t)
	{
		return default(Color);
	}

	[Token(Token = "0x600055F")]
	[Address(RVA = "0x20C7FF0", Offset = "0x20C65F0", VA = "0x1820C7FF0")]
	private bool TryPopFaceBounds(TMP_TextInfo textInfo, Camera camera, out float minX, out float maxX)
	{
		return default(bool);
	}

	[Token(Token = "0x6000560")]
	[Address(RVA = "0x20C6F70", Offset = "0x20C5570", VA = "0x1820C6F70")]
	private Camera PopCamera()
	{
		return null;
	}

	[Token(Token = "0x6000561")]
	[Address(RVA = "0x20C7430", Offset = "0x20C5A30", VA = "0x1820C7430")]
	private float ScreenX(Vector3 localVertex, Camera camera)
	{
		return default(float);
	}

	[Token(Token = "0x6000562")]
	[Address(RVA = "0x20C8AB0", Offset = "0x20C70B0", VA = "0x1820C8AB0")]
	public NameEffectController()
	{
	}
}
