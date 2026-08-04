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

[Token(Token = "0x20001E0")]
public readonly struct AottgScreenSectionContext
{
	[Token(Token = "0x4000A2E")]
	[FieldOffset(Offset = "0x0")]
	private readonly string _group;

	[Token(Token = "0x4000A2F")]
	[FieldOffset(Offset = "0x8")]
	private readonly int _order;

	[Token(Token = "0x1700016F")]
	public string SectionId
	{
		[Token(Token = "0x6000B4E")]
		[Address(RVA = "0x44356B0", Offset = "0x44356B0", VA = "0x44356B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000170")]
	public string SectionTitle
	{
		[Token(Token = "0x6000B4F")]
		[Address(RVA = "0x44356C0", Offset = "0x44356C0", VA = "0x44356C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B4D")]
	[Address(RVA = "0x4435610", Offset = "0x4435610", VA = "0x4435610")]
	public AottgScreenSectionContext(string screenId, string sectionId, string sectionTitle, int order)
	{
	}

	[Token(Token = "0x6000B50")]
	[Address(RVA = "0x44356D0", Offset = "0x44356D0", VA = "0x44356D0")]
	public GisketchMotionDefinition HeaderMotion()
	{
		return null;
	}

	[Token(Token = "0x6000B51")]
	[Address(RVA = "0x4435720", Offset = "0x4435720", VA = "0x4435720")]
	public GisketchMotionDefinition RowMotion(int index)
	{
		return null;
	}
}
