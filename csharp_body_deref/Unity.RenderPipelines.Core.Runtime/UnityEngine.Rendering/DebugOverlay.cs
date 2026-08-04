// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.DebugOverlay
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4BA6140", Offset = "0x4BA6140", VA = "0x4BA6140")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000741")]
		[Address(RVA = "0x4BA6150", Offset = "0x4BA6150", VA = "0x4BA6150")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700008C")]
	public int y
	{
		[Token(Token = "0x6000742")]
		[Address(RVA = "0x4BA6160", Offset = "0x4BA6160", VA = "0x4BA6160")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000743")]
		[Address(RVA = "0x4BA6170", Offset = "0x4BA6170", VA = "0x4BA6170")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700008D")]
	public int overlaySize
	{
		[Token(Token = "0x6000744")]
		[Address(RVA = "0x4BA6180", Offset = "0x4BA6180", VA = "0x4BA6180")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000745")]
		[Address(RVA = "0x4BA6190", Offset = "0x4BA6190", VA = "0x4BA6190")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000746")]
	[Address(RVA = "0x4BA61A0", Offset = "0x4BA61A0", VA = "0x4BA61A0")]
	public void StartOverlay(int initialX, int initialY, int overlaySize, int screenWidth)
	{
	}

	[Token(Token = "0x6000747")]
	[Address(RVA = "0x4BA61C0", Offset = "0x4BA61C0", VA = "0x4BA61C0")]
	public Rect Next(float aspect = 1f)
	{
		return default(Rect);
	}

	[Token(Token = "0x6000748")]
	[Address(RVA = "0x4BA6210", Offset = "0x4BA6210", VA = "0x4BA6210")]
	public void SetViewport(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000749")]
	[Address(RVA = "0x4BA6240", Offset = "0x4BA6240", VA = "0x4BA6240")]
	public DebugOverlay()
	{
	}
}
