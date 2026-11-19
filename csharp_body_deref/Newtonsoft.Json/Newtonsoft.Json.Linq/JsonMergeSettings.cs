// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Linq.JsonMergeSettings
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Linq;

[Token(Token = "0x200017E")]
public class JsonMergeSettings
{
	[Token(Token = "0x40006FF")]
	[FieldOffset(Offset = "0x10")]
	private MergeArrayHandling _mergeArrayHandling;

	[Token(Token = "0x4000700")]
	[FieldOffset(Offset = "0x14")]
	private MergeNullValueHandling _mergeNullValueHandling;

	[Token(Token = "0x4000701")]
	[FieldOffset(Offset = "0x18")]
	private StringComparison _propertyNameComparison;

	[Token(Token = "0x1700020E")]
	public MergeArrayHandling MergeArrayHandling
	{
		[Token(Token = "0x6000C9E")]
		[Address(RVA = "0x5610EF0", Offset = "0x560FEF0", VA = "0x5610EF0")]
		get
		{
			return default(MergeArrayHandling);
		}
		[Token(Token = "0x6000C9F")]
		[Address(RVA = "0x5610F00", Offset = "0x560FF00", VA = "0x5610F00")]
		set
		{
		}
	}

	[Token(Token = "0x1700020F")]
	public MergeNullValueHandling MergeNullValueHandling
	{
		[Token(Token = "0x6000CA0")]
		[Address(RVA = "0x5610F60", Offset = "0x560FF60", VA = "0x5610F60")]
		get
		{
			return default(MergeNullValueHandling);
		}
		[Token(Token = "0x6000CA1")]
		[Address(RVA = "0x5610F70", Offset = "0x560FF70", VA = "0x5610F70")]
		set
		{
		}
	}

	[Token(Token = "0x17000210")]
	public StringComparison PropertyNameComparison
	{
		[Token(Token = "0x6000CA2")]
		[Address(RVA = "0x5610FD0", Offset = "0x560FFD0", VA = "0x5610FD0")]
		get
		{
			return default(StringComparison);
		}
		[Token(Token = "0x6000CA3")]
		[Address(RVA = "0x5610FE0", Offset = "0x560FFE0", VA = "0x5610FE0")]
		set
		{
		}
	}

	[Token(Token = "0x6000C9D")]
	[Address(RVA = "0x5610ED0", Offset = "0x560FED0", VA = "0x5610ED0")]
	public JsonMergeSettings()
	{
	}
}
