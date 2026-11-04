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
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600067E")]
		[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700006A")]
	public int y
	{
		[Token(Token = "0x600067F")]
		[Address(RVA = "0x8E79A0", Offset = "0x8E5FA0", VA = "0x1808E79A0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000680")]
		[Address(RVA = "0xD23EE0", Offset = "0xD224E0", VA = "0x180D23EE0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700006B")]
	public int overlaySize
	{
		[Token(Token = "0x6000681")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000682")]
		[Address(RVA = "0x111C9C0", Offset = "0x111AFC0", VA = "0x18111C9C0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000683")]
	[Address(RVA = "0x2ADDA80", Offset = "0x2ADC080", VA = "0x182ADDA80")]
	public void StartOverlay(int initialX, int initialY, int overlaySize, int screenWidth)
	{
	}

	[Token(Token = "0x6000684")]
	[Address(RVA = "0x2ADD9A0", Offset = "0x2ADBFA0", VA = "0x182ADD9A0")]
	public Rect Next(float aspect = 1f)
	{
		return default(Rect);
	}

	[Token(Token = "0x6000685")]
	[Address(RVA = "0x2ADDA20", Offset = "0x2ADC020", VA = "0x182ADDA20")]
	public void SetViewport(CommandBuffer cmd)
	{
	}

	[Token(Token = "0x6000686")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public DebugOverlay()
	{
	}
}
