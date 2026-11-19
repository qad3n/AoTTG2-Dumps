// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgScreenSectionContext
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgScreenSectionContext.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200034D")]
public readonly struct AottgScreenSectionContext
{
	[Token(Token = "0x4001094")]
	[FieldOffset(Offset = "0x0")]
	private readonly string _group;

	[Token(Token = "0x4001095")]
	[FieldOffset(Offset = "0x8")]
	private readonly int _order;

	[Token(Token = "0x17000240")]
	public string SectionId
	{
		[Token(Token = "0x60014AD")]
		[Address(RVA = "0x5816460", Offset = "0x5815460", VA = "0x5816460")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000241")]
	public string SectionTitle
	{
		[Token(Token = "0x60014AE")]
		[Address(RVA = "0x5816470", Offset = "0x5815470", VA = "0x5816470")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60014AC")]
	[Address(RVA = "0x58163C0", Offset = "0x58153C0", VA = "0x58163C0")]
	public AottgScreenSectionContext(string screenId, string sectionId, string sectionTitle, int order)
	{
	}

	[Token(Token = "0x60014AF")]
	[Address(RVA = "0x5816480", Offset = "0x5815480", VA = "0x5816480")]
	public GisketchMotionDefinition HeaderMotion()
	{
		return null;
	}

	[Token(Token = "0x60014B0")]
	[Address(RVA = "0x58164D0", Offset = "0x58154D0", VA = "0x58164D0")]
	public GisketchMotionDefinition RowMotion(int index)
	{
		return null;
	}
}
