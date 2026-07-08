using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x20000C4")]
public class DebugOverlay
{
	[Token(Token = "0x40002D6")]
	[FieldOffset(Offset = "0x1C")]
	private int m_InitialPositionX;

	[Token(Token = "0x40002D7")]
	[FieldOffset(Offset = "0x20")]
	private int m_ScreenWidth;

	[Token(Token = "0x1700008B")]
	public int x
	{
		[Token(Token = "0x6000740")]
		[Address(RVA = "0x4881050", Offset = "0x4881050", VA = "0x4881050")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000741")]
		[Address(RVA = "0x4881060", Offset = "0x4881060", VA = "0x4881060")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700008C")]
	public int y
	{
		[Token(Token = "0x6000742")]
		[Address(RVA = "0x4881070", Offset = "0x4881070", VA = "0x4881070")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000743")]
		[Address(RVA = "0x4881080", Offset = "0x4881080", VA = "0x4881080")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700008D")]
	public int overlaySize
	{
		[Token(Token = "0x6000744")]
		[Address(RVA = "0x4881090", Offset = "0x4881090", VA = "0x4881090")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000745")]
		[Address(RVA = "0x48810A0", Offset = "0x48810A0", VA = "0x48810A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000746")]
	[Address(RVA = "0x48810B0", Offset = "0x48810B0", VA = "0x48810B0")]
	public void StartOverlay(int initialX, int initialY, int overlaySize, int screenWidth)
	{
	}

	[Token(Token = "0x6000747")]
	[Address(RVA = "0x48810D0", Offset = "0x48810D0", VA = "0x48810D0")]
	public Rect Next(float aspect = 1f)
	{
		return default(Rect);
	}

	[Token(Token = "0x6000748")]
	[Address(RVA = "0x4881120", Offset = "0x4881120", VA = "0x4881120")]
	public void SetViewport(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000749")]
	[Address(RVA = "0x4881150", Offset = "0x4881150", VA = "0x4881150")]
	public DebugOverlay()
	{
	}
}
