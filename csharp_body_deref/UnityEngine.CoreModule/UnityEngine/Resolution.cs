using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x20000B5")]
[UnityEngine.Scripting.RequiredByNativeCode]
public struct Resolution
{
	[Token(Token = "0x40001DD")]
	[FieldOffset(Offset = "0x0")]
	private int m_Width;

	[Token(Token = "0x40001DE")]
	[FieldOffset(Offset = "0x4")]
	private int m_Height;

	[Token(Token = "0x40001DF")]
	[FieldOffset(Offset = "0x8")]
	private RefreshRate m_RefreshRate;

	[Token(Token = "0x170000AB")]
	public int width
	{
		[Token(Token = "0x600037F")]
		[Address(RVA = "0x4A9CB20", Offset = "0x4A9CB20", VA = "0x4A9CB20")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000380")]
		[Address(RVA = "0x4A9CB30", Offset = "0x4A9CB30", VA = "0x4A9CB30")]
		set
		{
		}
	}

	[Token(Token = "0x170000AC")]
	public int height
	{
		[Token(Token = "0x6000381")]
		[Address(RVA = "0x4A9CB40", Offset = "0x4A9CB40", VA = "0x4A9CB40")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000382")]
		[Address(RVA = "0x4A9CB50", Offset = "0x4A9CB50", VA = "0x4A9CB50")]
		set
		{
		}
	}

	[Token(Token = "0x6000383")]
	[Address(RVA = "0x4A9CB60", Offset = "0x4A9CB60", VA = "0x4A9CB60", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
