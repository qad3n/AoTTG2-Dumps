using Il2CppDummyDll;
using Utility;

namespace Map;

[Token(Token = "0x2000242")]
public class MapScriptOptions : BaseCSVRow
{
	[Token(Token = "0x4000C9D")]
	[FieldOffset(Offset = "0x10")]
	public string EditorVersion;

	[Token(Token = "0x4000C9E")]
	[FieldOffset(Offset = "0x18")]
	public string Description;

	[Token(Token = "0x4000C9F")]
	[FieldOffset(Offset = "0x20")]
	public bool HasWeather;

	[Token(Token = "0x17000177")]
	protected override bool NamedParams
	{
		[Token(Token = "0x6000D9F")]
		[Address(RVA = "0x3CAFF60", Offset = "0x3CAFF60", VA = "0x3CAFF60", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000178")]
	public override char Delimiter
	{
		[Token(Token = "0x6000DA0")]
		[Address(RVA = "0x3CAFF70", Offset = "0x3CAFF70", VA = "0x3CAFF70", Slot = "4")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x6000DA1")]
	[Address(RVA = "0x3CAFC50", Offset = "0x3CAFC50", VA = "0x3CAFC50")]
	public MapScriptOptions()
	{
	}
}
