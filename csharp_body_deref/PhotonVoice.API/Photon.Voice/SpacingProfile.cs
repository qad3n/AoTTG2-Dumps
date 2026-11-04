// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.SpacingProfile
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/Util.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000054")]
internal class SpacingProfile
{
	[Token(Token = "0x400014A")]
	[FieldOffset(Offset = "0x10")]
	private short[] buf;

	[Token(Token = "0x400014B")]
	[FieldOffset(Offset = "0x18")]
	private bool[] info;

	[Token(Token = "0x400014C")]
	[FieldOffset(Offset = "0x20")]
	private int capacity;

	[Token(Token = "0x400014D")]
	[FieldOffset(Offset = "0x24")]
	private int ptr;

	[Token(Token = "0x400014E")]
	[FieldOffset(Offset = "0x28")]
	private Stopwatch watch;

	[Token(Token = "0x400014F")]
	[FieldOffset(Offset = "0x30")]
	private long watchLast;

	[Token(Token = "0x4000150")]
	[FieldOffset(Offset = "0x38")]
	private bool flushed;

	[Token(Token = "0x17000069")]
	public string Dump
	{
		[Token(Token = "0x60001BD")]
		[Address(RVA = "0x1D75C50", Offset = "0x1D74250", VA = "0x181D75C50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700006A")]
	public int Max
	{
		[Token(Token = "0x60001BE")]
		[Address(RVA = "0x1D75EB0", Offset = "0x1D744B0", VA = "0x181D75EB0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x1D75C20", Offset = "0x1D74220", VA = "0x181D75C20")]
	public SpacingProfile(int capacity)
	{
	}

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x1D759F0", Offset = "0x1D73FF0", VA = "0x181D759F0")]
	public void Start()
	{
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x1D75B50", Offset = "0x1D74150", VA = "0x181D75B50")]
	public void Update(bool lost, bool flush)
	{
	}
}
