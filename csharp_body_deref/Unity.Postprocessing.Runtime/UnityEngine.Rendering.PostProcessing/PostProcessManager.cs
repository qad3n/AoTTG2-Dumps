// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PostProcessing.PostProcessManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Rendering.PostProcessing;

[Token(Token = "0x200006F")]
public sealed class PostProcessManager
{
	[Token(Token = "0x40001C9")]
	[FieldOffset(Offset = "0x0")]
	private static PostProcessManager s_Instance;

	[Token(Token = "0x40001CA")]
	private const int k_MaxLayerCount = 32;

	[Token(Token = "0x40001CB")]
	[FieldOffset(Offset = "0x10")]
	private readonly Dictionary<int, List<PostProcessVolume>> m_SortedVolumes;

	[Token(Token = "0x40001CC")]
	[FieldOffset(Offset = "0x18")]
	private readonly List<PostProcessVolume> m_Volumes;

	[Token(Token = "0x40001CD")]
	[FieldOffset(Offset = "0x20")]
	private readonly Dictionary<int, bool> m_SortNeeded;

	[Token(Token = "0x40001CE")]
	[FieldOffset(Offset = "0x28")]
	private readonly List<PostProcessEffectSettings> m_BaseSettings;

	[Token(Token = "0x40001CF")]
	[FieldOffset(Offset = "0x30")]
	private readonly List<Collider> m_TempColliders;

	[Token(Token = "0x40001D0")]
	[FieldOffset(Offset = "0x38")]
	public readonly Dictionary<Type, PostProcessAttribute> settingsTypes;

	[Token(Token = "0x1700000E")]
	public static PostProcessManager instance
	{
		[Token(Token = "0x600015C")]
		[Address(RVA = "0x4B50330", Offset = "0x4B50330", VA = "0x4B50330")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600015D")]
	[Address(RVA = "0x4B5B180", Offset = "0x4B5B180", VA = "0x4B5B180")]
	private PostProcessManager()
	{
	}

	[Token(Token = "0x600015E")]
	[Address(RVA = "0x4B5B9A0", Offset = "0x4B5B9A0", VA = "0x4B5B9A0")]
	private void CleanBaseTypes()
	{
	}

	[Token(Token = "0x600015F")]
	[Address(RVA = "0x4B5B380", Offset = "0x4B5B380", VA = "0x4B5B380")]
	private void ReloadBaseTypes()
	{
	}

	[Token(Token = "0x6000160")]
	[Address(RVA = "0x4B5BBE0", Offset = "0x4B5BBE0", VA = "0x4B5BBE0")]
	public void GetActiveVolumes(PostProcessLayer layer, List<PostProcessVolume> results, bool skipDisabled = true, bool skipZeroWeight = true)
	{
	}

	[Token(Token = "0x6000161")]
	[Address(RVA = "0x4B5C780", Offset = "0x4B5C780", VA = "0x4B5C780")]
	public PostProcessVolume GetHighestPriorityVolume(PostProcessLayer layer)
	{
		return null;
	}

	[Token(Token = "0x6000162")]
	[Address(RVA = "0x4B5C830", Offset = "0x4B5C830", VA = "0x4B5C830")]
	public PostProcessVolume GetHighestPriorityVolume(LayerMask mask)
	{
		return null;
	}

	[Token(Token = "0x6000163")]
	[Address(RVA = "0x4B5CA00", Offset = "0x4B5CA00", VA = "0x4B5CA00")]
	public PostProcessVolume QuickVolume(int layer, float priority, params PostProcessEffectSettings[] settings)
	{
		return null;
	}

	[Token(Token = "0x6000164")]
	[Address(RVA = "0x4B5CF40", Offset = "0x4B5CF40", VA = "0x4B5CF40")]
	internal void SetLayerDirty(int layer)
	{
	}

	[Token(Token = "0x6000165")]
	[Address(RVA = "0x4B5D100", Offset = "0x4B5D100", VA = "0x4B5D100")]
	internal void UpdateVolumeLayer(PostProcessVolume volume, int prevLayer, int newLayer)
	{
	}

	[Token(Token = "0x6000166")]
	[Address(RVA = "0x4B5D320", Offset = "0x4B5D320", VA = "0x4B5D320")]
	private void Register(PostProcessVolume volume, int layer)
	{
	}

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x4B5D5E0", Offset = "0x4B5D5E0", VA = "0x4B5D5E0")]
	internal void Register(PostProcessVolume volume)
	{
	}

	[Token(Token = "0x6000168")]
	[Address(RVA = "0x4B5D140", Offset = "0x4B5D140", VA = "0x4B5D140")]
	private void Unregister(PostProcessVolume volume, int layer)
	{
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x4B5D630", Offset = "0x4B5D630", VA = "0x4B5D630")]
	internal void Unregister(PostProcessVolume volume)
	{
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x4B5D680", Offset = "0x4B5D680", VA = "0x4B5D680")]
	private void ReplaceData(PostProcessLayer postProcessLayer)
	{
	}

	[Token(Token = "0x600016B")]
	[Address(RVA = "0x4B569A0", Offset = "0x4B569A0", VA = "0x4B569A0")]
	internal void UpdateSettings(PostProcessLayer postProcessLayer, Camera camera)
	{
	}

	[Token(Token = "0x600016C")]
	[Address(RVA = "0x4B5C2D0", Offset = "0x4B5C2D0", VA = "0x4B5C2D0")]
	private List<PostProcessVolume> GrabVolumes(LayerMask mask)
	{
		return null;
	}

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x4B5DA10", Offset = "0x4B5DA10", VA = "0x4B5DA10")]
	private static void SortByPriority(List<PostProcessVolume> volumes)
	{
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x4B5DB40", Offset = "0x4B5DB40", VA = "0x4B5DB40")]
	private static bool IsVolumeRenderedByCamera(PostProcessVolume volume, Camera camera)
	{
		return default(bool);
	}
}
