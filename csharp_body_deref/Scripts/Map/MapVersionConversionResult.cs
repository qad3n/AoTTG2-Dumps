// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapVersionConversionResult
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapVersionConversionResult.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Map;

[Token(Token = "0x200041D")]
public sealed class MapVersionConversionResult
{
	[Token(Token = "0x170002BC")]
	public string OriginalVersion
	{
		[Token(Token = "0x6001A1F")]
		[Address(RVA = "0x58A4DA0", Offset = "0x58A3DA0", VA = "0x58A4DA0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A20")]
		[Address(RVA = "0x58A4DB0", Offset = "0x58A3DB0", VA = "0x58A4DB0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170002BD")]
	public string FinalVersion
	{
		[Token(Token = "0x6001A21")]
		[Address(RVA = "0x58A4DC0", Offset = "0x58A3DC0", VA = "0x58A4DC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A22")]
		[Address(RVA = "0x58A4DD0", Offset = "0x58A3DD0", VA = "0x58A4DD0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170002BE")]
	public IReadOnlyList<IMapVersionConverter> Converters
	{
		[Token(Token = "0x6001A23")]
		[Address(RVA = "0x58A4DE0", Offset = "0x58A3DE0", VA = "0x58A4DE0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001A24")]
		[Address(RVA = "0x58A4DF0", Offset = "0x58A3DF0", VA = "0x58A4DF0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170002BF")]
	public int VersionCount
	{
		[Token(Token = "0x6001A25")]
		[Address(RVA = "0x58A4E00", Offset = "0x58A3E00", VA = "0x58A4E00")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170002C0")]
	public bool IsReversible
	{
		[Token(Token = "0x6001A26")]
		[Address(RVA = "0x58A4E90", Offset = "0x58A3E90", VA = "0x58A4E90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001A27")]
	[Address(RVA = "0x58A4FA0", Offset = "0x58A3FA0", VA = "0x58A4FA0")]
	public MapVersionConversionResult()
	{
	}
}
