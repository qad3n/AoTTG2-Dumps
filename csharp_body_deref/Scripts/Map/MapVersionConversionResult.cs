// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapVersionConversionResult
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Map/MapVersionConversionResult.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Map;

[Token(Token = "0x20003BE")]
public sealed class MapVersionConversionResult
{
	[Token(Token = "0x1700027B")]
	public string OriginalVersion
	{
		[Token(Token = "0x60017A8")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60017A9")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x1700027C")]
	public string FinalVersion
	{
		[Token(Token = "0x60017AA")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60017AB")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x1700027D")]
	public IReadOnlyList<IMapVersionConverter> Converters
	{
		[Token(Token = "0x60017AC")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60017AD")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x1700027E")]
	public int VersionCount
	{
		[Token(Token = "0x60017AE")]
		[Address(RVA = "0x1EDD0B0", Offset = "0x1EDB6B0", VA = "0x181EDD0B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700027F")]
	public bool IsReversible
	{
		[Token(Token = "0x60017AF")]
		[Address(RVA = "0x1EDCF90", Offset = "0x1EDB590", VA = "0x181EDCF90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60017B0")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public MapVersionConversionResult()
	{
	}
}
