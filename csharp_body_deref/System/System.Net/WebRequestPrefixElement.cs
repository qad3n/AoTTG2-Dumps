// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.WebRequestPrefixElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000146")]
internal class WebRequestPrefixElement
{
	[Token(Token = "0x4000691")]
	[FieldOffset(Offset = "0x10")]
	public string Prefix;

	[Token(Token = "0x4000692")]
	[FieldOffset(Offset = "0x18")]
	internal IWebRequestCreate creator;

	[Token(Token = "0x4000693")]
	[FieldOffset(Offset = "0x20")]
	internal Type creatorType;

	[Token(Token = "0x170001BA")]
	public IWebRequestCreate Creator
	{
		[Token(Token = "0x60007DD")]
		[Address(RVA = "0x495EA20", Offset = "0x495EA20", VA = "0x495EA20")]
		get
		{
			return null;
		}
		[Token(Token = "0x60007DE")]
		[Address(RVA = "0x495EC40", Offset = "0x495EC40", VA = "0x495EC40")]
		set
		{
		}
	}

	[Token(Token = "0x60007DF")]
	[Address(RVA = "0x495EC50", Offset = "0x495EC50", VA = "0x495EC50")]
	public WebRequestPrefixElement(string P, IWebRequestCreate C)
	{
	}
}
