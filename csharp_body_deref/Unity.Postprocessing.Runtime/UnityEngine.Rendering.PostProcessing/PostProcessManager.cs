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
		[Address(RVA = "0x482B240", Offset = "0x482B240", VA = "0x482B240")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600015D")]
	[Address(RVA = "0x4836090", Offset = "0x4836090", VA = "0x4836090")]
	private PostProcessManager()
	{
	}

	[Token(Token = "0x600015E")]
	[Address(RVA = "0x48368B0", Offset = "0x48368B0", VA = "0x48368B0")]
	private void CleanBaseTypes()
	{
	}

	[Token(Token = "0x600015F")]
	[Address(RVA = "0x4836290", Offset = "0x4836290", VA = "0x4836290")]
	private void ReloadBaseTypes()
	{
	}

	[Token(Token = "0x6000160")]
	[Address(RVA = "0x4836AF0", Offset = "0x4836AF0", VA = "0x4836AF0")]
	public void GetActiveVolumes(PostProcessLayer layer, List<PostProcessVolume> results, bool skipDisabled = true, bool skipZeroWeight = true)
	{
	}

	[Token(Token = "0x6000161")]
	[Address(RVA = "0x4837690", Offset = "0x4837690", VA = "0x4837690")]
	public PostProcessVolume GetHighestPriorityVolume(PostProcessLayer layer)
	{
		return null;
	}

	[Token(Token = "0x6000162")]
	[Address(RVA = "0x4837740", Offset = "0x4837740", VA = "0x4837740")]
	public PostProcessVolume GetHighestPriorityVolume(LayerMask mask)
	{
		return null;
	}

	[Token(Token = "0x6000163")]
	[Address(RVA = "0x4837910", Offset = "0x4837910", VA = "0x4837910")]
	public PostProcessVolume QuickVolume(int layer, float priority, params PostProcessEffectSettings[] settings)
	{
		return null;
	}

	[Token(Token = "0x6000164")]
	[Address(RVA = "0x4837E50", Offset = "0x4837E50", VA = "0x4837E50")]
	internal void SetLayerDirty(int layer)
	{
	}

	[Token(Token = "0x6000165")]
	[Address(RVA = "0x4838010", Offset = "0x4838010", VA = "0x4838010")]
	internal void UpdateVolumeLayer(PostProcessVolume volume, int prevLayer, int newLayer)
	{
	}

	[Token(Token = "0x6000166")]
	[Address(RVA = "0x4838230", Offset = "0x4838230", VA = "0x4838230")]
	private void Register(PostProcessVolume volume, int layer)
	{
	}

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x48384F0", Offset = "0x48384F0", VA = "0x48384F0")]
	internal void Register(PostProcessVolume volume)
	{
	}

	[Token(Token = "0x6000168")]
	[Address(RVA = "0x4838050", Offset = "0x4838050", VA = "0x4838050")]
	private void Unregister(PostProcessVolume volume, int layer)
	{
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x4838540", Offset = "0x4838540", VA = "0x4838540")]
	internal void Unregister(PostProcessVolume volume)
	{
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x4838590", Offset = "0x4838590", VA = "0x4838590")]
	private void ReplaceData(PostProcessLayer postProcessLayer)
	{
	}

	[Token(Token = "0x600016B")]
	[Address(RVA = "0x48318B0", Offset = "0x48318B0", VA = "0x48318B0")]
	internal void UpdateSettings(PostProcessLayer postProcessLayer, Camera camera)
	{
	}

	[Token(Token = "0x600016C")]
	[Address(RVA = "0x48371E0", Offset = "0x48371E0", VA = "0x48371E0")]
	private List<PostProcessVolume> GrabVolumes(LayerMask mask)
	{
		return null;
	}

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x4838920", Offset = "0x4838920", VA = "0x4838920")]
	private static void SortByPriority(List<PostProcessVolume> volumes)
	{
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x4838A50", Offset = "0x4838A50", VA = "0x4838A50")]
	private static bool IsVolumeRenderedByCamera(PostProcessVolume volume, Camera camera)
	{
		return default(bool);
	}
}
