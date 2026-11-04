// ==================== AoTTG2 cross-reference ====================
// Type: Utility.BaseCSVContainer
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/BaseCSVContainer.c
// Prior real C# source (older reference): Assets/Scripts/Utility/CSV/BaseCSVContainer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Utility;

[Token(Token = "0x20008A4")]
public class BaseCSVContainer : BaseCSVObject
{
	[Token(Token = "0x17000F09")]
	public override char Delimiter
	{
		[Token(Token = "0x600529D")]
		[Address(RVA = "0x2329C60", Offset = "0x2328260", VA = "0x182329C60", Slot = "4")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x17000F0A")]
	protected virtual bool UseNewlines
	{
		[Token(Token = "0x600529E")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "18")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600529F")]
	[Address(RVA = "0x2329BB0", Offset = "0x23281B0", VA = "0x182329BB0", Slot = "8")]
	public override string Serialize()
	{
		return null;
	}

	[Token(Token = "0x60052A0")]
	[Address(RVA = "0x2329AE0", Offset = "0x23280E0", VA = "0x182329AE0", Slot = "19")]
	public virtual string InsertNewlines(string str)
	{
		return null;
	}

	[Token(Token = "0x60052A1")]
	[Address(RVA = "0x2329C10", Offset = "0x2328210", VA = "0x182329C10")]
	public BaseCSVContainer()
	{
	}
}
