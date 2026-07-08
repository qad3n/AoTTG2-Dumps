using System.Runtime.CompilerServices;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001AD")]
public readonly struct AottgScreenSectionContext
{
	[Token(Token = "0x4000968")]
	[FieldOffset(Offset = "0x0")]
	private readonly string _group;

	[Token(Token = "0x4000969")]
	[FieldOffset(Offset = "0x8")]
	private readonly int _order;

	[Token(Token = "0x17000119")]
	public string SectionId
	{
		[Token(Token = "0x60009D1")]
		[Address(RVA = "0x4103BC0", Offset = "0x4103BC0", VA = "0x4103BC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700011A")]
	public string SectionTitle
	{
		[Token(Token = "0x60009D2")]
		[Address(RVA = "0x4103BD0", Offset = "0x4103BD0", VA = "0x4103BD0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60009D0")]
	[Address(RVA = "0x4103B20", Offset = "0x4103B20", VA = "0x4103B20")]
	public AottgScreenSectionContext(string screenId, string sectionId, string sectionTitle, int order)
	{
	}

	[Token(Token = "0x60009D3")]
	[Address(RVA = "0x4103BE0", Offset = "0x4103BE0", VA = "0x4103BE0")]
	public GisketchMotionDefinition HeaderMotion()
	{
		return null;
	}

	[Token(Token = "0x60009D4")]
	[Address(RVA = "0x40F86F0", Offset = "0x40F86F0", VA = "0x40F86F0")]
	public GisketchMotionDefinition RowMotion(int index)
	{
		return null;
	}
}
