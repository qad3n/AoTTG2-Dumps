// ==================== AoTTG2 cross-reference ====================
// Type: Map.CustomLogicTransferData
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/CustomLogicTransferData.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Map;

[Token(Token = "0x20003E0")]
internal class CustomLogicTransferData
{
	[Token(Token = "0x40013B8")]
	private const byte MsgStart = 0;

	[Token(Token = "0x40013B9")]
	private const byte MsgBody = 1;

	[Token(Token = "0x40013BA")]
	private const byte MsgEnd = 2;

	[Token(Token = "0x40013BB")]
	private const int ChunkSize = 10000;

	[Token(Token = "0x40013BC")]
	[FieldOffset(Offset = "0x10")]
	private List<byte> _compressed;

	[Token(Token = "0x40013BD")]
	[FieldOffset(Offset = "0x18")]
	private List<byte[][]> _messages;

	[Token(Token = "0x40013BE")]
	[FieldOffset(Offset = "0x20")]
	private readonly OrderedTransferReceiver _receiver;

	[Token(Token = "0x170002A7")]
	public IReadOnlyList<byte[][]> Messages
	{
		[Token(Token = "0x6001897")]
		[Address(RVA = "0x586C020", Offset = "0x586B020", VA = "0x586C020")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001898")]
	[Address(RVA = "0x5869F90", Offset = "0x5868F90", VA = "0x5869F90")]
	public void Prepare(string source, string hash)
	{
	}

	[Token(Token = "0x6001899")]
	[Address(RVA = "0x586A9A0", Offset = "0x58699A0", VA = "0x586A9A0")]
	public bool TryReceive(byte[][] message, int messageIndex, int messageTotal, out string source, out string hash)
	{
		return default(bool);
	}

	[Token(Token = "0x600189A")]
	[Address(RVA = "0x586C2D0", Offset = "0x586B2D0", VA = "0x586C2D0")]
	private static bool ValidateMessage(byte[][] message, int messageIndex, int messageTotal)
	{
		return default(bool);
	}

	[Token(Token = "0x600189B")]
	[Address(RVA = "0x58696E0", Offset = "0x58686E0", VA = "0x58696E0")]
	public void Reset()
	{
	}

	[Token(Token = "0x600189C")]
	[Address(RVA = "0x586C400", Offset = "0x586B400", VA = "0x586C400")]
	private void ResetReceiveState()
	{
	}

	[Token(Token = "0x600189D")]
	[Address(RVA = "0x586AC80", Offset = "0x5869C80", VA = "0x586AC80")]
	public CustomLogicTransferData()
	{
	}
}
