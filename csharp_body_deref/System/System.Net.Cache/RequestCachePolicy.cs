// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.Cache.RequestCachePolicy
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net.Cache;

[Token(Token = "0x2000373")]
public class RequestCachePolicy
{
	[Token(Token = "0x4000E1C")]
	[FieldOffset(Offset = "0x10")]
	private RequestCacheLevel m_Level;

	[Token(Token = "0x1700051C")]
	public RequestCacheLevel Level
	{
		[Token(Token = "0x600177F")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		get
		{
			return default(RequestCacheLevel);
		}
	}

	[Token(Token = "0x600177E")]
	[Address(RVA = "0x27F69A0", Offset = "0x27F4FA0", VA = "0x1827F69A0")]
	public RequestCachePolicy(RequestCacheLevel level)
	{
	}

	[Token(Token = "0x6001780")]
	[Address(RVA = "0x27F6920", Offset = "0x27F4F20", VA = "0x1827F6920", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
