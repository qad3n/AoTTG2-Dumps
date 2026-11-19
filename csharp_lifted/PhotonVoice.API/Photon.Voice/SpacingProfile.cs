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
		[Address(RVA = "0x5706700", Offset = "0x5705700", VA = "0x5706700")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700006A")]
	public int Max
	{
		[Token(Token = "0x60001BE")]
		[Address(RVA = "0x5706950", Offset = "0x5705950", VA = "0x5706950")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x5706570", Offset = "0x5705570", VA = "0x5706570")]
	public SpacingProfile(int capacity)
	{
	}

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x5706590", Offset = "0x5705590", VA = "0x5706590")]
	public void Start()
	{
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x5706660", Offset = "0x5705660", VA = "0x5706660")]
	public void Update(bool lost, bool flush)
	{
	}
}
