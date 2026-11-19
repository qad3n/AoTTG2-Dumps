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

[Token(Token = "0x2000094")]
public class DebugOverlay
{
	[Token(Token = "0x400020E")]
	[FieldOffset(Offset = "0x1C")]
	private int m_InitialPositionX;

	[Token(Token = "0x400020F")]
	[FieldOffset(Offset = "0x20")]
	private int m_ScreenWidth;

	[Token(Token = "0x17000069")]
	public int x
	{
		[Token(Token = "0x600067D")]
		[Address(RVA = "0x64D0BB0", Offset = "0x64CFBB0", VA = "0x64D0BB0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600067E")]
		[Address(RVA = "0x64D0BC0", Offset = "0x64CFBC0", VA = "0x64D0BC0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700006A")]
	public int y
	{
		[Token(Token = "0x600067F")]
		[Address(RVA = "0x64D0BD0", Offset = "0x64CFBD0", VA = "0x64D0BD0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000680")]
		[Address(RVA = "0x64D0BE0", Offset = "0x64CFBE0", VA = "0x64D0BE0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700006B")]
	public int overlaySize
	{
		[Token(Token = "0x6000681")]
		[Address(RVA = "0x64D0BF0", Offset = "0x64CFBF0", VA = "0x64D0BF0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000682")]
		[Address(RVA = "0x64D0C00", Offset = "0x64CFC00", VA = "0x64D0C00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000683")]
	[Address(RVA = "0x64D0C10", Offset = "0x64CFC10", VA = "0x64D0C10")]
	public void StartOverlay(int initialX, int initialY, int overlaySize, int screenWidth)
	{
	}

	[Token(Token = "0x6000684")]
	[Address(RVA = "0x64D0C30", Offset = "0x64CFC30", VA = "0x64D0C30")]
	public Rect Next(float aspect = 1f)
	{
		return default(Rect);
	}

	[Token(Token = "0x6000685")]
	[Address(RVA = "0x64D0C80", Offset = "0x64CFC80", VA = "0x64D0C80")]
	public void SetViewport(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000686")]
	[Address(RVA = "0x64D0CB0", Offset = "0x64CFCB0", VA = "0x64D0CB0")]
	public DebugOverlay()
	{
	}
}
