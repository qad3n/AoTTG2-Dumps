using System.Collections.Generic;
using Il2CppDummyDll;
using Settings;

namespace Map;

[Token(Token = "0x200023D")]
public class MapScript
{
	[Token(Token = "0x4000C7E")]
	[FieldOffset(Offset = "0x10")]
	protected string HeaderPrefix;

	[Token(Token = "0x4000C7F")]
	[FieldOffset(Offset = "0x18")]
	protected char Delimiter;

	[Token(Token = "0x4000C80")]
	[FieldOffset(Offset = "0x20")]
	public MapScriptOptions Options;

	[Token(Token = "0x4000C81")]
	[FieldOffset(Offset = "0x28")]
	public MapScriptCustomAssets CustomAssets;

	[Token(Token = "0x4000C82")]
	[FieldOffset(Offset = "0x30")]
	public MapScriptObjects Objects;

	[Token(Token = "0x4000C83")]
	[FieldOffset(Offset = "0x38")]
	internal WeatherSet Weather;

	[Token(Token = "0x4000C84")]
	[FieldOffset(Offset = "0x40")]
	public string Logic;

	[Token(Token = "0x4000C85")]
	[FieldOffset(Offset = "0x48")]
	public string MapHash;

	[Token(Token = "0x4000C86")]
	[FieldOffset(Offset = "0x50")]
	public int LogicStart;

	[Token(Token = "0x6000D8D")]
	[Address(RVA = "0x3CAE000", Offset = "0x3CAE000", VA = "0x3CAE000")]
	public static MapScript CreateDefault()
	{
		return null;
	}

	[Token(Token = "0x6000D8E")]
	[Address(RVA = "0x3CAEE50", Offset = "0x3CAEE50", VA = "0x3CAEE50", Slot = "4")]
	public virtual string Serialize()
	{
		return null;
	}

	[Token(Token = "0x6000D8F")]
	[Address(RVA = "0x3CAF3C0", Offset = "0x3CAF3C0", VA = "0x3CAF3C0")]
	private string CreateHeader(string name)
	{
		return null;
	}

	[Token(Token = "0x6000D90")]
	[Address(RVA = "0x3CAF3D0", Offset = "0x3CAF3D0", VA = "0x3CAF3D0", Slot = "5")]
	public virtual void Deserialize(string csv)
	{
	}

	[Token(Token = "0x6000D91")]
	[Address(RVA = "0x3CAF820", Offset = "0x3CAF820", VA = "0x3CAF820")]
	private void DeserializeSection(string currentSection, List<string> currentSectionItems)
	{
	}

	[Token(Token = "0x6000D92")]
	[Address(RVA = "0x3C9F140", Offset = "0x3C9F140", VA = "0x3C9F140")]
	public MapScript()
	{
	}
}
