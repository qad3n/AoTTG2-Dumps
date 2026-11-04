// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.Universal.RTHandleResourcePool
// Update status: NEW in this game update
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
		[Address(RVA = "0x2C74C20", Offset = "0x2C73220", VA = "0x182C74C20")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60007D9")]
		[Address(RVA = "0x2C74C70", Offset = "0x2C73270", VA = "0x182C74C70")]
		set
		{
		}
	}

	[Token(Token = "0x60007DA")]
	[Address(RVA = "0x2C737F0", Offset = "0x2C71DF0", VA = "0x182C737F0")]
	internal bool AddResourceToPool(in TextureDesc texDesc, RTHandle resource, int currentFrameIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x60007DB")]
	[Address(RVA = "0x2C74940", Offset = "0x2C72F40", VA = "0x182C74940")]
	internal bool TryGetResource(in TextureDesc texDesc, out RTHandle resource, bool usepool = true)
	{
		return default(bool);
	}

	[Token(Token = "0x60007DC")]
	[Address(RVA = "0x2C73A20", Offset = "0x2C72020", VA = "0x182C73A20")]
	internal void Cleanup()
	{
	}

	[Token(Token = "0x60007DD")]
	[Address(RVA = "0x2C748D0", Offset = "0x2C72ED0", VA = "0x182C748D0")]
	protected static bool ShouldReleaseResource(int lastUsedFrameIndex, int currentFrameIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x60007DE")]
	[Address(RVA = "0x2C744B0", Offset = "0x2C72AB0", VA = "0x182C744B0")]
	internal void PurgeUnusedResources(int currentFrameIndex)
	{
	}

	[Token(Token = "0x60007DF")]
	[Address(RVA = "0x2C73ED0", Offset = "0x2C724D0", VA = "0x182C73ED0")]
	internal void LogDebugInfo()
	{
	}

	[Token(Token = "0x60007E0")]
	[Address(RVA = "0x2C73E30", Offset = "0x2C72430", VA = "0x182C73E30")]
	internal int GetHashCodeWithNameHash(in TextureDesc texDesc)
	{
		return default(int);
	}

	[Token(Token = "0x60007E1")]
	[Address(RVA = "0x2C73D00", Offset = "0x2C72300", VA = "0x182C73D00")]
	internal static TextureDesc CreateTextureDesc(RenderTextureDescriptor desc, TextureSizeMode textureSizeMode = TextureSizeMode.Explicit, int anisoLevel = 1, float mipMapBias = 0f, FilterMode filterMode = FilterMode.Point, TextureWrapMode wrapMode = TextureWrapMode.Clamp, string name = "")
	{
		return default(TextureDesc);
	}

	[Token(Token = "0x60007E2")]
	[Address(RVA = "0x2C74B50", Offset = "0x2C73150", VA = "0x182C74B50")]
	public RTHandleResourcePool()
	{
	}
}
