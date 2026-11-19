// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Networking.DownloadedTextureParams
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine.Networking;

[Token(Token = "0x2000003")]
public struct DownloadedTextureParams
{
	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x0")]
	public DownloadedTextureFlags flags;

	[Token(Token = "0x4000007")]
	[FieldOffset(Offset = "0x4")]
	public int mipmapCount;

	[Token(Token = "0x17000001")]
	public static DownloadedTextureParams Default
	{
		[Token(Token = "0x6000001")]
		[Address(RVA = "0x6D1F7B0", Offset = "0x6D1E7B0", VA = "0x6D1F7B0")]
		get
		{
			return default(DownloadedTextureParams);
		}
	}

	[Token(Token = "0x17000002")]
	public bool readable
	{
		[Token(Token = "0x6000002")]
		[Address(RVA = "0x6D1F7C0", Offset = "0x6D1E7C0", VA = "0x6D1F7C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000003")]
	public bool mipmapChain
	{
		[Token(Token = "0x6000003")]
		[Address(RVA = "0x6D1F7F0", Offset = "0x6D1E7F0", VA = "0x6D1F7F0")]
		set
		{
		}
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x6D1F7D0", Offset = "0x6D1E7D0", VA = "0x6D1F7D0")]
	private void SetFlags(DownloadedTextureFlags flgs, bool add)
	{
	}
}
