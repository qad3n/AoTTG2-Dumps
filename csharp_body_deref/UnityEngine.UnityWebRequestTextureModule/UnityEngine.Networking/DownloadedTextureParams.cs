// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Networking.DownloadedTextureParams
// Update status: NEW in this game update
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
		[Address(RVA = "0x330F900", Offset = "0x330DF00", VA = "0x18330F900")]
		get
		{
			return default(DownloadedTextureParams);
		}
	}

	[Token(Token = "0x17000002")]
	public bool readable
	{
		[Token(Token = "0x6000002")]
		[Address(RVA = "0x330F920", Offset = "0x330DF20", VA = "0x18330F920")]
		set
		{
		}
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x28CBD50", Offset = "0x28CA350", VA = "0x1828CBD50")]
	private void SetFlags(DownloadedTextureFlags flgs, bool add)
	{
	}
}
