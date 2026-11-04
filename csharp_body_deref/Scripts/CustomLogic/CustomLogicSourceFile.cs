// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicSourceFile
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicSourceFile.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20005E6")]
public class CustomLogicSourceFile
{
	[Token(Token = "0x17000A3C")]
	public string Name
	{
		[Token(Token = "0x60039ED")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A3D")]
	public string Content
	{
		[Token(Token = "0x60039EE")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000A3E")]
	public CustomLogicSourceType Type
	{
		[Token(Token = "0x60039EF")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
		[CompilerGenerated]
		get
		{
			return default(CustomLogicSourceType);
		}
	}

	[Token(Token = "0x17000A3F")]
	public int StartLine
	{
		[Token(Token = "0x60039F0")]
		[Address(RVA = "0xBDB280", Offset = "0xBD9880", VA = "0x180BDB280")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60039F1")]
		[Address(RVA = "0xD23EF0", Offset = "0xD224F0", VA = "0x180D23EF0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000A40")]
	public int EndLine
	{
		[Token(Token = "0x60039F2")]
		[Address(RVA = "0x585030", Offset = "0x583630", VA = "0x180585030")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60039F3")]
		[Address(RVA = "0x585090", Offset = "0x583690", VA = "0x180585090")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000A41")]
	public int MapLogicOffset
	{
		[Token(Token = "0x60039F4")]
		[Address(RVA = "0xB3E080", Offset = "0xB3C680", VA = "0x180B3E080")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60039F5")]
		[Address(RVA = "0xB3E0E0", Offset = "0xB3C6E0", VA = "0x180B3E0E0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000A42")]
	public int LineCount
	{
		[Token(Token = "0x60039F8")]
		[Address(RVA = "0x20E8590", Offset = "0x20E6B90", VA = "0x1820E8590")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60039F6")]
	[Address(RVA = "0x20E8530", Offset = "0x20E6B30", VA = "0x1820E8530")]
	public CustomLogicSourceFile(string name, string content, CustomLogicSourceType type)
	{
	}

	[Token(Token = "0x60039F7")]
	[Address(RVA = "0x20E84D0", Offset = "0x20E6AD0", VA = "0x1820E84D0")]
	public CustomLogicSourceFile(string name, string content, CustomLogicSourceType type, int mapLogicOffset)
	{
	}
}
