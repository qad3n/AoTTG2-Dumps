// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Cache.RequestCachePolicy
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.Cache;

[Token(Token = "0x20001E6")]
public class RequestCachePolicy
{
	[Token(Token = "0x40009ED")]
	[FieldOffset(Offset = "0x10")]
	private RequestCacheLevel m_Level;

	[Token(Token = "0x170002C8")]
	public RequestCacheLevel Level
	{
		[Token(Token = "0x6000BC3")]
		[Address(RVA = "0x49A4EF0", Offset = "0x49A4EF0", VA = "0x49A4EF0")]
		get
		{
			return default(RequestCacheLevel);
		}
	}

	[Token(Token = "0x6000BC2")]
	[Address(RVA = "0x49A4E80", Offset = "0x49A4E80", VA = "0x49A4E80")]
	public RequestCachePolicy(RequestCacheLevel level)
	{
	}

	[Token(Token = "0x6000BC4")]
	[Address(RVA = "0x49A4F00", Offset = "0x49A4F00", VA = "0x49A4F00", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
