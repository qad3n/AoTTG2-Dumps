// ==================== AoTTG2 cross-reference ====================
// Type: Map.CustomLogicTransferData
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Map/CustomLogicTransferData.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Map;

[Token(Token = "0x2000385")]
internal class CustomLogicTransferData
{
	[Token(Token = "0x4001227")]
	private const byte MsgStart = 0;

	[Token(Token = "0x4001228")]
	private const byte MsgBody = 1;

	[Token(Token = "0x4001229")]
	private const byte MsgEnd = 2;

	[Token(Token = "0x400122A")]
	private const int ChunkSize = 10000;

	[Token(Token = "0x400122B")]
	[FieldOffset(Offset = "0x10")]
	private List<byte> _compressed;

	[Token(Token = "0x400122C")]
	[FieldOffset(Offset = "0x18")]
	private List<byte[][]> _messages;

	[Token(Token = "0x400122D")]
	[FieldOffset(Offset = "0x20")]
	private readonly OrderedTransferReceiver _receiver;

	[Token(Token = "0x17000266")]
	public IReadOnlyList<byte[][]> Messages
	{
		[Token(Token = "0x6001634")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001635")]
	[Address(RVA = "0x1E875A0", Offset = "0x1E85BA0", VA = "0x181E875A0")]
	public void Prepare(string source, string hash)
	{
	}

	[Token(Token = "0x6001636")]
	[Address(RVA = "0x1E87C60", Offset = "0x1E86260", VA = "0x181E87C60")]
	public bool TryReceive(byte[][] message, int messageIndex, int messageTotal, out string source, out string hash)
	{
		return default(bool);
	}

	[Token(Token = "0x6001637")]
	[Address(RVA = "0x1E87E50", Offset = "0x1E86450", VA = "0x181E87E50")]
	private static bool ValidateMessage(byte[][] message, int messageIndex, int messageTotal)
	{
		return default(bool);
	}

	[Token(Token = "0x6001638")]
	[Address(RVA = "0x1E87BA0", Offset = "0x1E861A0", VA = "0x181E87BA0")]
	public void Reset()
	{
	}

	[Token(Token = "0x6001639")]
	[Address(RVA = "0x1E87B30", Offset = "0x1E86130", VA = "0x181E87B30")]
	private void ResetReceiveState()
	{
	}

	[Token(Token = "0x600163A")]
	[Address(RVA = "0x1E87F40", Offset = "0x1E86540", VA = "0x181E87F40")]
	public CustomLogicTransferData()
	{
	}
}
