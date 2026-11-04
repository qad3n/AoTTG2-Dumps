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

[Token(Token = "0x20002EF")]
public readonly struct AottgScreenSectionContext
{
	[Token(Token = "0x4000EFF")]
	[FieldOffset(Offset = "0x0")]
	private readonly string _group;

	[Token(Token = "0x4000F00")]
	[FieldOffset(Offset = "0x8")]
	private readonly int _order;

	[Token(Token = "0x17000203")]
	public string SectionId
	{
		[Token(Token = "0x6001254")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000204")]
	public string SectionTitle
	{
		[Token(Token = "0x6001255")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001253")]
	[Address(RVA = "0x1E2D5A0", Offset = "0x1E2BBA0", VA = "0x181E2D5A0")]
	public AottgScreenSectionContext(string screenId, string sectionId, string sectionTitle, int order)
	{
	}

	[Token(Token = "0x6001256")]
	[Address(RVA = "0x1E2D4B0", Offset = "0x1E2BAB0", VA = "0x181E2D4B0")]
	public GisketchMotionDefinition HeaderMotion()
	{
		return null;
	}

	[Token(Token = "0x6001257")]
	[Address(RVA = "0x1E2D520", Offset = "0x1E2BB20", VA = "0x181E2D520")]
	public GisketchMotionDefinition RowMotion(int index)
	{
		return null;
	}
}
