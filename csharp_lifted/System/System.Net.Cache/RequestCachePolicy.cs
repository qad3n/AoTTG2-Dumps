// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Cache.RequestCachePolicy
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.Cache;

[Token(Token = "0x200032F")]
public class RequestCachePolicy
{
	[Token(Token = "0x4000D34")]
	[FieldOffset(Offset = "0x10")]
	private RequestCacheLevel m_Level;

	[Token(Token = "0x170004EF")]
	public RequestCacheLevel Level
	{
		[Token(Token = "0x60015C6")]
		[Address(RVA = "0x61A5250", Offset = "0x61A4250", VA = "0x61A5250")]
		get
		{
			return default(RequestCacheLevel);
		}
	}

	[Token(Token = "0x60015C5")]
	[Address(RVA = "0x61A51E0", Offset = "0x61A41E0", VA = "0x61A51E0")]
	public RequestCachePolicy(RequestCacheLevel level)
	{
	}

	[Token(Token = "0x60015C7")]
	[Address(RVA = "0x61A5260", Offset = "0x61A4260", VA = "0x61A5260", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
