using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200013A")]
internal class CursorManager : ICursorManager
{
	[Token(Token = "0x1700017D")]
	public bool isCursorOverriden
	{
		[Token(Token = "0x60008BD")]
		[Address(RVA = "0x4CEF0A0", Offset = "0x4CEF0A0", VA = "0x4CEF0A0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60008BE")]
		[Address(RVA = "0x4CEF0B0", Offset = "0x4CEF0B0", VA = "0x4CEF0B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60008BF")]
	[Address(RVA = "0x4CEF0C0", Offset = "0x4CEF0C0", VA = "0x4CEF0C0", Slot = "4")]
	public void SetCursor(Cursor cursor)
	{
	}

	[Token(Token = "0x60008C0")]
	[Address(RVA = "0x4CEF1D0", Offset = "0x4CEF1D0", VA = "0x4CEF1D0", Slot = "5")]
	public void ResetCursor()
	{
	}

	[Token(Token = "0x60008C1")]
	[Address(RVA = "0x4CEF220", Offset = "0x4CEF220", VA = "0x4CEF220")]
	public CursorManager()
	{
	}
}
