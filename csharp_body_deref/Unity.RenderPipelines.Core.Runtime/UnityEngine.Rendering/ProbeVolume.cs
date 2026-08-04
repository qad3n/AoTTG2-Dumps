// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.ProbeVolume
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000139")]
[ExecuteAlways]
[AddComponentMenu("Light/Probe Volume")]
public class ProbeVolume : MonoBehaviour
{
	[Token(Token = "0x200013A")]
	public enum Mode
	{
		[Token(Token = "0x4000559")]
		Global,
		[Token(Token = "0x400055A")]
		Scene,
		[Token(Token = "0x400055B")]
		Local
	}

	[Token(Token = "0x200013B")]
	private enum Version
	{
		[Token(Token = "0x400055D")]
		Initial,
		[Token(Token = "0x400055E")]
		LocalMode,
		[Token(Token = "0x400055F")]
		Count
	}

	[Token(Token = "0x400054A")]
	[FieldOffset(Offset = "0x20")]
	[Tooltip("When set to Global this Probe Volume considers all renderers with Contribute Global Illumination enabled. Local only considers renderers in the scene.\nThis list updates every time the Scene is saved or the lighting is baked.")]
	public Mode mode;

	[Token(Token = "0x400054B")]
	[FieldOffset(Offset = "0x24")]
	public Vector3 size;

	[Token(Token = "0x400054C")]
	[FieldOffset(Offset = "0x30")]
	[HideInInspector]
	[Min(0f)]
	public bool overrideRendererFilters;

	[Token(Token = "0x400054D")]
	[FieldOffset(Offset = "0x34")]
	[HideInInspector]
	[Min(0f)]
	public float minRendererVolumeSize;

	[Token(Token = "0x400054E")]
	[FieldOffset(Offset = "0x38")]
	public LayerMask objectLayerMask;

	[Token(Token = "0x400054F")]
	[FieldOffset(Offset = "0x3C")]
	[HideInInspector]
	public int lowestSubdivLevelOverride;

	[Token(Token = "0x4000550")]
	[FieldOffset(Offset = "0x40")]
	[HideInInspector]
	public int highestSubdivLevelOverride;

	[Token(Token = "0x4000551")]
	[FieldOffset(Offset = "0x44")]
	[HideInInspector]
	public bool overridesSubdivLevels;

	[Token(Token = "0x4000552")]
	[FieldOffset(Offset = "0x45")]
	[SerializeField]
	internal bool mightNeedRebaking;

	[Token(Token = "0x4000553")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	internal Matrix4x4 cachedTransform;

	[Token(Token = "0x4000554")]
	[FieldOffset(Offset = "0x88")]
	[SerializeField]
	internal int cachedHashCode;

	[Token(Token = "0x4000555")]
	[FieldOffset(Offset = "0x8C")]
	[HideInInspector]
	[Tooltip("Whether HDRP should fill empty space between renderers with bricks at the lowest subdivision level.")]
	public bool fillEmptySpaces;

	[Token(Token = "0x4000556")]
	[FieldOffset(Offset = "0x90")]
	[SerializeField]
	private Version version;

	[Token(Token = "0x4000557")]
	[FieldOffset(Offset = "0x94")]
	[SerializeField]
	[Obsolete("Use mode instead")]
	public bool globalVolume;

	[Token(Token = "0x6000A16")]
	[Address(RVA = "0x4BCCFB0", Offset = "0x4BCCFB0", VA = "0x4BCCFB0")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000A17")]
	[Address(RVA = "0x4BCCFE0", Offset = "0x4BCCFE0", VA = "0x4BCCFE0")]
	public ProbeVolume()
	{
	}
}
