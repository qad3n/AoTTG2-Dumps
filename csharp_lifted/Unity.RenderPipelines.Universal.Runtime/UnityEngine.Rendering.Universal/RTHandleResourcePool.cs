// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.RTHandleResourcePool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Rendering.RenderGraphModule;

namespace UnityEngine.Rendering.Universal;

[Token(Token = "0x200015F")]
internal class RTHandleResourcePool
{
	[Token(Token = "0x4000806")]
	[FieldOffset(Offset = "0x10")]
	protected Dictionary<int, SortedList<int, (RTHandle resource, int frameIndex)>> m_ResourcePool;

	[Token(Token = "0x4000807")]
	[FieldOffset(Offset = "0x18")]
	protected List<int> m_RemoveList;

	[Token(Token = "0x4000808")]
	[FieldOffset(Offset = "0x0")]
	protected static int s_CurrentStaleResourceCount;

	[Token(Token = "0x4000809")]
	[FieldOffset(Offset = "0x4")]
	protected static int s_StaleResourceLifetime;

	[Token(Token = "0x400080A")]
	[FieldOffset(Offset = "0x8")]
	protected static int s_StaleResourceMaxCapacity;

	[Token(Token = "0x170001DC")]
	internal int staleResourceCapacity
	{
		[Token(Token = "0x60007D8")]
		[Address(RVA = "0x6676190", Offset = "0x6675190", VA = "0x6676190")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60007D9")]
		[Address(RVA = "0x6676200", Offset = "0x6675200", VA = "0x6676200")]
		set
		{
		}
	}

	[Token(Token = "0x60007DA")]
	[Address(RVA = "0x6676720", Offset = "0x6675720", VA = "0x6676720")]
	internal bool AddResourceToPool(in TextureDesc texDesc, RTHandle resource, int currentFrameIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x60007DB")]
	[Address(RVA = "0x6676A60", Offset = "0x6675A60", VA = "0x6676A60")]
	internal bool TryGetResource(in TextureDesc texDesc, out RTHandle resource, bool usepool = true)
	{
		return default(bool);
	}

	[Token(Token = "0x60007DC")]
	[Address(RVA = "0x66762A0", Offset = "0x66752A0", VA = "0x66762A0")]
	internal void Cleanup()
	{
	}

	[Token(Token = "0x60007DD")]
	[Address(RVA = "0x6676CC0", Offset = "0x6675CC0", VA = "0x6676CC0")]
	protected static bool ShouldReleaseResource(int lastUsedFrameIndex, int currentFrameIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x60007DE")]
	[Address(RVA = "0x6676D20", Offset = "0x6675D20", VA = "0x6676D20")]
	internal void PurgeUnusedResources(int currentFrameIndex)
	{
	}

	[Token(Token = "0x60007DF")]
	[Address(RVA = "0x6677320", Offset = "0x6676320", VA = "0x6677320")]
	internal void LogDebugInfo()
	{
	}

	[Token(Token = "0x60007E0")]
	[Address(RVA = "0x66769C0", Offset = "0x66759C0", VA = "0x66769C0")]
	internal int GetHashCodeWithNameHash(in TextureDesc texDesc)
	{
		return default(int);
	}

	[Token(Token = "0x60007E1")]
	[Address(RVA = "0x66779E0", Offset = "0x66769E0", VA = "0x66779E0")]
	internal static TextureDesc CreateTextureDesc(RenderTextureDescriptor desc, TextureSizeMode textureSizeMode = TextureSizeMode.Explicit, int anisoLevel = 1, float mipMapBias = 0f, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Clamp, string name = "")
	{
		return default(TextureDesc);
	}

	[Token(Token = "0x60007E2")]
	[Address(RVA = "0x6677BC0", Offset = "0x6676BC0", VA = "0x6677BC0")]
	public RTHandleResourcePool()
	{
	}
}
