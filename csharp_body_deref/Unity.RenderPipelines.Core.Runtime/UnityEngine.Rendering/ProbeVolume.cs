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

[Token(Token = "0x2000123")]
[ExecuteAlways]
[AddComponentMenu("Rendering/Adaptive Probe Volume")]
public class ProbeVolume : MonoBehaviour
{
	[Token(Token = "0x2000124")]
	private enum Version
	{
		[Token(Token = "0x4000563")]
		Initial,
		[Token(Token = "0x4000564")]
		LocalMode,
		[Token(Token = "0x4000565")]
		InvertOverrideLevels,
		[Token(Token = "0x4000566")]
		Count
	}

	[Token(Token = "0x2000125")]
	public enum Mode
	{
		[Token(Token = "0x4000568")]
		Global,
		[Token(Token = "0x4000569")]
		Scene,
		[Token(Token = "0x400056A")]
		Local
	}

	[Token(Token = "0x4000554")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private Version version;

	[Token(Token = "0x4000555")]
	[FieldOffset(Offset = "0x24")]
	[SerializeField]
	[Obsolete("Use mode instead. #from(2023.1)")]
	public bool globalVolume;

	[Token(Token = "0x4000556")]
	[FieldOffset(Offset = "0x28")]
	[Tooltip("When set to Global this Probe Volume considers all renderers with Contribute Global Illumination enabled. Local only considers renderers in the scene.\nThis list updates every time the Scene is saved or the lighting is baked.")]
	public Mode mode;

	[Token(Token = "0x4000557")]
	[FieldOffset(Offset = "0x2C")]
	public Vector3 size;

	[Token(Token = "0x4000558")]
	[FieldOffset(Offset = "0x38")]
	[HideInInspector]
	[Min(0f)]
	public bool overrideRendererFilters;

	[Token(Token = "0x4000559")]
	[FieldOffset(Offset = "0x3C")]
	[HideInInspector]
	[Min(0f)]
	public float minRendererVolumeSize;

	[Token(Token = "0x400055A")]
	[FieldOffset(Offset = "0x40")]
	public LayerMask objectLayerMask;

	[Token(Token = "0x400055B")]
	[FieldOffset(Offset = "0x44")]
	[HideInInspector]
	public int lowestSubdivLevelOverride;

	[Token(Token = "0x400055C")]
	[FieldOffset(Offset = "0x48")]
	[HideInInspector]
	public int highestSubdivLevelOverride;

	[Token(Token = "0x400055D")]
	[FieldOffset(Offset = "0x4C")]
	[HideInInspector]
	public bool overridesSubdivLevels;

	[Token(Token = "0x400055E")]
	[FieldOffset(Offset = "0x4D")]
	[SerializeField]
	internal bool mightNeedRebaking;

	[Token(Token = "0x400055F")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	internal Matrix4x4 cachedTransform;

	[Token(Token = "0x4000560")]
	[FieldOffset(Offset = "0x90")]
	[SerializeField]
	internal int cachedHashCode;

	[Token(Token = "0x4000561")]
	[FieldOffset(Offset = "0x94")]
	[HideInInspector]
	[Tooltip("Whether Unity should fill empty space between renderers with bricks at the highest subdivision level.")]
	public bool fillEmptySpaces;

	[Token(Token = "0x6000A4C")]
	[Address(RVA = "0x2B191A0", Offset = "0x2B177A0", VA = "0x182B191A0")]
	private void Awake()
	{
	}

	[Token(Token = "0x6000A4D")]
	[Address(RVA = "0x2B191D0", Offset = "0x2B177D0", VA = "0x182B191D0")]
	public ProbeVolume()
	{
	}
}
