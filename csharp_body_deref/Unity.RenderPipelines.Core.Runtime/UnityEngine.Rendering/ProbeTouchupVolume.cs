using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000135")]
[ExecuteAlways]
[AddComponentMenu("Rendering/Probe Adjustment Volume")]
public class ProbeTouchupVolume : MonoBehaviour, ISerializationCallbackReceiver
{
	[Token(Token = "0x2000136")]
	public enum Shape
	{
		[Token(Token = "0x400053E")]
		Box,
		[Token(Token = "0x400053F")]
		Sphere
	}

	[Token(Token = "0x2000137")]
	public enum Mode
	{
		[Token(Token = "0x4000541")]
		InvalidateProbes = 0,
		[Token(Token = "0x4000542")]
		OverrideValidityThreshold = 1,
		[Token(Token = "0x4000543")]
		ApplyVirtualOffset = 2,
		[Token(Token = "0x4000544")]
		OverrideVirtualOffsetSettings = 3,
		[Token(Token = "0x4000545")]
		IntensityScale = 99
	}

	[Token(Token = "0x2000138")]
	private enum Version
	{
		[Token(Token = "0x4000547")]
		Initial,
		[Token(Token = "0x4000548")]
		Mode,
		[Token(Token = "0x4000549")]
		Count
	}

	[Token(Token = "0x4000530")]
	[FieldOffset(Offset = "0x20")]
	[Tooltip("Select the shape used for this Probe Adjustment Volume.")]
	public Shape shape;

	[Token(Token = "0x4000531")]
	[FieldOffset(Offset = "0x24")]
	[Min(0f)]
	[Tooltip("Modify the size of this Probe Adjustment Volume. This is unaffected by the GameObject's Transform's Scale property.")]
	public Vector3 size;

	[Token(Token = "0x4000532")]
	[FieldOffset(Offset = "0x30")]
	[Min(0f)]
	[Tooltip("Modify the radius of this Probe Adjustment Volume. This is unaffected by the GameObject's Transform's Scale property.")]
	public float radius;

	[Token(Token = "0x4000533")]
	[FieldOffset(Offset = "0x34")]
	public Mode mode;

	[Token(Token = "0x4000534")]
	[FieldOffset(Offset = "0x38")]
	[Range(0.0001f, 2f)]
	[Tooltip("A multiplier applied to the intensity of probes covered by this Probe Adjustment Volume.")]
	public float intensityScale;

	[Token(Token = "0x4000535")]
	[FieldOffset(Offset = "0x3C")]
	[Range(0f, 0.95f)]
	public float overriddenDilationThreshold;

	[Token(Token = "0x4000536")]
	[FieldOffset(Offset = "0x40")]
	public Vector3 virtualOffsetRotation;

	[Token(Token = "0x4000537")]
	[FieldOffset(Offset = "0x4C")]
	[Min(0f)]
	public float virtualOffsetDistance;

	[Token(Token = "0x4000538")]
	[FieldOffset(Offset = "0x50")]
	[Range(0f, 1f)]
	[Tooltip("Determines how far Unity pushes a probe out of geometry after a ray hit.")]
	public float geometryBias;

	[Token(Token = "0x4000539")]
	[FieldOffset(Offset = "0x54")]
	[Range(-0.05f, 0f)]
	[Tooltip("Distance from the probe position used to determine the origin of the sampling ray.")]
	public float rayOriginBias;

	[Token(Token = "0x400053A")]
	[FieldOffset(Offset = "0x58")]
	[SerializeField]
	private Version version;

	[Token(Token = "0x400053B")]
	[FieldOffset(Offset = "0x5C")]
	[Obsolete("Use mode")]
	public bool invalidateProbes;

	[Token(Token = "0x400053C")]
	[FieldOffset(Offset = "0x5D")]
	[Obsolete("Use mode")]
	public bool overrideDilationThreshold;

	[Token(Token = "0x6000A12")]
	[Address(RVA = "0x48A7E40", Offset = "0x48A7E40", VA = "0x48A7E40")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000A13")]
	[Address(RVA = "0x48A7E70", Offset = "0x48A7E70", VA = "0x48A7E70", Slot = "4")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnBeforeSerialize()
	{
	}

	[Token(Token = "0x6000A14")]
	[Address(RVA = "0x48A7E80", Offset = "0x48A7E80", VA = "0x48A7E80", Slot = "5")]
	private void UnityEngine_002EISerializationCallbackReceiver_002EOnAfterDeserialize()
	{
	}

	[Token(Token = "0x6000A15")]
	[Address(RVA = "0x48A7E90", Offset = "0x48A7E90", VA = "0x48A7E90")]
	public ProbeTouchupVolume()
	{
	}
}
