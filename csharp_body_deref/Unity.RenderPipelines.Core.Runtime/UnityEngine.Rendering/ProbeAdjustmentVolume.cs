// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ProbeAdjustmentVolume
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000EF")]
[ExecuteAlways]
[AddComponentMenu("Rendering/Probe Adjustment Volume")]
public class ProbeAdjustmentVolume : MonoBehaviour, ISerializationCallbackReceiver
{
	[Token(Token = "0x20000F0")]
	public enum Shape
	{
		[Token(Token = "0x4000327")]
		Box,
		[Token(Token = "0x4000328")]
		Sphere
	}

	[Token(Token = "0x20000F1")]
	public enum Mode
	{
		[Token(Token = "0x400032A")]
		InvalidateProbes = 0,
		[Token(Token = "0x400032B")]
		OverrideValidityThreshold = 1,
		[Token(Token = "0x400032C")]
		ApplyVirtualOffset = 2,
		[Token(Token = "0x400032D")]
		OverrideVirtualOffsetSettings = 3,
		[Token(Token = "0x400032E")]
		OverrideSkyDirection = 4,
		[Token(Token = "0x400032F")]
		OverrideSampleCount = 5,
		[Token(Token = "0x4000330")]
		OverrideRenderingLayerMask = 6,
		[Token(Token = "0x4000331")]
		IntensityScale = 99
	}

	[Token(Token = "0x20000F2")]
	public enum RenderingLayerMaskOperation
	{
		[Token(Token = "0x4000333")]
		Override,
		[Token(Token = "0x4000334")]
		Add,
		[Token(Token = "0x4000335")]
		Remove
	}

	[Token(Token = "0x20000F3")]
	private enum Version
	{
		[Token(Token = "0x4000337")]
		Initial,
		[Token(Token = "0x4000338")]
		Mode,
		[Token(Token = "0x4000339")]
		Count
	}

	[Token(Token = "0x400030E")]
	[FieldOffset(Offset = "0x20")]
	[Tooltip("Select the shape used for this Probe Adjustment Volume.")]
	public Shape shape;

	[Token(Token = "0x400030F")]
	[FieldOffset(Offset = "0x24")]
	[Min(0f)]
	[Tooltip("Modify the size of this Probe Adjustment Volume. This is unaffected by the GameObject's Transform's Scale property.")]
	public Vector3 size;

	[Token(Token = "0x4000310")]
	[FieldOffset(Offset = "0x30")]
	[Min(0f)]
	[Tooltip("Modify the radius of this Probe Adjustment Volume. This is unaffected by the GameObject's Transform's Scale property.")]
	public float radius;

	[Token(Token = "0x4000311")]
	[FieldOffset(Offset = "0x34")]
	public Mode mode;

	[Token(Token = "0x4000312")]
	[FieldOffset(Offset = "0x38")]
	[Range(0.0001f, 2f)]
	[Tooltip("A multiplier applied to the intensity of probes covered by this Probe Adjustment Volume.")]
	public float intensityScale;

	[Token(Token = "0x4000313")]
	[FieldOffset(Offset = "0x3C")]
	[Range(0f, 0.95f)]
	public float overriddenDilationThreshold;

	[Token(Token = "0x4000314")]
	[FieldOffset(Offset = "0x40")]
	public Vector3 virtualOffsetRotation;

	[Token(Token = "0x4000315")]
	[FieldOffset(Offset = "0x4C")]
	[Min(0f)]
	public float virtualOffsetDistance;

	[Token(Token = "0x4000316")]
	[FieldOffset(Offset = "0x50")]
	[Range(0f, 1f)]
	[Tooltip("Determines how far Unity pushes a probe out of geometry after a ray hit.")]
	public float geometryBias;

	[Token(Token = "0x4000317")]
	[FieldOffset(Offset = "0x54")]
	[Range(0f, 0.95f)]
	public float virtualOffsetThreshold;

	[Token(Token = "0x4000318")]
	[FieldOffset(Offset = "0x58")]
	[Range(-0.05f, 0f)]
	[Tooltip("Distance from the probe position used to determine the origin of the sampling ray.")]
	public float rayOriginBias;

	[Token(Token = "0x4000319")]
	[FieldOffset(Offset = "0x5C")]
	[Tooltip("The direction for sampling the ambient probe in worldspace when using the Sky Visibility feature.")]
	public Vector3 skyDirection;

	[Token(Token = "0x400031A")]
	[FieldOffset(Offset = "0x68")]
	internal Vector3 skyShadingDirectionRotation;

	[Token(Token = "0x400031B")]
	[FieldOffset(Offset = "0x74")]
	[Logarithmic(1, 1024)]
	[Tooltip("Number of samples for direct lighting computations.")]
	public int directSampleCount;

	[Token(Token = "0x400031C")]
	[FieldOffset(Offset = "0x78")]
	[Logarithmic(1, 8192)]
	[Tooltip("Number of samples for indirect lighting computations. This includes environment samples.")]
	public int indirectSampleCount;

	[Token(Token = "0x400031D")]
	[FieldOffset(Offset = "0x7C")]
	[Min(0f)]
	[Tooltip("Multiplier for the number of samples specified above.")]
	public int sampleCountMultiplier;

	[Token(Token = "0x400031E")]
	[FieldOffset(Offset = "0x80")]
	[Min(0f)]
	[Tooltip("Maximum number of bounces for indirect lighting.")]
	public int maxBounces;

	[Token(Token = "0x400031F")]
	[FieldOffset(Offset = "0x84")]
	[Logarithmic(1, 8192)]
	public int skyOcclusionSampleCount;

	[Token(Token = "0x4000320")]
	[FieldOffset(Offset = "0x88")]
	[Range(0f, 5f)]
	public int skyOcclusionMaxBounces;

	[Token(Token = "0x4000321")]
	[FieldOffset(Offset = "0x8C")]
	public RenderingLayerMaskOperation renderingLayerMaskOperation;

	[Token(Token = "0x4000322")]
	[FieldOffset(Offset = "0x90")]
	public byte renderingLayerMask;

	[Token(Token = "0x4000323")]
	[FieldOffset(Offset = "0x94")]
	[SerializeField]
	private Version version;

	[Token(Token = "0x4000324")]
	[FieldOffset(Offset = "0x98")]
	[Obsolete("This field is only kept for migration purpose. Use mode instead. #from(2023.1)")]
	public bool invalidateProbes;

	[Token(Token = "0x4000325")]
	[FieldOffset(Offset = "0x99")]
	[Obsolete("This field is only kept for migration purpose. Use mode instead. #from(2023.1)")]
	public bool overrideDilationThreshold;

	[Token(Token = "0x600086A")]
	[Address(RVA = "0x2B0C370", Offset = "0x2B0A970", VA = "0x182B0C370", Slot = "4")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnBeforeSerialize()
	{
	}

	[Token(Token = "0x600086B")]
	[Address(RVA = "0x2B0C320", Offset = "0x2B0A920", VA = "0x182B0C320", Slot = "5")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnAfterDeserialize()
	{
	}

	[Token(Token = "0x600086C")]
	[Address(RVA = "0x2B0C390", Offset = "0x2B0A990", VA = "0x182B0C390")]
	public ProbeAdjustmentVolume()
	{
	}
}
